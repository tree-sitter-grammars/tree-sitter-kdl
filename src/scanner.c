#include "tree_sitter/parser.h"

#include <stdlib.h>

enum {
    _EOF,
    MULTI_LINE_COMMENT,
    MULTILINE_ESCAPED_START,
    MULTILINE_RAW_START,
    MULTILINE_ESCAPE,
    MULTILINE_ESCAPED_WHITESPACE,
    MULTILINE_FRAGMENT,
    MULTILINE_END,
    _RAW_STRING,
};

typedef struct {
    bool active;
    bool raw;
    bool at_line_start;
    uint32_t hash_count;
} Scanner;

void *tree_sitter_kdl_external_scanner_create() { return calloc(1, sizeof(Scanner)); }

void tree_sitter_kdl_external_scanner_destroy(void *payload) { free(payload); }

unsigned tree_sitter_kdl_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = payload;
    buffer[0] = scanner->active;
    buffer[1] = scanner->raw;
    buffer[2] = scanner->at_line_start;
    buffer[3] = (char)(scanner->hash_count & 0xff);
    buffer[4] = (char)((scanner->hash_count >> 8) & 0xff);
    buffer[5] = (char)((scanner->hash_count >> 16) & 0xff);
    buffer[6] = (char)((scanner->hash_count >> 24) & 0xff);
    return 7;
}

void tree_sitter_kdl_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = payload;
    *scanner = (Scanner){0};
    if (length != 7) return;

    scanner->active = buffer[0];
    scanner->raw = buffer[1];
    scanner->at_line_start = buffer[2];
    scanner->hash_count = (uint32_t)(unsigned char)buffer[3] |
                          ((uint32_t)(unsigned char)buffer[4] << 8) |
                          ((uint32_t)(unsigned char)buffer[5] << 16) |
                          ((uint32_t)(unsigned char)buffer[6] << 24);
}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }


// According to the KDL v2 spec: https://kdl.dev/spec/#name-whitespace
static bool is_unicode_space(int32_t c) {
    switch (c) {
        case '\t':
        case ' ':
        case 0x00A0:
        case 0x1680:
        case 0x2000:
        case 0x2001:
        case 0x2002:
        case 0x2003:
        case 0x2004:
        case 0x2005:
        case 0x2006:
        case 0x2007:
        case 0x2008:
        case 0x2009:
        case 0x200A:
        case 0x202F:
        case 0x205F:
        case 0x3000:
            return true;
        default:
            return false;
    }
}

static bool is_newline_start(int32_t c) {
    return c == '\r' || c == '\n' || c == 0x0085 || c == 0x000B || c == 0x000C || c == 0x2028 || c == 0x2029;
}

static void advance_newline(TSLexer *lexer) {
    if (lexer->lookahead == '\r') {
        advance(lexer);
        if (lexer->lookahead == '\n') {
            advance(lexer);
        }
    } else {
        advance(lexer);
    }
}

static bool consume_closing_hashes(TSLexer *lexer, unsigned num_hashes) {
    for (unsigned i = 0; i < num_hashes; i++) {
        if (lexer->lookahead != '#') {
            return false;
        }
        advance(lexer);
    }

    return true;
}

// Consume exactly three consecutive quote characters.
// This is used for KDL v2 multiline string delimiters such as:
//   """
//   #""" ... """#
//   ##""" ... """##
static bool consume_triple_quote(TSLexer *lexer) {
    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);

    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);

    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);

    return true;
}


static bool scan_multiline_start(Scanner *scanner, TSLexer *lexer, bool raw) {
    uint32_t hash_count = 0;
    if (raw) {
        while (lexer->lookahead == '#') {
            hash_count++;
            advance(lexer);
        }
        if (hash_count == 0) return false;
    }

    if (!consume_triple_quote(lexer) || !is_newline_start(lexer->lookahead)) return false;
    advance_newline(lexer);

    scanner->active = true;
    scanner->raw = raw;
    scanner->at_line_start = true;
    scanner->hash_count = hash_count;
    lexer->result_symbol = raw ? MULTILINE_RAW_START : MULTILINE_ESCAPED_START;
    return true;
}

static bool scan_multiline_content(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    if (!scanner->active) return false;

    bool has_content = false;
    bool at_line_start = scanner->at_line_start;
    bool marked_at_line_start = at_line_start;
    bool pending_newline = false;
    lexer->mark_end(lexer);

    for (;;) {
        if (lexer->eof(lexer)) return false;

        if (at_line_start) {
            bool has_indentation = false;
            while (is_unicode_space(lexer->lookahead)) {
                has_indentation = true;
                advance(lexer);
            }

            bool starts_quote = lexer->lookahead == '"';
            if (starts_quote && consume_triple_quote(lexer) &&
                consume_closing_hashes(lexer, scanner->hash_count)) {
                if (has_content) {
                    if (!valid_symbols[MULTILINE_FRAGMENT]) return false;
                    scanner->at_line_start = marked_at_line_start;
                    lexer->result_symbol = MULTILINE_FRAGMENT;
                } else {
                    if (!valid_symbols[MULTILINE_END]) return false;
                    *scanner = (Scanner){0};
                    lexer->result_symbol = MULTILINE_END;
                    lexer->mark_end(lexer);
                }
                return true;
            }

            // The spaces and any unsuccessfully probed quotes are ordinary body text.
            lexer->mark_end(lexer);
            has_content = has_content || pending_newline || has_indentation || starts_quote;
            at_line_start = false;
            marked_at_line_start = false;
            pending_newline = false;
            continue;
        }

        if (!scanner->raw && lexer->lookahead == '\\') {
            if (has_content) {
                if (!valid_symbols[MULTILINE_FRAGMENT]) return false;
                scanner->at_line_start = marked_at_line_start;
                lexer->result_symbol = MULTILINE_FRAGMENT;
            }
            return has_content;
        }

        if (is_newline_start(lexer->lookahead)) {
            advance_newline(lexer);
            at_line_start = true;
            pending_newline = true;
            continue;
        }

        advance(lexer);
        lexer->mark_end(lexer);
        has_content = true;
        marked_at_line_start = false;
        pending_newline = false;
    }
}

static bool is_hex_digit(int32_t c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

static bool scan_multiline_escape(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    if (!scanner->active || scanner->raw || lexer->lookahead != '\\') return false;

    advance(lexer);
    if (is_unicode_space(lexer->lookahead) || is_newline_start(lexer->lookahead)) {
        if (!valid_symbols[MULTILINE_ESCAPED_WHITESPACE]) return false;

        bool consumed_newline = false;
        do {
            if (is_newline_start(lexer->lookahead)) {
                consumed_newline = true;
                advance_newline(lexer);
            } else {
                advance(lexer);
            }
        } while (is_unicode_space(lexer->lookahead) || is_newline_start(lexer->lookahead));

        scanner->at_line_start = consumed_newline;
        lexer->result_symbol = MULTILINE_ESCAPED_WHITESPACE;
        return true;
    }

    if (!valid_symbols[MULTILINE_ESCAPE]) return false;
    if (lexer->lookahead == 'u') {
        advance(lexer);
        if (lexer->lookahead != '{') return false;
        advance(lexer);

        unsigned digits = 0;
        while (is_hex_digit(lexer->lookahead) && digits < 6) {
            advance(lexer);
            digits++;
        }
        if (digits == 0 || lexer->lookahead != '}') return false;
        advance(lexer);
    } else if (lexer->lookahead == '\\' || lexer->lookahead == '"' || lexer->lookahead == '/' ||
               lexer->lookahead == 'b' || lexer->lookahead == 'f' || lexer->lookahead == 'n' ||
               lexer->lookahead == 'r' || lexer->lookahead == 't' || lexer->lookahead == 's') {
        advance(lexer);
    } else {
        return false;
    }

    scanner->at_line_start = false;
    lexer->result_symbol = MULTILINE_ESCAPE;
    return true;
}

static bool scan_single_line_raw_string(TSLexer *lexer, unsigned num_hashes) {
    for (;;) {
        if (lexer->eof(lexer)) {
            return false;
        }

        int32_t c = lexer->lookahead;
        advance(lexer);

        if (c != '"') {
            continue;
        }

        // After the closing quote, the number of `#` characters must match the opener.
        if (consume_closing_hashes(lexer, num_hashes)) {
            lexer->result_symbol = _RAW_STRING;
            return true;
        }
    }
}

static bool scan_v2_raw_string(Scanner *scanner, TSLexer *lexer, bool allow_multiline_start) {
    unsigned num_hashes = 0;
    while (lexer->lookahead == '#') {
        num_hashes += 1;
        advance(lexer);
    }

    if (num_hashes == 0 || lexer->lookahead != '"') {
        return false;
    }

    advance(lexer);

    unsigned consumed_quotes = 0;
    if (lexer->lookahead == '"') {
        advance(lexer);
        consumed_quotes = 1;
        if (lexer->lookahead == '"') {
            advance(lexer);
            consumed_quotes = 2;
            if (allow_multiline_start && is_newline_start(lexer->lookahead)) {
                advance_newline(lexer);
                scanner->active = true;
                scanner->raw = true;
                scanner->at_line_start = true;
                scanner->hash_count = num_hashes;
                lexer->result_symbol = MULTILINE_RAW_START;
                return true;
            }
        }
    }

    if (consumed_quotes > 0 && consume_closing_hashes(lexer, num_hashes)) {
        lexer->result_symbol = _RAW_STRING;
        return true;
    }

    return scan_single_line_raw_string(lexer, num_hashes);
}

static bool scan_v1_raw_string(TSLexer *lexer) {
    if (lexer->lookahead != 'r') {
        return false;
    }
    advance(lexer);

    unsigned num_hashes = 0;
    while (lexer->lookahead == '#') {
        num_hashes += 1;
        advance(lexer);
    }

    if (lexer->lookahead != '"') {
        return false;
    }

    advance(lexer);
    return scan_single_line_raw_string(lexer, num_hashes);
}

bool tree_sitter_kdl_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = payload;
    if (valid_symbols[_EOF] && lexer->lookahead == 0) {
        lexer->result_symbol = _EOF;
        advance(lexer);
        return true;
    }

    if (scanner->active) {
        if (!scanner->raw && lexer->lookahead == '\\') {
            return scan_multiline_escape(scanner, lexer, valid_symbols);
        }
        return scan_multiline_content(scanner, lexer, valid_symbols);
    }

    if (valid_symbols[MULTILINE_ESCAPED_START] && lexer->lookahead == '"') {
        return scan_multiline_start(scanner, lexer, false);
    }

    if (valid_symbols[_RAW_STRING]) {
        // Support both raw-string families at once:
        //   v1: r#"..."#
        //   v2: #"..."#
        if (lexer->lookahead == 'r') {
            return scan_v1_raw_string(lexer);
        }
        if (lexer->lookahead == '#') {
            return scan_v2_raw_string(scanner, lexer, valid_symbols[MULTILINE_RAW_START]);
        }
    }

    if (lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead != '*')
            return false;
        advance(lexer);

        bool after_star = false;
        unsigned nesting_depth = 1;
        for (;;) {
            switch (lexer->lookahead) {
                case '\0':
                    return false;
                case '*':
                    advance(lexer);
                    after_star = true;
                    break;
                case '/':
                    if (after_star) {
                        advance(lexer);
                        after_star = false;
                        nesting_depth--;
                        if (nesting_depth == 0) {
                            lexer->result_symbol = MULTI_LINE_COMMENT;
                            return true;
                        }
                    } else {
                        advance(lexer);
                        after_star = false;
                        if (lexer->lookahead == '*') {
                            nesting_depth++;
                            advance(lexer);
                        }
                    }
                    break;
                default:
                    advance(lexer);
                    after_star = false;
                    break;
            }
        }
    }

    return false;
}
