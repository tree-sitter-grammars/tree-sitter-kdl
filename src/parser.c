#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 1
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 18

enum {
  sym__normal_bare_identifier = 1,
  anon_sym_SLASH_DASH = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  sym__identifier_char = 6,
  sym___identifier_char_no_digit = 7,
  sym___identifier_char_no_digit_sign = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_null = 11,
  anon_sym_i8 = 12,
  anon_sym_i16 = 13,
  anon_sym_i32 = 14,
  anon_sym_i64 = 15,
  anon_sym_u8 = 16,
  anon_sym_u16 = 17,
  anon_sym_u32 = 18,
  anon_sym_u64 = 19,
  anon_sym_isize = 20,
  anon_sym_usize = 21,
  anon_sym_f32 = 22,
  anon_sym_f64 = 23,
  anon_sym_decimal64 = 24,
  anon_sym_decimal128 = 25,
  anon_sym_date_DASHtime = 26,
  anon_sym_time = 27,
  anon_sym_date = 28,
  anon_sym_duration = 29,
  anon_sym_decimal = 30,
  anon_sym_currency = 31,
  anon_sym_country_DASH2 = 32,
  anon_sym_country_DASH3 = 33,
  anon_sym_country_DASHsubdivision = 34,
  anon_sym_email = 35,
  anon_sym_idn_DASHemail = 36,
  anon_sym_hostname = 37,
  anon_sym_idn_DASHhostname = 38,
  anon_sym_ipv4 = 39,
  anon_sym_ipv6 = 40,
  anon_sym_url = 41,
  anon_sym_url_DASHreference = 42,
  anon_sym_irl = 43,
  anon_sym_iri_DASHreference = 44,
  anon_sym_url_DASHtemplate = 45,
  anon_sym_uuid = 46,
  anon_sym_regex = 47,
  anon_sym_base64 = 48,
  anon_sym_EQ = 49,
  anon_sym_LPAREN = 50,
  anon_sym_RPAREN = 51,
  anon_sym_DQUOTE = 52,
  aux_sym_escaped_string_token1 = 53,
  aux_sym_escape_token1 = 54,
  aux_sym_escape_token2 = 55,
  anon_sym_BSLASHu_LBRACE = 56,
  aux_sym_escape_token3 = 57,
  anon_sym_r = 58,
  anon_sym_POUND = 59,
  aux_sym__raw_string_quotes_token1 = 60,
  anon_sym_DOT = 61,
  anon_sym_e = 62,
  anon_sym_E = 63,
  anon_sym__ = 64,
  sym__digit = 65,
  anon_sym_PLUS = 66,
  anon_sym_DASH = 67,
  anon_sym_0x = 68,
  anon_sym_0o = 69,
  aux_sym__octal_token1 = 70,
  anon_sym_0b = 71,
  anon_sym_0 = 72,
  anon_sym_1 = 73,
  anon_sym_BSLASH = 74,
  anon_sym_CR = 75,
  anon_sym_LF = 76,
  anon_sym_CR_LF = 77,
  anon_sym_ = 78,
  anon_sym_2 = 79,
  anon_sym_3 = 80,
  anon_sym_4 = 81,
  sym__bom = 82,
  anon_sym_TAB = 83,
  anon_sym_5 = 84,
  anon_sym_6 = 85,
  anon_sym_7 = 86,
  anon_sym_8 = 87,
  anon_sym_9 = 88,
  anon_sym_10 = 89,
  anon_sym_11 = 90,
  anon_sym_12 = 91,
  anon_sym_13 = 92,
  anon_sym_14 = 93,
  anon_sym_15 = 94,
  anon_sym_16 = 95,
  anon_sym_17 = 96,
  anon_sym_18 = 97,
  anon_sym_19 = 98,
  anon_sym_20 = 99,
  anon_sym_21 = 100,
  anon_sym_SLASH_SLASH = 101,
  aux_sym_single_line_comment_token1 = 102,
  anon_sym_SLASH_STAR = 103,
  anon_sym_STAR_SLASH = 104,
  anon_sym_STAR = 105,
  anon_sym_SLASH = 106,
  aux_sym_commented_block_token1 = 107,
  sym__eof = 108,
  sym_document = 109,
  sym_node = 110,
  sym__node_prop_or_arg = 111,
  sym_node_children = 112,
  sym__node_space = 113,
  sym__node_terminator = 114,
  sym_identifier = 115,
  sym__bare_identifier = 116,
  sym_keyword = 117,
  sym_type_annotation = 118,
  sym_prop = 119,
  sym_value = 120,
  sym_type = 121,
  sym_string = 122,
  sym_escaped_string = 123,
  sym_escape = 124,
  sym__hex_digit = 125,
  sym_raw_string = 126,
  sym__raw_string_hash = 127,
  sym__raw_string_quotes = 128,
  sym_number = 129,
  sym__decimal = 130,
  sym__exponent = 131,
  sym__integer = 132,
  sym__sign = 133,
  sym__hex = 134,
  sym__octal = 135,
  sym__binary = 136,
  sym__escline = 137,
  sym_linespace = 138,
  sym__newline = 139,
  sym__ws = 140,
  sym__unicode_space = 141,
  sym_single_line_comment = 142,
  sym_multi_line_comment = 143,
  sym_commented_block = 144,
  aux_sym_document_repeat1 = 145,
  aux_sym_document_repeat2 = 146,
  aux_sym_node_repeat1 = 147,
  aux_sym_node_repeat2 = 148,
  aux_sym_node_repeat3 = 149,
  aux_sym__bare_identifier_repeat1 = 150,
  aux_sym_escaped_string_repeat1 = 151,
  aux_sym_escape_repeat1 = 152,
  aux_sym__integer_repeat1 = 153,
  aux_sym__hex_repeat1 = 154,
  aux_sym__octal_repeat1 = 155,
  aux_sym__binary_repeat1 = 156,
  aux_sym_single_line_comment_repeat1 = 157,
  alias_sym_end_bracket = 158,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__normal_bare_identifier] = "_normal_bare_identifier",
  [anon_sym_SLASH_DASH] = "/-",
  [anon_sym_LBRACE] = "start_bracket",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [sym__identifier_char] = "_identifier_char",
  [sym___identifier_char_no_digit] = "__identifier_char_no_digit",
  [sym___identifier_char_no_digit_sign] = "__identifier_char_no_digit_sign",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_decimal64] = "decimal64",
  [anon_sym_decimal128] = "decimal128",
  [anon_sym_date_DASHtime] = "date-time",
  [anon_sym_time] = "time",
  [anon_sym_date] = "date",
  [anon_sym_duration] = "duration",
  [anon_sym_decimal] = "decimal",
  [anon_sym_currency] = "currency",
  [anon_sym_country_DASH2] = "country-2",
  [anon_sym_country_DASH3] = "country-3",
  [anon_sym_country_DASHsubdivision] = "country-subdivision",
  [anon_sym_email] = "email",
  [anon_sym_idn_DASHemail] = "idn-email",
  [anon_sym_hostname] = "hostname",
  [anon_sym_idn_DASHhostname] = "idn-hostname",
  [anon_sym_ipv4] = "ipv4",
  [anon_sym_ipv6] = "ipv6",
  [anon_sym_url] = "url",
  [anon_sym_url_DASHreference] = "url-reference",
  [anon_sym_irl] = "irl",
  [anon_sym_iri_DASHreference] = "iri-reference",
  [anon_sym_url_DASHtemplate] = "url-template",
  [anon_sym_uuid] = "uuid",
  [anon_sym_regex] = "regex",
  [anon_sym_base64] = "base64",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_escaped_string_token1] = "escaped_string_token1",
  [aux_sym_escape_token1] = "escape_token1",
  [aux_sym_escape_token2] = "escape_token2",
  [anon_sym_BSLASHu_LBRACE] = "\\u{",
  [aux_sym_escape_token3] = "escape_token3",
  [anon_sym_r] = "r",
  [anon_sym_POUND] = "#",
  [aux_sym__raw_string_quotes_token1] = "_raw_string_quotes_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym__] = "_",
  [sym__digit] = "_digit",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_0x] = "0x",
  [anon_sym_0o] = "0o",
  [aux_sym__octal_token1] = "_octal_token1",
  [anon_sym_0b] = "0b",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_] = "",
  [anon_sym_2] = "\f",
  [anon_sym_3] = " ",
  [anon_sym_4] = " ",
  [sym__bom] = "_bom",
  [anon_sym_TAB] = "\t",
  [anon_sym_5] = " ",
  [anon_sym_6] = " ",
  [anon_sym_7] = " ",
  [anon_sym_8] = " ",
  [anon_sym_9] = " ",
  [anon_sym_10] = " ",
  [anon_sym_11] = " ",
  [anon_sym_12] = " ",
  [anon_sym_13] = " ",
  [anon_sym_14] = " ",
  [anon_sym_15] = " ",
  [anon_sym_16] = " ",
  [anon_sym_17] = " ",
  [anon_sym_18] = " ",
  [anon_sym_19] = " ",
  [anon_sym_20] = " ",
  [anon_sym_21] = "　",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [aux_sym_commented_block_token1] = "commented_block_token1",
  [sym__eof] = "_eof",
  [sym_document] = "document",
  [sym_node] = "node",
  [sym__node_prop_or_arg] = "_node_prop_or_arg",
  [sym_node_children] = "node_children",
  [sym__node_space] = "_node_space",
  [sym__node_terminator] = "_node_terminator",
  [sym_identifier] = "identifier",
  [sym__bare_identifier] = "_bare_identifier",
  [sym_keyword] = "keyword",
  [sym_type_annotation] = "type_annotation",
  [sym_prop] = "prop",
  [sym_value] = "value",
  [sym_type] = "type",
  [sym_string] = "string",
  [sym_escaped_string] = "escaped_string",
  [sym_escape] = "escape",
  [sym__hex_digit] = "_hex_digit",
  [sym_raw_string] = "raw_string",
  [sym__raw_string_hash] = "_raw_string_hash",
  [sym__raw_string_quotes] = "_raw_string_quotes",
  [sym_number] = "number",
  [sym__decimal] = "_decimal",
  [sym__exponent] = "_exponent",
  [sym__integer] = "_integer",
  [sym__sign] = "_sign",
  [sym__hex] = "_hex",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
  [sym__escline] = "_escline",
  [sym_linespace] = "linespace",
  [sym__newline] = "_newline",
  [sym__ws] = "_ws",
  [sym__unicode_space] = "_unicode_space",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_commented_block] = "commented_block",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_node_repeat2] = "node_repeat2",
  [aux_sym_node_repeat3] = "node_repeat3",
  [aux_sym__bare_identifier_repeat1] = "_bare_identifier_repeat1",
  [aux_sym_escaped_string_repeat1] = "escaped_string_repeat1",
  [aux_sym_escape_repeat1] = "escape_repeat1",
  [aux_sym__integer_repeat1] = "_integer_repeat1",
  [aux_sym__hex_repeat1] = "_hex_repeat1",
  [aux_sym__octal_repeat1] = "_octal_repeat1",
  [aux_sym__binary_repeat1] = "_binary_repeat1",
  [aux_sym_single_line_comment_repeat1] = "single_line_comment_repeat1",
  [alias_sym_end_bracket] = "end_bracket",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__normal_bare_identifier] = sym__normal_bare_identifier,
  [anon_sym_SLASH_DASH] = anon_sym_SLASH_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__identifier_char] = sym__identifier_char,
  [sym___identifier_char_no_digit] = sym___identifier_char_no_digit,
  [sym___identifier_char_no_digit_sign] = sym___identifier_char_no_digit_sign,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_decimal64] = anon_sym_decimal64,
  [anon_sym_decimal128] = anon_sym_decimal128,
  [anon_sym_date_DASHtime] = anon_sym_date_DASHtime,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_currency] = anon_sym_currency,
  [anon_sym_country_DASH2] = anon_sym_country_DASH2,
  [anon_sym_country_DASH3] = anon_sym_country_DASH3,
  [anon_sym_country_DASHsubdivision] = anon_sym_country_DASHsubdivision,
  [anon_sym_email] = anon_sym_email,
  [anon_sym_idn_DASHemail] = anon_sym_idn_DASHemail,
  [anon_sym_hostname] = anon_sym_hostname,
  [anon_sym_idn_DASHhostname] = anon_sym_idn_DASHhostname,
  [anon_sym_ipv4] = anon_sym_ipv4,
  [anon_sym_ipv6] = anon_sym_ipv6,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_url_DASHreference] = anon_sym_url_DASHreference,
  [anon_sym_irl] = anon_sym_irl,
  [anon_sym_iri_DASHreference] = anon_sym_iri_DASHreference,
  [anon_sym_url_DASHtemplate] = anon_sym_url_DASHtemplate,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_escaped_string_token1] = aux_sym_escaped_string_token1,
  [aux_sym_escape_token1] = aux_sym_escape_token1,
  [aux_sym_escape_token2] = aux_sym_escape_token2,
  [anon_sym_BSLASHu_LBRACE] = anon_sym_BSLASHu_LBRACE,
  [aux_sym_escape_token3] = aux_sym_escape_token3,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__raw_string_quotes_token1] = aux_sym__raw_string_quotes_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym__] = anon_sym__,
  [sym__digit] = sym__digit,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0o] = anon_sym_0o,
  [aux_sym__octal_token1] = aux_sym__octal_token1,
  [anon_sym_0b] = anon_sym_0b,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [sym__bom] = sym__bom,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_commented_block_token1] = aux_sym_commented_block_token1,
  [sym__eof] = sym__eof,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [sym__node_prop_or_arg] = sym__node_prop_or_arg,
  [sym_node_children] = sym_node_children,
  [sym__node_space] = sym__node_space,
  [sym__node_terminator] = sym__node_terminator,
  [sym_identifier] = sym_identifier,
  [sym__bare_identifier] = sym__bare_identifier,
  [sym_keyword] = sym_keyword,
  [sym_type_annotation] = sym_type_annotation,
  [sym_prop] = sym_prop,
  [sym_value] = sym_value,
  [sym_type] = sym_type,
  [sym_string] = sym_string,
  [sym_escaped_string] = sym_escaped_string,
  [sym_escape] = sym_escape,
  [sym__hex_digit] = sym__hex_digit,
  [sym_raw_string] = sym_raw_string,
  [sym__raw_string_hash] = sym__raw_string_hash,
  [sym__raw_string_quotes] = sym__raw_string_quotes,
  [sym_number] = sym_number,
  [sym__decimal] = sym__decimal,
  [sym__exponent] = sym__exponent,
  [sym__integer] = sym__integer,
  [sym__sign] = sym__sign,
  [sym__hex] = sym__hex,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
  [sym__escline] = sym__escline,
  [sym_linespace] = sym_linespace,
  [sym__newline] = sym__newline,
  [sym__ws] = sym__ws,
  [sym__unicode_space] = sym__unicode_space,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_commented_block] = sym_commented_block,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_node_repeat2] = aux_sym_node_repeat2,
  [aux_sym_node_repeat3] = aux_sym_node_repeat3,
  [aux_sym__bare_identifier_repeat1] = aux_sym__bare_identifier_repeat1,
  [aux_sym_escaped_string_repeat1] = aux_sym_escaped_string_repeat1,
  [aux_sym_escape_repeat1] = aux_sym_escape_repeat1,
  [aux_sym__integer_repeat1] = aux_sym__integer_repeat1,
  [aux_sym__hex_repeat1] = aux_sym__hex_repeat1,
  [aux_sym__octal_repeat1] = aux_sym__octal_repeat1,
  [aux_sym__binary_repeat1] = aux_sym__binary_repeat1,
  [aux_sym_single_line_comment_repeat1] = aux_sym_single_line_comment_repeat1,
  [alias_sym_end_bracket] = alias_sym_end_bracket,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__normal_bare_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier_char] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier_char_no_digit] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier_char_no_digit_sign] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_currency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASHsubdivision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_email] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idn_DASHemail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idn_DASHhostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_DASHreference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iri_DASHreference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_DASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escaped_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHu_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__raw_string_quotes_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__octal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [sym__bom] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commented_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
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
  [sym__node_prop_or_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_node_children] = {
    .visible = true,
    .named = true,
  },
  [sym__node_space] = {
    .visible = false,
    .named = true,
  },
  [sym__node_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__bare_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_string_hash] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_string_quotes] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__sign] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary] = {
    .visible = false,
    .named = true,
  },
  [sym__escline] = {
    .visible = false,
    .named = true,
  },
  [sym_linespace] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym__unicode_space] = {
    .visible = false,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_commented_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
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
  [aux_sym_node_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bare_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escaped_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__binary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_line_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_end_bracket] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_children = 1,
  field_nodes = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_children] = "children",
  [field_nodes] = "nodes",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 4},
  [9] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [13] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_nodes, 0},
  [1] =
    {field_nodes, 0},
    {field_nodes, 1},
  [3] =
    {field_nodes, 0},
    {field_nodes, 1},
    {field_nodes, 2},
  [6] =
    {field_children, 1},
  [7] =
    {field_children, 2},
  [8] =
    {field_nodes, 0},
    {field_nodes, 1},
    {field_nodes, 2},
    {field_nodes, 3},
  [12] =
    {field_children, 3},
  [13] =
    {field_children, 4},
  [14] =
    {field_children, 5},
  [15] =
    {field_children, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = alias_sym_end_bracket,
  },
  [7] = {
    [2] = alias_sym_end_bracket,
  },
  [10] = {
    [3] = alias_sym_end_bracket,
  },
  [12] = {
    [4] = alias_sym_end_bracket,
  },
  [14] = {
    [5] = alias_sym_end_bracket,
  },
  [16] = {
    [6] = alias_sym_end_bracket,
  },
  [17] = {
    [7] = alias_sym_end_bracket,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 12,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 26,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 47,
  [74] = 44,
  [75] = 45,
  [76] = 76,
  [77] = 46,
  [78] = 38,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 52,
  [107] = 107,
  [108] = 55,
  [109] = 54,
  [110] = 110,
  [111] = 53,
  [112] = 52,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 50,
  [118] = 51,
  [119] = 119,
  [120] = 55,
  [121] = 121,
  [122] = 54,
  [123] = 53,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 12,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 26,
  [196] = 196,
  [197] = 197,
  [198] = 47,
  [199] = 46,
  [200] = 200,
  [201] = 197,
  [202] = 44,
  [203] = 45,
  [204] = 197,
  [205] = 38,
  [206] = 200,
  [207] = 200,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 46,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 55,
  [217] = 52,
  [218] = 218,
  [219] = 119,
  [220] = 50,
  [221] = 51,
  [222] = 54,
  [223] = 113,
  [224] = 53,
  [225] = 115,
  [226] = 116,
  [227] = 227,
  [228] = 114,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 233,
  [235] = 233,
  [236] = 236,
  [237] = 237,
  [238] = 233,
  [239] = 233,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 242,
  [246] = 246,
  [247] = 247,
  [248] = 243,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 249,
  [254] = 252,
  [255] = 236,
  [256] = 256,
  [257] = 257,
  [258] = 252,
  [259] = 249,
  [260] = 252,
  [261] = 252,
  [262] = 262,
  [263] = 249,
  [264] = 249,
  [265] = 252,
  [266] = 249,
  [267] = 54,
  [268] = 53,
  [269] = 55,
  [270] = 166,
  [271] = 168,
  [272] = 170,
  [273] = 273,
  [274] = 274,
  [275] = 273,
  [276] = 274,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 283,
  [286] = 286,
  [287] = 283,
  [288] = 288,
  [289] = 283,
  [290] = 290,
  [291] = 193,
  [292] = 292,
  [293] = 180,
  [294] = 294,
  [295] = 295,
  [296] = 283,
  [297] = 173,
  [298] = 175,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 300,
  [303] = 303,
  [304] = 304,
  [305] = 301,
  [306] = 306,
  [307] = 176,
  [308] = 171,
  [309] = 179,
  [310] = 310,
  [311] = 178,
  [312] = 306,
  [313] = 313,
  [314] = 314,
  [315] = 303,
  [316] = 316,
  [317] = 53,
  [318] = 52,
  [319] = 55,
  [320] = 54,
};

static inline bool sym__normal_bare_identifier_character_set_1(int32_t c) {
  return (c < 6016
    ? (c < 2958
      ? (c < 2447
        ? (c < 1369
          ? (c < 710
            ? (c < 170
              ? (c < '?'
                ? (c < '*'
                  ? (c >= '!' && c <= '\'')
                  : (c <= '*' || (c >= '.' && c <= ':')))
                : (c <= 'Z' || (c < 'a'
                  ? (c >= '^' && c <= '_')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))))
            : (c <= 721 || (c < 902
              ? (c < 768
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1155
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))))))
          : (c <= 1369 || (c < 1808
            ? (c < 1519
              ? (c < 1473
                ? (c < 1425
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1469 || c == 1471))
                : (c <= 1474 || (c < 1479
                  ? (c >= 1476 && c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))))
              : (c <= 1522 || (c < 1749
                ? (c < 1568
                  ? (c >= 1552 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1770
                  ? (c >= 1759 && c <= 1768)
                  : (c <= 1788 || c == 1791))))))
            : (c <= 1866 || (c < 2160
              ? (c < 2045
                ? (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2112
                  ? (c >= 2048 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2406
                ? (c < 2200
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : c <= 2444)))))))))
        : (c <= 2448 || (c < 2689
          ? (c < 2565
            ? (c < 2519
              ? (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))
              : (c <= 2519 || (c < 2548
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))
                : (c <= 2553 || (c < 2558
                  ? c == 2556
                  : (c <= 2558 || (c >= 2561 && c <= 2563)))))))
            : (c <= 2570 || (c < 2622
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || c == 2620))))
              : (c <= 2626 || (c < 2649
                ? (c < 2635
                  ? (c >= 2631 && c <= 2632)
                  : (c <= 2637 || c == 2641))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2677)))))))
          : (c <= 2691 || (c < 2831
            ? (c < 2759
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))))
              : (c <= 2761 || (c < 2790
                ? (c < 2768
                  ? (c >= 2763 && c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))
                : (c <= 2799 || (c < 2817
                  ? (c >= 2809 && c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))))))
            : (c <= 2832 || (c < 2901
              ? (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))
              : (c <= 2903 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? (c >= 2946 && c <= 2947)
                  : c <= 2954)))))))))))
      : (c <= 2960 || (c < 3648
        ? (c < 3242
          ? (c < 3090
            ? (c < 3006
              ? (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))))
              : (c <= 3010 || (c < 3031
                ? (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : (c <= 3021 || c == 3024))
                : (c <= 3031 || (c < 3072
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))
            : (c <= 3112 || (c < 3168
              ? (c < 3146
                ? (c < 3132
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))
                : (c <= 3149 || (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))))
              : (c <= 3171 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))))
          : (c <= 3251 || (c < 3430
            ? (c < 3302
              ? (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3406 || (c >= 3412 && c <= 3427)))))))
            : (c <= 3448 || (c < 3530
              ? (c < 3482
                ? (c < 3457
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3530 || (c < 3558
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : c <= 3642)))))))))
        : (c <= 3662 || (c < 4348
          ? (c < 3893
            ? (c < 3776
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))
              : (c <= 3780 || (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3864
                  ? c == 3840
                  : (c <= 3865 || (c >= 3872 && c <= 3891)))))))
            : (c <= 3893 || (c < 4038
              ? (c < 3913
                ? (c < 3897
                  ? c == 3895
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))
                : (c <= 3948 || (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))
              : (c <= 4038 || (c < 4295
                ? (c < 4176
                  ? (c >= 4096 && c <= 4169)
                  : (c <= 4253 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))))
          : (c <= 4680 || (c < 4957
            ? (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
            : (c <= 4959 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6003)))))))))))))
    : (c <= 6099 || (c < 42623
      ? (c < 8458
        ? (c < 7296
          ? (c < 6576
            ? (c < 6272
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))))
              : (c <= 6314 || (c < 6448
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))
                : (c <= 6459 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))))
            : (c <= 6601 || (c < 6832
              ? (c < 6752
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))
              : (c <= 6862 || (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7019 && c <= 7027)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))
          : (c <= 7304 || (c < 8126
            ? (c < 8008
              ? (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))
            : (c <= 8126 || (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8400
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))))))
        : (c <= 8467 || (c < 11736
          ? (c < 11499
            ? (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : (c <= 10131 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11507 || (c < 11680
              ? (c < 11565
                ? (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))))
              : (c <= 11686 || (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))))))
          : (c <= 11742 || (c < 12784
            ? (c < 12441
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12335 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12693 || (c >= 12704 && c <= 12735)))))))
            : (c <= 12799 || (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42612
                  ? (c >= 42560 && c <= 42610)
                  : c <= 42621)))))))))))
      : (c <= 42737 || (c < 65296
        ? (c < 43793
          ? (c < 43312
            ? (c < 43052
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : (c <= 42969 || (c >= 42994 && c <= 43047)))))
              : (c <= 43052 || (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))))
            : (c <= 43347 || (c < 43616
              ? (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43762
                ? (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))
                : (c <= 43766 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_2(int32_t c) {
  return (c < 6103
    ? (c < 2962
      ? (c < 2451
        ? (c < 1376
          ? (c < 748
            ? (c < 181
              ? (c < '^'
                ? (c < '.'
                  ? (c >= '!' && c <= '*')
                  : (c <= ':' || (c >= '?' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= '~')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 768
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1155
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1869
            ? (c < 1552
              ? (c < 1476
                ? (c < 1471
                  ? (c >= 1425 && c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1562 || (c < 1759
                ? (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1768 || (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2185
              ? (c < 2048
                ? (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))
                : (c <= 2093 || (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))))))
        : (c <= 2472 || (c < 2693
          ? (c < 2575
            ? (c < 2524
              ? (c < 2492
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2500 || (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))
            : (c <= 2576 || (c < 2631
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : c <= 2691)))))))
          : (c <= 2701 || (c < 2835
            ? (c < 2763
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))))
              : (c <= 2765 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2815 || (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))))
            : (c <= 2856 || (c < 2908
              ? (c < 2876
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))
              : (c <= 2909 || (c < 2946
                ? (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3664
        ? (c < 3253
          ? (c < 3114
            ? (c < 3014
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))))
              : (c <= 3016 || (c < 3046
                ? (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))
            : (c <= 3129 || (c < 3174
              ? (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))))
          : (c <= 3257 || (c < 3450
            ? (c < 3313
              ? (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3406)
                  : (c <= 3427 || (c >= 3430 && c <= 3448)))))))
            : (c <= 3455 || (c < 3535
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))
              : (c <= 3540 || (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3648
                  ? (c >= 3585 && c <= 3642)
                  : c <= 3662)))))))))
        : (c <= 3673 || (c < 4682
          ? (c < 3895
            ? (c < 3782
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3872
                  ? (c >= 3864 && c <= 3865)
                  : (c <= 3891 || c == 3893))))))
            : (c <= 3895 || (c < 4096
              ? (c < 3953
                ? (c < 3902
                  ? c == 3897
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3972 || (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || c == 4038))))
              : (c <= 4169 || (c < 4301
                ? (c < 4256
                  ? (c >= 4176 && c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))))
          : (c <= 4685 || (c < 4969
            ? (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))))))
            : (c <= 4988 || (c < 5888
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c >= 5743 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5909 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5940)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : c <= 6099)))))))))))))
    : (c <= 6103 || (c < 42623
      ? (c < 8458
        ? (c < 7296
          ? (c < 6608
            ? (c < 6320
              ? (c < 6155
                ? (c < 6112
                  ? (c >= 6108 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6157 || (c < 6176
                  ? (c >= 6159 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))
              : (c <= 6389 || (c < 6470
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))))
            : (c <= 6618 || (c < 6912
              ? (c < 6783
                ? (c < 6688
                  ? (c >= 6656 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7019
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : c <= 7293)))))))
          : (c <= 7304 || (c < 8126
            ? (c < 8008
              ? (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))
            : (c <= 8126 || (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8400
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))))))
        : (c <= 8467 || (c < 11736
          ? (c < 11499
            ? (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : (c <= 10131 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11507 || (c < 11680
              ? (c < 11565
                ? (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))))
              : (c <= 11686 || (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))))))
          : (c <= 11742 || (c < 12784
            ? (c < 12441
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12335 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12693 || (c >= 12704 && c <= 12735)))))))
            : (c <= 12799 || (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42612
                  ? (c >= 42560 && c <= 42610)
                  : c <= 42621)))))))))))
      : (c <= 42737 || (c < 65296
        ? (c < 43793
          ? (c < 43312
            ? (c < 43052
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : (c <= 42969 || (c >= 42994 && c <= 43047)))))
              : (c <= 43052 || (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))))
            : (c <= 43347 || (c < 43616
              ? (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43762
                ? (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))
                : (c <= 43766 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_3(int32_t c) {
  return (c < 5998
    ? (c < 2946
      ? (c < 2406
        ? (c < 1015
          ? (c < 192
            ? (c < 'a'
              ? (c < '.'
                ? (c < '#'
                  ? c == '!'
                  : (c <= '\'' || (c >= '*' && c <= '+')))
                : (c <= '.' || (c < '?'
                  ? (c >= '0' && c <= ':')
                  : (c <= 'Z' || (c >= '^' && c <= '_')))))
              : (c <= 'z' || (c < 178
                ? (c < '~'
                  ? c == '|'
                  : (c <= '~' || c == 170))
                : (c <= 179 || (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 214 || (c < 886
              ? (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 768 && c <= 884)))))
              : (c <= 887 || (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))))
          : (c <= 1153 || (c < 1759
            ? (c < 1476
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1155 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1471
                  ? (c >= 1425 && c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))
              : (c <= 1477 || (c < 1552
                ? (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))))
            : (c <= 1768 || (c < 2048
              ? (c < 1869
                ? (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))
                : (c <= 1969 || (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))))
              : (c <= 2093 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : c <= 2403)))))))))
        : (c <= 2415 || (c < 2654
          ? (c < 2556
            ? (c < 2492
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2500 || (c < 2524
                ? (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))))))
            : (c <= 2556 || (c < 2613
              ? (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))))))
          : (c <= 2654 || (c < 2817
            ? (c < 2741
              ? (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))
              : (c <= 2745 || (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))))
            : (c <= 2819 || (c < 2887
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))
              : (c <= 2888 || (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2935)))))))))))
      : (c <= 2947 || (c < 3585
        ? (c < 3218
          ? (c < 3072
            ? (c < 2984
              ? (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3058)))))))
            : (c <= 3084 || (c < 3160
              ? (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? (c >= 3200 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3412
            ? (c < 3296
              ? (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))
              : (c <= 3299 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))))
            : (c <= 3427 || (c < 3520
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3544
                ? (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : c <= 3571)))))))))
        : (c <= 3642 || (c < 4304
          ? (c < 3872
            ? (c < 3751
              ? (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3773 || (c < 3792
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))
            : (c <= 3891 || (c < 3993
              ? (c < 3902
                ? (c < 3895
                  ? c == 3893
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4256
                ? (c < 4096
                  ? c == 4038
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))))
          : (c <= 4346 || (c < 4888
            ? (c < 4752
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))
              : (c <= 4784 || (c < 4802
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5761
              ? (c < 5024
                ? (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5919
                ? (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))
                : (c <= 5940 || (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : c <= 5996)))))))))))))
    : (c <= 6000 || (c < 42612
      ? (c < 8450
        ? (c < 7232
          ? (c < 6512
            ? (c < 6159
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : (c <= 6099 || c == 6103))
                : (c <= 6109 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6155 && c <= 6157)))))
              : (c <= 6169 || (c < 6400
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))))))
            : (c <= 6516 || (c < 6800
              ? (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))
                : (c <= 6683 || (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))))
              : (c <= 6809 || (c < 6992
                ? (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))
                : (c <= 7001 || (c < 7040
                  ? (c >= 7019 && c <= 7027)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))))))))
          : (c <= 7241 || (c < 8064
            ? (c < 7960
              ? (c < 7357
                ? (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))
            : (c <= 8116 || (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8400
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8432)))))))))
        : (c <= 8450 || (c < 11728
          ? (c < 10102
            ? (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : (c <= 9371 || (c >= 9450 && c <= 9471)))))))
            : (c <= 10131 || (c < 11631
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))))))
          : (c <= 11734 || (c < 12704
            ? (c < 12353
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12540
                ? (c < 12445
                  ? (c >= 12441 && c <= 12442)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12690 && c <= 12693)))))))
            : (c <= 12735 || (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42610)))))))))))
      : (c <= 42621 || (c < 65296
        ? (c < 43793
          ? (c < 43261
            ? (c < 42994
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))
              : (c <= 43047 || (c < 43136
                ? (c < 43056
                  ? c == 43052
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43232
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))))))
            : (c <= 43309 || (c < 43600
              ? (c < 43471
                ? (c < 43360
                  ? (c >= 43312 && c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))
                : (c <= 43481 || (c < 43520
                  ? (c >= 43488 && c <= 43518)
                  : (c <= 43574 || (c >= 43584 && c <= 43597)))))
              : (c <= 43609 || (c < 43744
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43759 || (c < 43777
                  ? (c >= 43762 && c <= 43766)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_4(int32_t c) {
  return (c < 5998
    ? (c < 2946
      ? (c < 2406
        ? (c < 1015
          ? (c < 192
            ? (c < 'b'
              ? (c < '.'
                ? (c < '#'
                  ? c == '!'
                  : (c <= '\'' || (c >= '*' && c <= '+')))
                : (c <= '.' || (c < '?'
                  ? (c >= '0' && c <= ':')
                  : (c <= 'Z' || (c >= '^' && c <= '_')))))
              : (c <= 'z' || (c < 178
                ? (c < '~'
                  ? c == '|'
                  : (c <= '~' || c == 170))
                : (c <= 179 || (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 214 || (c < 886
              ? (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 768 && c <= 884)))))
              : (c <= 887 || (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))))
          : (c <= 1153 || (c < 1759
            ? (c < 1476
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1155 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1471
                  ? (c >= 1425 && c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))
              : (c <= 1477 || (c < 1552
                ? (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))))
            : (c <= 1768 || (c < 2048
              ? (c < 1869
                ? (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))
                : (c <= 1969 || (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))))
              : (c <= 2093 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : c <= 2403)))))))))
        : (c <= 2415 || (c < 2654
          ? (c < 2556
            ? (c < 2492
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2500 || (c < 2524
                ? (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))))))
            : (c <= 2556 || (c < 2613
              ? (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))))))
          : (c <= 2654 || (c < 2817
            ? (c < 2741
              ? (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))
              : (c <= 2745 || (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))))
            : (c <= 2819 || (c < 2887
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))
              : (c <= 2888 || (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2935)))))))))))
      : (c <= 2947 || (c < 3585
        ? (c < 3218
          ? (c < 3072
            ? (c < 2984
              ? (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3058)))))))
            : (c <= 3084 || (c < 3160
              ? (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? (c >= 3200 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3412
            ? (c < 3296
              ? (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))
              : (c <= 3299 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))))
            : (c <= 3427 || (c < 3520
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3544
                ? (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : c <= 3571)))))))))
        : (c <= 3642 || (c < 4304
          ? (c < 3872
            ? (c < 3751
              ? (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3773 || (c < 3792
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))
            : (c <= 3891 || (c < 3993
              ? (c < 3902
                ? (c < 3895
                  ? c == 3893
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4256
                ? (c < 4096
                  ? c == 4038
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))))
          : (c <= 4346 || (c < 4888
            ? (c < 4752
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))
              : (c <= 4784 || (c < 4802
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5761
              ? (c < 5024
                ? (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5919
                ? (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))
                : (c <= 5940 || (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : c <= 5996)))))))))))))
    : (c <= 6000 || (c < 42612
      ? (c < 8450
        ? (c < 7232
          ? (c < 6512
            ? (c < 6159
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : (c <= 6099 || c == 6103))
                : (c <= 6109 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6155 && c <= 6157)))))
              : (c <= 6169 || (c < 6400
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))))))
            : (c <= 6516 || (c < 6800
              ? (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))
                : (c <= 6683 || (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))))
              : (c <= 6809 || (c < 6992
                ? (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))
                : (c <= 7001 || (c < 7040
                  ? (c >= 7019 && c <= 7027)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))))))))
          : (c <= 7241 || (c < 8064
            ? (c < 7960
              ? (c < 7357
                ? (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))
            : (c <= 8116 || (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8400
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8432)))))))))
        : (c <= 8450 || (c < 11728
          ? (c < 10102
            ? (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : (c <= 9371 || (c >= 9450 && c <= 9471)))))))
            : (c <= 10131 || (c < 11631
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))))))
          : (c <= 11734 || (c < 12704
            ? (c < 12353
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12540
                ? (c < 12445
                  ? (c >= 12441 && c <= 12442)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12690 && c <= 12693)))))))
            : (c <= 12735 || (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42610)))))))))))
      : (c <= 42621 || (c < 65296
        ? (c < 43793
          ? (c < 43261
            ? (c < 42994
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))
              : (c <= 43047 || (c < 43136
                ? (c < 43056
                  ? c == 43052
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43232
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))))))
            : (c <= 43309 || (c < 43600
              ? (c < 43471
                ? (c < 43360
                  ? (c >= 43312 && c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))
                : (c <= 43481 || (c < 43520
                  ? (c >= 43488 && c <= 43518)
                  : (c <= 43574 || (c >= 43584 && c <= 43597)))))
              : (c <= 43609 || (c < 43744
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43759 || (c < 43777
                  ? (c >= 43762 && c <= 43766)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__identifier_char_character_set_1(int32_t c) {
  return (c < 6103
    ? (c < 2962
      ? (c < 2451
        ? (c < 1376
          ? (c < 748
            ? (c < 181
              ? (c < '^'
                ? (c < ':'
                  ? (c >= '!' && c <= '\'')
                  : (c <= ':' || (c >= '?' && c <= 'Z')))
                : (c <= '^' || (c < 170
                  ? (c >= 'g' && c <= '~')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 768
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1155
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1869
            ? (c < 1552
              ? (c < 1476
                ? (c < 1471
                  ? (c >= 1425 && c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1562 || (c < 1759
                ? (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1768 || (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2185
              ? (c < 2048
                ? (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))
                : (c <= 2093 || (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))))))
        : (c <= 2472 || (c < 2693
          ? (c < 2575
            ? (c < 2524
              ? (c < 2492
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2500 || (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))
            : (c <= 2576 || (c < 2631
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : c <= 2691)))))))
          : (c <= 2701 || (c < 2835
            ? (c < 2763
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))))
              : (c <= 2765 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2815 || (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))))
            : (c <= 2856 || (c < 2908
              ? (c < 2876
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))
              : (c <= 2909 || (c < 2946
                ? (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3664
        ? (c < 3253
          ? (c < 3114
            ? (c < 3014
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))))
              : (c <= 3016 || (c < 3046
                ? (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))
            : (c <= 3129 || (c < 3174
              ? (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))))
          : (c <= 3257 || (c < 3450
            ? (c < 3313
              ? (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3406)
                  : (c <= 3427 || (c >= 3430 && c <= 3448)))))))
            : (c <= 3455 || (c < 3535
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))
              : (c <= 3540 || (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3648
                  ? (c >= 3585 && c <= 3642)
                  : c <= 3662)))))))))
        : (c <= 3673 || (c < 4682
          ? (c < 3895
            ? (c < 3782
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3872
                  ? (c >= 3864 && c <= 3865)
                  : (c <= 3891 || c == 3893))))))
            : (c <= 3895 || (c < 4096
              ? (c < 3953
                ? (c < 3902
                  ? c == 3897
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3972 || (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || c == 4038))))
              : (c <= 4169 || (c < 4301
                ? (c < 4256
                  ? (c >= 4176 && c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))))
          : (c <= 4685 || (c < 4969
            ? (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))))))
            : (c <= 4988 || (c < 5888
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c >= 5743 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5909 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5940)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : c <= 6099)))))))))))))
    : (c <= 6103 || (c < 42623
      ? (c < 8458
        ? (c < 7296
          ? (c < 6608
            ? (c < 6320
              ? (c < 6155
                ? (c < 6112
                  ? (c >= 6108 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6157 || (c < 6176
                  ? (c >= 6159 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))
              : (c <= 6389 || (c < 6470
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))))
            : (c <= 6618 || (c < 6912
              ? (c < 6783
                ? (c < 6688
                  ? (c >= 6656 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7019
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : c <= 7293)))))))
          : (c <= 7304 || (c < 8126
            ? (c < 8008
              ? (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))
            : (c <= 8126 || (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8400
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))))))
        : (c <= 8467 || (c < 11736
          ? (c < 11499
            ? (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : (c <= 10131 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11507 || (c < 11680
              ? (c < 11565
                ? (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))))
              : (c <= 11686 || (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))))))
          : (c <= 11742 || (c < 12784
            ? (c < 12441
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12335 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12693 || (c >= 12704 && c <= 12735)))))))
            : (c <= 12799 || (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42612
                  ? (c >= 42560 && c <= 42610)
                  : c <= 42621)))))))))))
      : (c <= 42737 || (c < 65296
        ? (c < 43793
          ? (c < 43312
            ? (c < 43052
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : (c <= 42969 || (c >= 42994 && c <= 43047)))))
              : (c <= 43052 || (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))))
            : (c <= 43347 || (c < 43616
              ? (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43762
                ? (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))
                : (c <= 43766 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym___identifier_char_no_digit_character_set_1(int32_t c) {
  return (c < 6016
    ? (c < 2949
      ? (c < 2437
        ? (c < 1329
          ? (c < 248
            ? (c < '~'
              ? (c < '.'
                ? (c < '#'
                  ? c == '!'
                  : (c <= '\'' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '?' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= '|')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 768 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1155 && c <= 1327)))))))))
          : (c <= 1366 || (c < 1791
            ? (c < 1488
              ? (c < 1471
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1425 && c <= 1469)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1646
                ? (c < 1552
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1759
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))))
            : (c <= 1791 || (c < 2144
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))
                : (c <= 2042 || (c < 2048
                  ? c == 2045
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))))
              : (c <= 2154 || (c < 2275
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))
                : (c <= 2403 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2435)))))))))
        : (c <= 2444 || (c < 2662
          ? (c < 2561
            ? (c < 2507
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))))
              : (c <= 2510 || (c < 2534
                ? (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || c == 2558))))))
            : (c <= 2563 || (c < 2620
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2620 || (c < 2641
                ? (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))
                : (c <= 2641 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2677 || (c < 2821
            ? (c < 2748
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2757 || (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))))
            : (c <= 2828 || (c < 2891
              ? (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))
              : (c <= 2893 || (c < 2918
                ? (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))
                : (c <= 2927 || (c < 2946
                  ? (c >= 2929 && c <= 2935)
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3648
        ? (c < 3242
          ? (c < 3086
            ? (c < 2990
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3058 || (c >= 3072 && c <= 3084)))))))
            : (c <= 3088 || (c < 3165
              ? (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3430
            ? (c < 3302
              ? (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3406 || (c >= 3412 && c <= 3427)))))))
            : (c <= 3448 || (c < 3530
              ? (c < 3482
                ? (c < 3457
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3530 || (c < 3558
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : c <= 3642)))))))))
        : (c <= 3662 || (c < 4348
          ? (c < 3893
            ? (c < 3776
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))
              : (c <= 3780 || (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3864
                  ? c == 3840
                  : (c <= 3865 || (c >= 3872 && c <= 3891)))))))
            : (c <= 3893 || (c < 4038
              ? (c < 3913
                ? (c < 3897
                  ? c == 3895
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))
                : (c <= 3948 || (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))
              : (c <= 4038 || (c < 4295
                ? (c < 4176
                  ? (c >= 4096 && c <= 4169)
                  : (c <= 4253 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))))
          : (c <= 4680 || (c < 4957
            ? (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
            : (c <= 4959 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6003)))))))))))))
    : (c <= 6099 || (c < 42623
      ? (c < 8458
        ? (c < 7296
          ? (c < 6576
            ? (c < 6272
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))))
              : (c <= 6314 || (c < 6448
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))
                : (c <= 6459 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))))
            : (c <= 6601 || (c < 6832
              ? (c < 6752
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))
              : (c <= 6862 || (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7019 && c <= 7027)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))
          : (c <= 7304 || (c < 8126
            ? (c < 8008
              ? (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))
            : (c <= 8126 || (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8400
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))))))
        : (c <= 8467 || (c < 11736
          ? (c < 11499
            ? (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : (c <= 10131 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11507 || (c < 11680
              ? (c < 11565
                ? (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))))
              : (c <= 11686 || (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))))))
          : (c <= 11742 || (c < 12784
            ? (c < 12441
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12335 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12693 || (c >= 12704 && c <= 12735)))))))
            : (c <= 12799 || (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42612
                  ? (c >= 42560 && c <= 42610)
                  : c <= 42621)))))))))))
      : (c <= 42737 || (c < 65296
        ? (c < 43793
          ? (c < 43312
            ? (c < 43052
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : (c <= 42969 || (c >= 42994 && c <= 43047)))))
              : (c <= 43052 || (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))))
            : (c <= 43347 || (c < 43616
              ? (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43762
                ? (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))
                : (c <= 43766 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(160);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == '1') ADVANCE(111);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '_') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n' ||
          lookahead == 't') ADVANCE(111);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(111);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(111);
      if (sym__identifier_char_character_set_1(lookahead)) ADVANCE(111);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(157);
      if (lookahead == '1') ADVANCE(158);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(132);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(120);
      if (lookahead == '3') ADVANCE(121);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == '{') ADVANCE(136);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\f') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == 133) ADVANCE(164);
      if (lookahead == 160) ADVANCE(171);
      if (lookahead == 5760) ADVANCE(172);
      if (lookahead == 8192) ADVANCE(173);
      if (lookahead == 8193) ADVANCE(174);
      if (lookahead == 8194) ADVANCE(175);
      if (lookahead == 8195) ADVANCE(176);
      if (lookahead == 8196) ADVANCE(177);
      if (lookahead == 8197) ADVANCE(178);
      if (lookahead == 8198) ADVANCE(179);
      if (lookahead == 8199) ADVANCE(180);
      if (lookahead == 8200) ADVANCE(181);
      if (lookahead == 8201) ADVANCE(182);
      if (lookahead == 8202) ADVANCE(183);
      if (lookahead == 8232) ADVANCE(166);
      if (lookahead == 8233) ADVANCE(167);
      if (lookahead == 8239) ADVANCE(184);
      if (lookahead == 8287) ADVANCE(185);
      if (lookahead == 12288) ADVANCE(186);
      if (lookahead == 65279) ADVANCE(168);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(21);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(59);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(63);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(67);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(12);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(92);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'i') ADVANCE(82);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'o') ADVANCE(106);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(95);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(107);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 's') ADVANCE(90);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(98);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(89);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(96);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'y') ADVANCE(85);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_escaped_string_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_escaped_string_token1);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_escaped_string_token1);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BSLASHu_LBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_escape_token3);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_r);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__raw_string_quotes_token1);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__raw_string_quotes_token1);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__raw_string_quotes_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(196);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == '6') ADVANCE(31);
      if (lookahead == '8') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(55);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 48:
      if (lookahead == '4') ADVANCE(66);
      if (lookahead == '6') ADVANCE(67);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_irl);
      END_STATE();
    case 50:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 57:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 73:
      if (lookahead == '4') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '6') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_currency);
      END_STATE();
    case 92:
      if (lookahead == '2') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == '4') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_hostname);
      END_STATE();
    case 96:
      if (lookahead == '8') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_decimal64);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_decimal128);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 2, .external_lex_state = 1},
  [3] = {.lex_state = 2, .external_lex_state = 1},
  [4] = {.lex_state = 2, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 1},
  [6] = {.lex_state = 2, .external_lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 1},
  [13] = {.lex_state = 75},
  [14] = {.lex_state = 75},
  [15] = {.lex_state = 75},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 75},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 75},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 75},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 75},
  [26] = {.lex_state = 2, .external_lex_state = 1},
  [27] = {.lex_state = 75},
  [28] = {.lex_state = 75},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 75},
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 75},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 2, .external_lex_state = 1},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 2, .external_lex_state = 1},
  [45] = {.lex_state = 2, .external_lex_state = 1},
  [46] = {.lex_state = 2, .external_lex_state = 1},
  [47] = {.lex_state = 2, .external_lex_state = 1},
  [48] = {.lex_state = 75},
  [49] = {.lex_state = 75},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 2, .external_lex_state = 1},
  [54] = {.lex_state = 2, .external_lex_state = 1},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 75, .external_lex_state = 1},
  [57] = {.lex_state = 75, .external_lex_state = 1},
  [58] = {.lex_state = 75, .external_lex_state = 1},
  [59] = {.lex_state = 75, .external_lex_state = 1},
  [60] = {.lex_state = 75, .external_lex_state = 1},
  [61] = {.lex_state = 75, .external_lex_state = 1},
  [62] = {.lex_state = 75, .external_lex_state = 1},
  [63] = {.lex_state = 75, .external_lex_state = 1},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 75},
  [66] = {.lex_state = 75},
  [67] = {.lex_state = 75},
  [68] = {.lex_state = 75},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 75},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 75, .external_lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 75, .external_lex_state = 1},
  [80] = {.lex_state = 1, .external_lex_state = 1},
  [81] = {.lex_state = 75, .external_lex_state = 1},
  [82] = {.lex_state = 75, .external_lex_state = 1},
  [83] = {.lex_state = 75, .external_lex_state = 1},
  [84] = {.lex_state = 1, .external_lex_state = 1},
  [85] = {.lex_state = 75, .external_lex_state = 1},
  [86] = {.lex_state = 75, .external_lex_state = 1},
  [87] = {.lex_state = 75, .external_lex_state = 1},
  [88] = {.lex_state = 75, .external_lex_state = 1},
  [89] = {.lex_state = 75, .external_lex_state = 1},
  [90] = {.lex_state = 75, .external_lex_state = 1},
  [91] = {.lex_state = 75, .external_lex_state = 1},
  [92] = {.lex_state = 75, .external_lex_state = 1},
  [93] = {.lex_state = 75, .external_lex_state = 1},
  [94] = {.lex_state = 75, .external_lex_state = 1},
  [95] = {.lex_state = 1, .external_lex_state = 1},
  [96] = {.lex_state = 75, .external_lex_state = 1},
  [97] = {.lex_state = 75, .external_lex_state = 1},
  [98] = {.lex_state = 75, .external_lex_state = 1},
  [99] = {.lex_state = 75, .external_lex_state = 1},
  [100] = {.lex_state = 75, .external_lex_state = 1},
  [101] = {.lex_state = 75, .external_lex_state = 1},
  [102] = {.lex_state = 75, .external_lex_state = 1},
  [103] = {.lex_state = 75, .external_lex_state = 1},
  [104] = {.lex_state = 75, .external_lex_state = 1},
  [105] = {.lex_state = 75, .external_lex_state = 1},
  [106] = {.lex_state = 75},
  [107] = {.lex_state = 6, .external_lex_state = 1},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 75},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 75},
  [121] = {.lex_state = 1, .external_lex_state = 1},
  [122] = {.lex_state = 75},
  [123] = {.lex_state = 75},
  [124] = {.lex_state = 75},
  [125] = {.lex_state = 75},
  [126] = {.lex_state = 75},
  [127] = {.lex_state = 75},
  [128] = {.lex_state = 75},
  [129] = {.lex_state = 75},
  [130] = {.lex_state = 6, .external_lex_state = 1},
  [131] = {.lex_state = 5, .external_lex_state = 1},
  [132] = {.lex_state = 6, .external_lex_state = 1},
  [133] = {.lex_state = 75},
  [134] = {.lex_state = 75},
  [135] = {.lex_state = 75},
  [136] = {.lex_state = 75},
  [137] = {.lex_state = 75},
  [138] = {.lex_state = 75},
  [139] = {.lex_state = 75},
  [140] = {.lex_state = 75},
  [141] = {.lex_state = 5, .external_lex_state = 1},
  [142] = {.lex_state = 75},
  [143] = {.lex_state = 75},
  [144] = {.lex_state = 6, .external_lex_state = 1},
  [145] = {.lex_state = 75},
  [146] = {.lex_state = 75},
  [147] = {.lex_state = 75},
  [148] = {.lex_state = 5, .external_lex_state = 1},
  [149] = {.lex_state = 5, .external_lex_state = 1},
  [150] = {.lex_state = 75},
  [151] = {.lex_state = 1, .external_lex_state = 1},
  [152] = {.lex_state = 5, .external_lex_state = 1},
  [153] = {.lex_state = 75},
  [154] = {.lex_state = 75},
  [155] = {.lex_state = 75},
  [156] = {.lex_state = 75},
  [157] = {.lex_state = 75},
  [158] = {.lex_state = 6, .external_lex_state = 1},
  [159] = {.lex_state = 1, .external_lex_state = 1},
  [160] = {.lex_state = 7, .external_lex_state = 1},
  [161] = {.lex_state = 7, .external_lex_state = 1},
  [162] = {.lex_state = 7, .external_lex_state = 1},
  [163] = {.lex_state = 7, .external_lex_state = 1},
  [164] = {.lex_state = 7, .external_lex_state = 1},
  [165] = {.lex_state = 1, .external_lex_state = 1},
  [166] = {.lex_state = 4, .external_lex_state = 1},
  [167] = {.lex_state = 75, .external_lex_state = 1},
  [168] = {.lex_state = 4, .external_lex_state = 1},
  [169] = {.lex_state = 75},
  [170] = {.lex_state = 4, .external_lex_state = 1},
  [171] = {.lex_state = 75, .external_lex_state = 1},
  [172] = {.lex_state = 75, .external_lex_state = 1},
  [173] = {.lex_state = 75, .external_lex_state = 1},
  [174] = {.lex_state = 75, .external_lex_state = 1},
  [175] = {.lex_state = 75, .external_lex_state = 1},
  [176] = {.lex_state = 75, .external_lex_state = 1},
  [177] = {.lex_state = 75, .external_lex_state = 1},
  [178] = {.lex_state = 75, .external_lex_state = 1},
  [179] = {.lex_state = 75, .external_lex_state = 1},
  [180] = {.lex_state = 3, .external_lex_state = 1},
  [181] = {.lex_state = 75, .external_lex_state = 1},
  [182] = {.lex_state = 75, .external_lex_state = 1},
  [183] = {.lex_state = 75, .external_lex_state = 1},
  [184] = {.lex_state = 75, .external_lex_state = 1},
  [185] = {.lex_state = 75, .external_lex_state = 1},
  [186] = {.lex_state = 75, .external_lex_state = 1},
  [187] = {.lex_state = 75, .external_lex_state = 1},
  [188] = {.lex_state = 75, .external_lex_state = 1},
  [189] = {.lex_state = 75, .external_lex_state = 1},
  [190] = {.lex_state = 75, .external_lex_state = 1},
  [191] = {.lex_state = 75, .external_lex_state = 1},
  [192] = {.lex_state = 75, .external_lex_state = 1},
  [193] = {.lex_state = 75, .external_lex_state = 1},
  [194] = {.lex_state = 75, .external_lex_state = 1},
  [195] = {.lex_state = 75},
  [196] = {.lex_state = 75, .external_lex_state = 1},
  [197] = {.lex_state = 75},
  [198] = {.lex_state = 75},
  [199] = {.lex_state = 75},
  [200] = {.lex_state = 75},
  [201] = {.lex_state = 75},
  [202] = {.lex_state = 75},
  [203] = {.lex_state = 75},
  [204] = {.lex_state = 75},
  [205] = {.lex_state = 75},
  [206] = {.lex_state = 75},
  [207] = {.lex_state = 75},
  [208] = {.lex_state = 75, .external_lex_state = 1},
  [209] = {.lex_state = 75, .external_lex_state = 1},
  [210] = {.lex_state = 75, .external_lex_state = 1},
  [211] = {.lex_state = 75},
  [212] = {.lex_state = 75, .external_lex_state = 1},
  [213] = {.lex_state = 75, .external_lex_state = 1},
  [214] = {.lex_state = 75, .external_lex_state = 1},
  [215] = {.lex_state = 75, .external_lex_state = 1},
  [216] = {.lex_state = 75},
  [217] = {.lex_state = 75},
  [218] = {.lex_state = 75},
  [219] = {.lex_state = 75},
  [220] = {.lex_state = 75},
  [221] = {.lex_state = 75},
  [222] = {.lex_state = 75},
  [223] = {.lex_state = 75},
  [224] = {.lex_state = 75},
  [225] = {.lex_state = 75},
  [226] = {.lex_state = 75},
  [227] = {.lex_state = 75},
  [228] = {.lex_state = 75},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 75},
  [232] = {.lex_state = 75},
  [233] = {.lex_state = 8, .external_lex_state = 1},
  [234] = {.lex_state = 8, .external_lex_state = 1},
  [235] = {.lex_state = 8, .external_lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 75},
  [238] = {.lex_state = 8, .external_lex_state = 1},
  [239] = {.lex_state = 8, .external_lex_state = 1},
  [240] = {.lex_state = 8, .external_lex_state = 1},
  [241] = {.lex_state = 8, .external_lex_state = 1},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 11},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 75},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 75},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 11},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 11},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 75},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 75},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 75},
  [291] = {.lex_state = 75},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 75},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 75},
  [301] = {.lex_state = 75},
  [302] = {.lex_state = 75},
  [303] = {.lex_state = 142},
  [304] = {.lex_state = 75},
  [305] = {.lex_state = 75},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 75},
  [308] = {.lex_state = 75},
  [309] = {.lex_state = 75},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 75},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 142},
  [316] = {.lex_state = 75},
  [317] = {(TSStateId)(-1)},
  [318] = {(TSStateId)(-1)},
  [319] = {(TSStateId)(-1)},
  [320] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_single_line_comment] = STATE(0),
    [sym_multi_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__normal_bare_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__identifier_char] = ACTIONS(1),
    [sym___identifier_char_no_digit] = ACTIONS(1),
    [sym___identifier_char_no_digit_sign] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_decimal64] = ACTIONS(1),
    [anon_sym_decimal128] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_currency] = ACTIONS(1),
    [anon_sym_email] = ACTIONS(1),
    [anon_sym_hostname] = ACTIONS(1),
    [anon_sym_ipv4] = ACTIONS(1),
    [anon_sym_ipv6] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_irl] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_escaped_string_token1] = ACTIONS(1),
    [aux_sym_escape_token2] = ACTIONS(1),
    [aux_sym_escape_token3] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__octal_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [sym__bom] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_single_line_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(313),
    [sym_node] = STATE(16),
    [sym_identifier] = STATE(61),
    [sym__bare_identifier] = STATE(193),
    [sym_type] = STATE(232),
    [sym_string] = STATE(193),
    [sym_escaped_string] = STATE(178),
    [sym_raw_string] = STATE(178),
    [sym__sign] = STATE(180),
    [sym_linespace] = STATE(41),
    [sym__newline] = STATE(157),
    [sym__ws] = STATE(157),
    [sym__unicode_space] = STATE(157),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__normal_bare_identifier] = ACTIONS(9),
    [anon_sym_SLASH_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_CR] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_CR_LF] = ACTIONS(25),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_4] = ACTIONS(25),
    [sym__bom] = ACTIONS(25),
    [anon_sym_TAB] = ACTIONS(25),
    [anon_sym_5] = ACTIONS(25),
    [anon_sym_6] = ACTIONS(25),
    [anon_sym_7] = ACTIONS(25),
    [anon_sym_8] = ACTIONS(25),
    [anon_sym_9] = ACTIONS(25),
    [anon_sym_10] = ACTIONS(25),
    [anon_sym_11] = ACTIONS(25),
    [anon_sym_12] = ACTIONS(25),
    [anon_sym_13] = ACTIONS(25),
    [anon_sym_14] = ACTIONS(25),
    [anon_sym_15] = ACTIONS(25),
    [anon_sym_16] = ACTIONS(25),
    [anon_sym_17] = ACTIONS(25),
    [anon_sym_18] = ACTIONS(25),
    [anon_sym_19] = ACTIONS(25),
    [anon_sym_20] = ACTIONS(25),
    [anon_sym_21] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(29),
  },
  [2] = {
    [sym__node_prop_or_arg] = STATE(190),
    [sym_node_children] = STATE(92),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(156),
    [sym_identifier] = STATE(304),
    [sym__bare_identifier] = STATE(291),
    [sym_keyword] = STATE(192),
    [sym_prop] = STATE(190),
    [sym_value] = STATE(190),
    [sym_type] = STATE(230),
    [sym_string] = STATE(177),
    [sym_escaped_string] = STATE(178),
    [sym_raw_string] = STATE(178),
    [sym_number] = STATE(192),
    [sym__decimal] = STATE(194),
    [sym__integer] = STATE(121),
    [sym__sign] = STATE(246),
    [sym__hex] = STATE(194),
    [sym__octal] = STATE(194),
    [sym__binary] = STATE(194),
    [sym__escline] = STATE(38),
    [sym__newline] = STATE(156),
    [sym__ws] = STATE(26),
    [sym__unicode_space] = STATE(26),
    [sym_single_line_comment] = STATE(2),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(26),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_CR_LF] = ACTIONS(37),
    [anon_sym_] = ACTIONS(37),
    [anon_sym_2] = ACTIONS(37),
    [anon_sym_3] = ACTIONS(37),
    [anon_sym_4] = ACTIONS(37),
    [sym__bom] = ACTIONS(59),
    [anon_sym_TAB] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_8] = ACTIONS(59),
    [anon_sym_9] = ACTIONS(59),
    [anon_sym_10] = ACTIONS(59),
    [anon_sym_11] = ACTIONS(59),
    [anon_sym_12] = ACTIONS(59),
    [anon_sym_13] = ACTIONS(59),
    [anon_sym_14] = ACTIONS(59),
    [anon_sym_15] = ACTIONS(59),
    [anon_sym_16] = ACTIONS(59),
    [anon_sym_17] = ACTIONS(59),
    [anon_sym_18] = ACTIONS(59),
    [anon_sym_19] = ACTIONS(59),
    [anon_sym_20] = ACTIONS(59),
    [anon_sym_21] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__eof] = ACTIONS(37),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(190),
    [sym_node_children] = STATE(86),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(125),
    [sym_identifier] = STATE(304),
    [sym__bare_identifier] = STATE(291),
    [sym_keyword] = STATE(192),
    [sym_prop] = STATE(190),
    [sym_value] = STATE(190),
    [sym_type] = STATE(230),
    [sym_string] = STATE(177),
    [sym_escaped_string] = STATE(178),
    [sym_raw_string] = STATE(178),
    [sym_number] = STATE(192),
    [sym__decimal] = STATE(194),
    [sym__integer] = STATE(121),
    [sym__sign] = STATE(246),
    [sym__hex] = STATE(194),
    [sym__octal] = STATE(194),
    [sym__binary] = STATE(194),
    [sym__escline] = STATE(38),
    [sym__newline] = STATE(125),
    [sym__ws] = STATE(26),
    [sym__unicode_space] = STATE(26),
    [sym_single_line_comment] = STATE(3),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(26),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_CR_LF] = ACTIONS(63),
    [anon_sym_] = ACTIONS(63),
    [anon_sym_2] = ACTIONS(63),
    [anon_sym_3] = ACTIONS(63),
    [anon_sym_4] = ACTIONS(63),
    [sym__bom] = ACTIONS(59),
    [anon_sym_TAB] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_8] = ACTIONS(59),
    [anon_sym_9] = ACTIONS(59),
    [anon_sym_10] = ACTIONS(59),
    [anon_sym_11] = ACTIONS(59),
    [anon_sym_12] = ACTIONS(59),
    [anon_sym_13] = ACTIONS(59),
    [anon_sym_14] = ACTIONS(59),
    [anon_sym_15] = ACTIONS(59),
    [anon_sym_16] = ACTIONS(59),
    [anon_sym_17] = ACTIONS(59),
    [anon_sym_18] = ACTIONS(59),
    [anon_sym_19] = ACTIONS(59),
    [anon_sym_20] = ACTIONS(59),
    [anon_sym_21] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__eof] = ACTIONS(63),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(190),
    [sym_node_children] = STATE(101),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(143),
    [sym_identifier] = STATE(304),
    [sym__bare_identifier] = STATE(291),
    [sym_keyword] = STATE(192),
    [sym_prop] = STATE(190),
    [sym_value] = STATE(190),
    [sym_type] = STATE(230),
    [sym_string] = STATE(177),
    [sym_escaped_string] = STATE(178),
    [sym_raw_string] = STATE(178),
    [sym_number] = STATE(192),
    [sym__decimal] = STATE(194),
    [sym__integer] = STATE(121),
    [sym__sign] = STATE(246),
    [sym__hex] = STATE(194),
    [sym__octal] = STATE(194),
    [sym__binary] = STATE(194),
    [sym__escline] = STATE(38),
    [sym__newline] = STATE(143),
    [sym__ws] = STATE(26),
    [sym__unicode_space] = STATE(26),
    [sym_single_line_comment] = STATE(4),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(26),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_CR_LF] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_2] = ACTIONS(67),
    [anon_sym_3] = ACTIONS(67),
    [anon_sym_4] = ACTIONS(67),
    [sym__bom] = ACTIONS(59),
    [anon_sym_TAB] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_8] = ACTIONS(59),
    [anon_sym_9] = ACTIONS(59),
    [anon_sym_10] = ACTIONS(59),
    [anon_sym_11] = ACTIONS(59),
    [anon_sym_12] = ACTIONS(59),
    [anon_sym_13] = ACTIONS(59),
    [anon_sym_14] = ACTIONS(59),
    [anon_sym_15] = ACTIONS(59),
    [anon_sym_16] = ACTIONS(59),
    [anon_sym_17] = ACTIONS(59),
    [anon_sym_18] = ACTIONS(59),
    [anon_sym_19] = ACTIONS(59),
    [anon_sym_20] = ACTIONS(59),
    [anon_sym_21] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__eof] = ACTIONS(67),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(190),
    [sym_node_children] = STATE(94),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(147),
    [sym_identifier] = STATE(304),
    [sym__bare_identifier] = STATE(291),
    [sym_keyword] = STATE(192),
    [sym_prop] = STATE(190),
    [sym_value] = STATE(190),
    [sym_type] = STATE(230),
    [sym_string] = STATE(177),
    [sym_escaped_string] = STATE(178),
    [sym_raw_string] = STATE(178),
    [sym_number] = STATE(192),
    [sym__decimal] = STATE(194),
    [sym__integer] = STATE(121),
    [sym__sign] = STATE(246),
    [sym__hex] = STATE(194),
    [sym__octal] = STATE(194),
    [sym__binary] = STATE(194),
    [sym__escline] = STATE(38),
    [sym__newline] = STATE(147),
    [sym__ws] = STATE(26),
    [sym__unicode_space] = STATE(26),
    [sym_single_line_comment] = STATE(5),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(26),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_CR_LF] = ACTIONS(71),
    [anon_sym_] = ACTIONS(71),
    [anon_sym_2] = ACTIONS(71),
    [anon_sym_3] = ACTIONS(71),
    [anon_sym_4] = ACTIONS(71),
    [sym__bom] = ACTIONS(59),
    [anon_sym_TAB] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_8] = ACTIONS(59),
    [anon_sym_9] = ACTIONS(59),
    [anon_sym_10] = ACTIONS(59),
    [anon_sym_11] = ACTIONS(59),
    [anon_sym_12] = ACTIONS(59),
    [anon_sym_13] = ACTIONS(59),
    [anon_sym_14] = ACTIONS(59),
    [anon_sym_15] = ACTIONS(59),
    [anon_sym_16] = ACTIONS(59),
    [anon_sym_17] = ACTIONS(59),
    [anon_sym_18] = ACTIONS(59),
    [anon_sym_19] = ACTIONS(59),
    [anon_sym_20] = ACTIONS(59),
    [anon_sym_21] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__eof] = ACTIONS(71),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(190),
    [sym_node_children] = STATE(103),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(142),
    [sym_identifier] = STATE(304),
    [sym__bare_identifier] = STATE(291),
    [sym_keyword] = STATE(192),
    [sym_prop] = STATE(190),
    [sym_value] = STATE(190),
    [sym_type] = STATE(230),
    [sym_string] = STATE(177),
    [sym_escaped_string] = STATE(178),
    [sym_raw_string] = STATE(178),
    [sym_number] = STATE(192),
    [sym__decimal] = STATE(194),
    [sym__integer] = STATE(121),
    [sym__sign] = STATE(246),
    [sym__hex] = STATE(194),
    [sym__octal] = STATE(194),
    [sym__binary] = STATE(194),
    [sym__escline] = STATE(38),
    [sym__newline] = STATE(142),
    [sym__ws] = STATE(26),
    [sym__unicode_space] = STATE(26),
    [sym_single_line_comment] = STATE(6),
    [sym_multi_line_comment] = STATE(6),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(26),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_r] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_CR_LF] = ACTIONS(75),
    [anon_sym_] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_3] = ACTIONS(75),
    [anon_sym_4] = ACTIONS(75),
    [sym__bom] = ACTIONS(59),
    [anon_sym_TAB] = ACTIONS(59),
    [anon_sym_5] = ACTIONS(59),
    [anon_sym_6] = ACTIONS(59),
    [anon_sym_7] = ACTIONS(59),
    [anon_sym_8] = ACTIONS(59),
    [anon_sym_9] = ACTIONS(59),
    [anon_sym_10] = ACTIONS(59),
    [anon_sym_11] = ACTIONS(59),
    [anon_sym_12] = ACTIONS(59),
    [anon_sym_13] = ACTIONS(59),
    [anon_sym_14] = ACTIONS(59),
    [anon_sym_15] = ACTIONS(59),
    [anon_sym_16] = ACTIONS(59),
    [anon_sym_17] = ACTIONS(59),
    [anon_sym_18] = ACTIONS(59),
    [anon_sym_19] = ACTIONS(59),
    [anon_sym_20] = ACTIONS(59),
    [anon_sym_21] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__eof] = ACTIONS(75),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(79), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      sym__bom,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(119), 1,
      sym__node_space,
    STATE(121), 1,
      sym__integer,
    STATE(177), 1,
      sym_string,
    STATE(230), 1,
      sym_type,
    STATE(246), 1,
      sym__sign,
    STATE(291), 1,
      sym__bare_identifier,
    STATE(304), 1,
      sym_identifier,
    STATE(7), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(192), 2,
      sym_keyword,
      sym_number,
    ACTIONS(39), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(190), 3,
      sym__node_prop_or_arg,
      sym_prop,
      sym_value,
    STATE(194), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(85), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [130] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      sym__bom,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(119), 1,
      sym__node_space,
    STATE(121), 1,
      sym__integer,
    STATE(177), 1,
      sym_string,
    STATE(230), 1,
      sym_type,
    STATE(246), 1,
      sym__sign,
    STATE(291), 1,
      sym__bare_identifier,
    STATE(304), 1,
      sym_identifier,
    STATE(8), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(184), 2,
      sym_prop,
      sym_value,
    STATE(192), 2,
      sym_keyword,
      sym_number,
    ACTIONS(39), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(194), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(85), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [259] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      sym__bom,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(119), 1,
      sym__node_space,
    STATE(121), 1,
      sym__integer,
    STATE(177), 1,
      sym_string,
    STATE(230), 1,
      sym_type,
    STATE(246), 1,
      sym__sign,
    STATE(291), 1,
      sym__bare_identifier,
    STATE(304), 1,
      sym_identifier,
    STATE(9), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(185), 2,
      sym_prop,
      sym_value,
    STATE(192), 2,
      sym_keyword,
      sym_number,
    ACTIONS(39), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(194), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(85), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [388] = 33,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      sym__bom,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(119), 1,
      sym__node_space,
    STATE(121), 1,
      sym__integer,
    STATE(177), 1,
      sym_string,
    STATE(230), 1,
      sym_type,
    STATE(246), 1,
      sym__sign,
    STATE(291), 1,
      sym__bare_identifier,
    STATE(304), 1,
      sym_identifier,
    STATE(10), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(184), 2,
      sym_prop,
      sym_value,
    STATE(192), 2,
      sym_keyword,
      sym_number,
    ACTIONS(39), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(194), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(85), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [514] = 33,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      sym__bom,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(119), 1,
      sym__node_space,
    STATE(121), 1,
      sym__integer,
    STATE(177), 1,
      sym_string,
    STATE(230), 1,
      sym_type,
    STATE(246), 1,
      sym__sign,
    STATE(291), 1,
      sym__bare_identifier,
    STATE(304), 1,
      sym_identifier,
    STATE(11), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(185), 2,
      sym_prop,
      sym_value,
    STATE(192), 2,
      sym_keyword,
      sym_number,
    ACTIONS(39), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(194), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(85), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [640] = 8,
    ACTIONS(97), 1,
      anon_sym_BSLASH,
    ACTIONS(103), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym__escline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(12), 4,
      sym__node_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(93), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(95), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [711] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_r,
    STATE(293), 1,
      sym__sign,
    STATE(13), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(291), 2,
      sym__bare_identifier,
      sym_string,
    STATE(302), 2,
      sym_identifier,
      sym_type_annotation,
    STATE(311), 2,
      sym_escaped_string,
      sym_raw_string,
    ACTIONS(108), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(106), 28,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_email,
      anon_sym_hostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_irl,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [793] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_r,
    STATE(293), 1,
      sym__sign,
    STATE(14), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(291), 2,
      sym__bare_identifier,
      sym_string,
    STATE(300), 2,
      sym_identifier,
      sym_type_annotation,
    STATE(311), 2,
      sym_escaped_string,
      sym_raw_string,
    ACTIONS(108), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(106), 28,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_email,
      anon_sym_hostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_irl,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [875] = 20,
    ACTIONS(116), 1,
      sym__normal_bare_identifier,
    ACTIONS(119), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      anon_sym_r,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_CR,
    ACTIONS(143), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    STATE(15), 4,
      sym_node,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
    ACTIONS(140), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [969] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(16), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(21), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(35), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1064] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(17), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(31), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1159] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(18), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(33), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1254] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(19), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(33), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1349] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(20), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(24), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(31), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1444] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(21), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(48), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1539] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(22), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(40), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1634] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(23), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(25), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(34), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1729] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(24), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(42), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1824] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(25), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(39), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1919] = 8,
    ACTIONS(169), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym__escline,
    STATE(26), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(165), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(167), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1988] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(22), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(27), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(48), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2083] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(19), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(28), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(39), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2178] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(29), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(68), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2272] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(30), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(72), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2366] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(31), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2460] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(30), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(32), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2554] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(33), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2648] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(34), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2742] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(35), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2836] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(29), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(36), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2930] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(37), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(66), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3024] = 6,
    ACTIONS(175), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(165), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(167), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3088] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(39), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3182] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(40), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3276] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(41), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(70), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3370] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(42), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3464] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(37), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(43), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3558] = 6,
    ACTIONS(194), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(187), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(189), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3622] = 6,
    ACTIONS(204), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(197), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(199), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3686] = 5,
    ACTIONS(214), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 5,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(207), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(209), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(211), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3748] = 6,
    ACTIONS(204), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(44), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(197), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(199), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(217), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3812] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(48), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3906] = 20,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_CR,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(180), 1,
      sym__sign,
    STATE(232), 1,
      sym_type,
    STATE(49), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(25), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3997] = 3,
    STATE(50), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(220), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(222), 38,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4052] = 3,
    STATE(51), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(224), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(226), 38,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4107] = 3,
    STATE(52), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(228), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(230), 38,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4162] = 3,
    STATE(53), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(232), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(234), 38,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4217] = 3,
    STATE(54), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(236), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(238), 38,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4272] = 3,
    STATE(55), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(240), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(242), 38,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4327] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      anon_sym_CR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    STATE(38), 1,
      sym__escline,
    STATE(60), 1,
      aux_sym_node_repeat2,
    STATE(86), 1,
      sym_node_children,
    STATE(2), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(56), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(125), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(63), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4403] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      anon_sym_CR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    STATE(38), 1,
      sym__escline,
    STATE(76), 1,
      aux_sym_node_repeat2,
    STATE(86), 1,
      sym_node_children,
    STATE(2), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(57), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(125), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(63), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4479] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_CR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    STATE(38), 1,
      sym__escline,
    STATE(76), 1,
      aux_sym_node_repeat2,
    STATE(101), 1,
      sym_node_children,
    STATE(3), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(58), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(143), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(67), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4555] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      anon_sym_CR,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    STATE(38), 1,
      sym__escline,
    STATE(63), 1,
      aux_sym_node_repeat2,
    STATE(92), 1,
      sym_node_children,
    STATE(5), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(59), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(156), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(37), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4631] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      anon_sym_CR,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    STATE(38), 1,
      sym__escline,
    STATE(76), 1,
      aux_sym_node_repeat2,
    STATE(92), 1,
      sym_node_children,
    STATE(5), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(60), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(156), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(37), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4707] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(248), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(58), 1,
      aux_sym_node_repeat2,
    STATE(96), 1,
      sym_node_children,
    STATE(4), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(61), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(127), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(246), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4783] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_CR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    STATE(38), 1,
      sym__escline,
    STATE(57), 1,
      aux_sym_node_repeat2,
    STATE(101), 1,
      sym_node_children,
    STATE(3), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(62), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(143), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(67), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4859] = 15,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      anon_sym_CR,
    ACTIONS(244), 1,
      anon_sym_SLASH_DASH,
    STATE(38), 1,
      sym__escline,
    STATE(76), 1,
      aux_sym_node_repeat2,
    STATE(94), 1,
      sym_node_children,
    STATE(6), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(63), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(147), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(71), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4935] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(250), 1,
      anon_sym_BSLASH,
    ACTIONS(253), 1,
      sym__bom,
    ACTIONS(259), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(119), 1,
      sym__node_space,
    STATE(64), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(93), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(95), 8,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(256), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5007] = 8,
    ACTIONS(266), 1,
      anon_sym_CR,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(264), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    STATE(65), 4,
      sym_linespace,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    ACTIONS(269), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5068] = 10,
    ACTIONS(266), 1,
      anon_sym_CR,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(66), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(264), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(262), 4,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    ACTIONS(269), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5132] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      sym__bom,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_identifier,
    STATE(169), 1,
      aux_sym_node_repeat1,
    STATE(180), 1,
      sym__sign,
    STATE(195), 1,
      aux_sym_node_repeat3,
    STATE(205), 1,
      sym__escline,
    STATE(219), 1,
      sym__node_space,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(231), 1,
      sym_type,
    STATE(67), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(285), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5222] = 10,
    ACTIONS(266), 1,
      anon_sym_CR,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(68), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(264), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(262), 4,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    ACTIONS(269), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5286] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(292), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      sym__bom,
    ACTIONS(301), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym__escline,
    STATE(77), 1,
      aux_sym_node_repeat3,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(69), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(165), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(167), 8,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(298), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5354] = 10,
    ACTIONS(266), 1,
      anon_sym_CR,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(70), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(264), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(262), 4,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    ACTIONS(269), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5418] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      sym__bom,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_node_repeat1,
    STATE(180), 1,
      sym__sign,
    STATE(195), 1,
      aux_sym_node_repeat3,
    STATE(205), 1,
      sym__escline,
    STATE(219), 1,
      sym__node_space,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(237), 1,
      sym_type,
    STATE(71), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(285), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5508] = 10,
    ACTIONS(266), 1,
      anon_sym_CR,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_linespace,
      aux_sym_document_repeat1,
    STATE(72), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(264), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    STATE(157), 3,
      sym__newline,
      sym__ws,
      sym__unicode_space,
    ACTIONS(262), 4,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    ACTIONS(269), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5572] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(310), 1,
      sym__bom,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      aux_sym_node_repeat3,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(73), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(197), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(199), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(313), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5635] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(319), 1,
      sym__bom,
    ACTIONS(325), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      aux_sym_node_repeat3,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(74), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(187), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(189), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(322), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5698] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(310), 1,
      sym__bom,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      aux_sym_node_repeat3,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(75), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(197), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(199), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(313), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5761] = 13,
    ACTIONS(330), 1,
      anon_sym_BSLASH,
    ACTIONS(333), 1,
      anon_sym_CR,
    ACTIONS(335), 1,
      sym__bom,
    ACTIONS(341), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(119), 1,
      sym__node_space,
    STATE(76), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat2,
    ACTIONS(328), 11,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(338), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5830] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(344), 1,
      sym__bom,
    ACTIONS(350), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(77), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(207), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(209), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(347), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5891] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      sym__bom,
    ACTIONS(301), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      aux_sym_node_repeat3,
    STATE(114), 1,
      sym__ws,
    STATE(116), 1,
      sym__unicode_space,
    STATE(78), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(165), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(167), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(298), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5954] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(79), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(138), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(353), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6018] = 5,
    ACTIONS(361), 1,
      anon_sym_CR,
    STATE(95), 1,
      aux_sym__integer_repeat1,
    ACTIONS(359), 2,
      anon_sym__,
      sym__digit,
    STATE(80), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(357), 35,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [6070] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(81), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(154), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(363), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6134] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 1,
      anon_sym_CR,
    STATE(174), 1,
      sym__escline,
    STATE(82), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(83), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(128), 2,
      sym__node_terminator,
      sym__newline,
    STATE(167), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(367), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(371), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6198] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(83), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(126), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(373), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6262] = 4,
    ACTIONS(382), 1,
      anon_sym_CR,
    ACTIONS(379), 2,
      anon_sym__,
      sym__digit,
    STATE(84), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__integer_repeat1,
    ACTIONS(377), 35,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [6312] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      anon_sym_CR,
    STATE(174), 1,
      sym__escline,
    STATE(85), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(97), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(154), 2,
      sym__node_terminator,
      sym__newline,
    STATE(167), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(363), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(371), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6376] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(386), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(86), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(100), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(155), 2,
      sym__node_terminator,
      sym__newline,
    STATE(98), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(384), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(388), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6440] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(392), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(87), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(146), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(390), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6504] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(396), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(88), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(137), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(394), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6568] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(400), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(89), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(135), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(398), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6632] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(400), 1,
      anon_sym_CR,
    STATE(174), 1,
      sym__escline,
    STATE(88), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(90), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(135), 2,
      sym__node_terminator,
      sym__newline,
    STATE(167), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(398), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(371), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6696] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(404), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(91), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(145), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(402), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6760] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(91), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(92), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(133), 2,
      sym__node_terminator,
      sym__newline,
    STATE(93), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(406), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(410), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6824] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(404), 1,
      anon_sym_CR,
    STATE(174), 1,
      sym__escline,
    STATE(79), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(93), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(145), 2,
      sym__node_terminator,
      sym__newline,
    STATE(167), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(402), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(371), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6888] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(94), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(99), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(150), 2,
      sym__node_terminator,
      sym__newline,
    STATE(102), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(412), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(416), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6952] = 5,
    ACTIONS(422), 1,
      anon_sym_CR,
    STATE(84), 1,
      aux_sym__integer_repeat1,
    ACTIONS(420), 2,
      anon_sym__,
      sym__digit,
    STATE(95), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(418), 35,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [7004] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(89), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(96), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(110), 2,
      sym__node_terminator,
      sym__newline,
    STATE(90), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(424), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(428), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7068] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(432), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(97), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(153), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(430), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7132] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(436), 1,
      anon_sym_CR,
    STATE(174), 1,
      sym__escline,
    STATE(87), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(98), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(140), 2,
      sym__node_terminator,
      sym__newline,
    STATE(167), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(434), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(371), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7196] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(99), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(136), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(438), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7260] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(436), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(100), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(140), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(434), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7324] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(81), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(101), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(124), 2,
      sym__node_terminator,
      sym__newline,
    STATE(85), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(442), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(446), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7388] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      anon_sym_CR,
    STATE(174), 1,
      sym__escline,
    STATE(102), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(104), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(136), 2,
      sym__node_terminator,
      sym__newline,
    STATE(167), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(438), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(371), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7452] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(103), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(105), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(134), 2,
      sym__node_terminator,
      sym__newline,
    STATE(82), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(448), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(452), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7516] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(456), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(104), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(129), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(454), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7580] = 11,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(105), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(128), 2,
      sym__node_terminator,
      sym__newline,
    STATE(26), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(367), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(59), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7644] = 3,
    STATE(106), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(228), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(230), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [7690] = 5,
    ACTIONS(462), 1,
      anon_sym_CR,
    ACTIONS(460), 2,
      aux_sym_escape_token3,
      anon_sym__,
    STATE(107), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(132), 2,
      sym__hex_digit,
      aux_sym__hex_repeat1,
    ACTIONS(458), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [7740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(240), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(242), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [7788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(109), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(236), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(238), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [7836] = 3,
    STATE(110), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(466), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(464), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [7882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(111), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(232), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(234), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [7930] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(228), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(230), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [7978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(113), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(468), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(470), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [8026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(114), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(472), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(474), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [8074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(115), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(476), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(478), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [8122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(116), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(480), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(482), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [8170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(220), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(222), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [8218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(224), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(226), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [8266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(484), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_r,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(486), 29,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [8314] = 3,
    STATE(120), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(240), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(242), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8360] = 6,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(494), 1,
      anon_sym_CR,
    STATE(189), 1,
      sym__exponent,
    ACTIONS(492), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(121), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(488), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8412] = 3,
    STATE(122), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(236), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(238), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8458] = 3,
    STATE(123), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(232), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(234), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8504] = 3,
    STATE(124), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(498), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(496), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8550] = 3,
    STATE(125), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(502), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(500), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8596] = 3,
    STATE(126), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(506), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(504), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8642] = 3,
    STATE(127), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(510), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(508), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8688] = 3,
    STATE(128), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(514), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(512), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8734] = 3,
    STATE(129), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(518), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(516), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8780] = 4,
    ACTIONS(525), 1,
      anon_sym_CR,
    ACTIONS(522), 2,
      aux_sym_escape_token3,
      anon_sym__,
    STATE(130), 4,
      sym__hex_digit,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__hex_repeat1,
    ACTIONS(520), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8828] = 5,
    ACTIONS(531), 1,
      anon_sym_CR,
    STATE(149), 1,
      aux_sym__binary_repeat1,
    STATE(131), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(529), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(527), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8878] = 5,
    ACTIONS(537), 1,
      anon_sym_CR,
    ACTIONS(535), 2,
      aux_sym_escape_token3,
      anon_sym__,
    STATE(130), 2,
      sym__hex_digit,
      aux_sym__hex_repeat1,
    STATE(132), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(533), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8928] = 3,
    STATE(133), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(541), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(539), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8974] = 3,
    STATE(134), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(545), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(543), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9020] = 3,
    STATE(135), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(549), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(547), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9066] = 3,
    STATE(136), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(553), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(551), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9112] = 3,
    STATE(137), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(557), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(555), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9158] = 3,
    STATE(138), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(561), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(559), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9204] = 3,
    STATE(139), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(563), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(114), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9250] = 3,
    STATE(140), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(567), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(565), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9296] = 5,
    ACTIONS(573), 1,
      anon_sym_CR,
    STATE(131), 1,
      aux_sym__binary_repeat1,
    STATE(141), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(571), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(569), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9346] = 3,
    STATE(142), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(577), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(575), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9392] = 3,
    STATE(143), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(581), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(579), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9438] = 5,
    ACTIONS(537), 1,
      anon_sym_CR,
    ACTIONS(583), 2,
      aux_sym_escape_token3,
      anon_sym__,
    STATE(144), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(158), 2,
      sym__hex_digit,
      aux_sym__hex_repeat1,
    ACTIONS(533), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9488] = 3,
    STATE(145), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(587), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(585), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9534] = 3,
    STATE(146), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(591), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(589), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9580] = 3,
    STATE(147), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(595), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(593), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9626] = 5,
    ACTIONS(531), 1,
      anon_sym_CR,
    STATE(152), 1,
      aux_sym__binary_repeat1,
    STATE(148), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(597), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(527), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9676] = 4,
    ACTIONS(604), 1,
      anon_sym_CR,
    ACTIONS(601), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    STATE(149), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__binary_repeat1,
    ACTIONS(599), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9724] = 3,
    STATE(150), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(608), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(606), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9770] = 6,
    ACTIONS(612), 1,
      anon_sym_DOT,
    ACTIONS(614), 1,
      anon_sym_CR,
    STATE(191), 1,
      sym__exponent,
    ACTIONS(492), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(151), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(610), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9822] = 5,
    ACTIONS(618), 1,
      anon_sym_CR,
    STATE(149), 1,
      aux_sym__binary_repeat1,
    STATE(152), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(529), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(616), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9872] = 3,
    STATE(153), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(622), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(620), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9918] = 3,
    STATE(154), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(626), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(624), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9964] = 3,
    STATE(155), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(630), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(628), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10010] = 3,
    STATE(156), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(634), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(632), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10056] = 3,
    STATE(157), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(638), 4,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(636), 33,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10102] = 5,
    ACTIONS(642), 1,
      anon_sym_CR,
    ACTIONS(535), 2,
      aux_sym_escape_token3,
      anon_sym__,
    STATE(130), 2,
      sym__hex_digit,
      aux_sym__hex_repeat1,
    STATE(158), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(640), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10152] = 5,
    ACTIONS(646), 1,
      anon_sym_CR,
    STATE(183), 1,
      sym__exponent,
    ACTIONS(492), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(159), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(644), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10201] = 5,
    ACTIONS(652), 1,
      anon_sym_CR,
    STATE(162), 1,
      aux_sym__octal_repeat1,
    ACTIONS(650), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(160), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(648), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10250] = 5,
    ACTIONS(658), 1,
      anon_sym_CR,
    STATE(164), 1,
      aux_sym__octal_repeat1,
    ACTIONS(656), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(161), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(654), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10299] = 5,
    ACTIONS(662), 1,
      anon_sym_CR,
    STATE(164), 1,
      aux_sym__octal_repeat1,
    ACTIONS(656), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(162), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(660), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10348] = 5,
    ACTIONS(662), 1,
      anon_sym_CR,
    STATE(161), 1,
      aux_sym__octal_repeat1,
    ACTIONS(664), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(163), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(660), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10397] = 4,
    ACTIONS(671), 1,
      anon_sym_CR,
    ACTIONS(668), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(164), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__octal_repeat1,
    ACTIONS(666), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10444] = 5,
    ACTIONS(675), 1,
      anon_sym_CR,
    STATE(182), 1,
      sym__exponent,
    ACTIONS(492), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(165), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(673), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10493] = 4,
    ACTIONS(679), 1,
      sym__identifier_char,
    ACTIONS(682), 1,
      anon_sym_CR,
    STATE(166), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(677), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10539] = 8,
    ACTIONS(687), 1,
      anon_sym_BSLASH,
    ACTIONS(691), 1,
      anon_sym_CR,
    ACTIONS(698), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym__escline,
    STATE(167), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(684), 9,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(694), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [10593] = 5,
    ACTIONS(704), 1,
      sym__identifier_char,
    ACTIONS(706), 1,
      anon_sym_CR,
    STATE(170), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(168), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(702), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10641] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(708), 1,
      anon_sym_BSLASH,
    ACTIONS(711), 1,
      sym__bom,
    ACTIONS(717), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      aux_sym_node_repeat3,
    STATE(205), 1,
      sym__escline,
    STATE(219), 1,
      sym__node_space,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    ACTIONS(93), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    STATE(169), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(95), 4,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    ACTIONS(714), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [10705] = 5,
    ACTIONS(722), 1,
      sym__identifier_char,
    ACTIONS(724), 1,
      anon_sym_CR,
    STATE(166), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(170), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(720), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10753] = 3,
    ACTIONS(728), 1,
      anon_sym_CR,
    STATE(171), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(726), 33,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10796] = 6,
    ACTIONS(733), 1,
      anon_sym_CR,
    ACTIONS(740), 1,
      anon_sym_SLASH_STAR,
    STATE(172), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(730), 10,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(736), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [10845] = 3,
    ACTIONS(746), 1,
      anon_sym_CR,
    STATE(173), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(744), 33,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10888] = 6,
    ACTIONS(751), 1,
      anon_sym_CR,
    ACTIONS(758), 1,
      anon_sym_SLASH_STAR,
    STATE(174), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(172), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(748), 10,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(754), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [10937] = 3,
    ACTIONS(764), 1,
      anon_sym_CR,
    STATE(175), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(762), 33,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10980] = 3,
    ACTIONS(768), 1,
      anon_sym_CR,
    STATE(176), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(766), 33,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11023] = 4,
    ACTIONS(772), 1,
      anon_sym_EQ,
    ACTIONS(774), 1,
      anon_sym_CR,
    STATE(177), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(770), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11068] = 3,
    ACTIONS(778), 1,
      anon_sym_CR,
    STATE(178), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(776), 33,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11111] = 3,
    ACTIONS(782), 1,
      anon_sym_CR,
    STATE(179), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(780), 33,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11154] = 4,
    ACTIONS(786), 1,
      sym___identifier_char_no_digit,
    ACTIONS(788), 1,
      anon_sym_CR,
    STATE(180), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(784), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11199] = 3,
    ACTIONS(792), 1,
      anon_sym_CR,
    STATE(181), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(790), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11241] = 3,
    ACTIONS(646), 1,
      anon_sym_CR,
    STATE(182), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(644), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11283] = 3,
    ACTIONS(796), 1,
      anon_sym_CR,
    STATE(183), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(794), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11325] = 3,
    ACTIONS(800), 1,
      anon_sym_CR,
    STATE(184), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(798), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11367] = 3,
    ACTIONS(804), 1,
      anon_sym_CR,
    STATE(185), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(802), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11409] = 3,
    ACTIONS(808), 1,
      anon_sym_CR,
    STATE(186), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(806), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11451] = 3,
    ACTIONS(812), 1,
      anon_sym_CR,
    STATE(187), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(810), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11493] = 3,
    ACTIONS(816), 1,
      anon_sym_CR,
    STATE(188), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(814), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11535] = 3,
    ACTIONS(614), 1,
      anon_sym_CR,
    STATE(189), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(610), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11577] = 3,
    ACTIONS(333), 1,
      anon_sym_CR,
    STATE(190), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(328), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11619] = 3,
    ACTIONS(675), 1,
      anon_sym_CR,
    STATE(191), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(673), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11661] = 3,
    ACTIONS(774), 1,
      anon_sym_CR,
    STATE(192), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(770), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11703] = 3,
    ACTIONS(818), 1,
      anon_sym_CR,
    STATE(193), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(772), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11745] = 3,
    ACTIONS(822), 1,
      anon_sym_CR,
    STATE(194), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(820), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11787] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(824), 1,
      anon_sym_BSLASH,
    ACTIONS(827), 1,
      sym__bom,
    ACTIONS(833), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym__escline,
    STATE(199), 1,
      aux_sym_node_repeat3,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(195), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(165), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(167), 4,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    ACTIONS(830), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11847] = 3,
    ACTIONS(838), 1,
      anon_sym_CR,
    STATE(196), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(836), 32,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11889] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(840), 1,
      anon_sym_CR,
    ACTIONS(846), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 1,
      sym__newline,
    STATE(197), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(211), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(842), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(844), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11940] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(848), 1,
      sym__bom,
    ACTIONS(854), 1,
      anon_sym_SLASH_STAR,
    STATE(202), 1,
      aux_sym_node_repeat3,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(198), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(197), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(851), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11995] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(857), 1,
      sym__bom,
    ACTIONS(863), 1,
      anon_sym_SLASH_STAR,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    ACTIONS(207), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    STATE(199), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(209), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(860), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12048] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(866), 1,
      anon_sym_CR,
    ACTIONS(872), 1,
      anon_sym_SLASH_SLASH,
    STATE(51), 1,
      sym__newline,
    STATE(200), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(201), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(868), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(870), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12099] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(872), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(874), 1,
      anon_sym_CR,
    STATE(50), 1,
      sym__newline,
    STATE(201), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(211), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(876), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(844), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12150] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(878), 1,
      sym__bom,
    ACTIONS(884), 1,
      anon_sym_SLASH_STAR,
    STATE(199), 1,
      aux_sym_node_repeat3,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(202), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(187), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(189), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(881), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12205] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(848), 1,
      sym__bom,
    ACTIONS(854), 1,
      anon_sym_SLASH_STAR,
    STATE(199), 1,
      aux_sym_node_repeat3,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(203), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(197), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(199), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(851), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12260] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(887), 1,
      anon_sym_CR,
    ACTIONS(891), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 1,
      sym__newline,
    STATE(204), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(211), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(889), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(844), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12311] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(827), 1,
      sym__bom,
    ACTIONS(833), 1,
      anon_sym_SLASH_STAR,
    STATE(203), 1,
      aux_sym_node_repeat3,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(205), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(165), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(167), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(830), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12366] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(887), 1,
      anon_sym_CR,
    ACTIONS(891), 1,
      anon_sym_SLASH_SLASH,
    STATE(221), 1,
      sym__newline,
    STATE(206), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(204), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(889), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(893), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12417] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(840), 1,
      anon_sym_CR,
    ACTIONS(846), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 1,
      sym__newline,
    STATE(207), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(842), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(895), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12468] = 3,
    ACTIONS(899), 1,
      anon_sym_CR,
    STATE(208), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(897), 30,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [12508] = 3,
    ACTIONS(903), 1,
      anon_sym_CR,
    STATE(209), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(901), 30,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [12548] = 3,
    ACTIONS(907), 1,
      anon_sym_CR,
    STATE(210), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(905), 30,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [12588] = 5,
    ACTIONS(207), 1,
      anon_sym_CR,
    ACTIONS(912), 1,
      anon_sym_SLASH_STAR,
    STATE(211), 5,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(209), 7,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(909), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12632] = 3,
    ACTIONS(917), 1,
      anon_sym_CR,
    STATE(212), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(915), 30,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [12672] = 3,
    ACTIONS(921), 1,
      anon_sym_CR,
    STATE(213), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(919), 30,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [12712] = 3,
    ACTIONS(925), 1,
      anon_sym_CR,
    STATE(214), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(923), 30,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [12752] = 3,
    ACTIONS(929), 1,
      anon_sym_CR,
    STATE(215), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(927), 30,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [12792] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(216), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(240), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(242), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [12832] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(217), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(228), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(230), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [12872] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      sym__bom,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      aux_sym_node_repeat3,
    STATE(205), 1,
      sym__escline,
    STATE(219), 1,
      sym__node_space,
    STATE(226), 1,
      sym__unicode_space,
    STATE(227), 1,
      aux_sym_node_repeat1,
    STATE(228), 1,
      sym__ws,
    STATE(218), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(285), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12930] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(219), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(484), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(486), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [12970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(220), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(222), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(221), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(224), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(226), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13050] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(222), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(236), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(238), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(223), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(468), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(470), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(232), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(234), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13170] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(476), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(478), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13210] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(226), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(480), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(482), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13250] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(283), 1,
      sym__bom,
    ACTIONS(287), 1,
      anon_sym_SLASH_STAR,
    STATE(169), 1,
      aux_sym_node_repeat1,
    STATE(195), 1,
      aux_sym_node_repeat3,
    STATE(205), 1,
      sym__escline,
    STATE(219), 1,
      sym__node_space,
    STATE(226), 1,
      sym__unicode_space,
    STATE(228), 1,
      sym__ws,
    STATE(227), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(285), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13308] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(228), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(472), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
    ACTIONS(474), 25,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
      anon_sym_SLASH_STAR,
  [13348] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(933), 1,
      anon_sym_r,
    STATE(121), 1,
      sym__integer,
    STATE(186), 1,
      sym_value,
    STATE(230), 1,
      sym_type,
    STATE(251), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(229), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(931), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(192), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(194), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [13416] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(933), 1,
      anon_sym_r,
    STATE(121), 1,
      sym__integer,
    STATE(251), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(230), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(931), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(188), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(194), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [13475] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(231), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13515] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    STATE(62), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(232), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13555] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(840), 1,
      anon_sym_CR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(937), 1,
      sym__eof,
    STATE(112), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(233), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(842), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13589] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(939), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(234), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(941), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13621] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(943), 1,
      anon_sym_CR,
    STATE(106), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(235), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(945), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13653] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(949), 1,
      sym__digit,
    STATE(236), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(947), 10,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_r,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [13679] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_r,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym_identifier,
    STATE(180), 1,
      sym__sign,
    STATE(178), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(193), 2,
      sym__bare_identifier,
      sym_string,
    STATE(237), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13719] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(887), 1,
      anon_sym_CR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(951), 1,
      sym__eof,
    STATE(217), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(238), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(889), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13753] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(953), 1,
      anon_sym_CR,
    STATE(240), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(318), 1,
      sym__newline,
    STATE(239), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(955), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13785] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(957), 1,
      anon_sym_CR,
    ACTIONS(961), 1,
      aux_sym_single_line_comment_token1,
    STATE(240), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(959), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13812] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(964), 2,
      anon_sym_CR,
      aux_sym_single_line_comment_token1,
    STATE(241), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(966), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13836] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(972), 1,
      aux_sym_escape_token1,
    ACTIONS(974), 1,
      aux_sym_escape_token2,
    ACTIONS(976), 1,
      anon_sym_BSLASHu_LBRACE,
    STATE(247), 1,
      aux_sym_escaped_string_repeat1,
    STATE(257), 1,
      sym_escape,
    STATE(242), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13868] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(970), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(972), 1,
      aux_sym_escape_token1,
    ACTIONS(974), 1,
      aux_sym_escape_token2,
    ACTIONS(976), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      aux_sym_escaped_string_repeat1,
    STATE(257), 1,
      sym_escape,
    STATE(243), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13900] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(982), 1,
      sym__digit,
    STATE(244), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(980), 6,
      sym___identifier_char_no_digit,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [13922] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(970), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(972), 1,
      aux_sym_escape_token1,
    ACTIONS(974), 1,
      aux_sym_escape_token2,
    ACTIONS(976), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(984), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      aux_sym_escaped_string_repeat1,
    STATE(257), 1,
      sym_escape,
    STATE(245), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13954] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(784), 1,
      anon_sym_EQ,
    ACTIONS(986), 1,
      sym___identifier_char_no_digit,
    ACTIONS(988), 1,
      anon_sym_0x,
    ACTIONS(990), 1,
      anon_sym_0o,
    ACTIONS(992), 1,
      anon_sym_0b,
    STATE(151), 1,
      sym__integer,
    STATE(246), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13986] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(994), 1,
      anon_sym_DQUOTE,
    ACTIONS(996), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(999), 1,
      aux_sym_escape_token1,
    ACTIONS(1002), 1,
      aux_sym_escape_token2,
    ACTIONS(1005), 1,
      anon_sym_BSLASHu_LBRACE,
    STATE(257), 1,
      sym_escape,
    STATE(247), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_escaped_string_repeat1,
  [14016] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(970), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(972), 1,
      aux_sym_escape_token1,
    ACTIONS(974), 1,
      aux_sym_escape_token2,
    ACTIONS(976), 1,
      anon_sym_BSLASHu_LBRACE,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    STATE(242), 1,
      aux_sym_escaped_string_repeat1,
    STATE(257), 1,
      sym_escape,
    STATE(248), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14048] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1012), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1016), 1,
      aux_sym_commented_block_token1,
    STATE(120), 1,
      sym_commented_block,
    ACTIONS(1014), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(249), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14072] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1020), 2,
      aux_sym_escaped_string_token1,
      aux_sym_escape_token2,
    STATE(250), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1018), 3,
      anon_sym_DQUOTE,
      aux_sym_escape_token1,
      anon_sym_BSLASHu_LBRACE,
  [14092] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(988), 1,
      anon_sym_0x,
    ACTIONS(990), 1,
      anon_sym_0o,
    ACTIONS(992), 1,
      anon_sym_0b,
    STATE(151), 1,
      sym__integer,
    STATE(251), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14118] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1022), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1026), 1,
      aux_sym_commented_block_token1,
    STATE(320), 1,
      sym_commented_block,
    ACTIONS(1024), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(252), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14142] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1028), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1032), 1,
      aux_sym_commented_block_token1,
    STATE(216), 1,
      sym_commented_block,
    ACTIONS(1030), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(253), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14166] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1034), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1038), 1,
      aux_sym_commented_block_token1,
    STATE(109), 1,
      sym_commented_block,
    ACTIONS(1036), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(254), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14190] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(947), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH,
    STATE(255), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(949), 3,
      sym__normal_bare_identifier,
      anon_sym_r,
      anon_sym_PLUS,
  [14210] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1042), 2,
      aux_sym_escaped_string_token1,
      aux_sym_escape_token2,
    STATE(256), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1040), 3,
      anon_sym_DQUOTE,
      aux_sym_escape_token1,
      anon_sym_BSLASHu_LBRACE,
  [14230] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1046), 2,
      aux_sym_escaped_string_token1,
      aux_sym_escape_token2,
    STATE(257), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1044), 3,
      anon_sym_DQUOTE,
      aux_sym_escape_token1,
      anon_sym_BSLASHu_LBRACE,
  [14250] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1012), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1016), 1,
      aux_sym_commented_block_token1,
    STATE(122), 1,
      sym_commented_block,
    ACTIONS(1014), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(258), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14274] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1034), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1038), 1,
      aux_sym_commented_block_token1,
    STATE(108), 1,
      sym_commented_block,
    ACTIONS(1036), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(259), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14298] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1052), 1,
      aux_sym_commented_block_token1,
    STATE(54), 1,
      sym_commented_block,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(260), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14322] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1054), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1058), 1,
      aux_sym_commented_block_token1,
    STATE(267), 1,
      sym_commented_block,
    ACTIONS(1056), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(261), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14346] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      sym__digit,
    STATE(187), 1,
      sym__integer,
    STATE(294), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(262), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14370] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1054), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1058), 1,
      aux_sym_commented_block_token1,
    STATE(269), 1,
      sym_commented_block,
    ACTIONS(1056), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(263), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14394] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1052), 1,
      aux_sym_commented_block_token1,
    STATE(55), 1,
      sym_commented_block,
    ACTIONS(1050), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(264), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14418] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1028), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1032), 1,
      aux_sym_commented_block_token1,
    STATE(222), 1,
      sym_commented_block,
    ACTIONS(1030), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(265), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14442] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1010), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1022), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1026), 1,
      aux_sym_commented_block_token1,
    STATE(319), 1,
      sym_commented_block,
    ACTIONS(1024), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(266), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(267), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(238), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(232), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(268), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(234), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(240), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(269), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(242), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14517] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1062), 1,
      sym__identifier_char,
    ACTIONS(677), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(270), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
  [14536] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1065), 1,
      sym__identifier_char,
    STATE(272), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(702), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(271), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14557] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1065), 1,
      sym__identifier_char,
    STATE(270), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(720), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(272), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14578] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1067), 1,
      anon_sym_DQUOTE,
    ACTIONS(1069), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym__raw_string_quotes,
    STATE(307), 1,
      sym__raw_string_hash,
    STATE(273), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14601] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1067), 1,
      anon_sym_DQUOTE,
    ACTIONS(1069), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym__raw_string_quotes,
    STATE(306), 1,
      sym__raw_string_hash,
    STATE(274), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14624] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1071), 1,
      anon_sym_DQUOTE,
    ACTIONS(1073), 1,
      anon_sym_POUND,
    STATE(176), 2,
      sym__raw_string_hash,
      sym__raw_string_quotes,
    STATE(275), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14645] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1067), 1,
      anon_sym_DQUOTE,
    ACTIONS(1069), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym__raw_string_quotes,
    STATE(312), 1,
      sym__raw_string_hash,
    STATE(276), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14668] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1075), 1,
      anon_sym_RBRACE,
    ACTIONS(1077), 1,
      aux_sym_escape_token3,
    STATE(277), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_escape_repeat1,
  [14686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(278), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1080), 3,
      sym__identifier_char,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [14702] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    ACTIONS(1084), 1,
      aux_sym_escape_token3,
    STATE(277), 1,
      aux_sym_escape_repeat1,
    STATE(279), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14722] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1086), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
    STATE(280), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14737] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1084), 1,
      aux_sym_escape_token3,
    STATE(279), 1,
      aux_sym_escape_repeat1,
    STATE(281), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1088), 2,
      anon_sym_RBRACE,
      aux_sym_escape_token3,
    STATE(282), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14769] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    STATE(233), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(283), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14786] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      sym__digit,
    STATE(159), 1,
      sym__integer,
    STATE(284), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14803] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    STATE(234), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(285), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1090), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(286), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14835] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(287), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14852] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      sym__digit,
    STATE(165), 1,
      sym__integer,
    STATE(288), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14869] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    STATE(238), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(289), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14886] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(290), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(772), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(291), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1092), 1,
      aux_sym_escape_token3,
    STATE(107), 1,
      sym__hex_digit,
    STATE(292), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14933] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(986), 1,
      sym___identifier_char_no_digit,
    STATE(293), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14950] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      sym__digit,
    STATE(196), 1,
      sym__integer,
    STATE(294), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(295), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14982] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(935), 1,
      aux_sym_single_line_comment_token1,
    STATE(235), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(296), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(744), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
    STATE(297), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(762), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
    STATE(298), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15029] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1096), 1,
      aux_sym_escape_token3,
    STATE(144), 1,
      sym__hex_digit,
    STATE(299), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    STATE(300), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15060] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1100), 1,
      anon_sym_DQUOTE,
    STATE(301), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    STATE(302), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15088] = 4,
    ACTIONS(1104), 1,
      aux_sym__raw_string_quotes_token1,
    ACTIONS(1106), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1108), 1,
      anon_sym_SLASH_STAR,
    STATE(303), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1110), 1,
      anon_sym_EQ,
    STATE(304), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1112), 1,
      anon_sym_DQUOTE,
    STATE(305), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1114), 1,
      anon_sym_POUND,
    STATE(306), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(307), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(308), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(309), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1116), 1,
      aux_sym__octal_token1,
    STATE(310), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(311), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1118), 1,
      anon_sym_POUND,
    STATE(312), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15228] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      ts_builtin_sym_end,
    STATE(313), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1122), 1,
      aux_sym__octal_token1,
    STATE(314), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15256] = 4,
    ACTIONS(1106), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1108), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1124), 1,
      aux_sym__raw_string_quotes_token1,
    STATE(315), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(316), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15284] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [15288] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [15292] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [15296] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 514,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 711,
  [SMALL_STATE(14)] = 793,
  [SMALL_STATE(15)] = 875,
  [SMALL_STATE(16)] = 969,
  [SMALL_STATE(17)] = 1064,
  [SMALL_STATE(18)] = 1159,
  [SMALL_STATE(19)] = 1254,
  [SMALL_STATE(20)] = 1349,
  [SMALL_STATE(21)] = 1444,
  [SMALL_STATE(22)] = 1539,
  [SMALL_STATE(23)] = 1634,
  [SMALL_STATE(24)] = 1729,
  [SMALL_STATE(25)] = 1824,
  [SMALL_STATE(26)] = 1919,
  [SMALL_STATE(27)] = 1988,
  [SMALL_STATE(28)] = 2083,
  [SMALL_STATE(29)] = 2178,
  [SMALL_STATE(30)] = 2272,
  [SMALL_STATE(31)] = 2366,
  [SMALL_STATE(32)] = 2460,
  [SMALL_STATE(33)] = 2554,
  [SMALL_STATE(34)] = 2648,
  [SMALL_STATE(35)] = 2742,
  [SMALL_STATE(36)] = 2836,
  [SMALL_STATE(37)] = 2930,
  [SMALL_STATE(38)] = 3024,
  [SMALL_STATE(39)] = 3088,
  [SMALL_STATE(40)] = 3182,
  [SMALL_STATE(41)] = 3276,
  [SMALL_STATE(42)] = 3370,
  [SMALL_STATE(43)] = 3464,
  [SMALL_STATE(44)] = 3558,
  [SMALL_STATE(45)] = 3622,
  [SMALL_STATE(46)] = 3686,
  [SMALL_STATE(47)] = 3748,
  [SMALL_STATE(48)] = 3812,
  [SMALL_STATE(49)] = 3906,
  [SMALL_STATE(50)] = 3997,
  [SMALL_STATE(51)] = 4052,
  [SMALL_STATE(52)] = 4107,
  [SMALL_STATE(53)] = 4162,
  [SMALL_STATE(54)] = 4217,
  [SMALL_STATE(55)] = 4272,
  [SMALL_STATE(56)] = 4327,
  [SMALL_STATE(57)] = 4403,
  [SMALL_STATE(58)] = 4479,
  [SMALL_STATE(59)] = 4555,
  [SMALL_STATE(60)] = 4631,
  [SMALL_STATE(61)] = 4707,
  [SMALL_STATE(62)] = 4783,
  [SMALL_STATE(63)] = 4859,
  [SMALL_STATE(64)] = 4935,
  [SMALL_STATE(65)] = 5007,
  [SMALL_STATE(66)] = 5068,
  [SMALL_STATE(67)] = 5132,
  [SMALL_STATE(68)] = 5222,
  [SMALL_STATE(69)] = 5286,
  [SMALL_STATE(70)] = 5354,
  [SMALL_STATE(71)] = 5418,
  [SMALL_STATE(72)] = 5508,
  [SMALL_STATE(73)] = 5572,
  [SMALL_STATE(74)] = 5635,
  [SMALL_STATE(75)] = 5698,
  [SMALL_STATE(76)] = 5761,
  [SMALL_STATE(77)] = 5830,
  [SMALL_STATE(78)] = 5891,
  [SMALL_STATE(79)] = 5954,
  [SMALL_STATE(80)] = 6018,
  [SMALL_STATE(81)] = 6070,
  [SMALL_STATE(82)] = 6134,
  [SMALL_STATE(83)] = 6198,
  [SMALL_STATE(84)] = 6262,
  [SMALL_STATE(85)] = 6312,
  [SMALL_STATE(86)] = 6376,
  [SMALL_STATE(87)] = 6440,
  [SMALL_STATE(88)] = 6504,
  [SMALL_STATE(89)] = 6568,
  [SMALL_STATE(90)] = 6632,
  [SMALL_STATE(91)] = 6696,
  [SMALL_STATE(92)] = 6760,
  [SMALL_STATE(93)] = 6824,
  [SMALL_STATE(94)] = 6888,
  [SMALL_STATE(95)] = 6952,
  [SMALL_STATE(96)] = 7004,
  [SMALL_STATE(97)] = 7068,
  [SMALL_STATE(98)] = 7132,
  [SMALL_STATE(99)] = 7196,
  [SMALL_STATE(100)] = 7260,
  [SMALL_STATE(101)] = 7324,
  [SMALL_STATE(102)] = 7388,
  [SMALL_STATE(103)] = 7452,
  [SMALL_STATE(104)] = 7516,
  [SMALL_STATE(105)] = 7580,
  [SMALL_STATE(106)] = 7644,
  [SMALL_STATE(107)] = 7690,
  [SMALL_STATE(108)] = 7740,
  [SMALL_STATE(109)] = 7788,
  [SMALL_STATE(110)] = 7836,
  [SMALL_STATE(111)] = 7882,
  [SMALL_STATE(112)] = 7930,
  [SMALL_STATE(113)] = 7978,
  [SMALL_STATE(114)] = 8026,
  [SMALL_STATE(115)] = 8074,
  [SMALL_STATE(116)] = 8122,
  [SMALL_STATE(117)] = 8170,
  [SMALL_STATE(118)] = 8218,
  [SMALL_STATE(119)] = 8266,
  [SMALL_STATE(120)] = 8314,
  [SMALL_STATE(121)] = 8360,
  [SMALL_STATE(122)] = 8412,
  [SMALL_STATE(123)] = 8458,
  [SMALL_STATE(124)] = 8504,
  [SMALL_STATE(125)] = 8550,
  [SMALL_STATE(126)] = 8596,
  [SMALL_STATE(127)] = 8642,
  [SMALL_STATE(128)] = 8688,
  [SMALL_STATE(129)] = 8734,
  [SMALL_STATE(130)] = 8780,
  [SMALL_STATE(131)] = 8828,
  [SMALL_STATE(132)] = 8878,
  [SMALL_STATE(133)] = 8928,
  [SMALL_STATE(134)] = 8974,
  [SMALL_STATE(135)] = 9020,
  [SMALL_STATE(136)] = 9066,
  [SMALL_STATE(137)] = 9112,
  [SMALL_STATE(138)] = 9158,
  [SMALL_STATE(139)] = 9204,
  [SMALL_STATE(140)] = 9250,
  [SMALL_STATE(141)] = 9296,
  [SMALL_STATE(142)] = 9346,
  [SMALL_STATE(143)] = 9392,
  [SMALL_STATE(144)] = 9438,
  [SMALL_STATE(145)] = 9488,
  [SMALL_STATE(146)] = 9534,
  [SMALL_STATE(147)] = 9580,
  [SMALL_STATE(148)] = 9626,
  [SMALL_STATE(149)] = 9676,
  [SMALL_STATE(150)] = 9724,
  [SMALL_STATE(151)] = 9770,
  [SMALL_STATE(152)] = 9822,
  [SMALL_STATE(153)] = 9872,
  [SMALL_STATE(154)] = 9918,
  [SMALL_STATE(155)] = 9964,
  [SMALL_STATE(156)] = 10010,
  [SMALL_STATE(157)] = 10056,
  [SMALL_STATE(158)] = 10102,
  [SMALL_STATE(159)] = 10152,
  [SMALL_STATE(160)] = 10201,
  [SMALL_STATE(161)] = 10250,
  [SMALL_STATE(162)] = 10299,
  [SMALL_STATE(163)] = 10348,
  [SMALL_STATE(164)] = 10397,
  [SMALL_STATE(165)] = 10444,
  [SMALL_STATE(166)] = 10493,
  [SMALL_STATE(167)] = 10539,
  [SMALL_STATE(168)] = 10593,
  [SMALL_STATE(169)] = 10641,
  [SMALL_STATE(170)] = 10705,
  [SMALL_STATE(171)] = 10753,
  [SMALL_STATE(172)] = 10796,
  [SMALL_STATE(173)] = 10845,
  [SMALL_STATE(174)] = 10888,
  [SMALL_STATE(175)] = 10937,
  [SMALL_STATE(176)] = 10980,
  [SMALL_STATE(177)] = 11023,
  [SMALL_STATE(178)] = 11068,
  [SMALL_STATE(179)] = 11111,
  [SMALL_STATE(180)] = 11154,
  [SMALL_STATE(181)] = 11199,
  [SMALL_STATE(182)] = 11241,
  [SMALL_STATE(183)] = 11283,
  [SMALL_STATE(184)] = 11325,
  [SMALL_STATE(185)] = 11367,
  [SMALL_STATE(186)] = 11409,
  [SMALL_STATE(187)] = 11451,
  [SMALL_STATE(188)] = 11493,
  [SMALL_STATE(189)] = 11535,
  [SMALL_STATE(190)] = 11577,
  [SMALL_STATE(191)] = 11619,
  [SMALL_STATE(192)] = 11661,
  [SMALL_STATE(193)] = 11703,
  [SMALL_STATE(194)] = 11745,
  [SMALL_STATE(195)] = 11787,
  [SMALL_STATE(196)] = 11847,
  [SMALL_STATE(197)] = 11889,
  [SMALL_STATE(198)] = 11940,
  [SMALL_STATE(199)] = 11995,
  [SMALL_STATE(200)] = 12048,
  [SMALL_STATE(201)] = 12099,
  [SMALL_STATE(202)] = 12150,
  [SMALL_STATE(203)] = 12205,
  [SMALL_STATE(204)] = 12260,
  [SMALL_STATE(205)] = 12311,
  [SMALL_STATE(206)] = 12366,
  [SMALL_STATE(207)] = 12417,
  [SMALL_STATE(208)] = 12468,
  [SMALL_STATE(209)] = 12508,
  [SMALL_STATE(210)] = 12548,
  [SMALL_STATE(211)] = 12588,
  [SMALL_STATE(212)] = 12632,
  [SMALL_STATE(213)] = 12672,
  [SMALL_STATE(214)] = 12712,
  [SMALL_STATE(215)] = 12752,
  [SMALL_STATE(216)] = 12792,
  [SMALL_STATE(217)] = 12832,
  [SMALL_STATE(218)] = 12872,
  [SMALL_STATE(219)] = 12930,
  [SMALL_STATE(220)] = 12970,
  [SMALL_STATE(221)] = 13010,
  [SMALL_STATE(222)] = 13050,
  [SMALL_STATE(223)] = 13090,
  [SMALL_STATE(224)] = 13130,
  [SMALL_STATE(225)] = 13170,
  [SMALL_STATE(226)] = 13210,
  [SMALL_STATE(227)] = 13250,
  [SMALL_STATE(228)] = 13308,
  [SMALL_STATE(229)] = 13348,
  [SMALL_STATE(230)] = 13416,
  [SMALL_STATE(231)] = 13475,
  [SMALL_STATE(232)] = 13515,
  [SMALL_STATE(233)] = 13555,
  [SMALL_STATE(234)] = 13589,
  [SMALL_STATE(235)] = 13621,
  [SMALL_STATE(236)] = 13653,
  [SMALL_STATE(237)] = 13679,
  [SMALL_STATE(238)] = 13719,
  [SMALL_STATE(239)] = 13753,
  [SMALL_STATE(240)] = 13785,
  [SMALL_STATE(241)] = 13812,
  [SMALL_STATE(242)] = 13836,
  [SMALL_STATE(243)] = 13868,
  [SMALL_STATE(244)] = 13900,
  [SMALL_STATE(245)] = 13922,
  [SMALL_STATE(246)] = 13954,
  [SMALL_STATE(247)] = 13986,
  [SMALL_STATE(248)] = 14016,
  [SMALL_STATE(249)] = 14048,
  [SMALL_STATE(250)] = 14072,
  [SMALL_STATE(251)] = 14092,
  [SMALL_STATE(252)] = 14118,
  [SMALL_STATE(253)] = 14142,
  [SMALL_STATE(254)] = 14166,
  [SMALL_STATE(255)] = 14190,
  [SMALL_STATE(256)] = 14210,
  [SMALL_STATE(257)] = 14230,
  [SMALL_STATE(258)] = 14250,
  [SMALL_STATE(259)] = 14274,
  [SMALL_STATE(260)] = 14298,
  [SMALL_STATE(261)] = 14322,
  [SMALL_STATE(262)] = 14346,
  [SMALL_STATE(263)] = 14370,
  [SMALL_STATE(264)] = 14394,
  [SMALL_STATE(265)] = 14418,
  [SMALL_STATE(266)] = 14442,
  [SMALL_STATE(267)] = 14466,
  [SMALL_STATE(268)] = 14483,
  [SMALL_STATE(269)] = 14500,
  [SMALL_STATE(270)] = 14517,
  [SMALL_STATE(271)] = 14536,
  [SMALL_STATE(272)] = 14557,
  [SMALL_STATE(273)] = 14578,
  [SMALL_STATE(274)] = 14601,
  [SMALL_STATE(275)] = 14624,
  [SMALL_STATE(276)] = 14645,
  [SMALL_STATE(277)] = 14668,
  [SMALL_STATE(278)] = 14686,
  [SMALL_STATE(279)] = 14702,
  [SMALL_STATE(280)] = 14722,
  [SMALL_STATE(281)] = 14737,
  [SMALL_STATE(282)] = 14754,
  [SMALL_STATE(283)] = 14769,
  [SMALL_STATE(284)] = 14786,
  [SMALL_STATE(285)] = 14803,
  [SMALL_STATE(286)] = 14820,
  [SMALL_STATE(287)] = 14835,
  [SMALL_STATE(288)] = 14852,
  [SMALL_STATE(289)] = 14869,
  [SMALL_STATE(290)] = 14886,
  [SMALL_STATE(291)] = 14901,
  [SMALL_STATE(292)] = 14916,
  [SMALL_STATE(293)] = 14933,
  [SMALL_STATE(294)] = 14950,
  [SMALL_STATE(295)] = 14967,
  [SMALL_STATE(296)] = 14982,
  [SMALL_STATE(297)] = 14999,
  [SMALL_STATE(298)] = 15014,
  [SMALL_STATE(299)] = 15029,
  [SMALL_STATE(300)] = 15046,
  [SMALL_STATE(301)] = 15060,
  [SMALL_STATE(302)] = 15074,
  [SMALL_STATE(303)] = 15088,
  [SMALL_STATE(304)] = 15102,
  [SMALL_STATE(305)] = 15116,
  [SMALL_STATE(306)] = 15130,
  [SMALL_STATE(307)] = 15144,
  [SMALL_STATE(308)] = 15158,
  [SMALL_STATE(309)] = 15172,
  [SMALL_STATE(310)] = 15186,
  [SMALL_STATE(311)] = 15200,
  [SMALL_STATE(312)] = 15214,
  [SMALL_STATE(313)] = 15228,
  [SMALL_STATE(314)] = 15242,
  [SMALL_STATE(315)] = 15256,
  [SMALL_STATE(316)] = 15270,
  [SMALL_STATE(317)] = 15284,
  [SMALL_STATE(318)] = 15288,
  [SMALL_STATE(319)] = 15292,
  [SMALL_STATE(320)] = 15296,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(200),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(26),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(260),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(193),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(71),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(14),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(243),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(275),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(180),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(180),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(157),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(157),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(296),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(258),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(200),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(46),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(260),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(46),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(260),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(46),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(260),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(46),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(260),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(44),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(207),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(116),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(115),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(254),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(296),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(258),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(210),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(213),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(207),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(116),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(115),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(254),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2), REDUCE(aux_sym_document_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(208),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(116),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(115),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(254),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(116),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(115),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(254),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(207),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(116),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(115),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(254),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(116),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(115),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(254),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(84),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 5),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 5),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicode_space, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicode_space, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ws, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ws, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 6),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 6),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 15),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 15),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 15),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 13),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 13),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(130),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hex_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 5),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 13),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 13),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 5),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 5),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 9),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 9),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 9),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 9),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(149),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__binary_repeat1, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 13),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 13),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 6),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 6),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 6),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 9),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 9),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linespace, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linespace, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(164),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octal_repeat1, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(166),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [687] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(200),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [694] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(46),
  [698] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(260),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 2),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(206),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(226),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(225),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(265),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_string, 2),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_string, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [736] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(46),
  [740] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(260),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_hash, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_hash, 3),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [754] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(172),
  [758] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(260),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_quotes, 3),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string_quotes, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_string, 3),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_string, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 5),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 3),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(206),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(226),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(225),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(265),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(226),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(225),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(265),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(226),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(225),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(265),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(226),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(225),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(265),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 10),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4, .production_id = 10),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2, .production_id = 4),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 2, .production_id = 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 12),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5, .production_id = 12),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(211),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(258),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 17),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 8, .production_id = 17),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 14),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6, .production_id = 14),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 16),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 7, .production_id = 16),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 7),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3, .production_id = 7),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(241),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sign, 1),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sign, 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_string_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_string_repeat1, 2), SHIFT_REPEAT(257),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_string_repeat1, 2), SHIFT_REPEAT(256),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_string_repeat1, 2), SHIFT_REPEAT(256),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_string_repeat1, 2), SHIFT_REPEAT(281),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 3),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_string_repeat1, 1),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_string_repeat1, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(278),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escape_repeat1, 2),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escape_repeat1, 2), SHIFT_REPEAT(282),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 1),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_hash, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escape_repeat1, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_kdl_external_scanner_create(void);
void tree_sitter_kdl_external_scanner_destroy(void *);
bool tree_sitter_kdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_kdl_external_scanner_serialize(void *, char *);
void tree_sitter_kdl_external_scanner_deserialize(void *, const char *, unsigned);

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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__normal_bare_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_kdl_external_scanner_create,
      tree_sitter_kdl_external_scanner_destroy,
      tree_sitter_kdl_external_scanner_scan,
      tree_sitter_kdl_external_scanner_serialize,
      tree_sitter_kdl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
