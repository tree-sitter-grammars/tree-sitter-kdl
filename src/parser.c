#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 2
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_BSLASH = 2,
  anon_sym_SEMI = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_number = 9,
  sym_float = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  aux_sym__string_literal_token1 = 14,
  aux_sym__raw_string_literal_token1 = 15,
  aux_sym__raw_string_literal_token2 = 16,
  aux_sym__raw_string_literal_token3 = 17,
  aux_sym__raw_string_literal_token4 = 18,
  sym_comment = 19,
  sym_document = 20,
  sym_node = 21,
  sym_property = 22,
  sym_children = 23,
  sym_node_type = 24,
  sym_argument = 25,
  sym_boolean = 26,
  sym__string_literal = 27,
  sym__raw_string_literal = 28,
  sym__type = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_node_repeat1 = 31,
  aux_sym_node_repeat2 = 32,
  alias_sym_property_name = 33,
  alias_sym_type = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [aux_sym__string_literal_token1] = "string_literal",
  [aux_sym__raw_string_literal_token1] = "raw_string_literal",
  [aux_sym__raw_string_literal_token2] = "raw_string_literal",
  [aux_sym__raw_string_literal_token3] = "raw_string_literal",
  [aux_sym__raw_string_literal_token4] = "raw_string_literal",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_node] = "node",
  [sym_property] = "property",
  [sym_children] = "children",
  [sym_node_type] = "node_type",
  [sym_argument] = "argument",
  [sym_boolean] = "boolean",
  [sym__string_literal] = "_string_literal",
  [sym__raw_string_literal] = "_raw_string_literal",
  [sym__type] = "_type",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_node_repeat2] = "node_repeat2",
  [alias_sym_property_name] = "property_name",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [aux_sym__raw_string_literal_token1] = aux_sym__raw_string_literal_token1,
  [aux_sym__raw_string_literal_token2] = aux_sym__raw_string_literal_token1,
  [aux_sym__raw_string_literal_token3] = aux_sym__raw_string_literal_token1,
  [aux_sym__raw_string_literal_token4] = aux_sym__raw_string_literal_token1,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [sym_property] = sym_property,
  [sym_children] = sym_children,
  [sym_node_type] = sym_node_type,
  [sym_argument] = sym_argument,
  [sym_boolean] = sym_boolean,
  [sym__string_literal] = sym__string_literal,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [sym__type] = sym__type,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_node_repeat2] = aux_sym_node_repeat2,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_type] = alias_sym_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__raw_string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__raw_string_literal_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__raw_string_literal_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__raw_string_literal_token4] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym_node_type] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type,
  },
  [2] = {
    [0] = alias_sym_property_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__string_literal, 2,
    sym__string_literal,
    alias_sym_property_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 22,
  [23] = 17,
  [24] = 24,
  [25] = 13,
  [26] = 26,
  [27] = 7,
  [28] = 15,
  [29] = 16,
  [30] = 14,
  [31] = 31,
  [32] = 11,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 47,
  [55] = 50,
  [56] = 52,
};

static inline bool aux_sym__string_literal_token1_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < '-'
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < '['
      ? (c < '='
        ? c == ';'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == ' '
        : c <= ')')))
    : (c <= '/' || (c < '['
      ? (c < '='
        ? c == ';'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '-'
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < '['
      ? (c < '='
        ? c == ';'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < '/'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == ' '
        : c <= ')')))
    : (c <= '/' || (c < '['
      ? (c < '='
        ? c == ';'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '}') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 21:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(80);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(80);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(80);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(36);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(36);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(56);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '}') ADVANCE(56);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '"') ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(57);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token3);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token3);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token4);
      if (lookahead == '#') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(17);
      if (aux_sym__string_literal_token1_character_set_1(lookahead)) ADVANCE(1);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(18);
      if (aux_sym__string_literal_token1_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(36);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 69},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 61},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [aux_sym__raw_string_literal_token1] = ACTIONS(1),
    [aux_sym__raw_string_literal_token3] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(49),
    [sym_node] = STATE(35),
    [sym_node_type] = STATE(2),
    [aux_sym_document_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_property] = STATE(18),
    [sym_children] = STATE(41),
    [sym_argument] = STATE(5),
    [sym_boolean] = STATE(16),
    [sym__string_literal] = STATE(10),
    [sym__raw_string_literal] = STATE(16),
    [aux_sym_node_repeat1] = STATE(5),
    [aux_sym_node_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(23),
    [aux_sym__string_literal_token1] = ACTIONS(27),
    [aux_sym__raw_string_literal_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_property] = STATE(22),
    [sym_children] = STATE(36),
    [sym_argument] = STATE(6),
    [sym_boolean] = STATE(16),
    [sym__string_literal] = STATE(10),
    [sym__raw_string_literal] = STATE(16),
    [aux_sym_node_repeat1] = STATE(6),
    [aux_sym_node_repeat2] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(23),
    [aux_sym__string_literal_token1] = ACTIONS(27),
    [aux_sym__raw_string_literal_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_property] = STATE(20),
    [sym_children] = STATE(40),
    [sym_argument] = STATE(3),
    [sym_boolean] = STATE(16),
    [sym__string_literal] = STATE(10),
    [sym__raw_string_literal] = STATE(16),
    [aux_sym_node_repeat1] = STATE(3),
    [aux_sym_node_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(23),
    [aux_sym__string_literal_token1] = ACTIONS(27),
    [aux_sym__raw_string_literal_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_property] = STATE(20),
    [sym_children] = STATE(40),
    [sym_argument] = STATE(6),
    [sym_boolean] = STATE(16),
    [sym__string_literal] = STATE(10),
    [sym__raw_string_literal] = STATE(16),
    [aux_sym_node_repeat1] = STATE(6),
    [aux_sym_node_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(23),
    [aux_sym__string_literal_token1] = ACTIONS(27),
    [aux_sym__raw_string_literal_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_argument] = STATE(6),
    [sym_boolean] = STATE(16),
    [sym__string_literal] = STATE(16),
    [sym__raw_string_literal] = STATE(16),
    [aux_sym_node_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym_number] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_null] = ACTIONS(41),
    [aux_sym__string_literal_token1] = ACTIONS(50),
    [aux_sym__raw_string_literal_token1] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(58), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [22] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(62), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(66), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [66] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_EQ,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(70), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [90] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(76), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [111] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      aux_sym__string_literal_token1,
    ACTIONS(86), 1,
      aux_sym__raw_string_literal_token1,
    STATE(31), 1,
      sym_argument,
    ACTIONS(82), 2,
      sym_true,
      sym_false,
    STATE(29), 3,
      sym_boolean,
      sym__string_literal,
      sym__raw_string_literal,
    ACTIONS(78), 4,
      sym_number,
      sym_float,
      sym_null,
      sym_identifier,
  [142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(90), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(94), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(98), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(70), 8,
      sym_number,
      sym_float,
      sym_true,
      sym_false,
      sym_null,
      aux_sym__string_literal_token1,
      aux_sym__raw_string_literal_token1,
      sym_identifier,
  [226] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__string_literal_token1,
    ACTIONS(86), 1,
      aux_sym__raw_string_literal_token1,
    ACTIONS(82), 2,
      sym_true,
      sym_false,
    STATE(30), 3,
      sym_boolean,
      sym__string_literal,
      sym__raw_string_literal,
    ACTIONS(100), 4,
      sym_number,
      sym_float,
      sym_null,
      sym_identifier,
  [251] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(40), 1,
      sym_children,
    STATE(46), 1,
      sym__string_literal,
    STATE(24), 2,
      sym_property,
      aux_sym_node_repeat2,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__string_literal_token1,
    ACTIONS(86), 1,
      aux_sym__raw_string_literal_token1,
    ACTIONS(82), 2,
      sym_true,
      sym_false,
    STATE(25), 3,
      sym_boolean,
      sym__string_literal,
      sym__raw_string_literal,
    ACTIONS(104), 4,
      sym_number,
      sym_float,
      sym_null,
      sym_identifier,
  [307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(36), 1,
      sym_children,
    STATE(46), 1,
      sym__string_literal,
    STATE(24), 2,
      sym_property,
      aux_sym_node_repeat2,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [338] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      aux_sym__raw_string_literal_token1,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_boolean,
      sym__string_literal,
      sym__raw_string_literal,
    ACTIONS(106), 4,
      sym_number,
      sym_float,
      sym_null,
      sym_identifier,
  [363] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_children,
    STATE(46), 1,
      sym__string_literal,
    STATE(24), 2,
      sym_property,
      aux_sym_node_repeat2,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__string_literal_token1,
    ACTIONS(29), 1,
      aux_sym__raw_string_literal_token1,
    ACTIONS(25), 2,
      sym_true,
      sym_false,
    STATE(14), 3,
      sym_boolean,
      sym__string_literal,
      sym__raw_string_literal,
    ACTIONS(112), 4,
      sym_number,
      sym_float,
      sym_null,
      sym_identifier,
  [419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      aux_sym__string_literal_token1,
    STATE(46), 1,
      sym__string_literal,
    STATE(24), 2,
      sym_property,
      aux_sym_node_repeat2,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym__string_literal_token1,
      sym_identifier,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_node_type,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat1,
  [479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      aux_sym__string_literal_token1,
      sym_identifier,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      aux_sym__string_literal_token1,
      sym_identifier,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      aux_sym__string_literal_token1,
      sym_identifier,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      aux_sym__string_literal_token1,
      sym_identifier,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      aux_sym__string_literal_token1,
      sym_identifier,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 2,
      aux_sym__string_literal_token1,
      sym_identifier,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_node_type,
    STATE(34), 2,
      sym_node,
      aux_sym_document_repeat1,
  [589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_node_type,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat1,
  [609] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_node_type,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat1,
  [629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym__type,
  [702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym__type,
  [715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym__type,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_EQ,
  [742] = 2,
    ACTIONS(156), 1,
      aux_sym__raw_string_literal_token4,
    ACTIONS(158), 1,
      sym_comment,
  [749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym__raw_string_literal_token3,
  [770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [777] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym__raw_string_literal_token2,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [791] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym__raw_string_literal_token4,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym__raw_string_literal_token3,
  [805] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__raw_string_literal_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 22,
  [SMALL_STATE(9)] = 44,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 111,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 226,
  [SMALL_STATE(18)] = 251,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 363,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 443,
  [SMALL_STATE(26)] = 458,
  [SMALL_STATE(27)] = 479,
  [SMALL_STATE(28)] = 494,
  [SMALL_STATE(29)] = 509,
  [SMALL_STATE(30)] = 524,
  [SMALL_STATE(31)] = 539,
  [SMALL_STATE(32)] = 554,
  [SMALL_STATE(33)] = 569,
  [SMALL_STATE(34)] = 589,
  [SMALL_STATE(35)] = 609,
  [SMALL_STATE(36)] = 629,
  [SMALL_STATE(37)] = 639,
  [SMALL_STATE(38)] = 649,
  [SMALL_STATE(39)] = 659,
  [SMALL_STATE(40)] = 669,
  [SMALL_STATE(41)] = 679,
  [SMALL_STATE(42)] = 689,
  [SMALL_STATE(43)] = 702,
  [SMALL_STATE(44)] = 715,
  [SMALL_STATE(45)] = 728,
  [SMALL_STATE(46)] = 735,
  [SMALL_STATE(47)] = 742,
  [SMALL_STATE(48)] = 749,
  [SMALL_STATE(49)] = 756,
  [SMALL_STATE(50)] = 763,
  [SMALL_STATE(51)] = 770,
  [SMALL_STATE(52)] = 777,
  [SMALL_STATE(53)] = 784,
  [SMALL_STATE(54)] = 791,
  [SMALL_STATE(55)] = 798,
  [SMALL_STATE(56)] = 805,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(43),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(52),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_type, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_type, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_type, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_type, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_literal, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(46),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kdl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
