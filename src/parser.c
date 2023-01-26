#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 318
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 2
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 15

enum {
  sym__normal_bare_identifier = 1,
  anon_sym_SLASH_DASH = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  sym__identifier_char = 6,
  sym___identifier_char_no_digit = 7,
  sym___identifier_char_no_digit_sign = 8,
  anon_sym_null = 9,
  anon_sym_i8 = 10,
  anon_sym_i16 = 11,
  anon_sym_i32 = 12,
  anon_sym_i64 = 13,
  anon_sym_u8 = 14,
  anon_sym_u16 = 15,
  anon_sym_u32 = 16,
  anon_sym_u64 = 17,
  anon_sym_isize = 18,
  anon_sym_usize = 19,
  anon_sym_f32 = 20,
  anon_sym_f64 = 21,
  anon_sym_decimal64 = 22,
  anon_sym_decimal128 = 23,
  anon_sym_date_DASHtime = 24,
  anon_sym_time = 25,
  anon_sym_date = 26,
  anon_sym_duration = 27,
  anon_sym_decimal = 28,
  anon_sym_currency = 29,
  anon_sym_country_DASH2 = 30,
  anon_sym_country_DASH3 = 31,
  anon_sym_country_DASHsubdivision = 32,
  anon_sym_email = 33,
  anon_sym_idn_DASHemail = 34,
  anon_sym_hostname = 35,
  anon_sym_idn_DASHhostname = 36,
  anon_sym_ipv4 = 37,
  anon_sym_ipv6 = 38,
  anon_sym_url = 39,
  anon_sym_url_DASHreference = 40,
  anon_sym_irl = 41,
  anon_sym_iri_DASHreference = 42,
  anon_sym_url_DASHtemplate = 43,
  anon_sym_uuid = 44,
  anon_sym_regex = 45,
  anon_sym_base64 = 46,
  anon_sym_EQ = 47,
  anon_sym_LPAREN = 48,
  anon_sym_RPAREN = 49,
  anon_sym_DQUOTE = 50,
  aux_sym__escaped_string_token1 = 51,
  aux_sym__escape_token1 = 52,
  sym__hex_digit = 53,
  aux_sym__raw_string_token1 = 54,
  aux_sym__raw_string_token2 = 55,
  anon_sym_POUND = 56,
  aux_sym__raw_string_token3 = 57,
  anon_sym_DOT = 58,
  anon_sym_e = 59,
  anon_sym_E = 60,
  anon_sym__ = 61,
  sym__digit = 62,
  anon_sym_PLUS = 63,
  anon_sym_DASH = 64,
  anon_sym_0x = 65,
  anon_sym_0o = 66,
  aux_sym__octal_token1 = 67,
  anon_sym_0b = 68,
  anon_sym_0 = 69,
  anon_sym_1 = 70,
  anon_sym_true = 71,
  anon_sym_false = 72,
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
  sym__escaped_string = 122,
  sym__raw_string = 123,
  sym_number = 124,
  sym__decimal = 125,
  sym__exponent = 126,
  sym__integer = 127,
  sym__sign = 128,
  sym__hex = 129,
  sym__octal = 130,
  sym__binary = 131,
  sym_boolean = 132,
  sym__escline = 133,
  sym__linespace = 134,
  sym__newline = 135,
  sym__ws = 136,
  sym__unicode_space = 137,
  sym_single_line_comment = 138,
  sym_multi_line_comment = 139,
  sym_commented_block = 140,
  aux_sym_document_repeat1 = 141,
  aux_sym_document_repeat2 = 142,
  aux_sym_node_repeat1 = 143,
  aux_sym_node_repeat2 = 144,
  aux_sym_node_repeat3 = 145,
  aux_sym__bare_identifier_repeat1 = 146,
  aux_sym__escaped_string_repeat1 = 147,
  aux_sym__raw_string_repeat1 = 148,
  aux_sym__integer_repeat1 = 149,
  aux_sym__hex_repeat1 = 150,
  aux_sym__octal_repeat1 = 151,
  aux_sym__binary_repeat1 = 152,
  aux_sym_single_line_comment_repeat1 = 153,
  alias_sym_decimal = 154,
  alias_sym_special_comment = 155,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__normal_bare_identifier] = "_normal_bare_identifier",
  [anon_sym_SLASH_DASH] = "/-",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [sym__identifier_char] = "_identifier_char",
  [sym___identifier_char_no_digit] = "__identifier_char_no_digit",
  [sym___identifier_char_no_digit_sign] = "__identifier_char_no_digit_sign",
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
  [aux_sym__escaped_string_token1] = "_escaped_string_token1",
  [aux_sym__escape_token1] = "escape",
  [sym__hex_digit] = "_hex_digit",
  [aux_sym__raw_string_token1] = "_raw_string_token1",
  [aux_sym__raw_string_token2] = "_raw_string_token2",
  [anon_sym_POUND] = "#",
  [aux_sym__raw_string_token3] = "_raw_string_token3",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym__escaped_string] = "_escaped_string",
  [sym__raw_string] = "_raw_string",
  [sym_number] = "number",
  [sym__decimal] = "_decimal",
  [sym__exponent] = "exponent",
  [sym__integer] = "_integer",
  [sym__sign] = "_sign",
  [sym__hex] = "_hex",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
  [sym_boolean] = "boolean",
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
  [aux_sym__escaped_string_repeat1] = "_escaped_string_repeat1",
  [aux_sym__raw_string_repeat1] = "_raw_string_repeat1",
  [aux_sym__integer_repeat1] = "_integer_repeat1",
  [aux_sym__hex_repeat1] = "_hex_repeat1",
  [aux_sym__octal_repeat1] = "_octal_repeat1",
  [aux_sym__binary_repeat1] = "_binary_repeat1",
  [aux_sym_single_line_comment_repeat1] = "single_line_comment_repeat1",
  [alias_sym_decimal] = "decimal",
  [alias_sym_special_comment] = "special_comment",
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
  [aux_sym__escaped_string_token1] = aux_sym__escaped_string_token1,
  [aux_sym__escape_token1] = aux_sym__escape_token1,
  [sym__hex_digit] = sym__hex_digit,
  [aux_sym__raw_string_token1] = aux_sym__raw_string_token1,
  [aux_sym__raw_string_token2] = aux_sym__raw_string_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__raw_string_token3] = aux_sym__raw_string_token3,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym__escaped_string] = sym__escaped_string,
  [sym__raw_string] = sym__raw_string,
  [sym_number] = sym_number,
  [sym__decimal] = sym__decimal,
  [sym__exponent] = sym__exponent,
  [sym__integer] = sym__integer,
  [sym__sign] = sym__sign,
  [sym__hex] = sym__hex,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
  [sym_boolean] = sym_boolean,
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
  [aux_sym__escaped_string_repeat1] = aux_sym__escaped_string_repeat1,
  [aux_sym__raw_string_repeat1] = aux_sym__raw_string_repeat1,
  [aux_sym__integer_repeat1] = aux_sym__integer_repeat1,
  [aux_sym__hex_repeat1] = aux_sym__hex_repeat1,
  [aux_sym__octal_repeat1] = aux_sym__octal_repeat1,
  [aux_sym__binary_repeat1] = aux_sym__binary_repeat1,
  [aux_sym_single_line_comment_repeat1] = aux_sym_single_line_comment_repeat1,
  [alias_sym_decimal] = alias_sym_decimal,
  [alias_sym_special_comment] = alias_sym_special_comment,
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
    .named = false,
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
  [aux_sym__escaped_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__raw_string_token3] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym__escaped_string] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_string] = {
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
    .visible = true,
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
  [sym_boolean] = {
    .visible = true,
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
  [aux_sym__escaped_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_string_repeat1] = {
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
  [alias_sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_special_comment] = {
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
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 4},
  [8] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [13] = {.index = 14, .length = 1},
  [14] = {.index = 15, .length = 1},
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
  [6] = {
    [0] = alias_sym_special_comment,
  },
  [9] = {
    [0] = alias_sym_special_comment,
    [1] = alias_sym_special_comment,
  },
  [10] = {
    [2] = alias_sym_decimal,
  },
  [12] = {
    [3] = alias_sym_decimal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__integer, 2,
    sym__integer,
    alias_sym_decimal,
  aux_sym_node_repeat1, 2,
    aux_sym_node_repeat1,
    alias_sym_special_comment,
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
  [57] = 12,
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
  [69] = 69,
  [70] = 70,
  [71] = 27,
  [72] = 72,
  [73] = 73,
  [74] = 45,
  [75] = 46,
  [76] = 43,
  [77] = 38,
  [78] = 31,
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
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 55,
  [110] = 54,
  [111] = 111,
  [112] = 53,
  [113] = 51,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 50,
  [122] = 52,
  [123] = 56,
  [124] = 55,
  [125] = 51,
  [126] = 126,
  [127] = 54,
  [128] = 53,
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
  [165] = 12,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 27,
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
  [186] = 45,
  [187] = 43,
  [188] = 188,
  [189] = 189,
  [190] = 38,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 31,
  [198] = 198,
  [199] = 199,
  [200] = 46,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 205,
  [206] = 205,
  [207] = 205,
  [208] = 203,
  [209] = 209,
  [210] = 210,
  [211] = 45,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 53,
  [218] = 114,
  [219] = 117,
  [220] = 50,
  [221] = 119,
  [222] = 118,
  [223] = 55,
  [224] = 54,
  [225] = 56,
  [226] = 52,
  [227] = 51,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 236,
  [238] = 236,
  [239] = 236,
  [240] = 236,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 235,
  [246] = 246,
  [247] = 247,
  [248] = 247,
  [249] = 247,
  [250] = 246,
  [251] = 247,
  [252] = 252,
  [253] = 253,
  [254] = 246,
  [255] = 247,
  [256] = 246,
  [257] = 246,
  [258] = 246,
  [259] = 247,
  [260] = 53,
  [261] = 54,
  [262] = 262,
  [263] = 263,
  [264] = 170,
  [265] = 55,
  [266] = 266,
  [267] = 262,
  [268] = 263,
  [269] = 169,
  [270] = 172,
  [271] = 164,
  [272] = 160,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 176,
  [278] = 278,
  [279] = 279,
  [280] = 279,
  [281] = 279,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 201,
  [287] = 278,
  [288] = 279,
  [289] = 289,
  [290] = 279,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 293,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 177,
  [304] = 178,
  [305] = 302,
  [306] = 181,
  [307] = 174,
  [308] = 308,
  [309] = 309,
  [310] = 295,
  [311] = 299,
  [312] = 308,
  [313] = 309,
  [314] = 53,
  [315] = 55,
  [316] = 51,
  [317] = 54,
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

static inline bool sym__normal_bare_identifier_character_set_3(int32_t c) {
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

static inline bool sym__normal_bare_identifier_character_set_4(int32_t c) {
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

static inline bool sym__normal_bare_identifier_character_set_5(int32_t c) {
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

static inline bool sym__normal_bare_identifier_character_set_7(int32_t c) {
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

static inline bool sym__normal_bare_identifier_character_set_8(int32_t c) {
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
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(209);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(120);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(119);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(119);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '#') ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(125);
      if (lookahead == '3') ADVANCE(126);
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
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(171);
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
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(122);
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
      if (lookahead == 'n') ADVANCE(127);
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
      if (lookahead == '}') ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == '}') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '}') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '}') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '}') ADVANCE(140);
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
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 160) ADVANCE(185);
      if (lookahead == 5760) ADVANCE(186);
      if (lookahead == 8192) ADVANCE(187);
      if (lookahead == 8193) ADVANCE(188);
      if (lookahead == 8194) ADVANCE(189);
      if (lookahead == 8195) ADVANCE(190);
      if (lookahead == 8196) ADVANCE(191);
      if (lookahead == 8197) ADVANCE(192);
      if (lookahead == 8198) ADVANCE(193);
      if (lookahead == 8199) ADVANCE(194);
      if (lookahead == 8200) ADVANCE(195);
      if (lookahead == 8201) ADVANCE(196);
      if (lookahead == 8202) ADVANCE(197);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 8239) ADVANCE(198);
      if (lookahead == 8287) ADVANCE(199);
      if (lookahead == 12288) ADVANCE(200);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(119);
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
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '#') ADVANCE(142);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(22);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(60);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(64);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(68);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(13);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(101);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'i') ADVANCE(91);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(92);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'o') ADVANCE(115);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(116);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(107);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(98);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'y') ADVANCE(94);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead == '#') ADVANCE(142);
      if (sym__normal_bare_identifier_character_set_8(lookahead)) ADVANCE(119);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead == '#') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__raw_string_token3);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_E);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym__);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(205);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(211);
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
  [24] = {.lex_state = 83},
  [25] = {.lex_state = 83},
  [26] = {.lex_state = 83},
  [27] = {.lex_state = 2, .external_lex_state = 1},
  [28] = {.lex_state = 83},
  [29] = {.lex_state = 83},
  [30] = {.lex_state = 83},
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
  [42] = {.lex_state = 83},
  [43] = {.lex_state = 2, .external_lex_state = 1},
  [44] = {.lex_state = 83},
  [45] = {.lex_state = 2, .external_lex_state = 1},
  [46] = {.lex_state = 2, .external_lex_state = 1},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 2, .external_lex_state = 1},
  [54] = {.lex_state = 2, .external_lex_state = 1},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 83, .external_lex_state = 1},
  [59] = {.lex_state = 83, .external_lex_state = 1},
  [60] = {.lex_state = 83, .external_lex_state = 1},
  [61] = {.lex_state = 83, .external_lex_state = 1},
  [62] = {.lex_state = 83, .external_lex_state = 1},
  [63] = {.lex_state = 83, .external_lex_state = 1},
  [64] = {.lex_state = 83, .external_lex_state = 1},
  [65] = {.lex_state = 83},
  [66] = {.lex_state = 83, .external_lex_state = 1},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 83},
  [69] = {.lex_state = 83},
  [70] = {.lex_state = 83},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 83},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
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
  [89] = {.lex_state = 83, .external_lex_state = 1},
  [90] = {.lex_state = 1, .external_lex_state = 1},
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
  [103] = {.lex_state = 83, .external_lex_state = 1},
  [104] = {.lex_state = 83, .external_lex_state = 1},
  [105] = {.lex_state = 1, .external_lex_state = 1},
  [106] = {.lex_state = 83, .external_lex_state = 1},
  [107] = {.lex_state = 83},
  [108] = {.lex_state = 83},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 83},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 83},
  [116] = {.lex_state = 83},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 83},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
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
  [146] = {.lex_state = 83},
  [147] = {.lex_state = 5, .external_lex_state = 1},
  [148] = {.lex_state = 5, .external_lex_state = 1},
  [149] = {.lex_state = 5, .external_lex_state = 1},
  [150] = {.lex_state = 5, .external_lex_state = 1},
  [151] = {.lex_state = 1, .external_lex_state = 1},
  [152] = {.lex_state = 5, .external_lex_state = 1},
  [153] = {.lex_state = 1, .external_lex_state = 1},
  [154] = {.lex_state = 6, .external_lex_state = 1},
  [155] = {.lex_state = 6, .external_lex_state = 1},
  [156] = {.lex_state = 6, .external_lex_state = 1},
  [157] = {.lex_state = 7, .external_lex_state = 1},
  [158] = {.lex_state = 1, .external_lex_state = 1},
  [159] = {.lex_state = 6, .external_lex_state = 1},
  [160] = {.lex_state = 1, .external_lex_state = 1},
  [161] = {.lex_state = 7, .external_lex_state = 1},
  [162] = {.lex_state = 6, .external_lex_state = 1},
  [163] = {.lex_state = 7, .external_lex_state = 1},
  [164] = {.lex_state = 1, .external_lex_state = 1},
  [165] = {.lex_state = 83},
  [166] = {.lex_state = 1, .external_lex_state = 1},
  [167] = {.lex_state = 7, .external_lex_state = 1},
  [168] = {.lex_state = 7, .external_lex_state = 1},
  [169] = {.lex_state = 4, .external_lex_state = 1},
  [170] = {.lex_state = 4, .external_lex_state = 1},
  [171] = {.lex_state = 83, .external_lex_state = 1},
  [172] = {.lex_state = 4, .external_lex_state = 1},
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
  [184] = {.lex_state = 83, .external_lex_state = 1},
  [185] = {.lex_state = 83, .external_lex_state = 1},
  [186] = {.lex_state = 83},
  [187] = {.lex_state = 83},
  [188] = {.lex_state = 83, .external_lex_state = 1},
  [189] = {.lex_state = 83, .external_lex_state = 1},
  [190] = {.lex_state = 83},
  [191] = {.lex_state = 83, .external_lex_state = 1},
  [192] = {.lex_state = 83, .external_lex_state = 1},
  [193] = {.lex_state = 83, .external_lex_state = 1},
  [194] = {.lex_state = 83, .external_lex_state = 1},
  [195] = {.lex_state = 83, .external_lex_state = 1},
  [196] = {.lex_state = 83, .external_lex_state = 1},
  [197] = {.lex_state = 83},
  [198] = {.lex_state = 83, .external_lex_state = 1},
  [199] = {.lex_state = 83, .external_lex_state = 1},
  [200] = {.lex_state = 83},
  [201] = {.lex_state = 83, .external_lex_state = 1},
  [202] = {.lex_state = 83, .external_lex_state = 1},
  [203] = {.lex_state = 83},
  [204] = {.lex_state = 83},
  [205] = {.lex_state = 83},
  [206] = {.lex_state = 83},
  [207] = {.lex_state = 83},
  [208] = {.lex_state = 83},
  [209] = {.lex_state = 83, .external_lex_state = 1},
  [210] = {.lex_state = 83, .external_lex_state = 1},
  [211] = {.lex_state = 83},
  [212] = {.lex_state = 83, .external_lex_state = 1},
  [213] = {.lex_state = 83, .external_lex_state = 1},
  [214] = {.lex_state = 83, .external_lex_state = 1},
  [215] = {.lex_state = 83, .external_lex_state = 1},
  [216] = {.lex_state = 83, .external_lex_state = 1},
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
  [229] = {.lex_state = 83},
  [230] = {.lex_state = 83},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 83},
  [233] = {.lex_state = 83},
  [234] = {.lex_state = 83},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 8, .external_lex_state = 1},
  [237] = {.lex_state = 8, .external_lex_state = 1},
  [238] = {.lex_state = 8, .external_lex_state = 1},
  [239] = {.lex_state = 8, .external_lex_state = 1},
  [240] = {.lex_state = 8, .external_lex_state = 1},
  [241] = {.lex_state = 8, .external_lex_state = 1},
  [242] = {.lex_state = 8, .external_lex_state = 1},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 83},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 83},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 12},
  [257] = {.lex_state = 12},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 12},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 83},
  [276] = {.lex_state = 83},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 83},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 83},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 83},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 83},
  [294] = {.lex_state = 83},
  [295] = {.lex_state = 145},
  [296] = {.lex_state = 83},
  [297] = {.lex_state = 83},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 83},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 83},
  [303] = {.lex_state = 83},
  [304] = {.lex_state = 83},
  [305] = {.lex_state = 83},
  [306] = {.lex_state = 83},
  [307] = {.lex_state = 83},
  [308] = {.lex_state = 145},
  [309] = {.lex_state = 83},
  [310] = {.lex_state = 145},
  [311] = {.lex_state = 83},
  [312] = {.lex_state = 145},
  [313] = {.lex_state = 83},
  [314] = {(TSStateId)(-1)},
  [315] = {(TSStateId)(-1)},
  [316] = {(TSStateId)(-1)},
  [317] = {(TSStateId)(-1)},
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
    [aux_sym__escaped_string_token1] = ACTIONS(1),
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
    [sym_document] = STATE(292),
    [sym_node] = STATE(20),
    [sym_identifier] = STATE(61),
    [sym__bare_identifier] = STATE(201),
    [sym_type] = STATE(234),
    [sym_string] = STATE(201),
    [sym__escaped_string] = STATE(178),
    [sym__raw_string] = STATE(178),
    [sym__sign] = STATE(176),
    [sym__linespace] = STATE(42),
    [sym__newline] = STATE(42),
    [sym__ws] = STATE(42),
    [sym__unicode_space] = STATE(42),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__normal_bare_identifier] = ACTIONS(9),
    [anon_sym_SLASH_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym__raw_string_token1] = ACTIONS(17),
    [aux_sym__raw_string_token3] = ACTIONS(19),
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
    [sym__node_prop_or_arg] = STATE(193),
    [sym_node_children] = STATE(99),
    [sym__node_space] = STATE(56),
    [sym__node_terminator] = STATE(144),
    [sym_identifier] = STATE(296),
    [sym__bare_identifier] = STATE(286),
    [sym_keyword] = STATE(191),
    [sym_prop] = STATE(193),
    [sym_value] = STATE(193),
    [sym_type] = STATE(231),
    [sym_string] = STATE(173),
    [sym__escaped_string] = STATE(178),
    [sym__raw_string] = STATE(178),
    [sym_number] = STATE(191),
    [sym__decimal] = STATE(192),
    [sym__integer] = STATE(153),
    [sym__sign] = STATE(244),
    [sym__hex] = STATE(192),
    [sym__octal] = STATE(192),
    [sym__binary] = STATE(192),
    [sym_boolean] = STATE(196),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(144),
    [sym__ws] = STATE(27),
    [sym__unicode_space] = STATE(27),
    [sym_single_line_comment] = STATE(2),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(27),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym__raw_string_token1] = ACTIONS(17),
    [aux_sym__raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR_LF] = ACTIONS(39),
    [anon_sym_] = ACTIONS(39),
    [anon_sym_2] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(39),
    [sym__bom] = ACTIONS(63),
    [anon_sym_TAB] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(63),
    [anon_sym_9] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(63),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(63),
    [anon_sym_13] = ACTIONS(63),
    [anon_sym_14] = ACTIONS(63),
    [anon_sym_15] = ACTIONS(63),
    [anon_sym_16] = ACTIONS(63),
    [anon_sym_17] = ACTIONS(63),
    [anon_sym_18] = ACTIONS(63),
    [anon_sym_19] = ACTIONS(63),
    [anon_sym_20] = ACTIONS(63),
    [anon_sym_21] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [sym__eof] = ACTIONS(39),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(193),
    [sym_node_children] = STATE(83),
    [sym__node_space] = STATE(56),
    [sym__node_terminator] = STATE(137),
    [sym_identifier] = STATE(296),
    [sym__bare_identifier] = STATE(286),
    [sym_keyword] = STATE(191),
    [sym_prop] = STATE(193),
    [sym_value] = STATE(193),
    [sym_type] = STATE(231),
    [sym_string] = STATE(173),
    [sym__escaped_string] = STATE(178),
    [sym__raw_string] = STATE(178),
    [sym_number] = STATE(191),
    [sym__decimal] = STATE(192),
    [sym__integer] = STATE(153),
    [sym__sign] = STATE(244),
    [sym__hex] = STATE(192),
    [sym__octal] = STATE(192),
    [sym__binary] = STATE(192),
    [sym_boolean] = STATE(196),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(137),
    [sym__ws] = STATE(27),
    [sym__unicode_space] = STATE(27),
    [sym_single_line_comment] = STATE(3),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(27),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym__raw_string_token1] = ACTIONS(17),
    [aux_sym__raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_CR_LF] = ACTIONS(67),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_2] = ACTIONS(67),
    [anon_sym_3] = ACTIONS(67),
    [anon_sym_4] = ACTIONS(67),
    [sym__bom] = ACTIONS(63),
    [anon_sym_TAB] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(63),
    [anon_sym_9] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(63),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(63),
    [anon_sym_13] = ACTIONS(63),
    [anon_sym_14] = ACTIONS(63),
    [anon_sym_15] = ACTIONS(63),
    [anon_sym_16] = ACTIONS(63),
    [anon_sym_17] = ACTIONS(63),
    [anon_sym_18] = ACTIONS(63),
    [anon_sym_19] = ACTIONS(63),
    [anon_sym_20] = ACTIONS(63),
    [anon_sym_21] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [sym__eof] = ACTIONS(67),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(193),
    [sym_node_children] = STATE(102),
    [sym__node_space] = STATE(56),
    [sym__node_terminator] = STATE(116),
    [sym_identifier] = STATE(296),
    [sym__bare_identifier] = STATE(286),
    [sym_keyword] = STATE(191),
    [sym_prop] = STATE(193),
    [sym_value] = STATE(193),
    [sym_type] = STATE(231),
    [sym_string] = STATE(173),
    [sym__escaped_string] = STATE(178),
    [sym__raw_string] = STATE(178),
    [sym_number] = STATE(191),
    [sym__decimal] = STATE(192),
    [sym__integer] = STATE(153),
    [sym__sign] = STATE(244),
    [sym__hex] = STATE(192),
    [sym__octal] = STATE(192),
    [sym__binary] = STATE(192),
    [sym_boolean] = STATE(196),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(116),
    [sym__ws] = STATE(27),
    [sym__unicode_space] = STATE(27),
    [sym_single_line_comment] = STATE(4),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(27),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym__raw_string_token1] = ACTIONS(17),
    [aux_sym__raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_CR_LF] = ACTIONS(71),
    [anon_sym_] = ACTIONS(71),
    [anon_sym_2] = ACTIONS(71),
    [anon_sym_3] = ACTIONS(71),
    [anon_sym_4] = ACTIONS(71),
    [sym__bom] = ACTIONS(63),
    [anon_sym_TAB] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(63),
    [anon_sym_9] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(63),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(63),
    [anon_sym_13] = ACTIONS(63),
    [anon_sym_14] = ACTIONS(63),
    [anon_sym_15] = ACTIONS(63),
    [anon_sym_16] = ACTIONS(63),
    [anon_sym_17] = ACTIONS(63),
    [anon_sym_18] = ACTIONS(63),
    [anon_sym_19] = ACTIONS(63),
    [anon_sym_20] = ACTIONS(63),
    [anon_sym_21] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [sym__eof] = ACTIONS(71),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(193),
    [sym_node_children] = STATE(84),
    [sym__node_space] = STATE(56),
    [sym__node_terminator] = STATE(146),
    [sym_identifier] = STATE(296),
    [sym__bare_identifier] = STATE(286),
    [sym_keyword] = STATE(191),
    [sym_prop] = STATE(193),
    [sym_value] = STATE(193),
    [sym_type] = STATE(231),
    [sym_string] = STATE(173),
    [sym__escaped_string] = STATE(178),
    [sym__raw_string] = STATE(178),
    [sym_number] = STATE(191),
    [sym__decimal] = STATE(192),
    [sym__integer] = STATE(153),
    [sym__sign] = STATE(244),
    [sym__hex] = STATE(192),
    [sym__octal] = STATE(192),
    [sym__binary] = STATE(192),
    [sym_boolean] = STATE(196),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(146),
    [sym__ws] = STATE(27),
    [sym__unicode_space] = STATE(27),
    [sym_single_line_comment] = STATE(5),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(27),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym__raw_string_token1] = ACTIONS(17),
    [aux_sym__raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_CR_LF] = ACTIONS(75),
    [anon_sym_] = ACTIONS(75),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_3] = ACTIONS(75),
    [anon_sym_4] = ACTIONS(75),
    [sym__bom] = ACTIONS(63),
    [anon_sym_TAB] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(63),
    [anon_sym_9] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(63),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(63),
    [anon_sym_13] = ACTIONS(63),
    [anon_sym_14] = ACTIONS(63),
    [anon_sym_15] = ACTIONS(63),
    [anon_sym_16] = ACTIONS(63),
    [anon_sym_17] = ACTIONS(63),
    [anon_sym_18] = ACTIONS(63),
    [anon_sym_19] = ACTIONS(63),
    [anon_sym_20] = ACTIONS(63),
    [anon_sym_21] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [sym__eof] = ACTIONS(75),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(193),
    [sym_node_children] = STATE(106),
    [sym__node_space] = STATE(56),
    [sym__node_terminator] = STATE(145),
    [sym_identifier] = STATE(296),
    [sym__bare_identifier] = STATE(286),
    [sym_keyword] = STATE(191),
    [sym_prop] = STATE(193),
    [sym_value] = STATE(193),
    [sym_type] = STATE(231),
    [sym_string] = STATE(173),
    [sym__escaped_string] = STATE(178),
    [sym__raw_string] = STATE(178),
    [sym_number] = STATE(191),
    [sym__decimal] = STATE(192),
    [sym__integer] = STATE(153),
    [sym__sign] = STATE(244),
    [sym__hex] = STATE(192),
    [sym__octal] = STATE(192),
    [sym__binary] = STATE(192),
    [sym_boolean] = STATE(196),
    [sym__escline] = STATE(31),
    [sym__newline] = STATE(145),
    [sym__ws] = STATE(27),
    [sym__unicode_space] = STATE(27),
    [sym_single_line_comment] = STATE(6),
    [sym_multi_line_comment] = STATE(6),
    [aux_sym_node_repeat1] = STATE(12),
    [aux_sym_node_repeat3] = STATE(27),
    [sym__normal_bare_identifier] = ACTIONS(33),
    [anon_sym_SLASH_DASH] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym__raw_string_token1] = ACTIONS(17),
    [aux_sym__raw_string_token3] = ACTIONS(19),
    [sym__digit] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_0o] = ACTIONS(53),
    [anon_sym_0b] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CR_LF] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_4] = ACTIONS(79),
    [sym__bom] = ACTIONS(63),
    [anon_sym_TAB] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(63),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(63),
    [anon_sym_9] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(63),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(63),
    [anon_sym_13] = ACTIONS(63),
    [anon_sym_14] = ACTIONS(63),
    [anon_sym_15] = ACTIONS(63),
    [anon_sym_16] = ACTIONS(63),
    [anon_sym_17] = ACTIONS(63),
    [anon_sym_18] = ACTIONS(63),
    [anon_sym_19] = ACTIONS(63),
    [anon_sym_20] = ACTIONS(63),
    [anon_sym_21] = ACTIONS(63),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [sym__eof] = ACTIONS(79),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 37,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_null,
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
      anon_sym_SLASH_DASH,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      sym__bom,
    ACTIONS(91), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
      aux_sym_node_repeat1,
    STATE(71), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(123), 1,
      sym__node_space,
    STATE(153), 1,
      sym__integer,
    STATE(173), 1,
      sym_string,
    STATE(196), 1,
      sym_boolean,
    STATE(231), 1,
      sym_type,
    STATE(244), 1,
      sym__sign,
    STATE(286), 1,
      sym__bare_identifier,
    STATE(296), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(191), 2,
      sym_keyword,
      sym_number,
    STATE(193), 3,
      sym__node_prop_or_arg,
      sym_prop,
      sym_value,
    STATE(192), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(89), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [138] = 37,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_null,
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
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      sym__bom,
    ACTIONS(91), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(71), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(123), 1,
      sym__node_space,
    STATE(153), 1,
      sym__integer,
    STATE(173), 1,
      sym_string,
    STATE(196), 1,
      sym_boolean,
    STATE(231), 1,
      sym_type,
    STATE(244), 1,
      sym__sign,
    STATE(286), 1,
      sym__bare_identifier,
    STATE(296), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(183), 2,
      sym_prop,
      sym_value,
    STATE(191), 2,
      sym_keyword,
      sym_number,
    STATE(192), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(89), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [275] = 37,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_null,
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
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      sym__bom,
    ACTIONS(91), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      aux_sym_node_repeat1,
    STATE(71), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(123), 1,
      sym__node_space,
    STATE(153), 1,
      sym__integer,
    STATE(173), 1,
      sym_string,
    STATE(196), 1,
      sym_boolean,
    STATE(231), 1,
      sym_type,
    STATE(244), 1,
      sym__sign,
    STATE(286), 1,
      sym__bare_identifier,
    STATE(296), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(191), 2,
      sym_keyword,
      sym_number,
    STATE(194), 2,
      sym_prop,
      sym_value,
    STATE(192), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(89), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [412] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_null,
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
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      sym__bom,
    ACTIONS(91), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      aux_sym_node_repeat1,
    STATE(71), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(123), 1,
      sym__node_space,
    STATE(153), 1,
      sym__integer,
    STATE(173), 1,
      sym_string,
    STATE(196), 1,
      sym_boolean,
    STATE(231), 1,
      sym_type,
    STATE(244), 1,
      sym__sign,
    STATE(286), 1,
      sym__bare_identifier,
    STATE(296), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(183), 2,
      sym_prop,
      sym_value,
    STATE(191), 2,
      sym_keyword,
      sym_number,
    STATE(192), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(89), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [546] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(33), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      anon_sym_null,
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
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      sym__bom,
    ACTIONS(91), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
      aux_sym_node_repeat1,
    STATE(71), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(123), 1,
      sym__node_space,
    STATE(153), 1,
      sym__integer,
    STATE(173), 1,
      sym_string,
    STATE(196), 1,
      sym_boolean,
    STATE(231), 1,
      sym_type,
    STATE(244), 1,
      sym__sign,
    STATE(286), 1,
      sym__bare_identifier,
    STATE(296), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(191), 2,
      sym_keyword,
      sym_number,
    STATE(194), 2,
      sym_prop,
      sym_value,
    STATE(192), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(89), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [680] = 9,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(107), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(12), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(97), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(99), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
    ACTIONS(104), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [754] = 15,
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
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym__raw_string_token1,
    ACTIONS(118), 1,
      aux_sym__raw_string_token3,
    STATE(277), 1,
      sym__sign,
    STATE(13), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(286), 2,
      sym__bare_identifier,
      sym_string,
    STATE(297), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(304), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(112), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(110), 28,
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
  [839] = 15,
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
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym__raw_string_token1,
    ACTIONS(118), 1,
      aux_sym__raw_string_token3,
    STATE(277), 1,
      sym__sign,
    STATE(14), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(286), 2,
      sym__bare_identifier,
      sym_string,
    STATE(293), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(304), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(112), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(110), 28,
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
  [924] = 20,
    ACTIONS(122), 1,
      sym__normal_bare_identifier,
    ACTIONS(125), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      aux_sym__raw_string_token1,
    ACTIONS(137), 1,
      aux_sym__raw_string_token3,
    ACTIONS(140), 1,
      anon_sym_PLUS,
    ACTIONS(143), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_CR,
    ACTIONS(152), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
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
    ACTIONS(149), 25,
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
  [1019] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(16), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(162), 25,
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
  [1115] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(17), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(35), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(168), 25,
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
  [1211] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(18), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(23), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(41), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(174), 25,
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
  [1307] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(19), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(180), 25,
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
  [1403] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(20), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(24), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(186), 25,
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
  [1499] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(21), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(47), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(192), 25,
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
  [1595] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(22), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(198), 25,
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
  [1691] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(23), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(47), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(192), 25,
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
  [1787] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(24), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(180), 25,
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
  [1883] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(25), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(29), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(204), 25,
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
  [1979] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(26), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(198), 25,
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
  [2075] = 8,
    ACTIONS(210), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym__escline,
    STATE(27), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(206), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(208), 18,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
    ACTIONS(213), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2145] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(25), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(28), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(162), 25,
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
  [2241] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(29), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [2336] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_CR,
    STATE(21), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(30), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(227), 25,
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
  [2431] = 6,
    ACTIONS(216), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(38), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(206), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(208), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
    ACTIONS(229), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2496] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_CR,
    STATE(21), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(32), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(48), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(234), 25,
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
  [2591] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(33), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [2686] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(236), 1,
      anon_sym_CR,
    STATE(28), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(34), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 5,
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
  [2781] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_CR,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(35), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [2876] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(36), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [2971] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(37), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [3066] = 6,
    ACTIONS(249), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(242), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(244), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
    ACTIONS(246), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3131] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(39), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [3226] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      anon_sym_CR,
    STATE(18), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(40), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(30), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(256), 25,
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
  [3321] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(41), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [3416] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      anon_sym_CR,
    STATE(19), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(42), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(68), 5,
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
  [3511] = 6,
    ACTIONS(249), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(46), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(242), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(244), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [3576] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      anon_sym_CR,
    STATE(22), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(44), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(34), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(267), 25,
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
  [3671] = 5,
    ACTIONS(276), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 5,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(269), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(271), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
    ACTIONS(273), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3734] = 6,
    ACTIONS(286), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(279), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(281), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
    ACTIONS(283), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3799] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(47), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [3894] = 21,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      anon_sym_CR,
    STATE(22), 1,
      sym_node,
    STATE(61), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(48), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(291), 25,
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
  [3989] = 20,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_CR,
    STATE(61), 1,
      sym_identifier,
    STATE(139), 1,
      sym_node,
    STATE(176), 1,
      sym__sign,
    STATE(234), 1,
      sym_type,
    STATE(49), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(223), 25,
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
  [4081] = 3,
    STATE(50), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(293), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(295), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [4137] = 3,
    STATE(51), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(297), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(299), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [4193] = 3,
    STATE(52), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(301), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(303), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [4249] = 3,
    STATE(53), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(305), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(307), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [4305] = 3,
    STATE(54), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(309), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(311), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [4361] = 3,
    STATE(55), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(313), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(315), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [4417] = 3,
    STATE(56), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(317), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(319), 39,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [4473] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(324), 1,
      sym__bom,
    ACTIONS(330), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(123), 1,
      sym__node_space,
    STATE(57), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(97), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(327), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4546] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_CR,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(79), 1,
      aux_sym_node_repeat2,
    STATE(99), 1,
      sym_node_children,
    STATE(58), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(144), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
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
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4624] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(81), 1,
      anon_sym_CR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(79), 1,
      aux_sym_node_repeat2,
    STATE(106), 1,
      sym_node_children,
    STATE(59), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(145), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(79), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4702] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      anon_sym_CR,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(62), 1,
      aux_sym_node_repeat2,
    STATE(99), 1,
      sym_node_children,
    STATE(60), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(144), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
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
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4780] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(337), 1,
      anon_sym_CR,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(58), 1,
      aux_sym_node_repeat2,
    STATE(88), 1,
      sym_node_children,
    STATE(61), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(135), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(335), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4858] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      anon_sym_CR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(79), 1,
      aux_sym_node_repeat2,
    STATE(102), 1,
      sym_node_children,
    STATE(62), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(116), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
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
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4936] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      anon_sym_CR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(64), 1,
      aux_sym_node_repeat2,
    STATE(102), 1,
      sym_node_children,
    STATE(63), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(116), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
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
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5014] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_CR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(79), 1,
      aux_sym_node_repeat2,
    STATE(84), 1,
      sym_node_children,
    STATE(64), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(146), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(75), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5092] = 7,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(349), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(339), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(65), 7,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(346), 25,
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
  [5152] = 16,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_CR,
    ACTIONS(333), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(59), 1,
      aux_sym_node_repeat2,
    STATE(84), 1,
      sym_node_children,
    STATE(66), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(146), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(75), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5230] = 9,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(349), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(341), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(339), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(346), 25,
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
  [5293] = 9,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(349), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(341), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(339), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(346), 25,
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
  [5356] = 9,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(349), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(69), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(341), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(339), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(346), 25,
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
  [5419] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      sym__bom,
    ACTIONS(370), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym_node_repeat1,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(176), 1,
      sym__sign,
    STATE(197), 1,
      sym__escline,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(225), 1,
      sym__node_space,
    STATE(232), 1,
      sym_type,
    STATE(70), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(368), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5512] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      sym__bom,
    ACTIONS(381), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      aux_sym_node_repeat3,
    STATE(76), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(71), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(206), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(208), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(378), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5581] = 9,
    ACTIONS(343), 1,
      anon_sym_CR,
    ACTIONS(349), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(72), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(341), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(339), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      aux_sym_document_repeat1,
    ACTIONS(346), 25,
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
  [5644] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      sym__bom,
    ACTIONS(370), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_identifier,
    STATE(165), 1,
      aux_sym_node_repeat1,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(176), 1,
      sym__sign,
    STATE(197), 1,
      sym__escline,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(225), 1,
      sym__node_space,
    STATE(233), 1,
      sym_type,
    STATE(73), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(368), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5737] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(387), 1,
      sym__bom,
    ACTIONS(393), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(74), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(269), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(271), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(390), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5799] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(396), 1,
      sym__bom,
    ACTIONS(402), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      aux_sym_node_repeat3,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(75), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(279), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(281), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(399), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5863] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(405), 1,
      sym__bom,
    ACTIONS(411), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      aux_sym_node_repeat3,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(76), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(242), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(244), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(408), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5927] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(405), 1,
      sym__bom,
    ACTIONS(411), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      aux_sym_node_repeat3,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(77), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(242), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(244), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(408), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5991] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      sym__bom,
    ACTIONS(381), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      aux_sym_node_repeat3,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(78), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(206), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(208), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
    ACTIONS(378), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6055] = 13,
    ACTIONS(416), 1,
      anon_sym_BSLASH,
    ACTIONS(419), 1,
      anon_sym_CR,
    ACTIONS(421), 1,
      sym__bom,
    ACTIONS(427), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(71), 1,
      aux_sym_node_repeat3,
    STATE(78), 1,
      sym__escline,
    STATE(117), 1,
      sym__ws,
    STATE(119), 1,
      sym__unicode_space,
    STATE(123), 1,
      sym__node_space,
    STATE(79), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat2,
    ACTIONS(414), 11,
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
    ACTIONS(424), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6124] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(432), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(133), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
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
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6190] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(436), 1,
      anon_sym_CR,
    STATE(56), 1,
      sym__node_space,
    STATE(94), 1,
      aux_sym_node_repeat1,
    STATE(179), 1,
      sym__escline,
    STATE(81), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(108), 2,
      sym__node_terminator,
      sym__newline,
    STATE(171), 3,
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
  [6256] = 5,
    ACTIONS(444), 1,
      anon_sym_CR,
    STATE(90), 1,
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
  [6308] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(448), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(91), 1,
      aux_sym_node_repeat1,
    STATE(83), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(132), 2,
      sym__node_terminator,
      sym__newline,
    STATE(81), 3,
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
  [6374] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(103), 1,
      aux_sym_node_repeat1,
    STATE(84), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(130), 2,
      sym__node_terminator,
      sym__newline,
    STATE(104), 3,
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
    ACTIONS(456), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6440] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      anon_sym_CR,
    STATE(56), 1,
      sym__node_space,
    STATE(95), 1,
      aux_sym_node_repeat1,
    STATE(179), 1,
      sym__escline,
    STATE(85), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(136), 2,
      sym__node_terminator,
      sym__newline,
    STATE(171), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(458), 8,
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
  [6506] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(86), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(136), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(458), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6572] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(464), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(87), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(141), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(462), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6638] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(97), 1,
      aux_sym_node_repeat1,
    STATE(88), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(126), 2,
      sym__node_terminator,
      sym__newline,
    STATE(96), 3,
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
    ACTIONS(470), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6704] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(89), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(131), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(472), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6770] = 5,
    ACTIONS(480), 1,
      anon_sym_CR,
    STATE(105), 1,
      aux_sym__integer_repeat1,
    ACTIONS(478), 2,
      anon_sym__,
      sym__digit,
    STATE(90), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(476), 35,
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
  [6822] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(436), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(91), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(108), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
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
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6888] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(92), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(107), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(482), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6954] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(432), 1,
      anon_sym_CR,
    STATE(56), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat1,
    STATE(179), 1,
      sym__escline,
    STATE(93), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(133), 2,
      sym__node_terminator,
      sym__newline,
    STATE(171), 3,
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
  [7020] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(94), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(129), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(486), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7086] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(492), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(95), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(143), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(490), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7152] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(496), 1,
      anon_sym_CR,
    STATE(56), 1,
      sym__node_space,
    STATE(92), 1,
      aux_sym_node_repeat1,
    STATE(179), 1,
      sym__escline,
    STATE(96), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(120), 2,
      sym__node_terminator,
      sym__newline,
    STATE(171), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(494), 8,
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
  [7218] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(496), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(97), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(120), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(494), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7284] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(500), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(98), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(134), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(498), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7350] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(504), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(100), 1,
      aux_sym_node_repeat1,
    STATE(99), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(115), 2,
      sym__node_terminator,
      sym__newline,
    STATE(101), 3,
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
    ACTIONS(506), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7416] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(510), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(100), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(140), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(508), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7482] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(510), 1,
      anon_sym_CR,
    STATE(56), 1,
      sym__node_space,
    STATE(87), 1,
      aux_sym_node_repeat1,
    STATE(179), 1,
      sym__escline,
    STATE(101), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(140), 2,
      sym__node_terminator,
      sym__newline,
    STATE(171), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(508), 8,
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
  [7548] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(514), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(86), 1,
      aux_sym_node_repeat1,
    STATE(102), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(142), 2,
      sym__node_terminator,
      sym__newline,
    STATE(85), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(512), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(516), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7614] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(520), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(103), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(111), 2,
      sym__node_terminator,
      sym__newline,
    STATE(27), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(518), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(63), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7680] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(520), 1,
      anon_sym_CR,
    STATE(56), 1,
      sym__node_space,
    STATE(98), 1,
      aux_sym_node_repeat1,
    STATE(179), 1,
      sym__escline,
    STATE(104), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(111), 2,
      sym__node_terminator,
      sym__newline,
    STATE(171), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(518), 8,
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
  [7746] = 4,
    ACTIONS(527), 1,
      anon_sym_CR,
    ACTIONS(524), 2,
      anon_sym__,
      sym__digit,
    STATE(105), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__integer_repeat1,
    ACTIONS(522), 35,
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
  [7796] = 12,
    ACTIONS(29), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      aux_sym_node_repeat1,
    STATE(106), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(138), 2,
      sym__node_terminator,
      sym__newline,
    STATE(93), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(529), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(533), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7862] = 3,
    STATE(107), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(537), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(535), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [7909] = 3,
    STATE(108), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(541), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(539), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [7956] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(109), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(313), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(315), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(309), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(311), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8054] = 3,
    STATE(111), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(545), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(543), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(305), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(307), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(113), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(297), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(299), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8199] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(114), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(547), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(549), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8248] = 3,
    STATE(115), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(553), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(551), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8295] = 3,
    STATE(116), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(557), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(555), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(559), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(561), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(563), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(565), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(567), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(569), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8489] = 3,
    STATE(120), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(573), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(571), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(293), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(122), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(301), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(303), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(317), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(319), 30,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8683] = 3,
    STATE(124), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(313), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(315), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8730] = 3,
    STATE(125), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(297), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(299), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8777] = 3,
    STATE(126), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(577), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(575), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8824] = 3,
    STATE(127), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(309), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(311), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8871] = 3,
    STATE(128), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(305), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(307), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8918] = 3,
    STATE(129), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(581), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(579), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [8965] = 3,
    STATE(130), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(585), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(583), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9012] = 3,
    STATE(131), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(589), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(587), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9059] = 3,
    STATE(132), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(593), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(591), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9106] = 3,
    STATE(133), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(597), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(595), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9153] = 3,
    STATE(134), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(601), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(599), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9200] = 3,
    STATE(135), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(605), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(603), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9247] = 3,
    STATE(136), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(609), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(607), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9294] = 3,
    STATE(137), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(613), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(611), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9341] = 3,
    STATE(138), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(617), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(615), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9388] = 3,
    STATE(139), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(619), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(120), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9435] = 3,
    STATE(140), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(623), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(621), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9482] = 3,
    STATE(141), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(627), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(625), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9529] = 3,
    STATE(142), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(631), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(629), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9576] = 3,
    STATE(143), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(635), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(633), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9623] = 3,
    STATE(144), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(639), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(637), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9670] = 3,
    STATE(145), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(643), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(641), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9717] = 3,
    STATE(146), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(647), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(645), 34,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [9764] = 4,
    ACTIONS(654), 1,
      anon_sym_CR,
    ACTIONS(651), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    STATE(147), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__binary_repeat1,
    ACTIONS(649), 32,
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
  [9812] = 5,
    ACTIONS(660), 1,
      anon_sym_CR,
    STATE(150), 1,
      aux_sym__binary_repeat1,
    STATE(148), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(658), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(656), 32,
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
  [9862] = 5,
    ACTIONS(660), 1,
      anon_sym_CR,
    STATE(147), 1,
      aux_sym__binary_repeat1,
    STATE(149), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(662), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(656), 32,
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
  [9912] = 5,
    ACTIONS(666), 1,
      anon_sym_CR,
    STATE(147), 1,
      aux_sym__binary_repeat1,
    STATE(150), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(662), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(664), 32,
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
  [9962] = 6,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(674), 1,
      anon_sym_CR,
    STATE(184), 1,
      sym__exponent,
    ACTIONS(672), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(151), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(668), 32,
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
  [10014] = 5,
    ACTIONS(680), 1,
      anon_sym_CR,
    STATE(149), 1,
      aux_sym__binary_repeat1,
    STATE(152), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(678), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(676), 32,
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
  [10064] = 6,
    ACTIONS(684), 1,
      anon_sym_DOT,
    ACTIONS(686), 1,
      anon_sym_CR,
    STATE(185), 1,
      sym__exponent,
    ACTIONS(672), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(153), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(682), 32,
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
    ACTIONS(692), 1,
      anon_sym_CR,
    STATE(162), 1,
      aux_sym__octal_repeat1,
    ACTIONS(690), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(154), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(688), 32,
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
    ACTIONS(692), 1,
      anon_sym_CR,
    STATE(159), 1,
      aux_sym__octal_repeat1,
    ACTIONS(694), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(155), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(688), 32,
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
    ACTIONS(700), 1,
      anon_sym_CR,
    STATE(154), 1,
      aux_sym__octal_repeat1,
    ACTIONS(698), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(156), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(696), 32,
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
    ACTIONS(706), 1,
      anon_sym_CR,
    STATE(167), 1,
      aux_sym__hex_repeat1,
    ACTIONS(704), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(157), 2,
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
  [10312] = 5,
    ACTIONS(710), 1,
      anon_sym_CR,
    STATE(198), 1,
      sym__exponent,
    ACTIONS(672), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(158), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(708), 32,
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
  [10361] = 5,
    ACTIONS(714), 1,
      anon_sym_CR,
    STATE(162), 1,
      aux_sym__octal_repeat1,
    ACTIONS(690), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(159), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(712), 32,
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
  [10410] = 5,
    ACTIONS(718), 1,
      anon_sym_POUND,
    ACTIONS(720), 1,
      anon_sym_CR,
    STATE(164), 1,
      aux_sym__raw_string_repeat1,
    STATE(160), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(716), 33,
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
  [10459] = 5,
    ACTIONS(726), 1,
      anon_sym_CR,
    STATE(163), 1,
      aux_sym__hex_repeat1,
    ACTIONS(724), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(161), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(722), 32,
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
  [10508] = 4,
    ACTIONS(733), 1,
      anon_sym_CR,
    ACTIONS(730), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(162), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__octal_repeat1,
    ACTIONS(728), 32,
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
  [10555] = 4,
    ACTIONS(740), 1,
      anon_sym_CR,
    ACTIONS(737), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(163), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__hex_repeat1,
    ACTIONS(735), 32,
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
  [10602] = 4,
    ACTIONS(744), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_CR,
    STATE(164), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
    ACTIONS(742), 33,
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
  [10649] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(749), 1,
      anon_sym_BSLASH,
    ACTIONS(752), 1,
      sym__bom,
    ACTIONS(758), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(197), 1,
      sym__escline,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(225), 1,
      sym__node_space,
    ACTIONS(97), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(165), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(99), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(755), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [10714] = 5,
    ACTIONS(763), 1,
      anon_sym_CR,
    STATE(182), 1,
      sym__exponent,
    ACTIONS(672), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(166), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(761), 32,
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
  [10763] = 5,
    ACTIONS(767), 1,
      anon_sym_CR,
    STATE(163), 1,
      aux_sym__hex_repeat1,
    ACTIONS(724), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(167), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(765), 32,
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
  [10812] = 5,
    ACTIONS(767), 1,
      anon_sym_CR,
    STATE(161), 1,
      aux_sym__hex_repeat1,
    ACTIONS(769), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(168), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(765), 32,
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
  [10861] = 4,
    ACTIONS(773), 1,
      sym__identifier_char,
    ACTIONS(776), 1,
      anon_sym_CR,
    STATE(169), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(771), 32,
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
  [10907] = 5,
    ACTIONS(780), 1,
      sym__identifier_char,
    ACTIONS(782), 1,
      anon_sym_CR,
    STATE(172), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(170), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(778), 32,
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
  [10955] = 8,
    ACTIONS(787), 1,
      anon_sym_BSLASH,
    ACTIONS(791), 1,
      anon_sym_CR,
    ACTIONS(798), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym__escline,
    STATE(171), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(784), 9,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(794), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11009] = 5,
    ACTIONS(804), 1,
      sym__identifier_char,
    ACTIONS(806), 1,
      anon_sym_CR,
    STATE(169), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(172), 2,
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
  [11057] = 4,
    ACTIONS(810), 1,
      anon_sym_EQ,
    ACTIONS(812), 1,
      anon_sym_CR,
    STATE(173), 2,
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
  [11102] = 3,
    ACTIONS(816), 1,
      anon_sym_CR,
    STATE(174), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(814), 33,
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
  [11145] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(818), 1,
      anon_sym_BSLASH,
    ACTIONS(821), 1,
      sym__bom,
    ACTIONS(827), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      aux_sym_node_repeat3,
    STATE(187), 1,
      sym__escline,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(175), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(206), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(208), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(824), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11206] = 4,
    ACTIONS(832), 1,
      sym___identifier_char_no_digit,
    ACTIONS(834), 1,
      anon_sym_CR,
    STATE(176), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(830), 32,
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
  [11251] = 3,
    ACTIONS(838), 1,
      anon_sym_CR,
    STATE(177), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(836), 33,
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
  [11294] = 3,
    ACTIONS(842), 1,
      anon_sym_CR,
    STATE(178), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(840), 33,
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
  [11337] = 6,
    ACTIONS(847), 1,
      anon_sym_CR,
    ACTIONS(854), 1,
      anon_sym_SLASH_STAR,
    STATE(179), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(180), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(844), 10,
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
    ACTIONS(850), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11386] = 6,
    ACTIONS(861), 1,
      anon_sym_CR,
    ACTIONS(868), 1,
      anon_sym_SLASH_STAR,
    STATE(180), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(858), 10,
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
    ACTIONS(864), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11435] = 3,
    ACTIONS(874), 1,
      anon_sym_CR,
    STATE(181), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(872), 33,
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
  [11478] = 3,
    ACTIONS(878), 1,
      anon_sym_CR,
    STATE(182), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(876), 32,
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
  [11520] = 3,
    ACTIONS(882), 1,
      anon_sym_CR,
    STATE(183), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(880), 32,
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
  [11562] = 3,
    ACTIONS(886), 1,
      anon_sym_CR,
    STATE(184), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(884), 32,
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
  [11604] = 3,
    ACTIONS(674), 1,
      anon_sym_CR,
    STATE(185), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(668), 32,
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
  [11646] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(888), 1,
      sym__bom,
    ACTIONS(894), 1,
      anon_sym_SLASH_STAR,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    ACTIONS(269), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(186), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(271), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(891), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11700] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(897), 1,
      sym__bom,
    ACTIONS(903), 1,
      anon_sym_SLASH_STAR,
    STATE(200), 1,
      aux_sym_node_repeat3,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(187), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(242), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(244), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(900), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11756] = 3,
    ACTIONS(908), 1,
      anon_sym_CR,
    STATE(188), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(906), 32,
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
  [11798] = 3,
    ACTIONS(912), 1,
      anon_sym_CR,
    STATE(189), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(910), 32,
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
  [11840] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(897), 1,
      sym__bom,
    ACTIONS(903), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      aux_sym_node_repeat3,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(190), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(242), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(244), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(900), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [11896] = 3,
    ACTIONS(812), 1,
      anon_sym_CR,
    STATE(191), 2,
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
  [11938] = 3,
    ACTIONS(916), 1,
      anon_sym_CR,
    STATE(192), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(914), 32,
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
  [11980] = 3,
    ACTIONS(419), 1,
      anon_sym_CR,
    STATE(193), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(414), 32,
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
  [12022] = 3,
    ACTIONS(920), 1,
      anon_sym_CR,
    STATE(194), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(918), 32,
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
  [12064] = 3,
    ACTIONS(924), 1,
      anon_sym_CR,
    STATE(195), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(922), 32,
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
  [12106] = 3,
    ACTIONS(928), 1,
      anon_sym_CR,
    STATE(196), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(926), 32,
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
  [12148] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(821), 1,
      sym__bom,
    ACTIONS(827), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
      aux_sym_node_repeat3,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(197), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(206), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(208), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(824), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12204] = 3,
    ACTIONS(932), 1,
      anon_sym_CR,
    STATE(198), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(930), 32,
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
  [12246] = 3,
    ACTIONS(936), 1,
      anon_sym_CR,
    STATE(199), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(934), 32,
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
  [12288] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(938), 1,
      sym__bom,
    ACTIONS(944), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      aux_sym_node_repeat3,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(200), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(279), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(281), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(941), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12344] = 3,
    ACTIONS(947), 1,
      anon_sym_CR,
    STATE(201), 2,
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
  [12386] = 3,
    ACTIONS(951), 1,
      anon_sym_CR,
    STATE(202), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(949), 32,
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
  [12428] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(953), 1,
      anon_sym_CR,
    ACTIONS(959), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 1,
      sym__newline,
    STATE(203), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(211), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(955), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(957), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12479] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(961), 1,
      anon_sym_CR,
    ACTIONS(965), 1,
      anon_sym_SLASH_SLASH,
    STATE(50), 1,
      sym__newline,
    STATE(204), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(211), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(963), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(957), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12530] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(967), 1,
      anon_sym_CR,
    ACTIONS(973), 1,
      anon_sym_SLASH_SLASH,
    STATE(122), 1,
      sym__newline,
    STATE(205), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(208), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(969), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(971), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12581] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(953), 1,
      anon_sym_CR,
    ACTIONS(959), 1,
      anon_sym_SLASH_SLASH,
    STATE(226), 1,
      sym__newline,
    STATE(206), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(203), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(955), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(975), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12632] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(965), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(977), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__newline,
    STATE(207), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(204), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(979), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
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
  [12683] = 8,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(967), 1,
      anon_sym_CR,
    ACTIONS(973), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 1,
      sym__newline,
    STATE(208), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(211), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(969), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(957), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12734] = 3,
    ACTIONS(985), 1,
      anon_sym_CR,
    STATE(209), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(983), 30,
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
  [12774] = 3,
    ACTIONS(989), 1,
      anon_sym_CR,
    STATE(210), 2,
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
  [12814] = 5,
    ACTIONS(269), 1,
      anon_sym_CR,
    ACTIONS(994), 1,
      anon_sym_SLASH_STAR,
    STATE(211), 5,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(271), 7,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(991), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12858] = 3,
    ACTIONS(999), 1,
      anon_sym_CR,
    STATE(212), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(997), 30,
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
  [12898] = 3,
    ACTIONS(1003), 1,
      anon_sym_CR,
    STATE(213), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1001), 30,
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
  [12938] = 3,
    ACTIONS(1007), 1,
      anon_sym_CR,
    STATE(214), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1005), 30,
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
  [12978] = 3,
    ACTIONS(1011), 1,
      anon_sym_CR,
    STATE(215), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1009), 30,
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
  [13018] = 3,
    ACTIONS(1015), 1,
      anon_sym_CR,
    STATE(216), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1013), 30,
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
  [13058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(217), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(305), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(307), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13099] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(547), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(549), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(219), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(559), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(561), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(293), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(295), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13222] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(221), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(567), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(569), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(222), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(563), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(565), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(223), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(313), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(315), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13345] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(309), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(311), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13386] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(317), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(319), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(226), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(301), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(303), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(227), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(297), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(299), 26,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
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
  [13509] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
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
    ACTIONS(1017), 1,
      anon_sym_null,
    ACTIONS(1019), 1,
      aux_sym__raw_string_token1,
    STATE(153), 1,
      sym__integer,
    STATE(189), 1,
      sym_value,
    STATE(196), 1,
      sym_boolean,
    STATE(231), 1,
      sym_type,
    STATE(253), 1,
      sym__sign,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1021), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(228), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(191), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(192), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [13585] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      sym__bom,
    ACTIONS(370), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      aux_sym_node_repeat1,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(197), 1,
      sym__escline,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(225), 1,
      sym__node_space,
    STATE(229), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(368), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13643] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      sym__bom,
    ACTIONS(370), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      aux_sym_node_repeat3,
    STATE(197), 1,
      sym__escline,
    STATE(219), 1,
      sym__ws,
    STATE(221), 1,
      sym__unicode_space,
    STATE(225), 1,
      sym__node_space,
    STATE(229), 1,
      aux_sym_node_repeat1,
    STATE(230), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(368), 18,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13701] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_0o,
    ACTIONS(55), 1,
      anon_sym_0b,
    ACTIONS(1017), 1,
      anon_sym_null,
    ACTIONS(1019), 1,
      aux_sym__raw_string_token1,
    STATE(153), 1,
      sym__integer,
    STATE(196), 1,
      sym_boolean,
    STATE(253), 1,
      sym__sign,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1021), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(231), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(188), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(192), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [13768] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    STATE(63), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(232), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13811] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    STATE(66), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(233), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13854] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym__normal_bare_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token1,
    ACTIONS(19), 1,
      aux_sym__raw_string_token3,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_DASH,
    STATE(60), 1,
      sym_identifier,
    STATE(176), 1,
      sym__sign,
    STATE(178), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym__bare_identifier,
      sym_string,
    STATE(234), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [13897] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1025), 1,
      sym__digit,
    STATE(235), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1023), 11,
      anon_sym_null,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token1,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_true,
      anon_sym_false,
  [13924] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1027), 1,
      anon_sym_CR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    STATE(125), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(236), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1029), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13956] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1033), 1,
      anon_sym_CR,
    STATE(241), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(316), 1,
      sym__newline,
    STATE(237), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1035), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [13988] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(967), 1,
      anon_sym_CR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1037), 1,
      sym__eof,
    STATE(113), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(238), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(969), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [14022] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(953), 1,
      anon_sym_CR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1039), 1,
      sym__eof,
    STATE(227), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(239), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(955), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [14056] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1041), 1,
      anon_sym_CR,
    STATE(51), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(240), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1043), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [14088] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1045), 1,
      anon_sym_CR,
    ACTIONS(1049), 1,
      aux_sym_single_line_comment_token1,
    STATE(241), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1047), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [14115] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1052), 2,
      anon_sym_CR,
      aux_sym_single_line_comment_token1,
    STATE(242), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1054), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [14139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1058), 1,
      sym__digit,
    STATE(243), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1056), 6,
      sym___identifier_char_no_digit,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [14161] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(830), 1,
      anon_sym_EQ,
    ACTIONS(1060), 1,
      sym___identifier_char_no_digit,
    ACTIONS(1062), 1,
      anon_sym_0x,
    ACTIONS(1064), 1,
      anon_sym_0o,
    ACTIONS(1066), 1,
      anon_sym_0b,
    STATE(151), 1,
      sym__integer,
    STATE(244), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14193] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(245), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1023), 3,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(1025), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
  [14214] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1070), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1074), 1,
      aux_sym_commented_block_token1,
    STATE(265), 1,
      sym_commented_block,
    ACTIONS(1072), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(246), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14238] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1076), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1080), 1,
      aux_sym_commented_block_token1,
    STATE(317), 1,
      sym_commented_block,
    ACTIONS(1078), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(247), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14262] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1082), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1086), 1,
      aux_sym_commented_block_token1,
    STATE(110), 1,
      sym_commented_block,
    ACTIONS(1084), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(248), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14286] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1088), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1092), 1,
      aux_sym_commented_block_token1,
    STATE(54), 1,
      sym_commented_block,
    ACTIONS(1090), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(249), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14310] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1098), 1,
      aux_sym_commented_block_token1,
    STATE(223), 1,
      sym_commented_block,
    ACTIONS(1096), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(250), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14334] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1098), 1,
      aux_sym_commented_block_token1,
    STATE(224), 1,
      sym_commented_block,
    ACTIONS(1096), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(251), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14358] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1100), 1,
      sym__digit,
    STATE(202), 1,
      sym__integer,
    STATE(282), 1,
      sym__sign,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(252), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14382] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      sym__digit,
    ACTIONS(1062), 1,
      anon_sym_0x,
    ACTIONS(1064), 1,
      anon_sym_0o,
    ACTIONS(1066), 1,
      anon_sym_0b,
    STATE(151), 1,
      sym__integer,
    STATE(253), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14408] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1102), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1106), 1,
      aux_sym_commented_block_token1,
    STATE(124), 1,
      sym_commented_block,
    ACTIONS(1104), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(254), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14432] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1070), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1074), 1,
      aux_sym_commented_block_token1,
    STATE(261), 1,
      sym_commented_block,
    ACTIONS(1072), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(255), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14456] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1076), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1080), 1,
      aux_sym_commented_block_token1,
    STATE(315), 1,
      sym_commented_block,
    ACTIONS(1078), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(256), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14480] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1088), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1092), 1,
      aux_sym_commented_block_token1,
    STATE(55), 1,
      sym_commented_block,
    ACTIONS(1090), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(257), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14504] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1082), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1086), 1,
      aux_sym_commented_block_token1,
    STATE(109), 1,
      sym_commented_block,
    ACTIONS(1084), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(258), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14528] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1102), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1106), 1,
      aux_sym_commented_block_token1,
    STATE(127), 1,
      sym_commented_block,
    ACTIONS(1104), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(259), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(305), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(260), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(307), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(261), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(311), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14586] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1108), 1,
      anon_sym_DQUOTE,
    ACTIONS(1110), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1112), 1,
      aux_sym__escape_token1,
    STATE(268), 1,
      aux_sym__escaped_string_repeat1,
    STATE(262), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14609] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1110), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1112), 1,
      aux_sym__escape_token1,
    ACTIONS(1114), 1,
      anon_sym_DQUOTE,
    STATE(266), 1,
      aux_sym__escaped_string_repeat1,
    STATE(263), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14632] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1116), 1,
      sym__identifier_char,
    STATE(270), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(778), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(264), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14653] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(313), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    STATE(265), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(315), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [14670] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1123), 1,
      aux_sym__escape_token1,
    STATE(266), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__escaped_string_repeat1,
  [14691] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1110), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1112), 1,
      aux_sym__escape_token1,
    ACTIONS(1126), 1,
      anon_sym_DQUOTE,
    STATE(263), 1,
      aux_sym__escaped_string_repeat1,
    STATE(267), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14714] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1110), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1112), 1,
      aux_sym__escape_token1,
    ACTIONS(1128), 1,
      anon_sym_DQUOTE,
    STATE(266), 1,
      aux_sym__escaped_string_repeat1,
    STATE(268), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14737] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1130), 1,
      sym__identifier_char,
    ACTIONS(771), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(269), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
  [14756] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1116), 1,
      sym__identifier_char,
    STATE(269), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(802), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(270), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14777] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    ACTIONS(1133), 1,
      anon_sym_POUND,
    STATE(271), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
  [14795] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(1136), 1,
      anon_sym_POUND,
    STATE(271), 1,
      aux_sym__raw_string_repeat1,
    STATE(272), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(273), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(1138), 3,
      sym__identifier_char,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [14831] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1142), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1140), 2,
      anon_sym_DQUOTE,
      aux_sym__escape_token1,
    STATE(274), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1100), 1,
      sym__digit,
    STATE(158), 1,
      sym__integer,
    STATE(275), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14866] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1100), 1,
      sym__digit,
    STATE(166), 1,
      sym__integer,
    STATE(276), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14883] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    ACTIONS(1060), 1,
      sym___identifier_char_no_digit,
    STATE(277), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14900] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1144), 1,
      anon_sym_POUND,
    STATE(160), 1,
      aux_sym__raw_string_repeat1,
    STATE(278), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14917] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    STATE(238), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(279), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14934] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    STATE(240), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(280), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14951] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(281), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14968] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1100), 1,
      sym__digit,
    STATE(195), 1,
      sym__integer,
    STATE(282), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [14985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1146), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(283), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15000] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1148), 2,
      anon_sym_0,
      anon_sym_1,
    STATE(284), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15015] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1150), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
    STATE(285), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15030] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(810), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(286), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15045] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1136), 1,
      anon_sym_POUND,
    STATE(272), 1,
      aux_sym__raw_string_repeat1,
    STATE(287), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15062] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    STATE(237), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(288), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15079] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(830), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(289), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15094] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1031), 1,
      aux_sym_single_line_comment_token1,
    STATE(236), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(290), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      aux_sym__octal_token1,
    STATE(291), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15125] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1154), 1,
      ts_builtin_sym_end,
    STATE(292), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(293), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(294), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15167] = 4,
    ACTIONS(1160), 1,
      aux_sym__raw_string_token2,
    ACTIONS(1162), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1164), 1,
      anon_sym_SLASH_STAR,
    STATE(295), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1166), 1,
      anon_sym_EQ,
    STATE(296), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15195] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(297), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1170), 1,
      aux_sym__octal_token1,
    STATE(298), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1172), 1,
      anon_sym_DQUOTE,
    STATE(299), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1174), 1,
      sym__hex_digit,
    STATE(300), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1176), 1,
      sym__hex_digit,
    STATE(301), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1178), 1,
      anon_sym_DQUOTE,
    STATE(302), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15279] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(303), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15293] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(304), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15307] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
    STATE(305), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15321] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    STATE(306), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(307), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15349] = 4,
    ACTIONS(1162), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1164), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1182), 1,
      aux_sym__raw_string_token2,
    STATE(308), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1184), 1,
      anon_sym_DQUOTE,
    STATE(309), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15377] = 4,
    ACTIONS(1162), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1164), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1186), 1,
      aux_sym__raw_string_token2,
    STATE(310), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1188), 1,
      anon_sym_DQUOTE,
    STATE(311), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15405] = 4,
    ACTIONS(1162), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1164), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1190), 1,
      aux_sym__raw_string_token2,
    STATE(312), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15419] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1192), 1,
      anon_sym_DQUOTE,
    STATE(313), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [15433] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [15437] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
  [15441] = 1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
  [15445] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 275,
  [SMALL_STATE(10)] = 412,
  [SMALL_STATE(11)] = 546,
  [SMALL_STATE(12)] = 680,
  [SMALL_STATE(13)] = 754,
  [SMALL_STATE(14)] = 839,
  [SMALL_STATE(15)] = 924,
  [SMALL_STATE(16)] = 1019,
  [SMALL_STATE(17)] = 1115,
  [SMALL_STATE(18)] = 1211,
  [SMALL_STATE(19)] = 1307,
  [SMALL_STATE(20)] = 1403,
  [SMALL_STATE(21)] = 1499,
  [SMALL_STATE(22)] = 1595,
  [SMALL_STATE(23)] = 1691,
  [SMALL_STATE(24)] = 1787,
  [SMALL_STATE(25)] = 1883,
  [SMALL_STATE(26)] = 1979,
  [SMALL_STATE(27)] = 2075,
  [SMALL_STATE(28)] = 2145,
  [SMALL_STATE(29)] = 2241,
  [SMALL_STATE(30)] = 2336,
  [SMALL_STATE(31)] = 2431,
  [SMALL_STATE(32)] = 2496,
  [SMALL_STATE(33)] = 2591,
  [SMALL_STATE(34)] = 2686,
  [SMALL_STATE(35)] = 2781,
  [SMALL_STATE(36)] = 2876,
  [SMALL_STATE(37)] = 2971,
  [SMALL_STATE(38)] = 3066,
  [SMALL_STATE(39)] = 3131,
  [SMALL_STATE(40)] = 3226,
  [SMALL_STATE(41)] = 3321,
  [SMALL_STATE(42)] = 3416,
  [SMALL_STATE(43)] = 3511,
  [SMALL_STATE(44)] = 3576,
  [SMALL_STATE(45)] = 3671,
  [SMALL_STATE(46)] = 3734,
  [SMALL_STATE(47)] = 3799,
  [SMALL_STATE(48)] = 3894,
  [SMALL_STATE(49)] = 3989,
  [SMALL_STATE(50)] = 4081,
  [SMALL_STATE(51)] = 4137,
  [SMALL_STATE(52)] = 4193,
  [SMALL_STATE(53)] = 4249,
  [SMALL_STATE(54)] = 4305,
  [SMALL_STATE(55)] = 4361,
  [SMALL_STATE(56)] = 4417,
  [SMALL_STATE(57)] = 4473,
  [SMALL_STATE(58)] = 4546,
  [SMALL_STATE(59)] = 4624,
  [SMALL_STATE(60)] = 4702,
  [SMALL_STATE(61)] = 4780,
  [SMALL_STATE(62)] = 4858,
  [SMALL_STATE(63)] = 4936,
  [SMALL_STATE(64)] = 5014,
  [SMALL_STATE(65)] = 5092,
  [SMALL_STATE(66)] = 5152,
  [SMALL_STATE(67)] = 5230,
  [SMALL_STATE(68)] = 5293,
  [SMALL_STATE(69)] = 5356,
  [SMALL_STATE(70)] = 5419,
  [SMALL_STATE(71)] = 5512,
  [SMALL_STATE(72)] = 5581,
  [SMALL_STATE(73)] = 5644,
  [SMALL_STATE(74)] = 5737,
  [SMALL_STATE(75)] = 5799,
  [SMALL_STATE(76)] = 5863,
  [SMALL_STATE(77)] = 5927,
  [SMALL_STATE(78)] = 5991,
  [SMALL_STATE(79)] = 6055,
  [SMALL_STATE(80)] = 6124,
  [SMALL_STATE(81)] = 6190,
  [SMALL_STATE(82)] = 6256,
  [SMALL_STATE(83)] = 6308,
  [SMALL_STATE(84)] = 6374,
  [SMALL_STATE(85)] = 6440,
  [SMALL_STATE(86)] = 6506,
  [SMALL_STATE(87)] = 6572,
  [SMALL_STATE(88)] = 6638,
  [SMALL_STATE(89)] = 6704,
  [SMALL_STATE(90)] = 6770,
  [SMALL_STATE(91)] = 6822,
  [SMALL_STATE(92)] = 6888,
  [SMALL_STATE(93)] = 6954,
  [SMALL_STATE(94)] = 7020,
  [SMALL_STATE(95)] = 7086,
  [SMALL_STATE(96)] = 7152,
  [SMALL_STATE(97)] = 7218,
  [SMALL_STATE(98)] = 7284,
  [SMALL_STATE(99)] = 7350,
  [SMALL_STATE(100)] = 7416,
  [SMALL_STATE(101)] = 7482,
  [SMALL_STATE(102)] = 7548,
  [SMALL_STATE(103)] = 7614,
  [SMALL_STATE(104)] = 7680,
  [SMALL_STATE(105)] = 7746,
  [SMALL_STATE(106)] = 7796,
  [SMALL_STATE(107)] = 7862,
  [SMALL_STATE(108)] = 7909,
  [SMALL_STATE(109)] = 7956,
  [SMALL_STATE(110)] = 8005,
  [SMALL_STATE(111)] = 8054,
  [SMALL_STATE(112)] = 8101,
  [SMALL_STATE(113)] = 8150,
  [SMALL_STATE(114)] = 8199,
  [SMALL_STATE(115)] = 8248,
  [SMALL_STATE(116)] = 8295,
  [SMALL_STATE(117)] = 8342,
  [SMALL_STATE(118)] = 8391,
  [SMALL_STATE(119)] = 8440,
  [SMALL_STATE(120)] = 8489,
  [SMALL_STATE(121)] = 8536,
  [SMALL_STATE(122)] = 8585,
  [SMALL_STATE(123)] = 8634,
  [SMALL_STATE(124)] = 8683,
  [SMALL_STATE(125)] = 8730,
  [SMALL_STATE(126)] = 8777,
  [SMALL_STATE(127)] = 8824,
  [SMALL_STATE(128)] = 8871,
  [SMALL_STATE(129)] = 8918,
  [SMALL_STATE(130)] = 8965,
  [SMALL_STATE(131)] = 9012,
  [SMALL_STATE(132)] = 9059,
  [SMALL_STATE(133)] = 9106,
  [SMALL_STATE(134)] = 9153,
  [SMALL_STATE(135)] = 9200,
  [SMALL_STATE(136)] = 9247,
  [SMALL_STATE(137)] = 9294,
  [SMALL_STATE(138)] = 9341,
  [SMALL_STATE(139)] = 9388,
  [SMALL_STATE(140)] = 9435,
  [SMALL_STATE(141)] = 9482,
  [SMALL_STATE(142)] = 9529,
  [SMALL_STATE(143)] = 9576,
  [SMALL_STATE(144)] = 9623,
  [SMALL_STATE(145)] = 9670,
  [SMALL_STATE(146)] = 9717,
  [SMALL_STATE(147)] = 9764,
  [SMALL_STATE(148)] = 9812,
  [SMALL_STATE(149)] = 9862,
  [SMALL_STATE(150)] = 9912,
  [SMALL_STATE(151)] = 9962,
  [SMALL_STATE(152)] = 10014,
  [SMALL_STATE(153)] = 10064,
  [SMALL_STATE(154)] = 10116,
  [SMALL_STATE(155)] = 10165,
  [SMALL_STATE(156)] = 10214,
  [SMALL_STATE(157)] = 10263,
  [SMALL_STATE(158)] = 10312,
  [SMALL_STATE(159)] = 10361,
  [SMALL_STATE(160)] = 10410,
  [SMALL_STATE(161)] = 10459,
  [SMALL_STATE(162)] = 10508,
  [SMALL_STATE(163)] = 10555,
  [SMALL_STATE(164)] = 10602,
  [SMALL_STATE(165)] = 10649,
  [SMALL_STATE(166)] = 10714,
  [SMALL_STATE(167)] = 10763,
  [SMALL_STATE(168)] = 10812,
  [SMALL_STATE(169)] = 10861,
  [SMALL_STATE(170)] = 10907,
  [SMALL_STATE(171)] = 10955,
  [SMALL_STATE(172)] = 11009,
  [SMALL_STATE(173)] = 11057,
  [SMALL_STATE(174)] = 11102,
  [SMALL_STATE(175)] = 11145,
  [SMALL_STATE(176)] = 11206,
  [SMALL_STATE(177)] = 11251,
  [SMALL_STATE(178)] = 11294,
  [SMALL_STATE(179)] = 11337,
  [SMALL_STATE(180)] = 11386,
  [SMALL_STATE(181)] = 11435,
  [SMALL_STATE(182)] = 11478,
  [SMALL_STATE(183)] = 11520,
  [SMALL_STATE(184)] = 11562,
  [SMALL_STATE(185)] = 11604,
  [SMALL_STATE(186)] = 11646,
  [SMALL_STATE(187)] = 11700,
  [SMALL_STATE(188)] = 11756,
  [SMALL_STATE(189)] = 11798,
  [SMALL_STATE(190)] = 11840,
  [SMALL_STATE(191)] = 11896,
  [SMALL_STATE(192)] = 11938,
  [SMALL_STATE(193)] = 11980,
  [SMALL_STATE(194)] = 12022,
  [SMALL_STATE(195)] = 12064,
  [SMALL_STATE(196)] = 12106,
  [SMALL_STATE(197)] = 12148,
  [SMALL_STATE(198)] = 12204,
  [SMALL_STATE(199)] = 12246,
  [SMALL_STATE(200)] = 12288,
  [SMALL_STATE(201)] = 12344,
  [SMALL_STATE(202)] = 12386,
  [SMALL_STATE(203)] = 12428,
  [SMALL_STATE(204)] = 12479,
  [SMALL_STATE(205)] = 12530,
  [SMALL_STATE(206)] = 12581,
  [SMALL_STATE(207)] = 12632,
  [SMALL_STATE(208)] = 12683,
  [SMALL_STATE(209)] = 12734,
  [SMALL_STATE(210)] = 12774,
  [SMALL_STATE(211)] = 12814,
  [SMALL_STATE(212)] = 12858,
  [SMALL_STATE(213)] = 12898,
  [SMALL_STATE(214)] = 12938,
  [SMALL_STATE(215)] = 12978,
  [SMALL_STATE(216)] = 13018,
  [SMALL_STATE(217)] = 13058,
  [SMALL_STATE(218)] = 13099,
  [SMALL_STATE(219)] = 13140,
  [SMALL_STATE(220)] = 13181,
  [SMALL_STATE(221)] = 13222,
  [SMALL_STATE(222)] = 13263,
  [SMALL_STATE(223)] = 13304,
  [SMALL_STATE(224)] = 13345,
  [SMALL_STATE(225)] = 13386,
  [SMALL_STATE(226)] = 13427,
  [SMALL_STATE(227)] = 13468,
  [SMALL_STATE(228)] = 13509,
  [SMALL_STATE(229)] = 13585,
  [SMALL_STATE(230)] = 13643,
  [SMALL_STATE(231)] = 13701,
  [SMALL_STATE(232)] = 13768,
  [SMALL_STATE(233)] = 13811,
  [SMALL_STATE(234)] = 13854,
  [SMALL_STATE(235)] = 13897,
  [SMALL_STATE(236)] = 13924,
  [SMALL_STATE(237)] = 13956,
  [SMALL_STATE(238)] = 13988,
  [SMALL_STATE(239)] = 14022,
  [SMALL_STATE(240)] = 14056,
  [SMALL_STATE(241)] = 14088,
  [SMALL_STATE(242)] = 14115,
  [SMALL_STATE(243)] = 14139,
  [SMALL_STATE(244)] = 14161,
  [SMALL_STATE(245)] = 14193,
  [SMALL_STATE(246)] = 14214,
  [SMALL_STATE(247)] = 14238,
  [SMALL_STATE(248)] = 14262,
  [SMALL_STATE(249)] = 14286,
  [SMALL_STATE(250)] = 14310,
  [SMALL_STATE(251)] = 14334,
  [SMALL_STATE(252)] = 14358,
  [SMALL_STATE(253)] = 14382,
  [SMALL_STATE(254)] = 14408,
  [SMALL_STATE(255)] = 14432,
  [SMALL_STATE(256)] = 14456,
  [SMALL_STATE(257)] = 14480,
  [SMALL_STATE(258)] = 14504,
  [SMALL_STATE(259)] = 14528,
  [SMALL_STATE(260)] = 14552,
  [SMALL_STATE(261)] = 14569,
  [SMALL_STATE(262)] = 14586,
  [SMALL_STATE(263)] = 14609,
  [SMALL_STATE(264)] = 14632,
  [SMALL_STATE(265)] = 14653,
  [SMALL_STATE(266)] = 14670,
  [SMALL_STATE(267)] = 14691,
  [SMALL_STATE(268)] = 14714,
  [SMALL_STATE(269)] = 14737,
  [SMALL_STATE(270)] = 14756,
  [SMALL_STATE(271)] = 14777,
  [SMALL_STATE(272)] = 14795,
  [SMALL_STATE(273)] = 14815,
  [SMALL_STATE(274)] = 14831,
  [SMALL_STATE(275)] = 14849,
  [SMALL_STATE(276)] = 14866,
  [SMALL_STATE(277)] = 14883,
  [SMALL_STATE(278)] = 14900,
  [SMALL_STATE(279)] = 14917,
  [SMALL_STATE(280)] = 14934,
  [SMALL_STATE(281)] = 14951,
  [SMALL_STATE(282)] = 14968,
  [SMALL_STATE(283)] = 14985,
  [SMALL_STATE(284)] = 15000,
  [SMALL_STATE(285)] = 15015,
  [SMALL_STATE(286)] = 15030,
  [SMALL_STATE(287)] = 15045,
  [SMALL_STATE(288)] = 15062,
  [SMALL_STATE(289)] = 15079,
  [SMALL_STATE(290)] = 15094,
  [SMALL_STATE(291)] = 15111,
  [SMALL_STATE(292)] = 15125,
  [SMALL_STATE(293)] = 15139,
  [SMALL_STATE(294)] = 15153,
  [SMALL_STATE(295)] = 15167,
  [SMALL_STATE(296)] = 15181,
  [SMALL_STATE(297)] = 15195,
  [SMALL_STATE(298)] = 15209,
  [SMALL_STATE(299)] = 15223,
  [SMALL_STATE(300)] = 15237,
  [SMALL_STATE(301)] = 15251,
  [SMALL_STATE(302)] = 15265,
  [SMALL_STATE(303)] = 15279,
  [SMALL_STATE(304)] = 15293,
  [SMALL_STATE(305)] = 15307,
  [SMALL_STATE(306)] = 15321,
  [SMALL_STATE(307)] = 15335,
  [SMALL_STATE(308)] = 15349,
  [SMALL_STATE(309)] = 15363,
  [SMALL_STATE(310)] = 15377,
  [SMALL_STATE(311)] = 15391,
  [SMALL_STATE(312)] = 15405,
  [SMALL_STATE(313)] = 15419,
  [SMALL_STATE(314)] = 15433,
  [SMALL_STATE(315)] = 15437,
  [SMALL_STATE(316)] = 15441,
  [SMALL_STATE(317)] = 15445,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(207),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(27),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(249),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(201),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(70),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(14),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(267),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(302),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(308),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(176),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(176),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(49),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(49),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(290),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(259),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(207),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(45),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(249),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(38),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 7),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(45),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(249),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(46),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(45),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(249),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(45),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(249),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(205),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(119),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(118),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(248),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(290),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(259),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(209),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2), REDUCE(aux_sym_document_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(212),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(205),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(119),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(118),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(248),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(214),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(119),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(118),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(248),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(119),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(118),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(248),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(119),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(118),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(248),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(205),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(119),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(118),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(248),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(105),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 14),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 5),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unicode_space, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unicode_space, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ws, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ws, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 4),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 14),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 14),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 13),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 13),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 13),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 13),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 8),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 8),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 13),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 13),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 5),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 5),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 5),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 8),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 8),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 8),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 8),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(147),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__binary_repeat1, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 12),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 12),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(162),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octal_repeat1, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(163),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hex_repeat1, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(164),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(206),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(221),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(222),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(251),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(169),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 2),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [787] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(207),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [794] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(45),
  [798] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(249),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(206),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(221),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(222),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(251),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [850] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(180),
  [854] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(249),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [864] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(45),
  [868] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(249),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 3),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string, 3),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2, .production_id = 6),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2, .production_id = 6),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(221),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(222),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(251),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(221),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(222),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(251),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 3, .production_id = 9),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 3, .production_id = 9),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 3),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 12),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 5, .production_id = 12),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(221),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(222),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(251),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 2),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(211),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(259),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 8),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 7),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(242),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sign, 1),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sign, 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [1120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(274),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(274),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(273),
  [1133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(285),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
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
