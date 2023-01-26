#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 316
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 11

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
  sym__escape = 54,
  sym__hex_digit = 55,
  aux_sym_raw_string_token1 = 56,
  aux_sym_raw_string_token2 = 57,
  anon_sym_POUND = 58,
  aux_sym_raw_string_token3 = 59,
  anon_sym_DOT = 60,
  anon_sym_e = 61,
  anon_sym_E = 62,
  anon_sym__ = 63,
  sym__digit = 64,
  anon_sym_PLUS = 65,
  anon_sym_DASH = 66,
  anon_sym_0x = 67,
  anon_sym_0o = 68,
  aux_sym__octal_token1 = 69,
  anon_sym_0b = 70,
  anon_sym_0 = 71,
  anon_sym_1 = 72,
  anon_sym_BSLASH = 73,
  anon_sym_CR = 74,
  anon_sym_LF = 75,
  anon_sym_CR_LF = 76,
  anon_sym_ = 77,
  anon_sym_2 = 78,
  anon_sym_3 = 79,
  anon_sym_4 = 80,
  sym__bom = 81,
  anon_sym_TAB = 82,
  anon_sym_5 = 83,
  anon_sym_6 = 84,
  anon_sym_7 = 85,
  anon_sym_8 = 86,
  anon_sym_9 = 87,
  anon_sym_10 = 88,
  anon_sym_11 = 89,
  anon_sym_12 = 90,
  anon_sym_13 = 91,
  anon_sym_14 = 92,
  anon_sym_15 = 93,
  anon_sym_16 = 94,
  anon_sym_17 = 95,
  anon_sym_18 = 96,
  anon_sym_19 = 97,
  anon_sym_20 = 98,
  anon_sym_21 = 99,
  anon_sym_SLASH_SLASH = 100,
  aux_sym_single_line_comment_token1 = 101,
  anon_sym_SLASH_STAR = 102,
  anon_sym_STAR_SLASH = 103,
  anon_sym_STAR = 104,
  anon_sym_SLASH = 105,
  aux_sym_commented_block_token1 = 106,
  sym__eof = 107,
  sym_document = 108,
  sym_node = 109,
  sym__node_prop_or_arg = 110,
  sym_node_children = 111,
  sym__node_space = 112,
  sym__node_terminator = 113,
  sym_identifier = 114,
  sym__bare_identifier = 115,
  sym_keyword = 116,
  sym_annotation_type = 117,
  sym_prop = 118,
  sym_value = 119,
  sym_type = 120,
  sym_string = 121,
  sym_escaped_string = 122,
  sym_raw_string = 123,
  sym_number = 124,
  sym__decimal = 125,
  sym__exponent = 126,
  sym__integer = 127,
  sym__sign = 128,
  sym__hex = 129,
  sym__octal = 130,
  sym__binary = 131,
  sym__escline = 132,
  sym__linespace = 133,
  sym__newline = 134,
  sym__ws = 135,
  sym__unicode_space = 136,
  sym_single_line_comment = 137,
  sym_multi_line_comment = 138,
  sym_commented_block = 139,
  aux_sym_document_repeat1 = 140,
  aux_sym_document_repeat2 = 141,
  aux_sym_node_repeat1 = 142,
  aux_sym_node_repeat2 = 143,
  aux_sym_node_repeat3 = 144,
  aux_sym__bare_identifier_repeat1 = 145,
  aux_sym_escaped_string_repeat1 = 146,
  aux_sym_raw_string_repeat1 = 147,
  aux_sym__integer_repeat1 = 148,
  aux_sym__hex_repeat1 = 149,
  aux_sym__octal_repeat1 = 150,
  aux_sym__binary_repeat1 = 151,
  aux_sym_single_line_comment_repeat1 = 152,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__normal_bare_identifier] = "_normal_bare_identifier",
  [anon_sym_SLASH_DASH] = "/-",
  [anon_sym_LBRACE] = "start_bracket",
  [anon_sym_RBRACE] = "end_bracket",
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
  [sym__escape] = "_escape",
  [sym__hex_digit] = "_hex_digit",
  [aux_sym_raw_string_token1] = "raw_string_token1",
  [aux_sym_raw_string_token2] = "raw_string_token2",
  [anon_sym_POUND] = "#",
  [aux_sym_raw_string_token3] = "raw_string_token3",
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
  [sym_annotation_type] = "annotation_type",
  [sym_prop] = "prop",
  [sym_value] = "value",
  [sym_type] = "type",
  [sym_string] = "string",
  [sym_escaped_string] = "escaped_string",
  [sym_raw_string] = "raw_string",
  [sym_number] = "number",
  [sym__decimal] = "_decimal",
  [sym__exponent] = "_exponent",
  [sym__integer] = "_integer",
  [sym__sign] = "_sign",
  [sym__hex] = "_hex",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
  [sym__escline] = "_escline",
  [sym__linespace] = "_linespace",
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
  [aux_sym_raw_string_repeat1] = "raw_string_repeat1",
  [aux_sym__integer_repeat1] = "_integer_repeat1",
  [aux_sym__hex_repeat1] = "_hex_repeat1",
  [aux_sym__octal_repeat1] = "_octal_repeat1",
  [aux_sym__binary_repeat1] = "_binary_repeat1",
  [aux_sym_single_line_comment_repeat1] = "single_line_comment_repeat1",
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
  [sym__escape] = sym__escape,
  [sym__hex_digit] = sym__hex_digit,
  [aux_sym_raw_string_token1] = aux_sym_raw_string_token1,
  [aux_sym_raw_string_token2] = aux_sym_raw_string_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_raw_string_token3] = aux_sym_raw_string_token3,
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
  [sym_annotation_type] = sym_annotation_type,
  [sym_prop] = sym_prop,
  [sym_value] = sym_value,
  [sym_type] = sym_type,
  [sym_string] = sym_string,
  [sym_escaped_string] = sym_escaped_string,
  [sym_raw_string] = sym_raw_string,
  [sym_number] = sym_number,
  [sym__decimal] = sym__decimal,
  [sym__exponent] = sym__exponent,
  [sym__integer] = sym__integer,
  [sym__sign] = sym__sign,
  [sym__hex] = sym__hex,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
  [sym__escline] = sym__escline,
  [sym__linespace] = sym__linespace,
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
  [aux_sym_raw_string_repeat1] = aux_sym_raw_string_repeat1,
  [aux_sym__integer_repeat1] = aux_sym__integer_repeat1,
  [aux_sym__hex_repeat1] = aux_sym__hex_repeat1,
  [aux_sym__octal_repeat1] = aux_sym__octal_repeat1,
  [aux_sym__binary_repeat1] = aux_sym__binary_repeat1,
  [aux_sym_single_line_comment_repeat1] = aux_sym_single_line_comment_repeat1,
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
    .named = true,
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
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_string_token3] = {
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
  [sym_annotation_type] = {
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
  [sym_raw_string] = {
    .visible = true,
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
  [sym__linespace] = {
    .visible = false,
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
  [aux_sym_raw_string_repeat1] = {
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
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 4},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
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
  [56] = 12,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 24,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 43,
  [74] = 30,
  [75] = 42,
  [76] = 38,
  [77] = 31,
  [78] = 78,
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
  [106] = 54,
  [107] = 107,
  [108] = 54,
  [109] = 55,
  [110] = 110,
  [111] = 53,
  [112] = 51,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 50,
  [121] = 52,
  [122] = 122,
  [123] = 51,
  [124] = 55,
  [125] = 125,
  [126] = 53,
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
  [164] = 12,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 24,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 30,
  [185] = 43,
  [186] = 42,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 38,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 31,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 201,
  [205] = 203,
  [206] = 203,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 43,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 55,
  [216] = 52,
  [217] = 116,
  [218] = 122,
  [219] = 51,
  [220] = 113,
  [221] = 53,
  [222] = 50,
  [223] = 54,
  [224] = 118,
  [225] = 117,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 234,
  [236] = 234,
  [237] = 234,
  [238] = 234,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 233,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 246,
  [248] = 244,
  [249] = 244,
  [250] = 250,
  [251] = 244,
  [252] = 246,
  [253] = 246,
  [254] = 246,
  [255] = 244,
  [256] = 244,
  [257] = 246,
  [258] = 171,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 54,
  [263] = 168,
  [264] = 260,
  [265] = 53,
  [266] = 261,
  [267] = 170,
  [268] = 55,
  [269] = 269,
  [270] = 270,
  [271] = 163,
  [272] = 161,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 275,
  [278] = 197,
  [279] = 275,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 176,
  [285] = 276,
  [286] = 286,
  [287] = 275,
  [288] = 275,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 292,
  [296] = 296,
  [297] = 289,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 291,
  [303] = 300,
  [304] = 177,
  [305] = 180,
  [306] = 173,
  [307] = 307,
  [308] = 174,
  [309] = 309,
  [310] = 301,
  [311] = 294,
  [312] = 51,
  [313] = 55,
  [314] = 53,
  [315] = 54,
};

static inline bool sym__normal_bare_identifier_character_set_1(int32_t c) {
  return (c < 10145
    ? (c < 9854
      ? (c < 9742
        ? (c < 9167
          ? (c < 8482
            ? (c < 8252
              ? (c < 174
                ? c == 169
                : c <= 174)
              : (c <= 8252 || c == 8265))
            : (c <= 8482 || (c < 8986
              ? (c < 8617
                ? (c >= 8596 && c <= 8601)
                : c <= 8618)
              : (c <= 8987 || c == 9000))))
          : (c <= 9167 || (c < 9654
            ? (c < 9410
              ? (c < 9208
                ? (c >= 9193 && c <= 9203)
                : c <= 9210)
              : (c <= 9410 || (c >= 9642 && c <= 9643)))
            : (c <= 9654 || (c < 9723
              ? c == 9664
              : (c <= 9726 || (c >= 9728 && c <= 9732)))))))
        : (c <= 9742 || (c < 9784
          ? (c < 9760
            ? (c < 9752
              ? (c < 9748
                ? c == 9745
                : c <= 9749)
              : (c <= 9752 || c == 9757))
            : (c <= 9760 || (c < 9770
              ? (c < 9766
                ? (c >= 9762 && c <= 9763)
                : c <= 9766)
              : (c <= 9770 || (c >= 9774 && c <= 9775)))))
          : (c <= 9786 || (c < 9827
            ? (c < 9800
              ? (c < 9794
                ? c == 9792
                : c <= 9794)
              : (c <= 9811 || (c >= 9823 && c <= 9824)))
            : (c <= 9827 || (c < 9832
              ? (c >= 9829 && c <= 9830)
              : (c <= 9832 || c == 9851))))))))
      : (c <= 9855 || (c < 9989
        ? (c < 9928
          ? (c < 9895
            ? (c < 9883
              ? (c < 9881
                ? (c >= 9874 && c <= 9879)
                : c <= 9881)
              : (c <= 9884 || (c >= 9888 && c <= 9889)))
            : (c <= 9895 || (c < 9917
              ? (c < 9904
                ? (c >= 9898 && c <= 9899)
                : c <= 9905)
              : (c <= 9918 || (c >= 9924 && c <= 9925)))))
          : (c <= 9928 || (c < 9968
            ? (c < 9939
              ? (c < 9937
                ? (c >= 9934 && c <= 9935)
                : c <= 9937)
              : (c <= 9940 || (c >= 9961 && c <= 9962)))
            : (c <= 9973 || (c < 9981
              ? (c >= 9975 && c <= 9978)
              : (c <= 9981 || c == 9986))))))
        : (c <= 9989 || (c < 10035
          ? (c < 10006
            ? (c < 10002
              ? (c < 9999
                ? (c >= 9992 && c <= 9997)
                : c <= 9999)
              : (c <= 10002 || c == 10004))
            : (c <= 10006 || (c < 10017
              ? c == 10013
              : (c <= 10017 || c == 10024))))
          : (c <= 10036 || (c < 10067
            ? (c < 10060
              ? (c < 10055
                ? c == 10052
                : c <= 10055)
              : (c <= 10060 || c == 10062))
            : (c <= 10069 || (c < 10083
              ? c == 10071
              : (c <= 10084 || (c >= 10133 && c <= 10135)))))))))))
    : (c <= 10145 || (c < 128400
      ? (c < 127489
        ? (c < 12951
          ? (c < 11035
            ? (c < 10548
              ? (c < 10175
                ? c == 10160
                : c <= 10175)
              : (c <= 10549 || (c >= 11013 && c <= 11015)))
            : (c <= 11036 || (c < 12336
              ? (c < 11093
                ? c == 11088
                : c <= 11093)
              : (c <= 12336 || c == 12349))))
          : (c <= 12951 || (c < 127358
            ? (c < 127183
              ? (c < 126980
                ? c == 12953
                : c <= 126980)
              : (c <= 127183 || (c >= 127344 && c <= 127345)))
            : (c <= 127359 || (c < 127377
              ? c == 127374
              : (c <= 127386 || (c >= 127462 && c <= 127487)))))))
        : (c <= 127490 || (c < 127987
          ? (c < 127744
            ? (c < 127538
              ? (c < 127535
                ? c == 127514
                : c <= 127535)
              : (c <= 127546 || (c >= 127568 && c <= 127569)))
            : (c <= 127777 || (c < 127897
              ? (c < 127894
                ? (c >= 127780 && c <= 127891)
                : c <= 127895)
              : (c <= 127899 || (c >= 127902 && c <= 127984)))))
          : (c <= 127989 || (c < 128367
            ? (c < 128329
              ? (c < 128255
                ? (c >= 127991 && c <= 128253)
                : c <= 128317)
              : (c <= 128334 || (c >= 128336 && c <= 128359)))
            : (c <= 128368 || (c < 128391
              ? (c >= 128371 && c <= 128378)
              : (c <= 128391 || (c >= 128394 && c <= 128397)))))))))
      : (c <= 128400 || (c < 128745
        ? (c < 128483
          ? (c < 128444
            ? (c < 128424
              ? (c < 128420
                ? (c >= 128405 && c <= 128406)
                : c <= 128421)
              : (c <= 128424 || (c >= 128433 && c <= 128434)))
            : (c <= 128444 || (c < 128476
              ? (c < 128465
                ? (c >= 128450 && c <= 128452)
                : c <= 128467)
              : (c <= 128478 || c == 128481))))
          : (c <= 128483 || (c < 128640
            ? (c < 128499
              ? (c < 128495
                ? c == 128488
                : c <= 128495)
              : (c <= 128499 || (c >= 128506 && c <= 128591)))
            : (c <= 128709 || (c < 128725
              ? (c >= 128715 && c <= 128722)
              : (c <= 128727 || (c >= 128733 && c <= 128741)))))))
        : (c <= 128745 || (c < 129648
          ? (c < 129008
            ? (c < 128755
              ? (c < 128752
                ? (c >= 128747 && c <= 128748)
                : c <= 128752)
              : (c <= 128764 || (c >= 128992 && c <= 129003)))
            : (c <= 129008 || (c < 129340
              ? (c >= 129292 && c <= 129338)
              : (c <= 129349 || (c >= 129351 && c <= 129535)))))
          : (c <= 129652 || (c < 129728
            ? (c < 129680
              ? (c < 129664
                ? (c >= 129656 && c <= 129660)
                : c <= 129670)
              : (c <= 129708 || (c >= 129712 && c <= 129722)))
            : (c <= 129733 || (c < 129760
              ? (c >= 129744 && c <= 129753)
              : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_2(int32_t c) {
  return (c < 8490
    ? (c < 3274
      ? (c < 2575
        ? (c < 1519
          ? (c < 768
            ? (c < 181
              ? (c < 'a'
                ? (c < '.'
                  ? (c < '*'
                    ? (c >= '!' && c <= '\'')
                    : c <= '*')
                  : (c <= ':' || (c < '^'
                    ? (c >= '?' && c <= 'Z')
                    : c <= '_')))
                : (c <= '|' || (c < 174
                  ? (c < 169
                    ? c == '~'
                    : c <= 170)
                  : (c <= 174 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? (c < 188
                    ? (c >= 185 && c <= 186)
                    : c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))))))
            : (c <= 884 || (c < 1155
              ? (c < 904
                ? (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))))
              : (c <= 1327 || (c < 1471
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c >= 1425 && c <= 1469)))
                : (c <= 1471 || (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))))))))
          : (c <= 1522 || (c < 2406
            ? (c < 1984
              ? (c < 1759
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))
              : (c <= 2037 || (c < 2144
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))))
            : (c <= 2415 || (c < 2507
              ? (c < 2474
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))))
              : (c <= 2510 || (c < 2548
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))
                : (c <= 2553 || (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))))))
        : (c <= 2576 || (c < 2911
          ? (c < 2741
            ? (c < 2641
              ? (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))))
              : (c <= 2641 || (c < 2693
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))
            : (c <= 2745 || (c < 2831
              ? (c < 2784
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2876
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2901
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))))))))
          : (c <= 2915 || (c < 3086
            ? (c < 2979
              ? (c < 2958
                ? (c < 2946
                  ? (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))))
              : (c <= 2980 || (c < 3018
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3058 || (c >= 3072 && c <= 3084)))))))
            : (c <= 3088 || (c < 3174
              ? (c < 3146
                ? (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))
                : (c <= 3149 || (c < 3165
                  ? (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3192 && c <= 3198)
                    : c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))))))))))))
      : (c <= 3277 || (c < 5792
        ? (c < 3864
          ? (c < 3535
            ? (c < 3412
              ? (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3448)
                    : c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3718
              ? (c < 3585
                ? (c < 3558
                  ? (c < 3544
                    ? c == 3542
                    : c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || c == 3716))))
              : (c <= 3722 || (c < 3782
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || c == 3840))))))))
          : (c <= 3865 || (c < 4696
            ? (c < 4038
              ? (c < 3902
                ? (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3891)
                    : c <= 3893)
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))
              : (c <= 4038 || (c < 4301
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))))
            : (c <= 4696 || (c < 4824
              ? (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))))))))
        : (c <= 5866 || (c < 7296
          ? (c < 6448
            ? (c < 6108
              ? (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || c == 6103))))
              : (c <= 6109 || (c < 6176
                ? (c < 6155
                  ? (c < 6128
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6137)
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))))))
            : (c <= 6459 || (c < 6800
              ? (c < 6608
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))))
              : (c <= 6809 || (c < 7019
                ? (c < 6912
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))
          : (c <= 7304 || (c < 8150
            ? (c < 8025
              ? (c < 7424
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8118
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))))))
            : (c <= 8155 || (c < 8400
              ? (c < 8265
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8252))
                : (c <= 8265 || (c < 8319
                  ? (c < 8308
                    ? (c >= 8304 && c <= 8305)
                    : c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))))
              : (c <= 8432 || (c < 8473
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? (c < 8484
                    ? c == 8482
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))))))))))))
    : (c <= 8493 || (c < 43744
      ? (c < 10548
        ? (c < 9874
          ? (c < 9742
            ? (c < 9193
              ? (c < 8596
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || (c < 8528
                    ? c == 8526
                    : c <= 8585)))
                : (c <= 8601 || (c < 9000
                  ? (c < 8986
                    ? (c >= 8617 && c <= 8618)
                    : c <= 8987)
                  : (c <= 9000 || c == 9167))))
              : (c <= 9203 || (c < 9642
                ? (c < 9410
                  ? (c < 9312
                    ? (c >= 9208 && c <= 9210)
                    : c <= 9371)
                  : (c <= 9410 || (c >= 9450 && c <= 9471)))
                : (c <= 9643 || (c < 9723
                  ? (c < 9664
                    ? c == 9654
                    : c <= 9664)
                  : (c <= 9726 || (c >= 9728 && c <= 9732)))))))
            : (c <= 9742 || (c < 9784
              ? (c < 9760
                ? (c < 9752
                  ? (c < 9748
                    ? c == 9745
                    : c <= 9749)
                  : (c <= 9752 || c == 9757))
                : (c <= 9760 || (c < 9770
                  ? (c < 9766
                    ? (c >= 9762 && c <= 9763)
                    : c <= 9766)
                  : (c <= 9770 || (c >= 9774 && c <= 9775)))))
              : (c <= 9786 || (c < 9827
                ? (c < 9800
                  ? (c < 9794
                    ? c == 9792
                    : c <= 9794)
                  : (c <= 9811 || (c >= 9823 && c <= 9824)))
                : (c <= 9827 || (c < 9851
                  ? (c < 9832
                    ? (c >= 9829 && c <= 9830)
                    : c <= 9832)
                  : (c <= 9851 || (c >= 9854 && c <= 9855)))))))))
          : (c <= 9879 || (c < 9999
            ? (c < 9934
              ? (c < 9898
                ? (c < 9888
                  ? (c < 9883
                    ? c == 9881
                    : c <= 9884)
                  : (c <= 9889 || c == 9895))
                : (c <= 9899 || (c < 9924
                  ? (c < 9917
                    ? (c >= 9904 && c <= 9905)
                    : c <= 9918)
                  : (c <= 9925 || c == 9928))))
              : (c <= 9935 || (c < 9975
                ? (c < 9961
                  ? (c < 9939
                    ? c == 9937
                    : c <= 9940)
                  : (c <= 9962 || (c >= 9968 && c <= 9973)))
                : (c <= 9978 || (c < 9989
                  ? (c < 9986
                    ? c == 9981
                    : c <= 9986)
                  : (c <= 9989 || (c >= 9992 && c <= 9997)))))))
            : (c <= 9999 || (c < 10060
              ? (c < 10017
                ? (c < 10006
                  ? (c < 10004
                    ? c == 10002
                    : c <= 10004)
                  : (c <= 10006 || c == 10013))
                : (c <= 10017 || (c < 10052
                  ? (c < 10035
                    ? c == 10024
                    : c <= 10036)
                  : (c <= 10052 || c == 10055))))
              : (c <= 10060 || (c < 10102
                ? (c < 10071
                  ? (c < 10067
                    ? c == 10062
                    : c <= 10069)
                  : (c <= 10071 || (c >= 10083 && c <= 10084)))
                : (c <= 10131 || (c < 10160
                  ? (c < 10145
                    ? (c >= 10133 && c <= 10135)
                    : c <= 10145)
                  : (c <= 10160 || c == 10175))))))))))
        : (c <= 10549 || (c < 12928
          ? (c < 11728
            ? (c < 11565
              ? (c < 11264
                ? (c < 11088
                  ? (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)
                  : (c <= 11088 || c == 11093))
                : (c <= 11492 || (c < 11520
                  ? (c < 11517
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11517)
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11688
                ? (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))))
            : (c <= 11734 || (c < 12449
              ? (c < 12321
                ? (c < 11823
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12349)
                    : c <= 12438)
                  : (c <= 12442 || (c >= 12445 && c <= 12447)))))
              : (c <= 12538 || (c < 12704
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12690 && c <= 12693)))
                : (c <= 12735 || (c < 12872
                  ? (c < 12832
                    ? (c >= 12784 && c <= 12799)
                    : c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))))))))
          : (c <= 12937 || (c < 42994
            ? (c < 42512
              ? (c < 19903
                ? (c < 12977
                  ? (c < 12953
                    ? c == 12951
                    : c <= 12953)
                  : (c <= 12991 || c == 13312))
                : (c <= 19903 || (c < 42192
                  ? (c < 40959
                    ? c == 19968
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42539 || (c < 42786
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42610)
                    : c <= 42621)
                  : (c <= 42737 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))))
            : (c <= 43047 || (c < 43360
              ? (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? c == 43052
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43584
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))
                : (c <= 43597 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43759 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_3(int32_t c) {
  return (c < 8495
    ? (c < 3293
      ? (c < 2602
        ? (c < 1568
          ? (c < 890
            ? (c < 188
              ? (c < 169
                ? (c < '?'
                  ? (c < '.'
                    ? (c >= '!' && c <= '*')
                    : c <= ':')
                  : (c <= 'Z' || (c < 'a'
                    ? (c >= '^' && c <= '_')
                    : c <= '~')))
                : (c <= 170 || (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))))
              : (c <= 190 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1369
              ? (c < 910
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))
              : (c <= 1369 || (c < 1476
                ? (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))))))))
          : (c <= 1641 || (c < 2437
            ? (c < 2045
              ? (c < 1791
                ? (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))
                : (c <= 1791 || (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))))
              : (c <= 2045 || (c < 2185
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))))))
            : (c <= 2444 || (c < 2524
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))
              : (c <= 2525 || (c < 2558
                ? (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))
                : (c <= 2558 || (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))))))))
        : (c <= 2608 || (c < 2929
          ? (c < 2759
            ? (c < 2654
              ? (c < 2622
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || c == 2620))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2707
                ? (c < 2693
                  ? (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))))))
            : (c <= 2761 || (c < 2858
              ? (c < 2809
                ? (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2891
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2927)))))))))
          : (c <= 2935 || (c < 3114
            ? (c < 2990
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3031
                ? (c < 3018
                  ? (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)
                  : (c <= 3021 || c == 3024))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3058)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))
            : (c <= 3129 || (c < 3200
              ? (c < 3160
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))
                : (c <= 3162 || (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))))
              : (c <= 3203 || (c < 3253
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))))))))))))
      : (c <= 3294 || (c < 5870
        ? (c < 3872
          ? (c < 3542
            ? (c < 3430
              ? (c < 3342
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c >= 3412 && c <= 3427)))))
              : (c <= 3448 || (c < 3507
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3724
              ? (c < 3648
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c >= 3585 && c <= 3642)))
                : (c <= 3662 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))
              : (c <= 3747 || (c < 3784
                ? (c < 3776
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3789 || (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))))
          : (c <= 3891 || (c < 4698
            ? (c < 4096
              ? (c < 3913
                ? (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))
                : (c <= 3948 || (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || c == 4038))))
              : (c <= 4169 || (c < 4304
                ? (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))))
            : (c <= 4701 || (c < 4882
              ? (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))
              : (c <= 4885 || (c < 5024
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))))
        : (c <= 5880 || (c < 7312
          ? (c < 6470
            ? (c < 6112
              ? (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c >= 6108 && c <= 6109)))))
              : (c <= 6121 || (c < 6272
                ? (c < 6159
                  ? (c < 6155
                    ? (c >= 6128 && c <= 6137)
                    : c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6432
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))))))
            : (c <= 6509 || (c < 6823
              ? (c < 6656
                ? (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))
                : (c <= 6683 || (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))
              : (c <= 6823 || (c < 7040
                ? (c < 6992
                  ? (c < 6912
                    ? (c >= 6832 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c >= 7019 && c <= 7027)))
                : (c <= 7155 || (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))))
          : (c <= 7354 || (c < 8160
            ? (c < 8027
              ? (c < 7960
                ? (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))))
              : (c <= 8027 || (c < 8126
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))))
            : (c <= 8172 || (c < 8450
              ? (c < 8304
                ? (c < 8252
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8252 || c == 8265))
                : (c <= 8305 || (c < 8336
                  ? (c < 8319
                    ? (c >= 8308 && c <= 8313)
                    : c <= 8329)
                  : (c <= 8348 || (c >= 8400 && c <= 8432)))))
              : (c <= 8450 || (c < 8482
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8482 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))))))))))))
    : (c <= 8505 || (c < 43744
      ? (c < 10548
        ? (c < 9874
          ? (c < 9742
            ? (c < 9193
              ? (c < 8596
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 8601 || (c < 9000
                  ? (c < 8986
                    ? (c >= 8617 && c <= 8618)
                    : c <= 8987)
                  : (c <= 9000 || c == 9167))))
              : (c <= 9203 || (c < 9642
                ? (c < 9410
                  ? (c < 9312
                    ? (c >= 9208 && c <= 9210)
                    : c <= 9371)
                  : (c <= 9410 || (c >= 9450 && c <= 9471)))
                : (c <= 9643 || (c < 9723
                  ? (c < 9664
                    ? c == 9654
                    : c <= 9664)
                  : (c <= 9726 || (c >= 9728 && c <= 9732)))))))
            : (c <= 9742 || (c < 9784
              ? (c < 9760
                ? (c < 9752
                  ? (c < 9748
                    ? c == 9745
                    : c <= 9749)
                  : (c <= 9752 || c == 9757))
                : (c <= 9760 || (c < 9770
                  ? (c < 9766
                    ? (c >= 9762 && c <= 9763)
                    : c <= 9766)
                  : (c <= 9770 || (c >= 9774 && c <= 9775)))))
              : (c <= 9786 || (c < 9827
                ? (c < 9800
                  ? (c < 9794
                    ? c == 9792
                    : c <= 9794)
                  : (c <= 9811 || (c >= 9823 && c <= 9824)))
                : (c <= 9827 || (c < 9851
                  ? (c < 9832
                    ? (c >= 9829 && c <= 9830)
                    : c <= 9832)
                  : (c <= 9851 || (c >= 9854 && c <= 9855)))))))))
          : (c <= 9879 || (c < 9999
            ? (c < 9934
              ? (c < 9898
                ? (c < 9888
                  ? (c < 9883
                    ? c == 9881
                    : c <= 9884)
                  : (c <= 9889 || c == 9895))
                : (c <= 9899 || (c < 9924
                  ? (c < 9917
                    ? (c >= 9904 && c <= 9905)
                    : c <= 9918)
                  : (c <= 9925 || c == 9928))))
              : (c <= 9935 || (c < 9975
                ? (c < 9961
                  ? (c < 9939
                    ? c == 9937
                    : c <= 9940)
                  : (c <= 9962 || (c >= 9968 && c <= 9973)))
                : (c <= 9978 || (c < 9989
                  ? (c < 9986
                    ? c == 9981
                    : c <= 9986)
                  : (c <= 9989 || (c >= 9992 && c <= 9997)))))))
            : (c <= 9999 || (c < 10060
              ? (c < 10017
                ? (c < 10006
                  ? (c < 10004
                    ? c == 10002
                    : c <= 10004)
                  : (c <= 10006 || c == 10013))
                : (c <= 10017 || (c < 10052
                  ? (c < 10035
                    ? c == 10024
                    : c <= 10036)
                  : (c <= 10052 || c == 10055))))
              : (c <= 10060 || (c < 10102
                ? (c < 10071
                  ? (c < 10067
                    ? c == 10062
                    : c <= 10069)
                  : (c <= 10071 || (c >= 10083 && c <= 10084)))
                : (c <= 10131 || (c < 10160
                  ? (c < 10145
                    ? (c >= 10133 && c <= 10135)
                    : c <= 10145)
                  : (c <= 10160 || c == 10175))))))))))
        : (c <= 10549 || (c < 12928
          ? (c < 11728
            ? (c < 11565
              ? (c < 11264
                ? (c < 11088
                  ? (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)
                  : (c <= 11088 || c == 11093))
                : (c <= 11492 || (c < 11520
                  ? (c < 11517
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11517)
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11688
                ? (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))))
            : (c <= 11734 || (c < 12449
              ? (c < 12321
                ? (c < 11823
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12349)
                    : c <= 12438)
                  : (c <= 12442 || (c >= 12445 && c <= 12447)))))
              : (c <= 12538 || (c < 12704
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12690 && c <= 12693)))
                : (c <= 12735 || (c < 12872
                  ? (c < 12832
                    ? (c >= 12784 && c <= 12799)
                    : c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))))))))
          : (c <= 12937 || (c < 42994
            ? (c < 42512
              ? (c < 19903
                ? (c < 12977
                  ? (c < 12953
                    ? c == 12951
                    : c <= 12953)
                  : (c <= 12991 || c == 13312))
                : (c <= 19903 || (c < 42192
                  ? (c < 40959
                    ? c == 19968
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42539 || (c < 42786
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42610)
                    : c <= 42621)
                  : (c <= 42737 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))))
            : (c <= 43047 || (c < 43360
              ? (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? c == 43052
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43584
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))
                : (c <= 43597 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43759 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_4(int32_t c) {
  return (c < 8486
    ? (c < 3270
      ? (c < 2561
        ? (c < 1479
          ? (c < 748
            ? (c < 174
              ? (c < '^'
                ? (c < '.'
                  ? (c < '*'
                    ? (c >= '!' && c <= '\'')
                    : c <= '+')
                  : (c <= '.' || (c < '?'
                    ? (c >= '0' && c <= ':')
                    : c <= 'Z')))
                : (c <= '_' || (c < '~'
                  ? (c < '|'
                    ? (c >= 'a' && c <= 'z')
                    : c <= '|')
                  : (c <= '~' || (c >= 169 && c <= 170)))))
              : (c <= 174 || (c < 192
                ? (c < 185
                  ? (c < 181
                    ? (c >= 178 && c <= 179)
                    : c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))))
            : (c <= 748 || (c < 931
              ? (c < 895
                ? (c < 886
                  ? (c < 768
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))
              : (c <= 1013 || (c < 1376
                ? (c < 1329
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))))))))
          : (c <= 1479 || (c < 2200
            ? (c < 1808
              ? (c < 1646
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))
              : (c <= 1866 || (c < 2048
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || c == 2045))
                : (c <= 2093 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))))
            : (c <= 2273 || (c < 2492
              ? (c < 2447
                ? (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2500 || (c < 2527
                ? (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))
                : (c <= 2531 || (c < 2556
                  ? (c < 2548
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2553)
                  : (c <= 2556 || c == 2558))))))))))
        : (c <= 2563 || (c < 2908
          ? (c < 2738
            ? (c < 2635
              ? (c < 2613
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))
                : (c <= 2614 || (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))))
              : (c <= 2637 || (c < 2689
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))
            : (c <= 2739 || (c < 2821
              ? (c < 2768
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))
              : (c <= 2828 || (c < 2869
                ? (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))))
          : (c <= 2909 || (c < 3072
            ? (c < 2974
              ? (c < 2949
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))
              : (c <= 2975 || (c < 3014
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c >= 3046 && c <= 3058)))))))
            : (c <= 3084 || (c < 3168
              ? (c < 3142
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)
                  : (c <= 3162 || c == 3165))))
              : (c <= 3171 || (c < 3214
                ? (c < 3200
                  ? (c < 3192
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3198)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))))))))))))
      : (c <= 3272 || (c < 5743
        ? (c < 3840
          ? (c < 3530
            ? (c < 3402
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))))
              : (c <= 3406 || (c < 3461
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3412 && c <= 3427)
                    : c <= 3448)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3530 || (c < 3716
              ? (c < 3570
                ? (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3776
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))
                : (c <= 3780 || (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))))))
          : (c <= 3840 || (c < 4688
            ? (c < 3993
              ? (c < 3897
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3891)
                  : (c <= 3893 || c == 3895))
                : (c <= 3897 || (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4295
                ? (c < 4176
                  ? (c < 4096
                    ? c == 4038
                    : c <= 4169)
                  : (c <= 4253 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))))
            : (c <= 4694 || (c < 4808
              ? (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4969
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))))))))
        : (c <= 5759 || (c < 7232
          ? (c < 6400
            ? (c < 6016
              ? (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))
                : (c <= 5940 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))
              : (c <= 6099 || (c < 6155
                ? (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6157 || (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 6752
              ? (c < 6528
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))))
              : (c <= 6780 || (c < 6912
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))
                : (c <= 6988 || (c < 7040
                  ? (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))))))))
          : (c <= 7241 || (c < 8134
            ? (c < 8008
              ? (c < 7376
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))
            : (c <= 8140 || (c < 8319
              ? (c < 8182
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8304
                  ? (c < 8265
                    ? c == 8252
                    : c <= 8265)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))))
              : (c <= 8329 || (c < 8458
                ? (c < 8450
                  ? (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8432)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8482
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8482 || c == 8484))))))))))))))
    : (c <= 8486 || (c < 43739
      ? (c < 10160
        ? (c < 9851
          ? (c < 9723
            ? (c < 9000
              ? (c < 8526
                ? (c < 8495
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8493)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))
                : (c <= 8526 || (c < 8617
                  ? (c < 8596
                    ? (c >= 8528 && c <= 8585)
                    : c <= 8601)
                  : (c <= 8618 || (c >= 8986 && c <= 8987)))))
              : (c <= 9000 || (c < 9410
                ? (c < 9208
                  ? (c < 9193
                    ? c == 9167
                    : c <= 9203)
                  : (c <= 9210 || (c >= 9312 && c <= 9371)))
                : (c <= 9410 || (c < 9654
                  ? (c < 9642
                    ? (c >= 9450 && c <= 9471)
                    : c <= 9643)
                  : (c <= 9654 || c == 9664))))))
            : (c <= 9726 || (c < 9770
              ? (c < 9752
                ? (c < 9745
                  ? (c < 9742
                    ? (c >= 9728 && c <= 9732)
                    : c <= 9742)
                  : (c <= 9745 || (c >= 9748 && c <= 9749)))
                : (c <= 9752 || (c < 9762
                  ? (c < 9760
                    ? c == 9757
                    : c <= 9760)
                  : (c <= 9763 || c == 9766))))
              : (c <= 9770 || (c < 9800
                ? (c < 9792
                  ? (c < 9784
                    ? (c >= 9774 && c <= 9775)
                    : c <= 9786)
                  : (c <= 9792 || c == 9794))
                : (c <= 9811 || (c < 9829
                  ? (c < 9827
                    ? (c >= 9823 && c <= 9824)
                    : c <= 9827)
                  : (c <= 9830 || c == 9832))))))))
          : (c <= 9851 || (c < 9989
            ? (c < 9924
              ? (c < 9888
                ? (c < 9881
                  ? (c < 9874
                    ? (c >= 9854 && c <= 9855)
                    : c <= 9879)
                  : (c <= 9881 || (c >= 9883 && c <= 9884)))
                : (c <= 9889 || (c < 9904
                  ? (c < 9898
                    ? c == 9895
                    : c <= 9899)
                  : (c <= 9905 || (c >= 9917 && c <= 9918)))))
              : (c <= 9925 || (c < 9961
                ? (c < 9937
                  ? (c < 9934
                    ? c == 9928
                    : c <= 9935)
                  : (c <= 9937 || (c >= 9939 && c <= 9940)))
                : (c <= 9962 || (c < 9981
                  ? (c < 9975
                    ? (c >= 9968 && c <= 9973)
                    : c <= 9978)
                  : (c <= 9981 || c == 9986))))))
            : (c <= 9989 || (c < 10052
              ? (c < 10006
                ? (c < 10002
                  ? (c < 9999
                    ? (c >= 9992 && c <= 9997)
                    : c <= 9999)
                  : (c <= 10002 || c == 10004))
                : (c <= 10006 || (c < 10024
                  ? (c < 10017
                    ? c == 10013
                    : c <= 10017)
                  : (c <= 10024 || (c >= 10035 && c <= 10036)))))
              : (c <= 10052 || (c < 10071
                ? (c < 10062
                  ? (c < 10060
                    ? c == 10055
                    : c <= 10060)
                  : (c <= 10062 || (c >= 10067 && c <= 10069)))
                : (c <= 10071 || (c < 10133
                  ? (c < 10102
                    ? (c >= 10083 && c <= 10084)
                    : c <= 10131)
                  : (c <= 10135 || c == 10145))))))))))
        : (c <= 10160 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c < 11088
                    ? (c >= 11035 && c <= 11036)
                    : c <= 11088)))
                : (c <= 11093 || (c < 11517
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11680
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12445
              ? (c < 12293
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12341)
                    : c <= 12349)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12690
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12693 || (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))))))))
          : (c <= 12895 || (c < 42965
            ? (c < 42240
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 40959
                  ? (c < 19968
                    ? c == 19903
                    : c <= 19968)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_5(int32_t c) {
  return (c < 8486
    ? (c < 3260
      ? (c < 2558
        ? (c < 1476
          ? (c < 736
            ? (c < 169
              ? (c < '?'
                ? (c < '*'
                  ? (c < '#'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '0'
                    ? c == '.'
                    : c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c < 'a'
                    ? (c >= '^' && c <= '_')
                    : c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2185
            ? (c < 1791
              ? (c < 1568
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))
                : (c <= 1641 || (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))
              : (c <= 1791 || (c < 2045
                ? (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))))
            : (c <= 2190 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))))))))))
        : (c <= 2558 || (c < 2901
          ? (c < 2730
            ? (c < 2631
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2662
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
            : (c <= 2736 || (c < 2817
              ? (c < 2763
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
          : (c <= 2903 || (c < 3046
            ? (c < 2972
              ? (c < 2946
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3006
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || c == 3031))))))
            : (c <= 3058 || (c < 3165
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))))))
      : (c <= 3268 || (c < 5121
        ? (c < 3804
          ? (c < 3520
            ? (c < 3398
              ? (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3457
                ? (c < 3430
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3427)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3713
              ? (c < 3558
                ? (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
          : (c <= 3807 || (c < 4682
            ? (c < 3974
              ? (c < 3895
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3891 || c == 3893))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4256
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))
            : (c <= 4685 || (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4957
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))))
        : (c <= 5740 || (c < 7232
          ? (c < 6400
            ? (c < 6016
              ? (c < 5919
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)))
                : (c <= 5940 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))
              : (c <= 6099 || (c < 6155
                ? (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6157 || (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 6752
              ? (c < 6528
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))))
              : (c <= 6780 || (c < 6912
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))
                : (c <= 6988 || (c < 7040
                  ? (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))))))))
          : (c <= 7241 || (c < 8134
            ? (c < 8008
              ? (c < 7376
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))
            : (c <= 8140 || (c < 8319
              ? (c < 8182
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8304
                  ? (c < 8265
                    ? c == 8252
                    : c <= 8265)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))))
              : (c <= 8329 || (c < 8458
                ? (c < 8450
                  ? (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8432)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8482
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8482 || c == 8484))))))))))))))
    : (c <= 8486 || (c < 43739
      ? (c < 10160
        ? (c < 9851
          ? (c < 9723
            ? (c < 9000
              ? (c < 8526
                ? (c < 8495
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8493)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))
                : (c <= 8526 || (c < 8617
                  ? (c < 8596
                    ? (c >= 8528 && c <= 8585)
                    : c <= 8601)
                  : (c <= 8618 || (c >= 8986 && c <= 8987)))))
              : (c <= 9000 || (c < 9410
                ? (c < 9208
                  ? (c < 9193
                    ? c == 9167
                    : c <= 9203)
                  : (c <= 9210 || (c >= 9312 && c <= 9371)))
                : (c <= 9410 || (c < 9654
                  ? (c < 9642
                    ? (c >= 9450 && c <= 9471)
                    : c <= 9643)
                  : (c <= 9654 || c == 9664))))))
            : (c <= 9726 || (c < 9770
              ? (c < 9752
                ? (c < 9745
                  ? (c < 9742
                    ? (c >= 9728 && c <= 9732)
                    : c <= 9742)
                  : (c <= 9745 || (c >= 9748 && c <= 9749)))
                : (c <= 9752 || (c < 9762
                  ? (c < 9760
                    ? c == 9757
                    : c <= 9760)
                  : (c <= 9763 || c == 9766))))
              : (c <= 9770 || (c < 9800
                ? (c < 9792
                  ? (c < 9784
                    ? (c >= 9774 && c <= 9775)
                    : c <= 9786)
                  : (c <= 9792 || c == 9794))
                : (c <= 9811 || (c < 9829
                  ? (c < 9827
                    ? (c >= 9823 && c <= 9824)
                    : c <= 9827)
                  : (c <= 9830 || c == 9832))))))))
          : (c <= 9851 || (c < 9989
            ? (c < 9924
              ? (c < 9888
                ? (c < 9881
                  ? (c < 9874
                    ? (c >= 9854 && c <= 9855)
                    : c <= 9879)
                  : (c <= 9881 || (c >= 9883 && c <= 9884)))
                : (c <= 9889 || (c < 9904
                  ? (c < 9898
                    ? c == 9895
                    : c <= 9899)
                  : (c <= 9905 || (c >= 9917 && c <= 9918)))))
              : (c <= 9925 || (c < 9961
                ? (c < 9937
                  ? (c < 9934
                    ? c == 9928
                    : c <= 9935)
                  : (c <= 9937 || (c >= 9939 && c <= 9940)))
                : (c <= 9962 || (c < 9981
                  ? (c < 9975
                    ? (c >= 9968 && c <= 9973)
                    : c <= 9978)
                  : (c <= 9981 || c == 9986))))))
            : (c <= 9989 || (c < 10052
              ? (c < 10006
                ? (c < 10002
                  ? (c < 9999
                    ? (c >= 9992 && c <= 9997)
                    : c <= 9999)
                  : (c <= 10002 || c == 10004))
                : (c <= 10006 || (c < 10024
                  ? (c < 10017
                    ? c == 10013
                    : c <= 10017)
                  : (c <= 10024 || (c >= 10035 && c <= 10036)))))
              : (c <= 10052 || (c < 10071
                ? (c < 10062
                  ? (c < 10060
                    ? c == 10055
                    : c <= 10060)
                  : (c <= 10062 || (c >= 10067 && c <= 10069)))
                : (c <= 10071 || (c < 10133
                  ? (c < 10102
                    ? (c >= 10083 && c <= 10084)
                    : c <= 10131)
                  : (c <= 10135 || c == 10145))))))))))
        : (c <= 10160 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c < 11088
                    ? (c >= 11035 && c <= 11036)
                    : c <= 11088)))
                : (c <= 11093 || (c < 11517
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11680
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12445
              ? (c < 12293
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12341)
                    : c <= 12349)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12690
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12693 || (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))))))))
          : (c <= 12895 || (c < 42965
            ? (c < 42240
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 40959
                  ? (c < 19968
                    ? c == 19903
                    : c <= 19968)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_6(int32_t c) {
  return (c < 8486
    ? (c < 3260
      ? (c < 2558
        ? (c < 1476
          ? (c < 736
            ? (c < 169
              ? (c < '?'
                ? (c < '*'
                  ? (c < '#'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '0'
                    ? c == '.'
                    : c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c < 'b'
                    ? (c >= '^' && c <= '_')
                    : c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2185
            ? (c < 1791
              ? (c < 1568
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))
                : (c <= 1641 || (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))
              : (c <= 1791 || (c < 2045
                ? (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))))
            : (c <= 2190 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))))))))))
        : (c <= 2558 || (c < 2901
          ? (c < 2730
            ? (c < 2631
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2662
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
            : (c <= 2736 || (c < 2817
              ? (c < 2763
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
          : (c <= 2903 || (c < 3046
            ? (c < 2972
              ? (c < 2946
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3006
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || c == 3031))))))
            : (c <= 3058 || (c < 3165
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))))))
      : (c <= 3268 || (c < 5121
        ? (c < 3804
          ? (c < 3520
            ? (c < 3398
              ? (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3457
                ? (c < 3430
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3427)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3713
              ? (c < 3558
                ? (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
          : (c <= 3807 || (c < 4682
            ? (c < 3974
              ? (c < 3895
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3891 || c == 3893))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4256
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))
            : (c <= 4685 || (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4957
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))))
        : (c <= 5740 || (c < 7232
          ? (c < 6400
            ? (c < 6016
              ? (c < 5919
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)))
                : (c <= 5940 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))
              : (c <= 6099 || (c < 6155
                ? (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6157 || (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 6752
              ? (c < 6528
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))))
              : (c <= 6780 || (c < 6912
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))
                : (c <= 6988 || (c < 7040
                  ? (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))))))))
          : (c <= 7241 || (c < 8134
            ? (c < 8008
              ? (c < 7376
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))
            : (c <= 8140 || (c < 8319
              ? (c < 8182
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8304
                  ? (c < 8265
                    ? c == 8252
                    : c <= 8265)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))))
              : (c <= 8329 || (c < 8458
                ? (c < 8450
                  ? (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8432)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8482
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8482 || c == 8484))))))))))))))
    : (c <= 8486 || (c < 43739
      ? (c < 10160
        ? (c < 9851
          ? (c < 9723
            ? (c < 9000
              ? (c < 8526
                ? (c < 8495
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8493)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))
                : (c <= 8526 || (c < 8617
                  ? (c < 8596
                    ? (c >= 8528 && c <= 8585)
                    : c <= 8601)
                  : (c <= 8618 || (c >= 8986 && c <= 8987)))))
              : (c <= 9000 || (c < 9410
                ? (c < 9208
                  ? (c < 9193
                    ? c == 9167
                    : c <= 9203)
                  : (c <= 9210 || (c >= 9312 && c <= 9371)))
                : (c <= 9410 || (c < 9654
                  ? (c < 9642
                    ? (c >= 9450 && c <= 9471)
                    : c <= 9643)
                  : (c <= 9654 || c == 9664))))))
            : (c <= 9726 || (c < 9770
              ? (c < 9752
                ? (c < 9745
                  ? (c < 9742
                    ? (c >= 9728 && c <= 9732)
                    : c <= 9742)
                  : (c <= 9745 || (c >= 9748 && c <= 9749)))
                : (c <= 9752 || (c < 9762
                  ? (c < 9760
                    ? c == 9757
                    : c <= 9760)
                  : (c <= 9763 || c == 9766))))
              : (c <= 9770 || (c < 9800
                ? (c < 9792
                  ? (c < 9784
                    ? (c >= 9774 && c <= 9775)
                    : c <= 9786)
                  : (c <= 9792 || c == 9794))
                : (c <= 9811 || (c < 9829
                  ? (c < 9827
                    ? (c >= 9823 && c <= 9824)
                    : c <= 9827)
                  : (c <= 9830 || c == 9832))))))))
          : (c <= 9851 || (c < 9989
            ? (c < 9924
              ? (c < 9888
                ? (c < 9881
                  ? (c < 9874
                    ? (c >= 9854 && c <= 9855)
                    : c <= 9879)
                  : (c <= 9881 || (c >= 9883 && c <= 9884)))
                : (c <= 9889 || (c < 9904
                  ? (c < 9898
                    ? c == 9895
                    : c <= 9899)
                  : (c <= 9905 || (c >= 9917 && c <= 9918)))))
              : (c <= 9925 || (c < 9961
                ? (c < 9937
                  ? (c < 9934
                    ? c == 9928
                    : c <= 9935)
                  : (c <= 9937 || (c >= 9939 && c <= 9940)))
                : (c <= 9962 || (c < 9981
                  ? (c < 9975
                    ? (c >= 9968 && c <= 9973)
                    : c <= 9978)
                  : (c <= 9981 || c == 9986))))))
            : (c <= 9989 || (c < 10052
              ? (c < 10006
                ? (c < 10002
                  ? (c < 9999
                    ? (c >= 9992 && c <= 9997)
                    : c <= 9999)
                  : (c <= 10002 || c == 10004))
                : (c <= 10006 || (c < 10024
                  ? (c < 10017
                    ? c == 10013
                    : c <= 10017)
                  : (c <= 10024 || (c >= 10035 && c <= 10036)))))
              : (c <= 10052 || (c < 10071
                ? (c < 10062
                  ? (c < 10060
                    ? c == 10055
                    : c <= 10060)
                  : (c <= 10062 || (c >= 10067 && c <= 10069)))
                : (c <= 10071 || (c < 10133
                  ? (c < 10102
                    ? (c >= 10083 && c <= 10084)
                    : c <= 10131)
                  : (c <= 10135 || c == 10145))))))))))
        : (c <= 10160 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c < 11088
                    ? (c >= 11035 && c <= 11036)
                    : c <= 11088)))
                : (c <= 11093 || (c < 11517
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11680
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12445
              ? (c < 12293
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12341)
                    : c <= 12349)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12690
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12693 || (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))))))))
          : (c <= 12895 || (c < 42965
            ? (c < 42240
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 40959
                  ? (c < 19968
                    ? c == 19903
                    : c <= 19968)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_7(int32_t c) {
  return (c < 8486
    ? (c < 3260
      ? (c < 2558
        ? (c < 1476
          ? (c < 736
            ? (c < 169
              ? (c < '?'
                ? (c < '*'
                  ? (c < '$'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '0'
                    ? c == '.'
                    : c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c < 'a'
                    ? (c >= '^' && c <= '_')
                    : c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2185
            ? (c < 1791
              ? (c < 1568
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))
                : (c <= 1641 || (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))
              : (c <= 1791 || (c < 2045
                ? (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))))
            : (c <= 2190 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))))))))))
        : (c <= 2558 || (c < 2901
          ? (c < 2730
            ? (c < 2631
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2662
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
            : (c <= 2736 || (c < 2817
              ? (c < 2763
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
          : (c <= 2903 || (c < 3046
            ? (c < 2972
              ? (c < 2946
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3006
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || c == 3031))))))
            : (c <= 3058 || (c < 3165
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))))))
      : (c <= 3268 || (c < 5121
        ? (c < 3804
          ? (c < 3520
            ? (c < 3398
              ? (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3457
                ? (c < 3430
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3427)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3713
              ? (c < 3558
                ? (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
          : (c <= 3807 || (c < 4682
            ? (c < 3974
              ? (c < 3895
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3891 || c == 3893))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4256
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))
            : (c <= 4685 || (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4957
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))))
        : (c <= 5740 || (c < 7232
          ? (c < 6400
            ? (c < 6016
              ? (c < 5919
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)))
                : (c <= 5940 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))
              : (c <= 6099 || (c < 6155
                ? (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6157 || (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 6752
              ? (c < 6528
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))))
              : (c <= 6780 || (c < 6912
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))
                : (c <= 6988 || (c < 7040
                  ? (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))))))))
          : (c <= 7241 || (c < 8134
            ? (c < 8008
              ? (c < 7376
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))
            : (c <= 8140 || (c < 8319
              ? (c < 8182
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8304
                  ? (c < 8265
                    ? c == 8252
                    : c <= 8265)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))))
              : (c <= 8329 || (c < 8458
                ? (c < 8450
                  ? (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8432)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8482
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8482 || c == 8484))))))))))))))
    : (c <= 8486 || (c < 43739
      ? (c < 10160
        ? (c < 9851
          ? (c < 9723
            ? (c < 9000
              ? (c < 8526
                ? (c < 8495
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8493)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))
                : (c <= 8526 || (c < 8617
                  ? (c < 8596
                    ? (c >= 8528 && c <= 8585)
                    : c <= 8601)
                  : (c <= 8618 || (c >= 8986 && c <= 8987)))))
              : (c <= 9000 || (c < 9410
                ? (c < 9208
                  ? (c < 9193
                    ? c == 9167
                    : c <= 9203)
                  : (c <= 9210 || (c >= 9312 && c <= 9371)))
                : (c <= 9410 || (c < 9654
                  ? (c < 9642
                    ? (c >= 9450 && c <= 9471)
                    : c <= 9643)
                  : (c <= 9654 || c == 9664))))))
            : (c <= 9726 || (c < 9770
              ? (c < 9752
                ? (c < 9745
                  ? (c < 9742
                    ? (c >= 9728 && c <= 9732)
                    : c <= 9742)
                  : (c <= 9745 || (c >= 9748 && c <= 9749)))
                : (c <= 9752 || (c < 9762
                  ? (c < 9760
                    ? c == 9757
                    : c <= 9760)
                  : (c <= 9763 || c == 9766))))
              : (c <= 9770 || (c < 9800
                ? (c < 9792
                  ? (c < 9784
                    ? (c >= 9774 && c <= 9775)
                    : c <= 9786)
                  : (c <= 9792 || c == 9794))
                : (c <= 9811 || (c < 9829
                  ? (c < 9827
                    ? (c >= 9823 && c <= 9824)
                    : c <= 9827)
                  : (c <= 9830 || c == 9832))))))))
          : (c <= 9851 || (c < 9989
            ? (c < 9924
              ? (c < 9888
                ? (c < 9881
                  ? (c < 9874
                    ? (c >= 9854 && c <= 9855)
                    : c <= 9879)
                  : (c <= 9881 || (c >= 9883 && c <= 9884)))
                : (c <= 9889 || (c < 9904
                  ? (c < 9898
                    ? c == 9895
                    : c <= 9899)
                  : (c <= 9905 || (c >= 9917 && c <= 9918)))))
              : (c <= 9925 || (c < 9961
                ? (c < 9937
                  ? (c < 9934
                    ? c == 9928
                    : c <= 9935)
                  : (c <= 9937 || (c >= 9939 && c <= 9940)))
                : (c <= 9962 || (c < 9981
                  ? (c < 9975
                    ? (c >= 9968 && c <= 9973)
                    : c <= 9978)
                  : (c <= 9981 || c == 9986))))))
            : (c <= 9989 || (c < 10052
              ? (c < 10006
                ? (c < 10002
                  ? (c < 9999
                    ? (c >= 9992 && c <= 9997)
                    : c <= 9999)
                  : (c <= 10002 || c == 10004))
                : (c <= 10006 || (c < 10024
                  ? (c < 10017
                    ? c == 10013
                    : c <= 10017)
                  : (c <= 10024 || (c >= 10035 && c <= 10036)))))
              : (c <= 10052 || (c < 10071
                ? (c < 10062
                  ? (c < 10060
                    ? c == 10055
                    : c <= 10060)
                  : (c <= 10062 || (c >= 10067 && c <= 10069)))
                : (c <= 10071 || (c < 10133
                  ? (c < 10102
                    ? (c >= 10083 && c <= 10084)
                    : c <= 10131)
                  : (c <= 10135 || c == 10145))))))))))
        : (c <= 10160 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c < 11088
                    ? (c >= 11035 && c <= 11036)
                    : c <= 11088)))
                : (c <= 11093 || (c < 11517
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11680
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12445
              ? (c < 12293
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12341)
                    : c <= 12349)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12690
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12693 || (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))))))))
          : (c <= 12895 || (c < 42965
            ? (c < 42240
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 40959
                  ? (c < 19968
                    ? c == 19903
                    : c <= 19968)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
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
    : (c <= 6103 || (c < 42775
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
          : (c <= 11742 || (c < 12832
            ? (c < 12445
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12341 || (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12593
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))))
            : (c <= 12841 || (c < 40959
              ? (c < 12977
                ? (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))
                : (c <= 12991 || (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))))
              : (c <= 42124 || (c < 42560
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))
                : (c <= 42610 || (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : c <= 42737)))))))))))
      : (c <= 42783 || (c < 65313
        ? (c < 43808
          ? (c < 43360
            ? (c < 43056
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43047 || c == 43052))))
              : (c <= 43061 || (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))))
            : (c <= 43388 || (c < 43642
              ? (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64298
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44010 || (c < 44016
                  ? (c >= 44012 && c <= 44013)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))
            : (c <= 64310 || (c < 64914
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))
              : (c <= 64967 || (c < 65136
                ? (c < 65024
                  ? (c >= 65008 && c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65930
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))))
            : (c <= 65931 || (c < 66432
              ? (c < 66272
                ? (c < 66176
                  ? c == 66045
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
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
      if (eof) ADVANCE(84);
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(120);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(119);
      if (sym__identifier_char_character_set_1(lookahead)) ADVANCE(120);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '1') ADVANCE(167);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '#') ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(129);
      if (lookahead == '3') ADVANCE(130);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == '}') ADVANCE(144);
      END_STATE();
    case 77:
      if (lookahead == '}') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '}') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '}') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '}') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\f') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 133) ADVANCE(173);
      if (lookahead == 160) ADVANCE(180);
      if (lookahead == 5760) ADVANCE(181);
      if (lookahead == 8192) ADVANCE(182);
      if (lookahead == 8193) ADVANCE(183);
      if (lookahead == 8194) ADVANCE(184);
      if (lookahead == 8195) ADVANCE(185);
      if (lookahead == 8196) ADVANCE(186);
      if (lookahead == 8197) ADVANCE(187);
      if (lookahead == 8198) ADVANCE(188);
      if (lookahead == 8199) ADVANCE(189);
      if (lookahead == 8200) ADVANCE(190);
      if (lookahead == 8201) ADVANCE(191);
      if (lookahead == 8202) ADVANCE(192);
      if (lookahead == 8232) ADVANCE(175);
      if (lookahead == 8233) ADVANCE(176);
      if (lookahead == 8239) ADVANCE(193);
      if (lookahead == 8287) ADVANCE(194);
      if (lookahead == 12288) ADVANCE(195);
      if (lookahead == 65279) ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(119);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '"') ADVANCE(152);
      if (lookahead == '#') ADVANCE(146);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(22);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(60);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(64);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(68);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(13);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(101);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'i') ADVANCE(91);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(92);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'o') ADVANCE(115);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(116);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(107);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(98);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'y') ADVANCE(94);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_escaped_string_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_escaped_string_token1);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_escaped_string_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(146);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_raw_string_token2);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_raw_string_token2);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_raw_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_raw_string_token3);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(205);
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
  [1] = {.lex_state = 83},
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
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 83},
  [15] = {.lex_state = 83},
  [16] = {.lex_state = 83},
  [17] = {.lex_state = 83},
  [18] = {.lex_state = 83},
  [19] = {.lex_state = 83},
  [20] = {.lex_state = 83},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 83},
  [24] = {.lex_state = 2, .external_lex_state = 1},
  [25] = {.lex_state = 83},
  [26] = {.lex_state = 83},
  [27] = {.lex_state = 83},
  [28] = {.lex_state = 83},
  [29] = {.lex_state = 83},
  [30] = {.lex_state = 2, .external_lex_state = 1},
  [31] = {.lex_state = 2, .external_lex_state = 1},
  [32] = {.lex_state = 83},
  [33] = {.lex_state = 83},
  [34] = {.lex_state = 83},
  [35] = {.lex_state = 83},
  [36] = {.lex_state = 83},
  [37] = {.lex_state = 83},
  [38] = {.lex_state = 2, .external_lex_state = 1},
  [39] = {.lex_state = 83},
  [40] = {.lex_state = 83},
  [41] = {.lex_state = 83},
  [42] = {.lex_state = 2, .external_lex_state = 1},
  [43] = {.lex_state = 2, .external_lex_state = 1},
  [44] = {.lex_state = 83},
  [45] = {.lex_state = 83},
  [46] = {.lex_state = 83},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 2, .external_lex_state = 1},
  [54] = {.lex_state = 2, .external_lex_state = 1},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 83, .external_lex_state = 1},
  [58] = {.lex_state = 83, .external_lex_state = 1},
  [59] = {.lex_state = 83, .external_lex_state = 1},
  [60] = {.lex_state = 83, .external_lex_state = 1},
  [61] = {.lex_state = 83, .external_lex_state = 1},
  [62] = {.lex_state = 83, .external_lex_state = 1},
  [63] = {.lex_state = 83, .external_lex_state = 1},
  [64] = {.lex_state = 83},
  [65] = {.lex_state = 83, .external_lex_state = 1},
  [66] = {.lex_state = 83},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 83},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 83},
  [71] = {.lex_state = 83},
  [72] = {.lex_state = 83},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 83, .external_lex_state = 1},
  [79] = {.lex_state = 83, .external_lex_state = 1},
  [80] = {.lex_state = 83, .external_lex_state = 1},
  [81] = {.lex_state = 83, .external_lex_state = 1},
  [82] = {.lex_state = 1, .external_lex_state = 1},
  [83] = {.lex_state = 83, .external_lex_state = 1},
  [84] = {.lex_state = 83, .external_lex_state = 1},
  [85] = {.lex_state = 83, .external_lex_state = 1},
  [86] = {.lex_state = 83, .external_lex_state = 1},
  [87] = {.lex_state = 83, .external_lex_state = 1},
  [88] = {.lex_state = 83, .external_lex_state = 1},
  [89] = {.lex_state = 1, .external_lex_state = 1},
  [90] = {.lex_state = 83, .external_lex_state = 1},
  [91] = {.lex_state = 83, .external_lex_state = 1},
  [92] = {.lex_state = 83, .external_lex_state = 1},
  [93] = {.lex_state = 83, .external_lex_state = 1},
  [94] = {.lex_state = 83, .external_lex_state = 1},
  [95] = {.lex_state = 83, .external_lex_state = 1},
  [96] = {.lex_state = 83, .external_lex_state = 1},
  [97] = {.lex_state = 83, .external_lex_state = 1},
  [98] = {.lex_state = 83, .external_lex_state = 1},
  [99] = {.lex_state = 83, .external_lex_state = 1},
  [100] = {.lex_state = 83, .external_lex_state = 1},
  [101] = {.lex_state = 83, .external_lex_state = 1},
  [102] = {.lex_state = 83, .external_lex_state = 1},
  [103] = {.lex_state = 1, .external_lex_state = 1},
  [104] = {.lex_state = 83, .external_lex_state = 1},
  [105] = {.lex_state = 83, .external_lex_state = 1},
  [106] = {.lex_state = 83},
  [107] = {.lex_state = 83},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 83},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 83},
  [115] = {.lex_state = 83},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 83},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 83},
  [124] = {.lex_state = 83},
  [125] = {.lex_state = 83},
  [126] = {.lex_state = 83},
  [127] = {.lex_state = 83},
  [128] = {.lex_state = 83},
  [129] = {.lex_state = 83},
  [130] = {.lex_state = 83},
  [131] = {.lex_state = 83},
  [132] = {.lex_state = 83},
  [133] = {.lex_state = 83},
  [134] = {.lex_state = 83},
  [135] = {.lex_state = 83},
  [136] = {.lex_state = 83},
  [137] = {.lex_state = 83},
  [138] = {.lex_state = 83},
  [139] = {.lex_state = 83},
  [140] = {.lex_state = 83},
  [141] = {.lex_state = 83},
  [142] = {.lex_state = 83},
  [143] = {.lex_state = 83},
  [144] = {.lex_state = 83},
  [145] = {.lex_state = 83},
  [146] = {.lex_state = 5, .external_lex_state = 1},
  [147] = {.lex_state = 5, .external_lex_state = 1},
  [148] = {.lex_state = 5, .external_lex_state = 1},
  [149] = {.lex_state = 5, .external_lex_state = 1},
  [150] = {.lex_state = 1, .external_lex_state = 1},
  [151] = {.lex_state = 5, .external_lex_state = 1},
  [152] = {.lex_state = 1, .external_lex_state = 1},
  [153] = {.lex_state = 6, .external_lex_state = 1},
  [154] = {.lex_state = 7, .external_lex_state = 1},
  [155] = {.lex_state = 6, .external_lex_state = 1},
  [156] = {.lex_state = 7, .external_lex_state = 1},
  [157] = {.lex_state = 1, .external_lex_state = 1},
  [158] = {.lex_state = 6, .external_lex_state = 1},
  [159] = {.lex_state = 7, .external_lex_state = 1},
  [160] = {.lex_state = 6, .external_lex_state = 1},
  [161] = {.lex_state = 1, .external_lex_state = 1},
  [162] = {.lex_state = 7, .external_lex_state = 1},
  [163] = {.lex_state = 1, .external_lex_state = 1},
  [164] = {.lex_state = 83},
  [165] = {.lex_state = 1, .external_lex_state = 1},
  [166] = {.lex_state = 6, .external_lex_state = 1},
  [167] = {.lex_state = 7, .external_lex_state = 1},
  [168] = {.lex_state = 4, .external_lex_state = 1},
  [169] = {.lex_state = 83, .external_lex_state = 1},
  [170] = {.lex_state = 4, .external_lex_state = 1},
  [171] = {.lex_state = 4, .external_lex_state = 1},
  [172] = {.lex_state = 83, .external_lex_state = 1},
  [173] = {.lex_state = 83, .external_lex_state = 1},
  [174] = {.lex_state = 83, .external_lex_state = 1},
  [175] = {.lex_state = 83},
  [176] = {.lex_state = 3, .external_lex_state = 1},
  [177] = {.lex_state = 83, .external_lex_state = 1},
  [178] = {.lex_state = 83, .external_lex_state = 1},
  [179] = {.lex_state = 83, .external_lex_state = 1},
  [180] = {.lex_state = 83, .external_lex_state = 1},
  [181] = {.lex_state = 83, .external_lex_state = 1},
  [182] = {.lex_state = 83, .external_lex_state = 1},
  [183] = {.lex_state = 83, .external_lex_state = 1},
  [184] = {.lex_state = 83},
  [185] = {.lex_state = 83},
  [186] = {.lex_state = 83},
  [187] = {.lex_state = 83, .external_lex_state = 1},
  [188] = {.lex_state = 83, .external_lex_state = 1},
  [189] = {.lex_state = 83, .external_lex_state = 1},
  [190] = {.lex_state = 83},
  [191] = {.lex_state = 83, .external_lex_state = 1},
  [192] = {.lex_state = 83, .external_lex_state = 1},
  [193] = {.lex_state = 83, .external_lex_state = 1},
  [194] = {.lex_state = 83, .external_lex_state = 1},
  [195] = {.lex_state = 83, .external_lex_state = 1},
  [196] = {.lex_state = 83},
  [197] = {.lex_state = 83, .external_lex_state = 1},
  [198] = {.lex_state = 83, .external_lex_state = 1},
  [199] = {.lex_state = 83, .external_lex_state = 1},
  [200] = {.lex_state = 83, .external_lex_state = 1},
  [201] = {.lex_state = 83},
  [202] = {.lex_state = 83},
  [203] = {.lex_state = 83},
  [204] = {.lex_state = 83},
  [205] = {.lex_state = 83},
  [206] = {.lex_state = 83},
  [207] = {.lex_state = 83, .external_lex_state = 1},
  [208] = {.lex_state = 83, .external_lex_state = 1},
  [209] = {.lex_state = 83, .external_lex_state = 1},
  [210] = {.lex_state = 83},
  [211] = {.lex_state = 83, .external_lex_state = 1},
  [212] = {.lex_state = 83, .external_lex_state = 1},
  [213] = {.lex_state = 83, .external_lex_state = 1},
  [214] = {.lex_state = 83, .external_lex_state = 1},
  [215] = {.lex_state = 83},
  [216] = {.lex_state = 83},
  [217] = {.lex_state = 83},
  [218] = {.lex_state = 83},
  [219] = {.lex_state = 83},
  [220] = {.lex_state = 83},
  [221] = {.lex_state = 83},
  [222] = {.lex_state = 83},
  [223] = {.lex_state = 83},
  [224] = {.lex_state = 83},
  [225] = {.lex_state = 83},
  [226] = {.lex_state = 83},
  [227] = {.lex_state = 83},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 83},
  [231] = {.lex_state = 83},
  [232] = {.lex_state = 83},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 8, .external_lex_state = 1},
  [235] = {.lex_state = 8, .external_lex_state = 1},
  [236] = {.lex_state = 8, .external_lex_state = 1},
  [237] = {.lex_state = 8, .external_lex_state = 1},
  [238] = {.lex_state = 8, .external_lex_state = 1},
  [239] = {.lex_state = 8, .external_lex_state = 1},
  [240] = {.lex_state = 8, .external_lex_state = 1},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 83},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 83},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 12},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 12},
  [257] = {.lex_state = 12},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 12},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 83},
  [274] = {.lex_state = 83},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 83},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 83},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 83},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 83},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 149},
  [292] = {.lex_state = 83},
  [293] = {.lex_state = 83},
  [294] = {.lex_state = 83},
  [295] = {.lex_state = 83},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 83},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 83},
  [300] = {.lex_state = 83},
  [301] = {.lex_state = 149},
  [302] = {.lex_state = 149},
  [303] = {.lex_state = 83},
  [304] = {.lex_state = 83},
  [305] = {.lex_state = 83},
  [306] = {.lex_state = 83},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 83},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 149},
  [311] = {.lex_state = 83},
  [312] = {(TSStateId)(-1)},
  [313] = {(TSStateId)(-1)},
  [314] = {(TSStateId)(-1)},
  [315] = {(TSStateId)(-1)},
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
    [sym__hex_digit] = ACTIONS(1),
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
    [sym_document] = STATE(290),
    [sym_node] = STATE(17),
    [sym_identifier] = STATE(60),
    [sym__bare_identifier] = STATE(197),
    [sym_type] = STATE(230),
    [sym_string] = STATE(197),
    [sym_escaped_string] = STATE(177),
    [sym_raw_string] = STATE(177),
    [sym__sign] = STATE(176),
    [sym__linespace] = STATE(44),
    [sym__newline] = STATE(44),
    [sym__ws] = STATE(44),
    [sym__unicode_space] = STATE(44),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__normal_bare_identifier] = ACTIONS(9),
    [anon_sym_SLASH_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym_raw_string_token1] = ACTIONS(17),
    [aux_sym_raw_string_token3] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_CR] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_CR_LF] = ACTIONS(27),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_4] = ACTIONS(27),
    [sym__bom] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_6] = ACTIONS(27),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
    [anon_sym_9] = ACTIONS(27),
    [anon_sym_10] = ACTIONS(27),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_12] = ACTIONS(27),
    [anon_sym_13] = ACTIONS(27),
    [anon_sym_14] = ACTIONS(27),
    [anon_sym_15] = ACTIONS(27),
    [anon_sym_16] = ACTIONS(27),
    [anon_sym_17] = ACTIONS(27),
    [anon_sym_18] = ACTIONS(27),
    [anon_sym_19] = ACTIONS(27),
    [anon_sym_20] = ACTIONS(27),
    [anon_sym_21] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(31),
  },
  [2] = {
    [sym__node_prop_or_arg] = STATE(198),
    [sym_node_children] = STATE(101),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(115),
    [sym_identifier] = STATE(299),
    [sym__bare_identifier] = STATE(278),
    [sym_keyword] = STATE(187),
    [sym_prop] = STATE(198),
    [sym_value] = STATE(198),
    [sym_type] = STATE(229),
    [sym_string] = STATE(172),
    [sym_escaped_string] = STATE(177),
    [sym_raw_string] = STATE(177),
    [sym_number] = STATE(187),
    [sym__decimal] = STATE(189),
    [sym__integer] = STATE(152),
    [sym__sign] = STATE(241),
    [sym__hex] = STATE(189),
    [sym__octal] = STATE(189),
    [sym__binary] = STATE(189),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(115),
    [sym__ws] = STATE(24),
    [sym__unicode_space] = STATE(24),
    [sym_single_line_comment] = STATE(2),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(24),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym_raw_string_token1] = ACTIONS(17),
    [aux_sym_raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(39),
    [sym__bom] = ACTIONS(61),
    [anon_sym_TAB] = ACTIONS(61),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(61),
    [anon_sym_12] = ACTIONS(61),
    [anon_sym_13] = ACTIONS(61),
    [anon_sym_14] = ACTIONS(61),
    [anon_sym_15] = ACTIONS(61),
    [anon_sym_16] = ACTIONS(61),
    [anon_sym_17] = ACTIONS(61),
    [anon_sym_18] = ACTIONS(61),
    [anon_sym_19] = ACTIONS(61),
    [anon_sym_20] = ACTIONS(61),
    [anon_sym_21] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(39),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(198),
    [sym_node_children] = STATE(104),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(144),
    [sym_identifier] = STATE(299),
    [sym__bare_identifier] = STATE(278),
    [sym_keyword] = STATE(187),
    [sym_prop] = STATE(198),
    [sym_value] = STATE(198),
    [sym_type] = STATE(229),
    [sym_string] = STATE(172),
    [sym_escaped_string] = STATE(177),
    [sym_raw_string] = STATE(177),
    [sym_number] = STATE(187),
    [sym__decimal] = STATE(189),
    [sym__integer] = STATE(152),
    [sym__sign] = STATE(241),
    [sym__hex] = STATE(189),
    [sym__octal] = STATE(189),
    [sym__binary] = STATE(189),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(144),
    [sym__ws] = STATE(24),
    [sym__unicode_space] = STATE(24),
    [sym_single_line_comment] = STATE(3),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(24),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym_raw_string_token1] = ACTIONS(17),
    [aux_sym_raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(65),
    [anon_sym_CR_LF] = ACTIONS(65),
    [anon_sym_] = ACTIONS(65),
    [anon_sym_2] = ACTIONS(65),
    [anon_sym_3] = ACTIONS(65),
    [anon_sym_4] = ACTIONS(65),
    [sym__bom] = ACTIONS(61),
    [anon_sym_TAB] = ACTIONS(61),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(61),
    [anon_sym_12] = ACTIONS(61),
    [anon_sym_13] = ACTIONS(61),
    [anon_sym_14] = ACTIONS(61),
    [anon_sym_15] = ACTIONS(61),
    [anon_sym_16] = ACTIONS(61),
    [anon_sym_17] = ACTIONS(61),
    [anon_sym_18] = ACTIONS(61),
    [anon_sym_19] = ACTIONS(61),
    [anon_sym_20] = ACTIONS(61),
    [anon_sym_21] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(65),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(198),
    [sym_node_children] = STATE(98),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(143),
    [sym_identifier] = STATE(299),
    [sym__bare_identifier] = STATE(278),
    [sym_keyword] = STATE(187),
    [sym_prop] = STATE(198),
    [sym_value] = STATE(198),
    [sym_type] = STATE(229),
    [sym_string] = STATE(172),
    [sym_escaped_string] = STATE(177),
    [sym_raw_string] = STATE(177),
    [sym_number] = STATE(187),
    [sym__decimal] = STATE(189),
    [sym__integer] = STATE(152),
    [sym__sign] = STATE(241),
    [sym__hex] = STATE(189),
    [sym__octal] = STATE(189),
    [sym__binary] = STATE(189),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(143),
    [sym__ws] = STATE(24),
    [sym__unicode_space] = STATE(24),
    [sym_single_line_comment] = STATE(4),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(24),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym_raw_string_token1] = ACTIONS(17),
    [aux_sym_raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_CR_LF] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [anon_sym_4] = ACTIONS(69),
    [sym__bom] = ACTIONS(61),
    [anon_sym_TAB] = ACTIONS(61),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(61),
    [anon_sym_12] = ACTIONS(61),
    [anon_sym_13] = ACTIONS(61),
    [anon_sym_14] = ACTIONS(61),
    [anon_sym_15] = ACTIONS(61),
    [anon_sym_16] = ACTIONS(61),
    [anon_sym_17] = ACTIONS(61),
    [anon_sym_18] = ACTIONS(61),
    [anon_sym_19] = ACTIONS(61),
    [anon_sym_20] = ACTIONS(61),
    [anon_sym_21] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(69),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(198),
    [sym_node_children] = STATE(83),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(145),
    [sym_identifier] = STATE(299),
    [sym__bare_identifier] = STATE(278),
    [sym_keyword] = STATE(187),
    [sym_prop] = STATE(198),
    [sym_value] = STATE(198),
    [sym_type] = STATE(229),
    [sym_string] = STATE(172),
    [sym_escaped_string] = STATE(177),
    [sym_raw_string] = STATE(177),
    [sym_number] = STATE(187),
    [sym__decimal] = STATE(189),
    [sym__integer] = STATE(152),
    [sym__sign] = STATE(241),
    [sym__hex] = STATE(189),
    [sym__octal] = STATE(189),
    [sym__binary] = STATE(189),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(145),
    [sym__ws] = STATE(24),
    [sym__unicode_space] = STATE(24),
    [sym_single_line_comment] = STATE(5),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(24),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym_raw_string_token1] = ACTIONS(17),
    [aux_sym_raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_CR_LF] = ACTIONS(73),
    [anon_sym_] = ACTIONS(73),
    [anon_sym_2] = ACTIONS(73),
    [anon_sym_3] = ACTIONS(73),
    [anon_sym_4] = ACTIONS(73),
    [sym__bom] = ACTIONS(61),
    [anon_sym_TAB] = ACTIONS(61),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(61),
    [anon_sym_12] = ACTIONS(61),
    [anon_sym_13] = ACTIONS(61),
    [anon_sym_14] = ACTIONS(61),
    [anon_sym_15] = ACTIONS(61),
    [anon_sym_16] = ACTIONS(61),
    [anon_sym_17] = ACTIONS(61),
    [anon_sym_18] = ACTIONS(61),
    [anon_sym_19] = ACTIONS(61),
    [anon_sym_20] = ACTIONS(61),
    [anon_sym_21] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(73),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(198),
    [sym_node_children] = STATE(81),
    [sym__node_space] = STATE(12),
    [sym__node_terminator] = STATE(134),
    [sym_identifier] = STATE(299),
    [sym__bare_identifier] = STATE(278),
    [sym_keyword] = STATE(187),
    [sym_prop] = STATE(198),
    [sym_value] = STATE(198),
    [sym_type] = STATE(229),
    [sym_string] = STATE(172),
    [sym_escaped_string] = STATE(177),
    [sym_raw_string] = STATE(177),
    [sym_number] = STATE(187),
    [sym__decimal] = STATE(189),
    [sym__integer] = STATE(152),
    [sym__sign] = STATE(241),
    [sym__hex] = STATE(189),
    [sym__octal] = STATE(189),
    [sym__binary] = STATE(189),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(134),
    [sym__ws] = STATE(24),
    [sym__unicode_space] = STATE(24),
    [sym_single_line_comment] = STATE(6),
    [sym_multi_line_comment] = STATE(6),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(24),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym_raw_string_token1] = ACTIONS(17),
    [aux_sym_raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_CR_LF] = ACTIONS(77),
    [anon_sym_] = ACTIONS(77),
    [anon_sym_2] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_4] = ACTIONS(77),
    [sym__bom] = ACTIONS(61),
    [anon_sym_TAB] = ACTIONS(61),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(61),
    [anon_sym_9] = ACTIONS(61),
    [anon_sym_10] = ACTIONS(61),
    [anon_sym_11] = ACTIONS(61),
    [anon_sym_12] = ACTIONS(61),
    [anon_sym_13] = ACTIONS(61),
    [anon_sym_14] = ACTIONS(61),
    [anon_sym_15] = ACTIONS(61),
    [anon_sym_16] = ACTIONS(61),
    [anon_sym_17] = ACTIONS(61),
    [anon_sym_18] = ACTIONS(61),
    [anon_sym_19] = ACTIONS(61),
    [anon_sym_20] = ACTIONS(61),
    [anon_sym_21] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(81), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    ACTIONS(85), 1,
      sym__bom,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(77), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(122), 1,
      sym__node_space,
    STATE(152), 1,
      sym__integer,
    STATE(172), 1,
      sym_string,
    STATE(229), 1,
      sym_type,
    STATE(241), 1,
      sym__sign,
    STATE(278), 1,
      sym__bare_identifier,
    STATE(299), 1,
      sym_identifier,
    STATE(7), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(187), 2,
      sym_keyword,
      sym_number,
    ACTIONS(41), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(198), 3,
      sym__node_prop_or_arg,
      sym_prop,
      sym_value,
    STATE(189), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(87), 18,
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
  [133] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    ACTIONS(85), 1,
      sym__bom,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(77), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(122), 1,
      sym__node_space,
    STATE(152), 1,
      sym__integer,
    STATE(172), 1,
      sym_string,
    STATE(229), 1,
      sym_type,
    STATE(241), 1,
      sym__sign,
    STATE(278), 1,
      sym__bare_identifier,
    STATE(299), 1,
      sym_identifier,
    STATE(8), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(182), 2,
      sym_prop,
      sym_value,
    STATE(187), 2,
      sym_keyword,
      sym_number,
    ACTIONS(41), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(189), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(87), 18,
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
  [265] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    ACTIONS(85), 1,
      sym__bom,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(77), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(122), 1,
      sym__node_space,
    STATE(152), 1,
      sym__integer,
    STATE(172), 1,
      sym_string,
    STATE(229), 1,
      sym_type,
    STATE(241), 1,
      sym__sign,
    STATE(278), 1,
      sym__bare_identifier,
    STATE(299), 1,
      sym_identifier,
    STATE(9), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(187), 2,
      sym_keyword,
      sym_number,
    STATE(199), 2,
      sym_prop,
      sym_value,
    ACTIONS(41), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(189), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(87), 18,
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
  [397] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    ACTIONS(85), 1,
      sym__bom,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(77), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(122), 1,
      sym__node_space,
    STATE(152), 1,
      sym__integer,
    STATE(172), 1,
      sym_string,
    STATE(229), 1,
      sym_type,
    STATE(241), 1,
      sym__sign,
    STATE(278), 1,
      sym__bare_identifier,
    STATE(299), 1,
      sym_identifier,
    STATE(10), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(182), 2,
      sym_prop,
      sym_value,
    STATE(187), 2,
      sym_keyword,
      sym_number,
    ACTIONS(41), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(189), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(87), 18,
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
  [526] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    ACTIONS(85), 1,
      sym__bom,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(77), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(122), 1,
      sym__node_space,
    STATE(152), 1,
      sym__integer,
    STATE(172), 1,
      sym_string,
    STATE(229), 1,
      sym_type,
    STATE(241), 1,
      sym__sign,
    STATE(278), 1,
      sym__bare_identifier,
    STATE(299), 1,
      sym_identifier,
    STATE(11), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(187), 2,
      sym_keyword,
      sym_number,
    STATE(199), 2,
      sym_prop,
      sym_value,
    ACTIONS(41), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(189), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(87), 18,
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
  [655] = 8,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym__escline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(12), 4,
      sym__node_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(95), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(97), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
    ACTIONS(102), 19,
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
  [727] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym_raw_string_token1,
    ACTIONS(116), 1,
      aux_sym_raw_string_token3,
    STATE(284), 1,
      sym__sign,
    STATE(13), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(278), 2,
      sym__bare_identifier,
      sym_string,
    STATE(295), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(304), 2,
      sym_escaped_string,
      sym_raw_string,
    ACTIONS(110), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(108), 28,
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
  [812] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(47), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym_raw_string_token1,
    ACTIONS(116), 1,
      aux_sym_raw_string_token3,
    STATE(284), 1,
      sym__sign,
    STATE(14), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(278), 2,
      sym__bare_identifier,
      sym_string,
    STATE(292), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(304), 2,
      sym_escaped_string,
      sym_raw_string,
    ACTIONS(110), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(108), 28,
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
  [897] = 20,
    ACTIONS(120), 1,
      sym__normal_bare_identifier,
    ACTIONS(123), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      aux_sym_raw_string_token1,
    ACTIONS(135), 1,
      aux_sym_raw_string_token3,
    ACTIONS(138), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_CR,
    ACTIONS(150), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(15), 4,
      sym_node,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
    STATE(49), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(147), 25,
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
  [992] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(16), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(160), 25,
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
  [1088] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(17), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(25), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(166), 25,
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
  [1184] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(18), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(172), 25,
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
  [1280] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(19), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(178), 25,
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
  [1376] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(20), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(160), 25,
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
  [1472] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(21), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(35), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(184), 25,
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
  [1568] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(19), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(22), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(41), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(190), 25,
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
  [1664] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(21), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(23), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(196), 25,
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
  [1760] = 8,
    ACTIONS(202), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym__escline,
    STATE(24), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(43), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(198), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(200), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
    ACTIONS(205), 19,
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
  [1830] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(25), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(196), 25,
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
  [1926] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(26), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(29), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(215), 25,
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
  [2022] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(27), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(172), 25,
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
  [2118] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(18), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(28), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(178), 25,
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
  [2214] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(29), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [2309] = 6,
    ACTIONS(230), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(43), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(223), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(225), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
    ACTIONS(227), 19,
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
  [2374] = 6,
    ACTIONS(208), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(38), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(198), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(200), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
    ACTIONS(233), 19,
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
  [2439] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      anon_sym_CR,
    STATE(28), 1,
      sym_node,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(32), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(48), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(238), 25,
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
  [2534] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(33), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [2629] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      anon_sym_CR,
    STATE(20), 1,
      sym_node,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(34), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(242), 25,
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
  [2724] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_CR,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(35), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [2819] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(36), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [2914] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(37), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [3009] = 6,
    ACTIONS(253), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(43), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(246), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(248), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
    ACTIONS(250), 19,
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
  [3074] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(39), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [3169] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_CR,
    STATE(22), 1,
      sym_node,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(40), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(47), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(260), 25,
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
  [3264] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(41), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [3359] = 6,
    ACTIONS(253), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(30), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(246), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(248), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
    ACTIONS(262), 19,
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
  [3424] = 5,
    ACTIONS(272), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 5,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(265), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(267), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
    ACTIONS(269), 19,
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
  [3487] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      anon_sym_CR,
    STATE(23), 1,
      sym_node,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(44), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(277), 25,
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
  [3582] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      anon_sym_CR,
    STATE(27), 1,
      sym_node,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(45), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(34), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(281), 25,
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
  [3677] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(46), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [3772] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      anon_sym_CR,
    STATE(28), 1,
      sym_node,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(47), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(285), 25,
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
  [3867] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_CR,
    STATE(27), 1,
      sym_node,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(48), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(70), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(289), 25,
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
  [3962] = 20,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym_identifier,
    STATE(129), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(230), 1,
      sym_type,
    STATE(49), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(221), 25,
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
  [4054] = 3,
    STATE(50), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(291), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(293), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [4110] = 3,
    STATE(51), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(295), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(297), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [4166] = 3,
    STATE(52), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(299), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(301), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [4222] = 3,
    STATE(53), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(303), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(305), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [4278] = 3,
    STATE(54), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(307), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(309), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [4334] = 3,
    STATE(55), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(311), 8,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(313), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [4390] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      anon_sym_BSLASH,
    ACTIONS(318), 1,
      sym__bom,
    ACTIONS(324), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(77), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(122), 1,
      sym__node_space,
    STATE(56), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(95), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(97), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(321), 18,
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
  [4463] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_CR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    STATE(31), 1,
      sym__escline,
    STATE(78), 1,
      aux_sym_node_repeat2,
    STATE(104), 1,
      sym_node_children,
    STATE(6), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(57), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(144), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(65), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [4539] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_CR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    STATE(31), 1,
      sym__escline,
    STATE(78), 1,
      aux_sym_node_repeat2,
    STATE(98), 1,
      sym_node_children,
    STATE(2), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(58), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(143), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(69), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [4615] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_CR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    STATE(31), 1,
      sym__escline,
    STATE(61), 1,
      aux_sym_node_repeat2,
    STATE(98), 1,
      sym_node_children,
    STATE(2), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(59), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(143), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(69), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [4691] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(331), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(58), 1,
      aux_sym_node_repeat2,
    STATE(87), 1,
      sym_node_children,
    STATE(4), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(60), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(133), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(329), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [4767] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_CR,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    STATE(31), 1,
      sym__escline,
    STATE(78), 1,
      aux_sym_node_repeat2,
    STATE(101), 1,
      sym_node_children,
    STATE(5), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(61), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(115), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(39), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [4843] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_CR,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    STATE(31), 1,
      sym__escline,
    STATE(63), 1,
      aux_sym_node_repeat2,
    STATE(101), 1,
      sym_node_children,
    STATE(5), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(62), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(115), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(39), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [4919] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      anon_sym_CR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    STATE(31), 1,
      sym__escline,
    STATE(78), 1,
      aux_sym_node_repeat2,
    STATE(83), 1,
      sym_node_children,
    STATE(3), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(63), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(145), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(73), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [4995] = 7,
    ACTIONS(337), 1,
      anon_sym_CR,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    STATE(64), 7,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(340), 25,
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
  [5055] = 15,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      anon_sym_CR,
    ACTIONS(327), 1,
      anon_sym_SLASH_DASH,
    STATE(31), 1,
      sym__escline,
    STATE(57), 1,
      aux_sym_node_repeat2,
    STATE(83), 1,
      sym_node_children,
    STATE(3), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(65), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(145), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(73), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [5131] = 9,
    ACTIONS(337), 1,
      anon_sym_CR,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(66), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(335), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(333), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(340), 25,
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
  [5194] = 9,
    ACTIONS(337), 1,
      anon_sym_CR,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(335), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(333), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(340), 25,
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
  [5257] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym__bom,
    ACTIONS(361), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym_node_repeat1,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(176), 1,
      sym__sign,
    STATE(196), 1,
      sym__escline,
    STATE(217), 1,
      sym__ws,
    STATE(218), 1,
      sym__node_space,
    STATE(224), 1,
      sym__unicode_space,
    STATE(232), 1,
      sym_type,
    STATE(68), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(359), 18,
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
  [5350] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      sym__bom,
    ACTIONS(372), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_node_repeat3,
    STATE(75), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(69), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(198), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(200), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(369), 18,
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
  [5419] = 9,
    ACTIONS(337), 1,
      anon_sym_CR,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(70), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(335), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(333), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(340), 25,
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
  [5482] = 9,
    ACTIONS(337), 1,
      anon_sym_CR,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(346), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    STATE(71), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(335), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(333), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    STATE(64), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(340), 25,
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
  [5545] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym__bom,
    ACTIONS(361), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_identifier,
    STATE(164), 1,
      aux_sym_node_repeat1,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(176), 1,
      sym__sign,
    STATE(196), 1,
      sym__escline,
    STATE(217), 1,
      sym__ws,
    STATE(218), 1,
      sym__node_space,
    STATE(224), 1,
      sym__unicode_space,
    STATE(231), 1,
      sym_type,
    STATE(72), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(359), 18,
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
  [5638] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(381), 1,
      sym__bom,
    ACTIONS(387), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(73), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(265), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(267), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(384), 18,
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
  [5700] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      sym__bom,
    ACTIONS(396), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_node_repeat3,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(74), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(223), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(225), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(393), 18,
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
  [5764] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(399), 1,
      sym__bom,
    ACTIONS(405), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      aux_sym_node_repeat3,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(75), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(246), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(248), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(402), 18,
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
  [5828] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(399), 1,
      sym__bom,
    ACTIONS(405), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_node_repeat3,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(76), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(246), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(248), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(402), 18,
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
  [5892] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(366), 1,
      sym__bom,
    ACTIONS(372), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      aux_sym_node_repeat3,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(77), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(198), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(200), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(369), 18,
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
  [5956] = 13,
    ACTIONS(410), 1,
      anon_sym_BSLASH,
    ACTIONS(413), 1,
      anon_sym_CR,
    ACTIONS(415), 1,
      sym__bom,
    ACTIONS(421), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(69), 1,
      aux_sym_node_repeat3,
    STATE(77), 1,
      sym__escline,
    STATE(116), 1,
      sym__ws,
    STATE(118), 1,
      sym__unicode_space,
    STATE(122), 1,
      sym__node_space,
    STATE(78), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat2,
    ACTIONS(408), 11,
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
    ACTIONS(418), 18,
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
  [6025] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(79), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(131), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
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
    ACTIONS(61), 19,
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
  [6089] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      anon_sym_CR,
    STATE(178), 1,
      sym__escline,
    STATE(80), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(93), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(128), 2,
      sym__node_terminator,
      sym__newline,
    STATE(169), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(428), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(432), 19,
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
  [6153] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(436), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(81), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(90), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(130), 2,
      sym__node_terminator,
      sym__newline,
    STATE(80), 3,
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
    ACTIONS(438), 19,
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
  [6217] = 5,
    ACTIONS(444), 1,
      anon_sym_CR,
    STATE(89), 1,
      aux_sym__integer_repeat1,
    ACTIONS(442), 2,
      anon_sym__,
      sym__digit,
    STATE(82), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(440), 35,
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
  [6269] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(448), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(83), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(94), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(110), 2,
      sym__node_terminator,
      sym__newline,
    STATE(102), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(446), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(450), 19,
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
  [6333] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      anon_sym_CR,
    STATE(178), 1,
      sym__escline,
    STATE(84), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(105), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(137), 2,
      sym__node_terminator,
      sym__newline,
    STATE(169), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(452), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(432), 19,
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
  [6397] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(85), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(137), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(452), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [6461] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(458), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(86), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(142), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(456), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [6525] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(462), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(87), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(96), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(135), 2,
      sym__node_terminator,
      sym__newline,
    STATE(95), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(460), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(464), 19,
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
  [6589] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(88), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(107), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(466), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [6653] = 5,
    ACTIONS(474), 1,
      anon_sym_CR,
    STATE(103), 1,
      aux_sym__integer_repeat1,
    ACTIONS(472), 2,
      anon_sym__,
      sym__digit,
    STATE(89), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(470), 35,
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
  [6705] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(90), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(128), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(428), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [6769] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(91), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(140), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(476), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [6833] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      anon_sym_CR,
    STATE(178), 1,
      sym__escline,
    STATE(88), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(92), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(131), 2,
      sym__node_terminator,
      sym__newline,
    STATE(169), 3,
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
    ACTIONS(432), 19,
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
  [6897] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(482), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(93), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(127), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(480), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [6961] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(94), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(125), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(484), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [7025] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_CR,
    STATE(178), 1,
      sym__escline,
    STATE(91), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(95), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(119), 2,
      sym__node_terminator,
      sym__newline,
    STATE(169), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(488), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(432), 19,
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
  [7089] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(96), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(119), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(488), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [7153] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(494), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(97), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(132), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(492), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [7217] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(498), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(98), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(99), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(114), 2,
      sym__node_terminator,
      sym__newline,
    STATE(100), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(496), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(500), 19,
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
  [7281] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(504), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(99), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(139), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(502), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [7345] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(504), 1,
      anon_sym_CR,
    STATE(178), 1,
      sym__escline,
    STATE(86), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(100), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(139), 2,
      sym__node_terminator,
      sym__newline,
    STATE(169), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(502), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(432), 19,
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
  [7409] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(508), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(85), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(101), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(141), 2,
      sym__node_terminator,
      sym__newline,
    STATE(84), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(506), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(510), 19,
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
  [7473] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      anon_sym_CR,
    STATE(178), 1,
      sym__escline,
    STATE(97), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(102), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(125), 2,
      sym__node_terminator,
      sym__newline,
    STATE(169), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(484), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(432), 19,
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
  [7537] = 4,
    ACTIONS(517), 1,
      anon_sym_CR,
    ACTIONS(514), 2,
      anon_sym__,
      sym__digit,
    STATE(103), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__integer_repeat1,
    ACTIONS(512), 35,
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
  [7587] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(79), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(104), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(136), 2,
      sym__node_terminator,
      sym__newline,
    STATE(92), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(519), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(523), 19,
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
  [7651] = 11,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(527), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(12), 2,
      sym__node_space,
      aux_sym_node_repeat1,
    STATE(105), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(138), 2,
      sym__node_terminator,
      sym__newline,
    STATE(24), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(525), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(61), 19,
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
  [7715] = 3,
    STATE(106), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(307), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(309), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [7762] = 3,
    STATE(107), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(531), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(529), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [7809] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(307), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(309), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [7858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(109), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(311), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(313), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [7907] = 3,
    STATE(110), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(535), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(533), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [7954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(111), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(303), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(305), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8003] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(295), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(297), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(113), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(537), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(539), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8101] = 3,
    STATE(114), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(543), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(541), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8148] = 3,
    STATE(115), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(547), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(545), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(116), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(549), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(551), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(553), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(555), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8293] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(557), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(559), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8342] = 3,
    STATE(119), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(563), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(561), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(291), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(293), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(299), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(301), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(122), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(565), 7,
      sym__normal_bare_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
    ACTIONS(567), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8536] = 3,
    STATE(123), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(295), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(297), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8583] = 3,
    STATE(124), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(311), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(313), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8630] = 3,
    STATE(125), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(571), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(569), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8677] = 3,
    STATE(126), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(303), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(305), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8724] = 3,
    STATE(127), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(575), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(573), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8771] = 3,
    STATE(128), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(579), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(577), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8818] = 3,
    STATE(129), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(581), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(118), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8865] = 3,
    STATE(130), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(585), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(583), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8912] = 3,
    STATE(131), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(589), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(587), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [8959] = 3,
    STATE(132), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(593), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(591), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9006] = 3,
    STATE(133), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(597), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(595), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9053] = 3,
    STATE(134), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(601), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(599), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9100] = 3,
    STATE(135), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(605), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(603), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9147] = 3,
    STATE(136), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(609), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(607), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9194] = 3,
    STATE(137), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(613), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(611), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9241] = 3,
    STATE(138), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(617), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(615), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9288] = 3,
    STATE(139), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(621), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(619), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9335] = 3,
    STATE(140), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(625), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(623), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9382] = 3,
    STATE(141), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(629), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(627), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9429] = 3,
    STATE(142), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(633), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(631), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9476] = 3,
    STATE(143), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(637), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(635), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9523] = 3,
    STATE(144), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(641), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(639), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9570] = 3,
    STATE(145), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(645), 4,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(643), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [9617] = 4,
    ACTIONS(652), 1,
      anon_sym_CR,
    ACTIONS(649), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    STATE(146), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__binary_repeat1,
    ACTIONS(647), 32,
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
  [9665] = 5,
    ACTIONS(658), 1,
      anon_sym_CR,
    STATE(146), 1,
      aux_sym__binary_repeat1,
    STATE(147), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(656), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
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
  [9715] = 5,
    ACTIONS(658), 1,
      anon_sym_CR,
    STATE(149), 1,
      aux_sym__binary_repeat1,
    STATE(148), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(660), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
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
  [9765] = 5,
    ACTIONS(664), 1,
      anon_sym_CR,
    STATE(146), 1,
      aux_sym__binary_repeat1,
    STATE(149), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(656), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(662), 32,
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
  [9815] = 6,
    ACTIONS(668), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_CR,
    STATE(183), 1,
      sym__exponent,
    ACTIONS(670), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(150), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
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
  [9867] = 5,
    ACTIONS(678), 1,
      anon_sym_CR,
    STATE(147), 1,
      aux_sym__binary_repeat1,
    STATE(151), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(676), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(674), 32,
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
  [9917] = 6,
    ACTIONS(682), 1,
      anon_sym_DOT,
    ACTIONS(684), 1,
      anon_sym_CR,
    STATE(188), 1,
      sym__exponent,
    ACTIONS(670), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(152), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(680), 32,
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
  [9969] = 5,
    ACTIONS(690), 1,
      anon_sym_CR,
    STATE(160), 1,
      aux_sym__octal_repeat1,
    ACTIONS(688), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(153), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(686), 32,
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
  [10018] = 5,
    ACTIONS(696), 1,
      anon_sym_CR,
    STATE(159), 1,
      aux_sym__hex_repeat1,
    ACTIONS(694), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(154), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(692), 32,
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
  [10067] = 5,
    ACTIONS(702), 1,
      anon_sym_CR,
    STATE(153), 1,
      aux_sym__octal_repeat1,
    ACTIONS(700), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(155), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(698), 32,
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
  [10116] = 5,
    ACTIONS(708), 1,
      anon_sym_CR,
    STATE(167), 1,
      aux_sym__hex_repeat1,
    ACTIONS(706), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(156), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(704), 32,
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
  [10165] = 5,
    ACTIONS(712), 1,
      anon_sym_CR,
    STATE(193), 1,
      sym__exponent,
    ACTIONS(670), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(157), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(710), 32,
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
  [10214] = 5,
    ACTIONS(716), 1,
      anon_sym_CR,
    STATE(160), 1,
      aux_sym__octal_repeat1,
    ACTIONS(688), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(158), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(714), 32,
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
  [10263] = 5,
    ACTIONS(722), 1,
      anon_sym_CR,
    STATE(162), 1,
      aux_sym__hex_repeat1,
    ACTIONS(720), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(159), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(718), 32,
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
  [10312] = 4,
    ACTIONS(729), 1,
      anon_sym_CR,
    ACTIONS(726), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(160), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__octal_repeat1,
    ACTIONS(724), 32,
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
  [10359] = 5,
    ACTIONS(733), 1,
      anon_sym_POUND,
    ACTIONS(735), 1,
      anon_sym_CR,
    STATE(163), 1,
      aux_sym_raw_string_repeat1,
    STATE(161), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(731), 33,
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
  [10408] = 4,
    ACTIONS(742), 1,
      anon_sym_CR,
    ACTIONS(739), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(162), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__hex_repeat1,
    ACTIONS(737), 32,
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
  [10455] = 4,
    ACTIONS(746), 1,
      anon_sym_POUND,
    ACTIONS(749), 1,
      anon_sym_CR,
    STATE(163), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_raw_string_repeat1,
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
  [10502] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(751), 1,
      anon_sym_BSLASH,
    ACTIONS(754), 1,
      sym__bom,
    ACTIONS(760), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(196), 1,
      sym__escline,
    STATE(217), 1,
      sym__ws,
    STATE(218), 1,
      sym__node_space,
    STATE(224), 1,
      sym__unicode_space,
    ACTIONS(95), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    STATE(164), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(97), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    ACTIONS(757), 18,
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
  [10567] = 5,
    ACTIONS(765), 1,
      anon_sym_CR,
    STATE(181), 1,
      sym__exponent,
    ACTIONS(670), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(165), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(763), 32,
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
  [10616] = 5,
    ACTIONS(690), 1,
      anon_sym_CR,
    STATE(158), 1,
      aux_sym__octal_repeat1,
    ACTIONS(767), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(166), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(686), 32,
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
  [10665] = 5,
    ACTIONS(696), 1,
      anon_sym_CR,
    STATE(162), 1,
      aux_sym__hex_repeat1,
    ACTIONS(720), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(167), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(692), 32,
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
  [10714] = 5,
    ACTIONS(771), 1,
      sym__identifier_char,
    ACTIONS(773), 1,
      anon_sym_CR,
    STATE(170), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(168), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(769), 32,
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
  [10762] = 8,
    ACTIONS(778), 1,
      anon_sym_BSLASH,
    ACTIONS(782), 1,
      anon_sym_CR,
    ACTIONS(789), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym__escline,
    STATE(169), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(43), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(775), 9,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(785), 19,
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
  [10816] = 5,
    ACTIONS(795), 1,
      sym__identifier_char,
    ACTIONS(797), 1,
      anon_sym_CR,
    STATE(171), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(170), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(793), 32,
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
  [10864] = 4,
    ACTIONS(801), 1,
      sym__identifier_char,
    ACTIONS(804), 1,
      anon_sym_CR,
    STATE(171), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(799), 32,
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
  [10910] = 4,
    ACTIONS(808), 1,
      anon_sym_EQ,
    ACTIONS(810), 1,
      anon_sym_CR,
    STATE(172), 2,
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
  [10955] = 3,
    ACTIONS(814), 1,
      anon_sym_CR,
    STATE(173), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(812), 33,
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
  [10998] = 3,
    ACTIONS(818), 1,
      anon_sym_CR,
    STATE(174), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(816), 33,
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
  [11041] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(820), 1,
      anon_sym_BSLASH,
    ACTIONS(823), 1,
      sym__bom,
    ACTIONS(829), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      aux_sym_node_repeat3,
    STATE(186), 1,
      sym__escline,
    STATE(217), 1,
      sym__ws,
    STATE(224), 1,
      sym__unicode_space,
    STATE(175), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(198), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(200), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    ACTIONS(826), 18,
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
  [11102] = 4,
    ACTIONS(834), 1,
      sym___identifier_char_no_digit,
    ACTIONS(836), 1,
      anon_sym_CR,
    STATE(176), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(832), 32,
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
  [11147] = 3,
    ACTIONS(840), 1,
      anon_sym_CR,
    STATE(177), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(838), 33,
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
  [11190] = 6,
    ACTIONS(845), 1,
      anon_sym_CR,
    ACTIONS(852), 1,
      anon_sym_SLASH_STAR,
    STATE(178), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(179), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(842), 10,
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
    ACTIONS(848), 19,
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
  [11239] = 6,
    ACTIONS(859), 1,
      anon_sym_CR,
    ACTIONS(866), 1,
      anon_sym_SLASH_STAR,
    STATE(179), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(43), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(856), 10,
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
    ACTIONS(862), 19,
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
  [11288] = 3,
    ACTIONS(872), 1,
      anon_sym_CR,
    STATE(180), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(870), 33,
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
  [11331] = 3,
    ACTIONS(712), 1,
      anon_sym_CR,
    STATE(181), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(710), 32,
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
  [11373] = 3,
    ACTIONS(876), 1,
      anon_sym_CR,
    STATE(182), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(874), 32,
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
  [11415] = 3,
    ACTIONS(765), 1,
      anon_sym_CR,
    STATE(183), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(763), 32,
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
  [11457] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(878), 1,
      sym__bom,
    ACTIONS(884), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      aux_sym_node_repeat3,
    STATE(217), 1,
      sym__ws,
    STATE(224), 1,
      sym__unicode_space,
    STATE(184), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(223), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(225), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [11513] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(887), 1,
      sym__bom,
    ACTIONS(893), 1,
      anon_sym_SLASH_STAR,
    STATE(217), 1,
      sym__ws,
    STATE(224), 1,
      sym__unicode_space,
    ACTIONS(265), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    STATE(185), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(267), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(890), 18,
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
  [11567] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(896), 1,
      sym__bom,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    STATE(184), 1,
      aux_sym_node_repeat3,
    STATE(217), 1,
      sym__ws,
    STATE(224), 1,
      sym__unicode_space,
    STATE(186), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(246), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(248), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(899), 18,
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
  [11623] = 3,
    ACTIONS(810), 1,
      anon_sym_CR,
    STATE(187), 2,
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
  [11665] = 3,
    ACTIONS(672), 1,
      anon_sym_CR,
    STATE(188), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
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
  [11707] = 3,
    ACTIONS(907), 1,
      anon_sym_CR,
    STATE(189), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(905), 32,
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
  [11749] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(896), 1,
      sym__bom,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      aux_sym_node_repeat3,
    STATE(217), 1,
      sym__ws,
    STATE(224), 1,
      sym__unicode_space,
    STATE(190), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(246), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(248), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(899), 18,
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
  [11805] = 3,
    ACTIONS(911), 1,
      anon_sym_CR,
    STATE(191), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(909), 32,
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
  [11847] = 3,
    ACTIONS(915), 1,
      anon_sym_CR,
    STATE(192), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(913), 32,
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
  [11889] = 3,
    ACTIONS(919), 1,
      anon_sym_CR,
    STATE(193), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(917), 32,
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
  [11931] = 3,
    ACTIONS(923), 1,
      anon_sym_CR,
    STATE(194), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(921), 32,
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
  [11973] = 3,
    ACTIONS(927), 1,
      anon_sym_CR,
    STATE(195), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(925), 32,
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
  [12015] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym__bom,
    ACTIONS(829), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      aux_sym_node_repeat3,
    STATE(217), 1,
      sym__ws,
    STATE(224), 1,
      sym__unicode_space,
    STATE(196), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(198), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(200), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(826), 18,
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
  [12071] = 3,
    ACTIONS(929), 1,
      anon_sym_CR,
    STATE(197), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(808), 32,
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
  [12113] = 3,
    ACTIONS(413), 1,
      anon_sym_CR,
    STATE(198), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(408), 32,
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
  [12155] = 3,
    ACTIONS(933), 1,
      anon_sym_CR,
    STATE(199), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(931), 32,
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
  [12197] = 3,
    ACTIONS(937), 1,
      anon_sym_CR,
    STATE(200), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(935), 32,
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
  [12239] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(939), 1,
      anon_sym_CR,
    ACTIONS(945), 1,
      anon_sym_SLASH_SLASH,
    STATE(216), 1,
      sym__newline,
    STATE(201), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(206), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(941), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(943), 19,
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
  [12290] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(947), 1,
      anon_sym_CR,
    ACTIONS(953), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 1,
      sym__newline,
    STATE(202), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(205), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(949), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(951), 19,
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
  [12341] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(955), 1,
      anon_sym_CR,
    ACTIONS(961), 1,
      anon_sym_SLASH_SLASH,
    STATE(50), 1,
      sym__newline,
    STATE(203), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(210), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(957), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(959), 19,
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
  [12392] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(961), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(963), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__newline,
    STATE(204), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(203), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(965), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(967), 19,
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
  [12443] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(947), 1,
      anon_sym_CR,
    ACTIONS(953), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym__newline,
    STATE(205), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(210), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(949), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(959), 19,
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
  [12494] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(939), 1,
      anon_sym_CR,
    ACTIONS(945), 1,
      anon_sym_SLASH_SLASH,
    STATE(222), 1,
      sym__newline,
    STATE(206), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(210), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(941), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(959), 19,
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
  [12545] = 3,
    ACTIONS(971), 1,
      anon_sym_CR,
    STATE(207), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(969), 30,
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
  [12585] = 3,
    ACTIONS(975), 1,
      anon_sym_CR,
    STATE(208), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(973), 30,
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
  [12625] = 3,
    ACTIONS(979), 1,
      anon_sym_CR,
    STATE(209), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(977), 30,
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
  [12665] = 5,
    ACTIONS(265), 1,
      anon_sym_CR,
    ACTIONS(984), 1,
      anon_sym_SLASH_STAR,
    STATE(210), 5,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(267), 7,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(981), 19,
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
  [12709] = 3,
    ACTIONS(989), 1,
      anon_sym_CR,
    STATE(211), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(987), 30,
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
  [12749] = 3,
    ACTIONS(993), 1,
      anon_sym_CR,
    STATE(212), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(991), 30,
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
  [12789] = 3,
    ACTIONS(997), 1,
      anon_sym_CR,
    STATE(213), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(995), 30,
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
  [12829] = 3,
    ACTIONS(1001), 1,
      anon_sym_CR,
    STATE(214), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(999), 30,
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
  [12869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(215), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(311), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(313), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [12910] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(216), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(299), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(301), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [12951] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(217), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(549), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(551), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [12992] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(565), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(567), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(219), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(295), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(297), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(537), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(539), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(221), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(303), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(305), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13156] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(222), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(291), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(293), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13197] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(223), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(307), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(309), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(557), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(559), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13279] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(553), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(555), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
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
  [13320] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym__bom,
    ACTIONS(361), 1,
      anon_sym_SLASH_STAR,
    STATE(164), 1,
      aux_sym_node_repeat1,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(196), 1,
      sym__escline,
    STATE(217), 1,
      sym__ws,
    STATE(218), 1,
      sym__node_space,
    STATE(224), 1,
      sym__unicode_space,
    STATE(226), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(359), 18,
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
  [13378] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym__bom,
    ACTIONS(361), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(196), 1,
      sym__escline,
    STATE(217), 1,
      sym__ws,
    STATE(218), 1,
      sym__node_space,
    STATE(224), 1,
      sym__unicode_space,
    STATE(226), 1,
      aux_sym_node_repeat1,
    STATE(227), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(359), 18,
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
  [13436] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(1005), 1,
      aux_sym_raw_string_token1,
    STATE(152), 1,
      sym__integer,
    STATE(192), 1,
      sym_value,
    STATE(229), 1,
      sym_type,
    STATE(245), 1,
      sym__sign,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(228), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1003), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(187), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(189), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [13507] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(1005), 1,
      aux_sym_raw_string_token1,
    STATE(152), 1,
      sym__integer,
    STATE(245), 1,
      sym__sign,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(229), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1003), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
    STATE(191), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(189), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [13569] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(230), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13612] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    STATE(65), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(231), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13655] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym_raw_string_token1,
    ACTIONS(19), 1,
      aux_sym_raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    STATE(62), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(177), 2,
      sym_escaped_string,
      sym_raw_string,
    STATE(197), 2,
      sym__bare_identifier,
      sym_string,
    STATE(232), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13698] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1009), 1,
      sym__digit,
    STATE(233), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1007), 11,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token1,
      aux_sym_raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [13725] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(939), 1,
      anon_sym_CR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1013), 1,
      sym__eof,
    STATE(219), 1,
      sym__newline,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(234), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(941), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13759] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1015), 1,
      anon_sym_CR,
    STATE(123), 1,
      sym__newline,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(235), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1017), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13791] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1019), 1,
      anon_sym_CR,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(312), 1,
      sym__newline,
    STATE(236), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1021), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13823] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1023), 1,
      anon_sym_CR,
    STATE(51), 1,
      sym__newline,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(237), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1025), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13855] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(947), 1,
      anon_sym_CR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1027), 1,
      sym__eof,
    STATE(112), 1,
      sym__newline,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(238), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(949), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13889] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1029), 1,
      anon_sym_CR,
    ACTIONS(1033), 1,
      aux_sym_single_line_comment_token1,
    STATE(239), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1031), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1036), 2,
      anon_sym_CR,
      aux_sym_single_line_comment_token1,
    STATE(240), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1038), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13940] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(832), 1,
      anon_sym_EQ,
    ACTIONS(1040), 1,
      sym___identifier_char_no_digit,
    ACTIONS(1042), 1,
      anon_sym_0x,
    ACTIONS(1044), 1,
      anon_sym_0o,
    ACTIONS(1046), 1,
      anon_sym_0b,
    STATE(150), 1,
      sym__integer,
    STATE(241), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 1,
      sym__digit,
    STATE(242), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1048), 6,
      sym___identifier_char_no_digit,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [13994] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(243), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1007), 3,
      anon_sym_DQUOTE,
      aux_sym_raw_string_token3,
      anon_sym_DASH,
    ACTIONS(1009), 3,
      sym__normal_bare_identifier,
      aux_sym_raw_string_token1,
      anon_sym_PLUS,
  [14015] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1054), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1058), 1,
      aux_sym_commented_block_token1,
    STATE(262), 1,
      sym_commented_block,
    ACTIONS(1056), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(244), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14039] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(1042), 1,
      anon_sym_0x,
    ACTIONS(1044), 1,
      anon_sym_0o,
    ACTIONS(1046), 1,
      anon_sym_0b,
    STATE(150), 1,
      sym__integer,
    STATE(245), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14065] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1064), 1,
      aux_sym_commented_block_token1,
    STATE(313), 1,
      sym_commented_block,
    ACTIONS(1062), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(246), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14089] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1066), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1070), 1,
      aux_sym_commented_block_token1,
    STATE(215), 1,
      sym_commented_block,
    ACTIONS(1068), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(247), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14113] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1066), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1070), 1,
      aux_sym_commented_block_token1,
    STATE(223), 1,
      sym_commented_block,
    ACTIONS(1068), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(248), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14137] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1072), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1076), 1,
      aux_sym_commented_block_token1,
    STATE(54), 1,
      sym_commented_block,
    ACTIONS(1074), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(249), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14161] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1078), 1,
      sym__digit,
    STATE(200), 1,
      sym__integer,
    STATE(280), 1,
      sym__sign,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(250), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14185] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1060), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1064), 1,
      aux_sym_commented_block_token1,
    STATE(315), 1,
      sym_commented_block,
    ACTIONS(1062), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(251), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14209] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1072), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1076), 1,
      aux_sym_commented_block_token1,
    STATE(55), 1,
      sym_commented_block,
    ACTIONS(1074), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(252), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14233] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1054), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1058), 1,
      aux_sym_commented_block_token1,
    STATE(268), 1,
      sym_commented_block,
    ACTIONS(1056), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(253), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14257] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1080), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1084), 1,
      aux_sym_commented_block_token1,
    STATE(109), 1,
      sym_commented_block,
    ACTIONS(1082), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(254), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14281] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1086), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1090), 1,
      aux_sym_commented_block_token1,
    STATE(106), 1,
      sym_commented_block,
    ACTIONS(1088), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(255), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14305] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1080), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1084), 1,
      aux_sym_commented_block_token1,
    STATE(108), 1,
      sym_commented_block,
    ACTIONS(1082), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(256), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14329] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1052), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1086), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1090), 1,
      aux_sym_commented_block_token1,
    STATE(124), 1,
      sym_commented_block,
    ACTIONS(1088), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(257), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14353] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1092), 1,
      sym__identifier_char,
    ACTIONS(799), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(258), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
  [14372] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1095), 1,
      anon_sym_DQUOTE,
    ACTIONS(1097), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(1100), 1,
      sym__escape,
    STATE(259), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_escaped_string_repeat1,
  [14393] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1103), 1,
      anon_sym_DQUOTE,
    ACTIONS(1105), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(1107), 1,
      sym__escape,
    STATE(259), 1,
      aux_sym_escaped_string_repeat1,
    STATE(260), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14416] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1105), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(1107), 1,
      sym__escape,
    ACTIONS(1109), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      aux_sym_escaped_string_repeat1,
    STATE(261), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(307), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(262), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(309), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14456] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1111), 1,
      sym__identifier_char,
    STATE(267), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(769), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(263), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14477] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1105), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(1107), 1,
      sym__escape,
    ACTIONS(1113), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      aux_sym_escaped_string_repeat1,
    STATE(264), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(303), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(265), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(305), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14517] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1105), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(1107), 1,
      sym__escape,
    ACTIONS(1115), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      aux_sym_escaped_string_repeat1,
    STATE(266), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14540] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1111), 1,
      sym__identifier_char,
    STATE(258), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(793), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(267), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(268), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(313), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14578] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1119), 1,
      aux_sym_escaped_string_token1,
    ACTIONS(1117), 2,
      anon_sym_DQUOTE,
      sym__escape,
    STATE(269), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14596] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(270), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1121), 3,
      sym__identifier_char,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [14612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(1123), 1,
      anon_sym_POUND,
    STATE(271), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_raw_string_repeat1,
  [14630] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_POUND,
    STATE(271), 1,
      aux_sym_raw_string_repeat1,
    STATE(272), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14650] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1078), 1,
      sym__digit,
    STATE(157), 1,
      sym__integer,
    STATE(273), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14667] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1078), 1,
      sym__digit,
    STATE(165), 1,
      sym__integer,
    STATE(274), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    STATE(238), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(275), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1128), 1,
      anon_sym_POUND,
    STATE(161), 1,
      aux_sym_raw_string_repeat1,
    STATE(276), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14718] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    STATE(237), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(277), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14735] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(808), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(278), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14750] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    STATE(234), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(279), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14767] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1078), 1,
      sym__digit,
    STATE(194), 1,
      sym__integer,
    STATE(280), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14784] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1130), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(281), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1132), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
    STATE(282), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1134), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(283), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14829] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(1040), 1,
      sym___identifier_char_no_digit,
    STATE(284), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14846] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1126), 1,
      anon_sym_POUND,
    STATE(272), 1,
      aux_sym_raw_string_repeat1,
    STATE(285), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(832), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(286), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14878] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    STATE(236), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(287), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1011), 1,
      aux_sym_single_line_comment_token1,
    STATE(235), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(288), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14912] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
    STATE(289), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14926] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1138), 1,
      ts_builtin_sym_end,
    STATE(290), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14940] = 4,
    ACTIONS(1140), 1,
      aux_sym_raw_string_token2,
    ACTIONS(1142), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1144), 1,
      anon_sym_SLASH_STAR,
    STATE(291), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(292), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14968] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(293), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14982] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1150), 1,
      anon_sym_DQUOTE,
    STATE(294), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14996] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(295), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1154), 1,
      aux_sym__octal_token1,
    STATE(296), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1156), 1,
      anon_sym_DQUOTE,
    STATE(297), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1158), 1,
      sym__hex_digit,
    STATE(298), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15052] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1160), 1,
      anon_sym_EQ,
    STATE(299), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15066] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1162), 1,
      anon_sym_DQUOTE,
    STATE(300), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15080] = 4,
    ACTIONS(1142), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1164), 1,
      aux_sym_raw_string_token2,
    STATE(301), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15094] = 4,
    ACTIONS(1142), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1166), 1,
      aux_sym_raw_string_token2,
    STATE(302), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1168), 1,
      anon_sym_DQUOTE,
    STATE(303), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(304), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(305), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(306), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15164] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1170), 1,
      aux_sym__octal_token1,
    STATE(307), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15178] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(308), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1172), 1,
      sym__hex_digit,
    STATE(309), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15206] = 4,
    ACTIONS(1142), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1174), 1,
      aux_sym_raw_string_token2,
    STATE(310), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1176), 1,
      anon_sym_DQUOTE,
    STATE(311), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15234] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [15238] = 1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [15242] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [15246] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 397,
  [SMALL_STATE(11)] = 526,
  [SMALL_STATE(12)] = 655,
  [SMALL_STATE(13)] = 727,
  [SMALL_STATE(14)] = 812,
  [SMALL_STATE(15)] = 897,
  [SMALL_STATE(16)] = 992,
  [SMALL_STATE(17)] = 1088,
  [SMALL_STATE(18)] = 1184,
  [SMALL_STATE(19)] = 1280,
  [SMALL_STATE(20)] = 1376,
  [SMALL_STATE(21)] = 1472,
  [SMALL_STATE(22)] = 1568,
  [SMALL_STATE(23)] = 1664,
  [SMALL_STATE(24)] = 1760,
  [SMALL_STATE(25)] = 1830,
  [SMALL_STATE(26)] = 1926,
  [SMALL_STATE(27)] = 2022,
  [SMALL_STATE(28)] = 2118,
  [SMALL_STATE(29)] = 2214,
  [SMALL_STATE(30)] = 2309,
  [SMALL_STATE(31)] = 2374,
  [SMALL_STATE(32)] = 2439,
  [SMALL_STATE(33)] = 2534,
  [SMALL_STATE(34)] = 2629,
  [SMALL_STATE(35)] = 2724,
  [SMALL_STATE(36)] = 2819,
  [SMALL_STATE(37)] = 2914,
  [SMALL_STATE(38)] = 3009,
  [SMALL_STATE(39)] = 3074,
  [SMALL_STATE(40)] = 3169,
  [SMALL_STATE(41)] = 3264,
  [SMALL_STATE(42)] = 3359,
  [SMALL_STATE(43)] = 3424,
  [SMALL_STATE(44)] = 3487,
  [SMALL_STATE(45)] = 3582,
  [SMALL_STATE(46)] = 3677,
  [SMALL_STATE(47)] = 3772,
  [SMALL_STATE(48)] = 3867,
  [SMALL_STATE(49)] = 3962,
  [SMALL_STATE(50)] = 4054,
  [SMALL_STATE(51)] = 4110,
  [SMALL_STATE(52)] = 4166,
  [SMALL_STATE(53)] = 4222,
  [SMALL_STATE(54)] = 4278,
  [SMALL_STATE(55)] = 4334,
  [SMALL_STATE(56)] = 4390,
  [SMALL_STATE(57)] = 4463,
  [SMALL_STATE(58)] = 4539,
  [SMALL_STATE(59)] = 4615,
  [SMALL_STATE(60)] = 4691,
  [SMALL_STATE(61)] = 4767,
  [SMALL_STATE(62)] = 4843,
  [SMALL_STATE(63)] = 4919,
  [SMALL_STATE(64)] = 4995,
  [SMALL_STATE(65)] = 5055,
  [SMALL_STATE(66)] = 5131,
  [SMALL_STATE(67)] = 5194,
  [SMALL_STATE(68)] = 5257,
  [SMALL_STATE(69)] = 5350,
  [SMALL_STATE(70)] = 5419,
  [SMALL_STATE(71)] = 5482,
  [SMALL_STATE(72)] = 5545,
  [SMALL_STATE(73)] = 5638,
  [SMALL_STATE(74)] = 5700,
  [SMALL_STATE(75)] = 5764,
  [SMALL_STATE(76)] = 5828,
  [SMALL_STATE(77)] = 5892,
  [SMALL_STATE(78)] = 5956,
  [SMALL_STATE(79)] = 6025,
  [SMALL_STATE(80)] = 6089,
  [SMALL_STATE(81)] = 6153,
  [SMALL_STATE(82)] = 6217,
  [SMALL_STATE(83)] = 6269,
  [SMALL_STATE(84)] = 6333,
  [SMALL_STATE(85)] = 6397,
  [SMALL_STATE(86)] = 6461,
  [SMALL_STATE(87)] = 6525,
  [SMALL_STATE(88)] = 6589,
  [SMALL_STATE(89)] = 6653,
  [SMALL_STATE(90)] = 6705,
  [SMALL_STATE(91)] = 6769,
  [SMALL_STATE(92)] = 6833,
  [SMALL_STATE(93)] = 6897,
  [SMALL_STATE(94)] = 6961,
  [SMALL_STATE(95)] = 7025,
  [SMALL_STATE(96)] = 7089,
  [SMALL_STATE(97)] = 7153,
  [SMALL_STATE(98)] = 7217,
  [SMALL_STATE(99)] = 7281,
  [SMALL_STATE(100)] = 7345,
  [SMALL_STATE(101)] = 7409,
  [SMALL_STATE(102)] = 7473,
  [SMALL_STATE(103)] = 7537,
  [SMALL_STATE(104)] = 7587,
  [SMALL_STATE(105)] = 7651,
  [SMALL_STATE(106)] = 7715,
  [SMALL_STATE(107)] = 7762,
  [SMALL_STATE(108)] = 7809,
  [SMALL_STATE(109)] = 7858,
  [SMALL_STATE(110)] = 7907,
  [SMALL_STATE(111)] = 7954,
  [SMALL_STATE(112)] = 8003,
  [SMALL_STATE(113)] = 8052,
  [SMALL_STATE(114)] = 8101,
  [SMALL_STATE(115)] = 8148,
  [SMALL_STATE(116)] = 8195,
  [SMALL_STATE(117)] = 8244,
  [SMALL_STATE(118)] = 8293,
  [SMALL_STATE(119)] = 8342,
  [SMALL_STATE(120)] = 8389,
  [SMALL_STATE(121)] = 8438,
  [SMALL_STATE(122)] = 8487,
  [SMALL_STATE(123)] = 8536,
  [SMALL_STATE(124)] = 8583,
  [SMALL_STATE(125)] = 8630,
  [SMALL_STATE(126)] = 8677,
  [SMALL_STATE(127)] = 8724,
  [SMALL_STATE(128)] = 8771,
  [SMALL_STATE(129)] = 8818,
  [SMALL_STATE(130)] = 8865,
  [SMALL_STATE(131)] = 8912,
  [SMALL_STATE(132)] = 8959,
  [SMALL_STATE(133)] = 9006,
  [SMALL_STATE(134)] = 9053,
  [SMALL_STATE(135)] = 9100,
  [SMALL_STATE(136)] = 9147,
  [SMALL_STATE(137)] = 9194,
  [SMALL_STATE(138)] = 9241,
  [SMALL_STATE(139)] = 9288,
  [SMALL_STATE(140)] = 9335,
  [SMALL_STATE(141)] = 9382,
  [SMALL_STATE(142)] = 9429,
  [SMALL_STATE(143)] = 9476,
  [SMALL_STATE(144)] = 9523,
  [SMALL_STATE(145)] = 9570,
  [SMALL_STATE(146)] = 9617,
  [SMALL_STATE(147)] = 9665,
  [SMALL_STATE(148)] = 9715,
  [SMALL_STATE(149)] = 9765,
  [SMALL_STATE(150)] = 9815,
  [SMALL_STATE(151)] = 9867,
  [SMALL_STATE(152)] = 9917,
  [SMALL_STATE(153)] = 9969,
  [SMALL_STATE(154)] = 10018,
  [SMALL_STATE(155)] = 10067,
  [SMALL_STATE(156)] = 10116,
  [SMALL_STATE(157)] = 10165,
  [SMALL_STATE(158)] = 10214,
  [SMALL_STATE(159)] = 10263,
  [SMALL_STATE(160)] = 10312,
  [SMALL_STATE(161)] = 10359,
  [SMALL_STATE(162)] = 10408,
  [SMALL_STATE(163)] = 10455,
  [SMALL_STATE(164)] = 10502,
  [SMALL_STATE(165)] = 10567,
  [SMALL_STATE(166)] = 10616,
  [SMALL_STATE(167)] = 10665,
  [SMALL_STATE(168)] = 10714,
  [SMALL_STATE(169)] = 10762,
  [SMALL_STATE(170)] = 10816,
  [SMALL_STATE(171)] = 10864,
  [SMALL_STATE(172)] = 10910,
  [SMALL_STATE(173)] = 10955,
  [SMALL_STATE(174)] = 10998,
  [SMALL_STATE(175)] = 11041,
  [SMALL_STATE(176)] = 11102,
  [SMALL_STATE(177)] = 11147,
  [SMALL_STATE(178)] = 11190,
  [SMALL_STATE(179)] = 11239,
  [SMALL_STATE(180)] = 11288,
  [SMALL_STATE(181)] = 11331,
  [SMALL_STATE(182)] = 11373,
  [SMALL_STATE(183)] = 11415,
  [SMALL_STATE(184)] = 11457,
  [SMALL_STATE(185)] = 11513,
  [SMALL_STATE(186)] = 11567,
  [SMALL_STATE(187)] = 11623,
  [SMALL_STATE(188)] = 11665,
  [SMALL_STATE(189)] = 11707,
  [SMALL_STATE(190)] = 11749,
  [SMALL_STATE(191)] = 11805,
  [SMALL_STATE(192)] = 11847,
  [SMALL_STATE(193)] = 11889,
  [SMALL_STATE(194)] = 11931,
  [SMALL_STATE(195)] = 11973,
  [SMALL_STATE(196)] = 12015,
  [SMALL_STATE(197)] = 12071,
  [SMALL_STATE(198)] = 12113,
  [SMALL_STATE(199)] = 12155,
  [SMALL_STATE(200)] = 12197,
  [SMALL_STATE(201)] = 12239,
  [SMALL_STATE(202)] = 12290,
  [SMALL_STATE(203)] = 12341,
  [SMALL_STATE(204)] = 12392,
  [SMALL_STATE(205)] = 12443,
  [SMALL_STATE(206)] = 12494,
  [SMALL_STATE(207)] = 12545,
  [SMALL_STATE(208)] = 12585,
  [SMALL_STATE(209)] = 12625,
  [SMALL_STATE(210)] = 12665,
  [SMALL_STATE(211)] = 12709,
  [SMALL_STATE(212)] = 12749,
  [SMALL_STATE(213)] = 12789,
  [SMALL_STATE(214)] = 12829,
  [SMALL_STATE(215)] = 12869,
  [SMALL_STATE(216)] = 12910,
  [SMALL_STATE(217)] = 12951,
  [SMALL_STATE(218)] = 12992,
  [SMALL_STATE(219)] = 13033,
  [SMALL_STATE(220)] = 13074,
  [SMALL_STATE(221)] = 13115,
  [SMALL_STATE(222)] = 13156,
  [SMALL_STATE(223)] = 13197,
  [SMALL_STATE(224)] = 13238,
  [SMALL_STATE(225)] = 13279,
  [SMALL_STATE(226)] = 13320,
  [SMALL_STATE(227)] = 13378,
  [SMALL_STATE(228)] = 13436,
  [SMALL_STATE(229)] = 13507,
  [SMALL_STATE(230)] = 13569,
  [SMALL_STATE(231)] = 13612,
  [SMALL_STATE(232)] = 13655,
  [SMALL_STATE(233)] = 13698,
  [SMALL_STATE(234)] = 13725,
  [SMALL_STATE(235)] = 13759,
  [SMALL_STATE(236)] = 13791,
  [SMALL_STATE(237)] = 13823,
  [SMALL_STATE(238)] = 13855,
  [SMALL_STATE(239)] = 13889,
  [SMALL_STATE(240)] = 13916,
  [SMALL_STATE(241)] = 13940,
  [SMALL_STATE(242)] = 13972,
  [SMALL_STATE(243)] = 13994,
  [SMALL_STATE(244)] = 14015,
  [SMALL_STATE(245)] = 14039,
  [SMALL_STATE(246)] = 14065,
  [SMALL_STATE(247)] = 14089,
  [SMALL_STATE(248)] = 14113,
  [SMALL_STATE(249)] = 14137,
  [SMALL_STATE(250)] = 14161,
  [SMALL_STATE(251)] = 14185,
  [SMALL_STATE(252)] = 14209,
  [SMALL_STATE(253)] = 14233,
  [SMALL_STATE(254)] = 14257,
  [SMALL_STATE(255)] = 14281,
  [SMALL_STATE(256)] = 14305,
  [SMALL_STATE(257)] = 14329,
  [SMALL_STATE(258)] = 14353,
  [SMALL_STATE(259)] = 14372,
  [SMALL_STATE(260)] = 14393,
  [SMALL_STATE(261)] = 14416,
  [SMALL_STATE(262)] = 14439,
  [SMALL_STATE(263)] = 14456,
  [SMALL_STATE(264)] = 14477,
  [SMALL_STATE(265)] = 14500,
  [SMALL_STATE(266)] = 14517,
  [SMALL_STATE(267)] = 14540,
  [SMALL_STATE(268)] = 14561,
  [SMALL_STATE(269)] = 14578,
  [SMALL_STATE(270)] = 14596,
  [SMALL_STATE(271)] = 14612,
  [SMALL_STATE(272)] = 14630,
  [SMALL_STATE(273)] = 14650,
  [SMALL_STATE(274)] = 14667,
  [SMALL_STATE(275)] = 14684,
  [SMALL_STATE(276)] = 14701,
  [SMALL_STATE(277)] = 14718,
  [SMALL_STATE(278)] = 14735,
  [SMALL_STATE(279)] = 14750,
  [SMALL_STATE(280)] = 14767,
  [SMALL_STATE(281)] = 14784,
  [SMALL_STATE(282)] = 14799,
  [SMALL_STATE(283)] = 14814,
  [SMALL_STATE(284)] = 14829,
  [SMALL_STATE(285)] = 14846,
  [SMALL_STATE(286)] = 14863,
  [SMALL_STATE(287)] = 14878,
  [SMALL_STATE(288)] = 14895,
  [SMALL_STATE(289)] = 14912,
  [SMALL_STATE(290)] = 14926,
  [SMALL_STATE(291)] = 14940,
  [SMALL_STATE(292)] = 14954,
  [SMALL_STATE(293)] = 14968,
  [SMALL_STATE(294)] = 14982,
  [SMALL_STATE(295)] = 14996,
  [SMALL_STATE(296)] = 15010,
  [SMALL_STATE(297)] = 15024,
  [SMALL_STATE(298)] = 15038,
  [SMALL_STATE(299)] = 15052,
  [SMALL_STATE(300)] = 15066,
  [SMALL_STATE(301)] = 15080,
  [SMALL_STATE(302)] = 15094,
  [SMALL_STATE(303)] = 15108,
  [SMALL_STATE(304)] = 15122,
  [SMALL_STATE(305)] = 15136,
  [SMALL_STATE(306)] = 15150,
  [SMALL_STATE(307)] = 15164,
  [SMALL_STATE(308)] = 15178,
  [SMALL_STATE(309)] = 15192,
  [SMALL_STATE(310)] = 15206,
  [SMALL_STATE(311)] = 15220,
  [SMALL_STATE(312)] = 15234,
  [SMALL_STATE(313)] = 15238,
  [SMALL_STATE(314)] = 15242,
  [SMALL_STATE(315)] = 15246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(204),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(24),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(252),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(197),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(68),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(14),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(266),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(300),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(301),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(176),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(176),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(49),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(49),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(288),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(257),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(204),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(43),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(252),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(43),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(252),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(38),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 6),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(43),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(252),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(30),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(43),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(252),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(202),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(118),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(117),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(254),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(288),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(257),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(209),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(211),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(202),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(118),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(117),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(254),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(214),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2), REDUCE(aux_sym_document_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(118),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(117),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(254),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(118),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(117),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(254),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(118),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(117),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(254),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(202),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(118),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(117),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(254),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(103),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 9),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 9),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 8),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 8),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicode_space, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicode_space, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ws, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ws, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 8),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 8),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 10),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 10),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 10),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 10),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 10),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 10),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 9),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 9),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 8),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 8),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 9),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 9),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 7),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 7),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 5),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 5),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(146),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__binary_repeat1, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(160),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octal_repeat1, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 5),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(162),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hex_repeat1, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_string_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_string_repeat1, 2), SHIFT_REPEAT(163),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_string_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(201),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(224),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(225),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(247),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 2),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [778] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(204),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [785] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(43),
  [789] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(252),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(171),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_string, 3),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_string, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_string, 2),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_string, 2),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(201),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(224),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(225),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(247),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [848] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(179),
  [852] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(252),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [862] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(43),
  [866] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(252),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(224),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(225),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(247),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(224),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(225),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(247),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(224),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(225),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(247),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 5),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 3),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 2),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 7),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(210),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(257),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 8),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1033] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(240),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sign, 1),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sign, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(270),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_string_repeat1, 2),
  [1097] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_string_repeat1, 2), SHIFT_REPEAT(269),
  [1100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_string_repeat1, 2), SHIFT_REPEAT(269),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_string_repeat1, 1),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_string_repeat1, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 1),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_string_repeat1, 2), SHIFT_REPEAT(282),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_string_repeat1, 1),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
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
