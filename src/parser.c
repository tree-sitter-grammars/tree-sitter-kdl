#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 3
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 16

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
  alias_sym_node_children_slash_dash = 155,
  alias_sym_node_prop_or_arg_slash_dash = 156,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__normal_bare_identifier] = "_normal_bare_identifier",
  [anon_sym_SLASH_DASH] = "node_slash_dash",
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
  [alias_sym_node_children_slash_dash] = "node_children_slash_dash",
  [alias_sym_node_prop_or_arg_slash_dash] = "node_prop_or_arg_slash_dash",
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
  [alias_sym_node_children_slash_dash] = alias_sym_node_children_slash_dash,
  [alias_sym_node_prop_or_arg_slash_dash] = alias_sym_node_prop_or_arg_slash_dash,
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
    .named = true,
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
  [alias_sym_node_children_slash_dash] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_node_prop_or_arg_slash_dash] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_children = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_children] = "children",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 2, .length = 1},
  [10] = {.index = 3, .length = 1},
  [11] = {.index = 3, .length = 1},
  [13] = {.index = 4, .length = 1},
  [14] = {.index = 4, .length = 1},
  [15] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_children, 1},
  [1] =
    {field_children, 2},
  [2] =
    {field_children, 3},
  [3] =
    {field_children, 4},
  [4] =
    {field_children, 5},
  [5] =
    {field_children, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [4] = {
    [0] = alias_sym_node_children_slash_dash,
  },
  [5] = {
    [0] = alias_sym_node_prop_or_arg_slash_dash,
  },
  [7] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [8] = {
    [0] = alias_sym_node_prop_or_arg_slash_dash,
    [1] = alias_sym_node_prop_or_arg_slash_dash,
  },
  [9] = {
    [2] = alias_sym_decimal,
  },
  [11] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [12] = {
    [3] = alias_sym_decimal,
  },
  [14] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [15] = {
    [1] = anon_sym_SLASH_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__integer, 2,
    sym__integer,
    alias_sym_decimal,
  aux_sym_node_repeat1, 3,
    aux_sym_node_repeat1,
    alias_sym_node_prop_or_arg_slash_dash,
    anon_sym_SLASH_DASH,
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
  [44] = 33,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 15,
  [79] = 79,
  [80] = 32,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 61,
  [85] = 85,
  [86] = 86,
  [87] = 60,
  [88] = 57,
  [89] = 89,
  [90] = 90,
  [91] = 56,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 50,
  [99] = 99,
  [100] = 100,
  [101] = 52,
  [102] = 102,
  [103] = 51,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 54,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 55,
  [122] = 51,
  [123] = 123,
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
  [169] = 59,
  [170] = 170,
  [171] = 171,
  [172] = 60,
  [173] = 173,
  [174] = 56,
  [175] = 175,
  [176] = 57,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 61,
  [181] = 62,
  [182] = 58,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 15,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 32,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 224,
  [225] = 218,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 218,
  [231] = 219,
  [232] = 232,
  [233] = 55,
  [234] = 50,
  [235] = 52,
  [236] = 54,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 58,
  [249] = 62,
  [250] = 59,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 259,
  [261] = 259,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 256,
  [267] = 267,
  [268] = 267,
  [269] = 269,
  [270] = 270,
  [271] = 269,
  [272] = 272,
  [273] = 269,
  [274] = 267,
  [275] = 267,
  [276] = 269,
  [277] = 267,
  [278] = 269,
  [279] = 279,
  [280] = 60,
  [281] = 281,
  [282] = 282,
  [283] = 281,
  [284] = 199,
  [285] = 201,
  [286] = 198,
  [287] = 282,
  [288] = 56,
  [289] = 61,
  [290] = 290,
  [291] = 291,
  [292] = 194,
  [293] = 188,
  [294] = 204,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 224,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 301,
  [305] = 302,
  [306] = 306,
  [307] = 301,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 308,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 309,
  [317] = 317,
  [318] = 317,
  [319] = 313,
  [320] = 207,
  [321] = 321,
  [322] = 202,
  [323] = 323,
  [324] = 324,
  [325] = 208,
  [326] = 323,
  [327] = 327,
  [328] = 328,
  [329] = 209,
  [330] = 312,
  [331] = 60,
  [332] = 61,
  [333] = 56,
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
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(209);
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
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead != 0) ADVANCE(202);
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
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '/') ADVANCE(201);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead != 0) ADVANCE(210);
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
      if (lookahead == '*') ADVANCE(204);
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
      if (lookahead == '*') ADVANCE(205);
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
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(119);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(204);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(210);
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
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 2, .external_lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 83},
  [15] = {.lex_state = 2, .external_lex_state = 1},
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
  [27] = {.lex_state = 83},
  [28] = {.lex_state = 83},
  [29] = {.lex_state = 83},
  [30] = {.lex_state = 83},
  [31] = {.lex_state = 83},
  [32] = {.lex_state = 2, .external_lex_state = 1},
  [33] = {.lex_state = 83},
  [34] = {.lex_state = 83},
  [35] = {.lex_state = 83},
  [36] = {.lex_state = 83},
  [37] = {.lex_state = 83},
  [38] = {.lex_state = 83},
  [39] = {.lex_state = 83},
  [40] = {.lex_state = 83},
  [41] = {.lex_state = 83},
  [42] = {.lex_state = 83},
  [43] = {.lex_state = 83},
  [44] = {.lex_state = 83},
  [45] = {.lex_state = 83},
  [46] = {.lex_state = 83},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 83},
  [54] = {.lex_state = 2, .external_lex_state = 1},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 2, .external_lex_state = 1},
  [58] = {.lex_state = 2, .external_lex_state = 1},
  [59] = {.lex_state = 2, .external_lex_state = 1},
  [60] = {.lex_state = 2, .external_lex_state = 1},
  [61] = {.lex_state = 2, .external_lex_state = 1},
  [62] = {.lex_state = 2, .external_lex_state = 1},
  [63] = {.lex_state = 83, .external_lex_state = 1},
  [64] = {.lex_state = 83, .external_lex_state = 1},
  [65] = {.lex_state = 83, .external_lex_state = 1},
  [66] = {.lex_state = 83, .external_lex_state = 1},
  [67] = {.lex_state = 83, .external_lex_state = 1},
  [68] = {.lex_state = 83, .external_lex_state = 1},
  [69] = {.lex_state = 83, .external_lex_state = 1},
  [70] = {.lex_state = 83, .external_lex_state = 1},
  [71] = {.lex_state = 83, .external_lex_state = 1},
  [72] = {.lex_state = 83},
  [73] = {.lex_state = 83, .external_lex_state = 1},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 83},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 83},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 83, .external_lex_state = 1},
  [83] = {.lex_state = 83, .external_lex_state = 1},
  [84] = {.lex_state = 83},
  [85] = {.lex_state = 83, .external_lex_state = 1},
  [86] = {.lex_state = 83, .external_lex_state = 1},
  [87] = {.lex_state = 83},
  [88] = {.lex_state = 83},
  [89] = {.lex_state = 83, .external_lex_state = 1},
  [90] = {.lex_state = 83, .external_lex_state = 1},
  [91] = {.lex_state = 83},
  [92] = {.lex_state = 83, .external_lex_state = 1},
  [93] = {.lex_state = 83, .external_lex_state = 1},
  [94] = {.lex_state = 83, .external_lex_state = 1},
  [95] = {.lex_state = 83, .external_lex_state = 1},
  [96] = {.lex_state = 83, .external_lex_state = 1},
  [97] = {.lex_state = 83, .external_lex_state = 1},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 83, .external_lex_state = 1},
  [100] = {.lex_state = 83, .external_lex_state = 1},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 83, .external_lex_state = 1},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 83, .external_lex_state = 1},
  [105] = {.lex_state = 83, .external_lex_state = 1},
  [106] = {.lex_state = 83, .external_lex_state = 1},
  [107] = {.lex_state = 83, .external_lex_state = 1},
  [108] = {.lex_state = 83, .external_lex_state = 1},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 83, .external_lex_state = 1},
  [111] = {.lex_state = 83, .external_lex_state = 1},
  [112] = {.lex_state = 83, .external_lex_state = 1},
  [113] = {.lex_state = 83, .external_lex_state = 1},
  [114] = {.lex_state = 83, .external_lex_state = 1},
  [115] = {.lex_state = 83, .external_lex_state = 1},
  [116] = {.lex_state = 83, .external_lex_state = 1},
  [117] = {.lex_state = 83, .external_lex_state = 1},
  [118] = {.lex_state = 83, .external_lex_state = 1},
  [119] = {.lex_state = 83, .external_lex_state = 1},
  [120] = {.lex_state = 83, .external_lex_state = 1},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 83},
  [123] = {.lex_state = 83, .external_lex_state = 1},
  [124] = {.lex_state = 83, .external_lex_state = 1},
  [125] = {.lex_state = 83, .external_lex_state = 1},
  [126] = {.lex_state = 83, .external_lex_state = 1},
  [127] = {.lex_state = 83, .external_lex_state = 1},
  [128] = {.lex_state = 83, .external_lex_state = 1},
  [129] = {.lex_state = 1, .external_lex_state = 1},
  [130] = {.lex_state = 1, .external_lex_state = 1},
  [131] = {.lex_state = 1, .external_lex_state = 1},
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
  [147] = {.lex_state = 83},
  [148] = {.lex_state = 83},
  [149] = {.lex_state = 83},
  [150] = {.lex_state = 83},
  [151] = {.lex_state = 83},
  [152] = {.lex_state = 83},
  [153] = {.lex_state = 83},
  [154] = {.lex_state = 83},
  [155] = {.lex_state = 83},
  [156] = {.lex_state = 83},
  [157] = {.lex_state = 83},
  [158] = {.lex_state = 83},
  [159] = {.lex_state = 83},
  [160] = {.lex_state = 83},
  [161] = {.lex_state = 83},
  [162] = {.lex_state = 83},
  [163] = {.lex_state = 83},
  [164] = {.lex_state = 83},
  [165] = {.lex_state = 83},
  [166] = {.lex_state = 83},
  [167] = {.lex_state = 83},
  [168] = {.lex_state = 83},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 1, .external_lex_state = 1},
  [171] = {.lex_state = 5, .external_lex_state = 1},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 5, .external_lex_state = 1},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 5, .external_lex_state = 1},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 5, .external_lex_state = 1},
  [178] = {.lex_state = 5, .external_lex_state = 1},
  [179] = {.lex_state = 1, .external_lex_state = 1},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 6, .external_lex_state = 1},
  [184] = {.lex_state = 6, .external_lex_state = 1},
  [185] = {.lex_state = 6, .external_lex_state = 1},
  [186] = {.lex_state = 7, .external_lex_state = 1},
  [187] = {.lex_state = 7, .external_lex_state = 1},
  [188] = {.lex_state = 1, .external_lex_state = 1},
  [189] = {.lex_state = 1, .external_lex_state = 1},
  [190] = {.lex_state = 7, .external_lex_state = 1},
  [191] = {.lex_state = 7, .external_lex_state = 1},
  [192] = {.lex_state = 1, .external_lex_state = 1},
  [193] = {.lex_state = 6, .external_lex_state = 1},
  [194] = {.lex_state = 1, .external_lex_state = 1},
  [195] = {.lex_state = 7, .external_lex_state = 1},
  [196] = {.lex_state = 6, .external_lex_state = 1},
  [197] = {.lex_state = 83, .external_lex_state = 1},
  [198] = {.lex_state = 4, .external_lex_state = 1},
  [199] = {.lex_state = 4, .external_lex_state = 1},
  [200] = {.lex_state = 83},
  [201] = {.lex_state = 4, .external_lex_state = 1},
  [202] = {.lex_state = 83, .external_lex_state = 1},
  [203] = {.lex_state = 83, .external_lex_state = 1},
  [204] = {.lex_state = 3, .external_lex_state = 1},
  [205] = {.lex_state = 83, .external_lex_state = 1},
  [206] = {.lex_state = 83, .external_lex_state = 1},
  [207] = {.lex_state = 83, .external_lex_state = 1},
  [208] = {.lex_state = 83, .external_lex_state = 1},
  [209] = {.lex_state = 83, .external_lex_state = 1},
  [210] = {.lex_state = 83, .external_lex_state = 1},
  [211] = {.lex_state = 83, .external_lex_state = 1},
  [212] = {.lex_state = 83, .external_lex_state = 1},
  [213] = {.lex_state = 83, .external_lex_state = 1},
  [214] = {.lex_state = 83, .external_lex_state = 1},
  [215] = {.lex_state = 83, .external_lex_state = 1},
  [216] = {.lex_state = 83, .external_lex_state = 1},
  [217] = {.lex_state = 83},
  [218] = {.lex_state = 83},
  [219] = {.lex_state = 83},
  [220] = {.lex_state = 83, .external_lex_state = 1},
  [221] = {.lex_state = 83, .external_lex_state = 1},
  [222] = {.lex_state = 83},
  [223] = {.lex_state = 83, .external_lex_state = 1},
  [224] = {.lex_state = 83, .external_lex_state = 1},
  [225] = {.lex_state = 83},
  [226] = {.lex_state = 83, .external_lex_state = 1},
  [227] = {.lex_state = 83, .external_lex_state = 1},
  [228] = {.lex_state = 83, .external_lex_state = 1},
  [229] = {.lex_state = 83, .external_lex_state = 1},
  [230] = {.lex_state = 83},
  [231] = {.lex_state = 83},
  [232] = {.lex_state = 83, .external_lex_state = 1},
  [233] = {.lex_state = 83},
  [234] = {.lex_state = 83},
  [235] = {.lex_state = 83},
  [236] = {.lex_state = 83},
  [237] = {.lex_state = 83, .external_lex_state = 1},
  [238] = {.lex_state = 83, .external_lex_state = 1},
  [239] = {.lex_state = 83, .external_lex_state = 1},
  [240] = {.lex_state = 83, .external_lex_state = 1},
  [241] = {.lex_state = 83, .external_lex_state = 1},
  [242] = {.lex_state = 83, .external_lex_state = 1},
  [243] = {.lex_state = 83, .external_lex_state = 1},
  [244] = {.lex_state = 83, .external_lex_state = 1},
  [245] = {.lex_state = 83, .external_lex_state = 1},
  [246] = {.lex_state = 83, .external_lex_state = 1},
  [247] = {.lex_state = 83, .external_lex_state = 1},
  [248] = {.lex_state = 83},
  [249] = {.lex_state = 83},
  [250] = {.lex_state = 83},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 83},
  [253] = {.lex_state = 83},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 83},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 83},
  [258] = {.lex_state = 83},
  [259] = {.lex_state = 8, .external_lex_state = 1},
  [260] = {.lex_state = 8, .external_lex_state = 1},
  [261] = {.lex_state = 8, .external_lex_state = 1},
  [262] = {.lex_state = 8, .external_lex_state = 1},
  [263] = {.lex_state = 8, .external_lex_state = 1},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 83},
  [267] = {.lex_state = 12},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 83},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 12},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 3},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 83},
  [298] = {.lex_state = 83},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 83},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 83},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 83},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 83},
  [309] = {.lex_state = 83},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 83},
  [312] = {.lex_state = 145},
  [313] = {.lex_state = 145},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 83},
  [316] = {.lex_state = 83},
  [317] = {.lex_state = 83},
  [318] = {.lex_state = 83},
  [319] = {.lex_state = 145},
  [320] = {.lex_state = 83},
  [321] = {.lex_state = 83},
  [322] = {.lex_state = 83},
  [323] = {.lex_state = 83},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 83},
  [326] = {.lex_state = 83},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 83},
  [330] = {.lex_state = 145},
  [331] = {(TSStateId)(-1)},
  [332] = {(TSStateId)(-1)},
  [333] = {(TSStateId)(-1)},
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
    [aux_sym_single_line_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(324),
    [sym_node] = STATE(22),
    [sym_identifier] = STATE(70),
    [sym__bare_identifier] = STATE(224),
    [sym_type] = STATE(258),
    [sym_string] = STATE(224),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym__sign] = STATE(204),
    [sym__linespace] = STATE(34),
    [sym__newline] = STATE(34),
    [sym__ws] = STATE(34),
    [sym__unicode_space] = STATE(34),
    [sym_single_line_comment] = STATE(34),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__normal_bare_identifier] = ACTIONS(7),
    [anon_sym_SLASH_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
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
    [sym__node_prop_or_arg] = STATE(227),
    [sym_node_children] = STATE(127),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(143),
    [sym_identifier] = STATE(321),
    [sym__bare_identifier] = STATE(300),
    [sym_keyword] = STATE(229),
    [sym_prop] = STATE(227),
    [sym_value] = STATE(227),
    [sym_type] = STATE(254),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(229),
    [sym__decimal] = STATE(232),
    [sym__integer] = STATE(179),
    [sym__sign] = STATE(265),
    [sym__hex] = STATE(232),
    [sym__octal] = STATE(232),
    [sym__binary] = STATE(232),
    [sym_boolean] = STATE(220),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(143),
    [sym__ws] = STATE(32),
    [sym__unicode_space] = STATE(32),
    [sym_single_line_comment] = STATE(143),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(32),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_CR_LF] = ACTIONS(37),
    [anon_sym_] = ACTIONS(37),
    [anon_sym_2] = ACTIONS(37),
    [anon_sym_3] = ACTIONS(37),
    [anon_sym_4] = ACTIONS(37),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(37),
  },
  [3] = {
    [sym__node_prop_or_arg] = STATE(227),
    [sym_node_children] = STATE(106),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(158),
    [sym_identifier] = STATE(321),
    [sym__bare_identifier] = STATE(300),
    [sym_keyword] = STATE(229),
    [sym_prop] = STATE(227),
    [sym_value] = STATE(227),
    [sym_type] = STATE(254),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(229),
    [sym__decimal] = STATE(232),
    [sym__integer] = STATE(179),
    [sym__sign] = STATE(265),
    [sym__hex] = STATE(232),
    [sym__octal] = STATE(232),
    [sym__binary] = STATE(232),
    [sym_boolean] = STATE(220),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(158),
    [sym__ws] = STATE(32),
    [sym__unicode_space] = STATE(32),
    [sym_single_line_comment] = STATE(158),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(32),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(65),
  },
  [4] = {
    [sym__node_prop_or_arg] = STATE(227),
    [sym_node_children] = STATE(112),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(152),
    [sym_identifier] = STATE(321),
    [sym__bare_identifier] = STATE(300),
    [sym_keyword] = STATE(229),
    [sym_prop] = STATE(227),
    [sym_value] = STATE(227),
    [sym_type] = STATE(254),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(229),
    [sym__decimal] = STATE(232),
    [sym__integer] = STATE(179),
    [sym__sign] = STATE(265),
    [sym__hex] = STATE(232),
    [sym__octal] = STATE(232),
    [sym__binary] = STATE(232),
    [sym_boolean] = STATE(220),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(152),
    [sym__ws] = STATE(32),
    [sym__unicode_space] = STATE(32),
    [sym_single_line_comment] = STATE(152),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(32),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(69),
  },
  [5] = {
    [sym__node_prop_or_arg] = STATE(227),
    [sym_node_children] = STATE(92),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(141),
    [sym_identifier] = STATE(321),
    [sym__bare_identifier] = STATE(300),
    [sym_keyword] = STATE(229),
    [sym_prop] = STATE(227),
    [sym_value] = STATE(227),
    [sym_type] = STATE(254),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(229),
    [sym__decimal] = STATE(232),
    [sym__integer] = STATE(179),
    [sym__sign] = STATE(265),
    [sym__hex] = STATE(232),
    [sym__octal] = STATE(232),
    [sym__binary] = STATE(232),
    [sym_boolean] = STATE(220),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(141),
    [sym__ws] = STATE(32),
    [sym__unicode_space] = STATE(32),
    [sym_single_line_comment] = STATE(141),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(32),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(73),
  },
  [6] = {
    [sym__node_prop_or_arg] = STATE(227),
    [sym_node_children] = STATE(85),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(134),
    [sym_identifier] = STATE(321),
    [sym__bare_identifier] = STATE(300),
    [sym_keyword] = STATE(229),
    [sym_prop] = STATE(227),
    [sym_value] = STATE(227),
    [sym_type] = STATE(254),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(229),
    [sym__decimal] = STATE(232),
    [sym__integer] = STATE(179),
    [sym__sign] = STATE(265),
    [sym__hex] = STATE(232),
    [sym__octal] = STATE(232),
    [sym__binary] = STATE(232),
    [sym_boolean] = STATE(220),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(134),
    [sym__ws] = STATE(32),
    [sym__unicode_space] = STATE(32),
    [sym_single_line_comment] = STATE(134),
    [sym_multi_line_comment] = STATE(6),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(32),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(77),
  },
  [7] = {
    [sym__node_prop_or_arg] = STATE(227),
    [sym_node_children] = STATE(116),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(150),
    [sym_identifier] = STATE(321),
    [sym__bare_identifier] = STATE(300),
    [sym_keyword] = STATE(229),
    [sym_prop] = STATE(227),
    [sym_value] = STATE(227),
    [sym_type] = STATE(254),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(229),
    [sym__decimal] = STATE(232),
    [sym__integer] = STATE(179),
    [sym__sign] = STATE(265),
    [sym__hex] = STATE(232),
    [sym__octal] = STATE(232),
    [sym__binary] = STATE(232),
    [sym_boolean] = STATE(220),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(150),
    [sym__ws] = STATE(32),
    [sym__unicode_space] = STATE(32),
    [sym_single_line_comment] = STATE(150),
    [sym_multi_line_comment] = STATE(7),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(32),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(83),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_CR_LF] = ACTIONS(81),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(81),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(81),
  },
  [8] = {
    [sym__node_prop_or_arg] = STATE(227),
    [sym_node_children] = STATE(102),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(164),
    [sym_identifier] = STATE(321),
    [sym__bare_identifier] = STATE(300),
    [sym_keyword] = STATE(229),
    [sym_prop] = STATE(227),
    [sym_value] = STATE(227),
    [sym_type] = STATE(254),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(229),
    [sym__decimal] = STATE(232),
    [sym__integer] = STATE(179),
    [sym__sign] = STATE(265),
    [sym__hex] = STATE(232),
    [sym__octal] = STATE(232),
    [sym__binary] = STATE(232),
    [sym_boolean] = STATE(220),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(164),
    [sym__ws] = STATE(32),
    [sym__unicode_space] = STATE(32),
    [sym_single_line_comment] = STATE(164),
    [sym_multi_line_comment] = STATE(8),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(32),
    [sym__normal_bare_identifier] = ACTIONS(31),
    [anon_sym_SLASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [sym__digit] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_0x] = ACTIONS(49),
    [anon_sym_0o] = ACTIONS(51),
    [anon_sym_0b] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_CR_LF] = ACTIONS(85),
    [anon_sym_] = ACTIONS(85),
    [anon_sym_2] = ACTIONS(85),
    [anon_sym_3] = ACTIONS(85),
    [anon_sym_4] = ACTIONS(85),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [sym__eof] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 33,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_null,
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
    ACTIONS(89), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_multi_line_comment,
    STATE(78), 1,
      aux_sym_node_repeat1,
    STATE(101), 1,
      sym__escline,
    STATE(179), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_boolean,
    STATE(254), 1,
      sym_type,
    STATE(265), 1,
      sym__sign,
    STATE(300), 1,
      sym__bare_identifier,
    STATE(321), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(229), 2,
      sym_keyword,
      sym_number,
    STATE(80), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(227), 3,
      sym__node_prop_or_arg,
      sym_prop,
      sym_value,
    STATE(232), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(93), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [128] = 33,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_null,
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
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_multi_line_comment,
    STATE(11), 1,
      aux_sym_node_repeat1,
    STATE(101), 1,
      sym__escline,
    STATE(179), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_boolean,
    STATE(254), 1,
      sym_type,
    STATE(265), 1,
      sym__sign,
    STATE(300), 1,
      sym__bare_identifier,
    STATE(321), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(228), 2,
      sym_prop,
      sym_value,
    STATE(229), 2,
      sym_keyword,
      sym_number,
    STATE(80), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(232), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(93), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [255] = 33,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_null,
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
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_multi_line_comment,
    STATE(78), 1,
      aux_sym_node_repeat1,
    STATE(101), 1,
      sym__escline,
    STATE(179), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_boolean,
    STATE(254), 1,
      sym_type,
    STATE(265), 1,
      sym__sign,
    STATE(300), 1,
      sym__bare_identifier,
    STATE(321), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_prop,
      sym_value,
    STATE(229), 2,
      sym_keyword,
      sym_number,
    STATE(80), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(232), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(93), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [382] = 32,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_null,
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
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_multi_line_comment,
    STATE(78), 1,
      aux_sym_node_repeat1,
    STATE(101), 1,
      sym__escline,
    STATE(179), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_boolean,
    STATE(254), 1,
      sym_type,
    STATE(265), 1,
      sym__sign,
    STATE(300), 1,
      sym__bare_identifier,
    STATE(321), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_prop,
      sym_value,
    STATE(229), 2,
      sym_keyword,
      sym_number,
    STATE(80), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(232), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(93), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [506] = 32,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_null,
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
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(13), 1,
      sym_multi_line_comment,
    STATE(101), 1,
      sym__escline,
    STATE(179), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_boolean,
    STATE(254), 1,
      sym_type,
    STATE(265), 1,
      sym__sign,
    STATE(300), 1,
      sym__bare_identifier,
    STATE(321), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(228), 2,
      sym_prop,
      sym_value,
    STATE(229), 2,
      sym_keyword,
      sym_number,
    STATE(80), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(232), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(93), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [630] = 20,
    ACTIONS(103), 1,
      sym__normal_bare_identifier,
    ACTIONS(106), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__raw_string_token1,
    ACTIONS(118), 1,
      aux_sym__raw_string_token3,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_CR,
    ACTIONS(133), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(14), 3,
      sym_node,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
    STATE(53), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(130), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [725] = 9,
    ACTIONS(143), 1,
      anon_sym_BSLASH,
    ACTIONS(149), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(15), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(139), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(141), 18,
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
    ACTIONS(146), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [798] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_CR,
    STATE(16), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(156), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [894] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_CR,
    STATE(17), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(30), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [990] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_CR,
    STATE(18), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(156), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [1086] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_CR,
    STATE(19), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(18), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(40), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1182] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      anon_sym_CR,
    STATE(20), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(23), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1278] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_CR,
    STATE(21), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(43), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1374] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      anon_sym_CR,
    STATE(22), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(42), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1470] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_CR,
    STATE(23), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(41), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1566] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_CR,
    STATE(24), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1662] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_CR,
    STATE(25), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(29), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(41), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1758] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      anon_sym_CR,
    STATE(26), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(47), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1854] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      anon_sym_CR,
    STATE(27), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(21), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(47), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [1950] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_CR,
    STATE(28), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(24), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(38), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(210), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2046] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_CR,
    STATE(29), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(38), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(210), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2142] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(30), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2237] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      anon_sym_CR,
    STATE(19), 1,
      sym_node,
    STATE(31), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(35), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(222), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2332] = 8,
    ACTIONS(228), 1,
      anon_sym_BSLASH,
    ACTIONS(234), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_multi_line_comment,
    STATE(54), 1,
      sym__escline,
    STATE(51), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(224), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(226), 18,
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
    ACTIONS(231), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2401] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      aux_sym__raw_string_token1,
    ACTIONS(245), 1,
      aux_sym__raw_string_token3,
    STATE(33), 1,
      sym_multi_line_comment,
    STATE(294), 1,
      sym__sign,
    STATE(300), 2,
      sym__bare_identifier,
      sym_string,
    STATE(316), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(325), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(239), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(237), 28,
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
  [2482] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      anon_sym_CR,
    STATE(27), 1,
      sym_node,
    STATE(34), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(249), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2577] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_CR,
    STATE(16), 1,
      sym_node,
    STATE(35), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(74), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(253), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2672] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(36), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2767] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      anon_sym_CR,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2862] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2957] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      anon_sym_CR,
    STATE(25), 1,
      sym_node,
    STATE(39), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(76), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(259), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3052] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(40), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3147] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(41), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3242] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(42), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3337] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      anon_sym_CR,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3432] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      aux_sym__raw_string_token1,
    ACTIONS(245), 1,
      aux_sym__raw_string_token3,
    STATE(44), 1,
      sym_multi_line_comment,
    STATE(294), 1,
      sym__sign,
    STATE(300), 2,
      sym__bare_identifier,
      sym_string,
    STATE(309), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(325), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(239), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(237), 28,
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
  [3513] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      anon_sym_CR,
    STATE(20), 1,
      sym_node,
    STATE(45), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [3608] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(46), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3703] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(47), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3798] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 1,
      anon_sym_CR,
    STATE(28), 1,
      sym_node,
    STATE(48), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(75), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(271), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3893] = 21,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_CR,
    STATE(25), 1,
      sym_node,
    STATE(49), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(48), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(275), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3988] = 6,
    ACTIONS(284), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_multi_line_comment,
    STATE(51), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(277), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(279), 19,
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
    ACTIONS(281), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4052] = 5,
    ACTIONS(294), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 4,
      sym__ws,
      sym__unicode_space,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(287), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(289), 19,
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
    ACTIONS(291), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4114] = 6,
    ACTIONS(234), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_multi_line_comment,
    STATE(55), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(224), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(226), 19,
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
    ACTIONS(297), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4178] = 20,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      anon_sym_CR,
    STATE(53), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(136), 1,
      sym_node,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4270] = 6,
    ACTIONS(307), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_multi_line_comment,
    STATE(50), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(300), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(302), 19,
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
    ACTIONS(304), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4334] = 6,
    ACTIONS(307), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_multi_line_comment,
    STATE(51), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(300), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(302), 19,
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
    ACTIONS(310), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4398] = 3,
    STATE(56), 1,
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
  [4453] = 3,
    STATE(57), 1,
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
  [4508] = 3,
    STATE(58), 1,
      sym_multi_line_comment,
    ACTIONS(321), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(323), 39,
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
  [4563] = 3,
    STATE(59), 1,
      sym_multi_line_comment,
    ACTIONS(325), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(327), 39,
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
  [4618] = 3,
    STATE(60), 1,
      sym_multi_line_comment,
    ACTIONS(329), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(331), 39,
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
  [4673] = 3,
    STATE(61), 1,
      sym_multi_line_comment,
    ACTIONS(333), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(335), 39,
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
  [4728] = 3,
    STATE(62), 1,
      sym_multi_line_comment,
    ACTIONS(337), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(339), 39,
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
  [4783] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(63), 1,
      sym_multi_line_comment,
    STATE(106), 1,
      sym_node_children,
    STATE(110), 1,
      aux_sym_node_repeat2,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [4861] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(345), 1,
      anon_sym_CR,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(63), 1,
      aux_sym_node_repeat2,
    STATE(64), 1,
      sym_multi_line_comment,
    STATE(118), 1,
      sym_node_children,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(149), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(343), 8,
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
  [4939] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(65), 1,
      sym_multi_line_comment,
    STATE(68), 1,
      aux_sym_node_repeat2,
    STATE(106), 1,
      sym_node_children,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [5017] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(66), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      aux_sym_node_repeat2,
    STATE(102), 1,
      sym_node_children,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(85), 8,
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
  [5095] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(67), 1,
      sym_multi_line_comment,
    STATE(71), 1,
      aux_sym_node_repeat2,
    STATE(116), 1,
      sym_node_children,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(150), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(81), 8,
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
  [5173] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(68), 1,
      sym_multi_line_comment,
    STATE(85), 1,
      sym_node_children,
    STATE(110), 1,
      aux_sym_node_repeat2,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(77), 8,
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
  [5251] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(69), 1,
      sym_multi_line_comment,
    STATE(110), 1,
      aux_sym_node_repeat2,
    STATE(116), 1,
      sym_node_children,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(150), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(81), 8,
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
  [5329] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(349), 1,
      anon_sym_CR,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(70), 1,
      sym_multi_line_comment,
    STATE(73), 1,
      aux_sym_node_repeat2,
    STATE(124), 1,
      sym_node_children,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(166), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(347), 8,
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
  [5407] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(71), 1,
      sym_multi_line_comment,
    STATE(110), 1,
      aux_sym_node_repeat2,
    STATE(112), 1,
      sym_node_children,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [5485] = 7,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(351), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(72), 7,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(358), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5545] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(73), 1,
      sym_multi_line_comment,
    STATE(102), 1,
      sym_node_children,
    STATE(110), 1,
      aux_sym_node_repeat2,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(85), 8,
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
  [5623] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_multi_line_comment,
    ACTIONS(353), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(351), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(358), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5686] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_multi_line_comment,
    ACTIONS(353), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(351), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(358), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5749] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_multi_line_comment,
    ACTIONS(353), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(351), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(358), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5812] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_multi_line_comment,
    ACTIONS(353), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(351), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(72), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(358), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5875] = 9,
    ACTIONS(379), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym__escline,
    STATE(181), 1,
      sym__node_space,
    STATE(78), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(80), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(139), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(141), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(382), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5938] = 20,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    STATE(64), 1,
      sym_identifier,
    STATE(79), 1,
      sym_multi_line_comment,
    STATE(200), 1,
      aux_sym_node_repeat1,
    STATE(204), 1,
      sym__sign,
    STATE(235), 1,
      sym__escline,
    STATE(249), 1,
      sym__node_space,
    STATE(257), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(217), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(390), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6021] = 8,
    ACTIONS(392), 1,
      anon_sym_BSLASH,
    ACTIONS(398), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_multi_line_comment,
    STATE(109), 1,
      sym__escline,
    STATE(103), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(224), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(226), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(395), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6080] = 20,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    STATE(66), 1,
      sym_identifier,
    STATE(79), 1,
      aux_sym_node_repeat1,
    STATE(81), 1,
      sym_multi_line_comment,
    STATE(204), 1,
      sym__sign,
    STATE(235), 1,
      sym__escline,
    STATE(249), 1,
      sym__node_space,
    STATE(255), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
    STATE(217), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(390), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6163] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(82), 1,
      sym_multi_line_comment,
    STATE(96), 1,
      aux_sym_node_repeat1,
    STATE(206), 1,
      sym__escline,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(401), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6229] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(83), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(167), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(407), 8,
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
  [6295] = 3,
    STATE(84), 1,
      sym_multi_line_comment,
    ACTIONS(333), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(335), 36,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
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
  [6343] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(413), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(85), 1,
      sym_multi_line_comment,
    STATE(97), 1,
      aux_sym_node_repeat1,
    STATE(128), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(135), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(411), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(415), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6409] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(86), 1,
      sym_multi_line_comment,
    STATE(107), 1,
      aux_sym_node_repeat1,
    STATE(206), 1,
      sym__escline,
    STATE(137), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(417), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6475] = 3,
    STATE(87), 1,
      sym_multi_line_comment,
    ACTIONS(329), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(331), 36,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
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
  [6523] = 3,
    STATE(88), 1,
      sym_multi_line_comment,
    ACTIONS(317), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(319), 36,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
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
  [6571] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(89), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(137), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(417), 8,
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
  [6637] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(423), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(90), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(132), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(421), 8,
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
  [6703] = 3,
    STATE(91), 1,
      sym_multi_line_comment,
    ACTIONS(313), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(315), 36,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
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
  [6751] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(427), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(92), 1,
      sym_multi_line_comment,
    STATE(123), 1,
      aux_sym_node_repeat1,
    STATE(125), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(153), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(425), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(429), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6817] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(433), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(93), 1,
      sym_multi_line_comment,
    STATE(104), 1,
      aux_sym_node_repeat1,
    STATE(206), 1,
      sym__escline,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(431), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6883] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(437), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(94), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(144), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(435), 8,
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
  [6949] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(437), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(95), 1,
      sym_multi_line_comment,
    STATE(126), 1,
      aux_sym_node_repeat1,
    STATE(206), 1,
      sym__escline,
    STATE(144), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(435), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7015] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(96), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(139), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(439), 8,
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
  [7081] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(97), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(443), 8,
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
  [7147] = 6,
    ACTIONS(450), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_multi_line_comment,
    STATE(103), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(277), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(279), 10,
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
    ACTIONS(447), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7201] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(433), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(99), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(431), 8,
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
  [7267] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(455), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(100), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(162), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(453), 8,
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
  [7333] = 6,
    ACTIONS(398), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_multi_line_comment,
    STATE(121), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(224), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(226), 10,
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
    ACTIONS(457), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7387] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(462), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(102), 1,
      sym_multi_line_comment,
    STATE(114), 1,
      aux_sym_node_repeat1,
    STATE(115), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(151), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [7453] = 5,
    ACTIONS(469), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 4,
      sym__ws,
      sym__unicode_space,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(287), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 10,
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
    ACTIONS(466), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7505] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(104), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(145), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(472), 8,
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
  [7571] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(105), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(401), 8,
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
  [7637] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat1,
    STATE(106), 1,
      sym_multi_line_comment,
    STATE(86), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(138), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(476), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(480), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7703] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(107), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(482), 8,
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
  [7769] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(90), 1,
      aux_sym_node_repeat1,
    STATE(108), 1,
      sym_multi_line_comment,
    STATE(206), 1,
      sym__escline,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
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
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7835] = 6,
    ACTIONS(493), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_multi_line_comment,
    STATE(98), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(300), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(302), 10,
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
    ACTIONS(490), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7889] = 10,
    ACTIONS(498), 1,
      anon_sym_BSLASH,
    ACTIONS(501), 1,
      anon_sym_CR,
    ACTIONS(506), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(101), 1,
      sym__escline,
    STATE(181), 1,
      sym__node_space,
    STATE(110), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat2,
    STATE(80), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(496), 11,
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
    ACTIONS(503), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7951] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(111), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(486), 8,
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
  [8017] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(511), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(99), 1,
      aux_sym_node_repeat1,
    STATE(112), 1,
      sym_multi_line_comment,
    STATE(93), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(157), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(509), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(513), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8083] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(100), 1,
      aux_sym_node_repeat1,
    STATE(113), 1,
      sym_multi_line_comment,
    STATE(206), 1,
      sym__escline,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(515), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8149] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(114), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(519), 8,
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
  [8215] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(115), 1,
      sym_multi_line_comment,
    STATE(119), 1,
      aux_sym_node_repeat1,
    STATE(206), 1,
      sym__escline,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
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
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8281] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(116), 1,
      sym_multi_line_comment,
    STATE(117), 1,
      aux_sym_node_repeat1,
    STATE(113), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(523), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(527), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8347] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(117), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(515), 8,
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
  [8413] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(111), 1,
      aux_sym_node_repeat1,
    STATE(118), 1,
      sym_multi_line_comment,
    STATE(108), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(154), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [8479] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(119), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(165), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(535), 8,
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
  [8545] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(120), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(539), 8,
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
  [8611] = 6,
    ACTIONS(493), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_multi_line_comment,
    STATE(103), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(300), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(302), 10,
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
    ACTIONS(543), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8665] = 5,
    ACTIONS(549), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    STATE(122), 4,
      sym__ws,
      sym__unicode_space,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(289), 13,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(546), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8717] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(554), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(123), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(552), 8,
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
  [8783] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(94), 1,
      aux_sym_node_repeat1,
    STATE(124), 1,
      sym_multi_line_comment,
    STATE(95), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(142), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(556), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(560), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8849] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(554), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(120), 1,
      aux_sym_node_repeat1,
    STATE(125), 1,
      sym_multi_line_comment,
    STATE(206), 1,
      sym__escline,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(552), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8915] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(564), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(126), 1,
      sym_multi_line_comment,
    STATE(32), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(168), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(562), 8,
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
  [8981] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(568), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(105), 1,
      aux_sym_node_repeat1,
    STATE(127), 1,
      sym_multi_line_comment,
    STATE(82), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(159), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(566), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(570), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [9047] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(128), 1,
      sym_multi_line_comment,
    STATE(206), 1,
      sym__escline,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(443), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(405), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [9113] = 5,
    ACTIONS(576), 1,
      anon_sym_CR,
    STATE(129), 1,
      sym_multi_line_comment,
    STATE(130), 1,
      aux_sym__integer_repeat1,
    ACTIONS(574), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(572), 35,
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
  [9164] = 4,
    ACTIONS(583), 1,
      anon_sym_CR,
    ACTIONS(580), 2,
      anon_sym__,
      sym__digit,
    STATE(130), 2,
      sym_multi_line_comment,
      aux_sym__integer_repeat1,
    ACTIONS(578), 35,
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
  [9213] = 5,
    ACTIONS(589), 1,
      anon_sym_CR,
    STATE(129), 1,
      aux_sym__integer_repeat1,
    STATE(131), 1,
      sym_multi_line_comment,
    ACTIONS(587), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(585), 35,
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
  [9264] = 3,
    STATE(132), 1,
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
  [9310] = 3,
    STATE(133), 1,
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
  [9356] = 3,
    STATE(134), 1,
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
  [9402] = 3,
    STATE(135), 1,
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
  [9448] = 3,
    STATE(136), 1,
      sym_multi_line_comment,
    ACTIONS(607), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(101), 34,
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
  [9494] = 3,
    STATE(137), 1,
      sym_multi_line_comment,
    ACTIONS(611), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(609), 34,
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
  [9540] = 3,
    STATE(138), 1,
      sym_multi_line_comment,
    ACTIONS(615), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(613), 34,
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
  [9586] = 3,
    STATE(139), 1,
      sym_multi_line_comment,
    ACTIONS(619), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(617), 34,
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
  [9632] = 3,
    STATE(140), 1,
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
  [9678] = 3,
    STATE(141), 1,
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
  [9724] = 3,
    STATE(142), 1,
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
  [9770] = 3,
    STATE(143), 1,
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
  [9816] = 3,
    STATE(144), 1,
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
  [9862] = 3,
    STATE(145), 1,
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
  [9908] = 3,
    STATE(146), 1,
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
  [9954] = 3,
    STATE(147), 1,
      sym_multi_line_comment,
    ACTIONS(651), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(649), 34,
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
  [10000] = 3,
    STATE(148), 1,
      sym_multi_line_comment,
    ACTIONS(655), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(653), 34,
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
  [10046] = 3,
    STATE(149), 1,
      sym_multi_line_comment,
    ACTIONS(659), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(657), 34,
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
  [10092] = 3,
    STATE(150), 1,
      sym_multi_line_comment,
    ACTIONS(663), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(661), 34,
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
  [10138] = 3,
    STATE(151), 1,
      sym_multi_line_comment,
    ACTIONS(667), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(665), 34,
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
  [10184] = 3,
    STATE(152), 1,
      sym_multi_line_comment,
    ACTIONS(671), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(669), 34,
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
  [10230] = 3,
    STATE(153), 1,
      sym_multi_line_comment,
    ACTIONS(675), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(673), 34,
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
  [10276] = 3,
    STATE(154), 1,
      sym_multi_line_comment,
    ACTIONS(679), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(677), 34,
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
  [10322] = 3,
    STATE(155), 1,
      sym_multi_line_comment,
    ACTIONS(683), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(681), 34,
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
  [10368] = 3,
    STATE(156), 1,
      sym_multi_line_comment,
    ACTIONS(687), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(685), 34,
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
  [10414] = 3,
    STATE(157), 1,
      sym_multi_line_comment,
    ACTIONS(691), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(689), 34,
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
  [10460] = 3,
    STATE(158), 1,
      sym_multi_line_comment,
    ACTIONS(695), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(693), 34,
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
  [10506] = 3,
    STATE(159), 1,
      sym_multi_line_comment,
    ACTIONS(699), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(697), 34,
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
  [10552] = 3,
    STATE(160), 1,
      sym_multi_line_comment,
    ACTIONS(703), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(701), 34,
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
  [10598] = 3,
    STATE(161), 1,
      sym_multi_line_comment,
    ACTIONS(707), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(705), 34,
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
  [10644] = 3,
    STATE(162), 1,
      sym_multi_line_comment,
    ACTIONS(711), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(709), 34,
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
  [10690] = 3,
    STATE(163), 1,
      sym_multi_line_comment,
    ACTIONS(715), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(713), 34,
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
  [10736] = 3,
    STATE(164), 1,
      sym_multi_line_comment,
    ACTIONS(719), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(717), 34,
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
  [10782] = 3,
    STATE(165), 1,
      sym_multi_line_comment,
    ACTIONS(723), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(721), 34,
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
  [10828] = 3,
    STATE(166), 1,
      sym_multi_line_comment,
    ACTIONS(727), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(725), 34,
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
  [10874] = 3,
    STATE(167), 1,
      sym_multi_line_comment,
    ACTIONS(731), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(729), 34,
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
  [10920] = 3,
    STATE(168), 1,
      sym_multi_line_comment,
    ACTIONS(735), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(733), 34,
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
  [10966] = 3,
    STATE(169), 1,
      sym_multi_line_comment,
    ACTIONS(325), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(327), 30,
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
  [11011] = 6,
    ACTIONS(739), 1,
      anon_sym_DOT,
    ACTIONS(743), 1,
      anon_sym_CR,
    STATE(170), 1,
      sym_multi_line_comment,
    STATE(212), 1,
      sym__exponent,
    ACTIONS(741), 2,
      anon_sym_e,
      anon_sym_E,
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
  [11062] = 5,
    ACTIONS(749), 1,
      anon_sym_CR,
    STATE(171), 1,
      sym_multi_line_comment,
    STATE(173), 1,
      aux_sym__binary_repeat1,
    ACTIONS(747), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(745), 32,
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
  [11111] = 3,
    STATE(172), 1,
      sym_multi_line_comment,
    ACTIONS(329), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(331), 30,
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
  [11156] = 5,
    ACTIONS(755), 1,
      anon_sym_CR,
    STATE(173), 1,
      sym_multi_line_comment,
    STATE(175), 1,
      aux_sym__binary_repeat1,
    ACTIONS(753), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(751), 32,
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
  [11205] = 3,
    STATE(174), 1,
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
  [11250] = 4,
    ACTIONS(762), 1,
      anon_sym_CR,
    STATE(175), 2,
      sym_multi_line_comment,
      aux_sym__binary_repeat1,
    ACTIONS(759), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(757), 32,
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
  [11297] = 3,
    STATE(176), 1,
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
  [11342] = 5,
    ACTIONS(755), 1,
      anon_sym_CR,
    STATE(177), 1,
      sym_multi_line_comment,
    STATE(178), 1,
      aux_sym__binary_repeat1,
    ACTIONS(764), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(751), 32,
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
  [11391] = 5,
    ACTIONS(768), 1,
      anon_sym_CR,
    STATE(175), 1,
      aux_sym__binary_repeat1,
    STATE(178), 1,
      sym_multi_line_comment,
    ACTIONS(753), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(766), 32,
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
  [11440] = 6,
    ACTIONS(772), 1,
      anon_sym_DOT,
    ACTIONS(774), 1,
      anon_sym_CR,
    STATE(179), 1,
      sym_multi_line_comment,
    STATE(223), 1,
      sym__exponent,
    ACTIONS(741), 2,
      anon_sym_e,
      anon_sym_E,
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
  [11491] = 3,
    STATE(180), 1,
      sym_multi_line_comment,
    ACTIONS(333), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(335), 30,
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
  [11536] = 3,
    STATE(181), 1,
      sym_multi_line_comment,
    ACTIONS(337), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(339), 30,
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
  [11581] = 3,
    STATE(182), 1,
      sym_multi_line_comment,
    ACTIONS(321), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(323), 30,
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
  [11626] = 5,
    ACTIONS(780), 1,
      anon_sym_CR,
    STATE(183), 1,
      sym_multi_line_comment,
    STATE(185), 1,
      aux_sym__octal_repeat1,
    ACTIONS(778), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(776), 32,
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
  [11674] = 5,
    ACTIONS(786), 1,
      anon_sym_CR,
    STATE(184), 1,
      sym_multi_line_comment,
    STATE(193), 1,
      aux_sym__octal_repeat1,
    ACTIONS(784), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(782), 32,
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
  [11722] = 5,
    ACTIONS(792), 1,
      anon_sym_CR,
    STATE(185), 1,
      sym_multi_line_comment,
    STATE(196), 1,
      aux_sym__octal_repeat1,
    ACTIONS(790), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(788), 32,
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
  [11770] = 5,
    ACTIONS(798), 1,
      anon_sym_CR,
    STATE(186), 1,
      sym_multi_line_comment,
    STATE(187), 1,
      aux_sym__hex_repeat1,
    ACTIONS(796), 2,
      sym__hex_digit,
      anon_sym__,
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
  [11818] = 5,
    ACTIONS(804), 1,
      anon_sym_CR,
    STATE(187), 1,
      sym_multi_line_comment,
    STATE(195), 1,
      aux_sym__hex_repeat1,
    ACTIONS(802), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(800), 32,
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
  [11866] = 4,
    ACTIONS(808), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_CR,
    STATE(188), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
    ACTIONS(806), 33,
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
  [11912] = 5,
    ACTIONS(815), 1,
      anon_sym_CR,
    STATE(189), 1,
      sym_multi_line_comment,
    STATE(211), 1,
      sym__exponent,
    ACTIONS(741), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(813), 32,
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
  [11960] = 5,
    ACTIONS(819), 1,
      anon_sym_CR,
    STATE(190), 1,
      sym_multi_line_comment,
    STATE(195), 1,
      aux_sym__hex_repeat1,
    ACTIONS(802), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(817), 32,
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
  [12008] = 5,
    ACTIONS(804), 1,
      anon_sym_CR,
    STATE(190), 1,
      aux_sym__hex_repeat1,
    STATE(191), 1,
      sym_multi_line_comment,
    ACTIONS(821), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(800), 32,
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
  [12056] = 5,
    ACTIONS(825), 1,
      anon_sym_CR,
    STATE(192), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__exponent,
    ACTIONS(741), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(823), 32,
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
  [12104] = 5,
    ACTIONS(780), 1,
      anon_sym_CR,
    STATE(193), 1,
      sym_multi_line_comment,
    STATE(196), 1,
      aux_sym__octal_repeat1,
    ACTIONS(790), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(776), 32,
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
  [12152] = 5,
    ACTIONS(829), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      anon_sym_CR,
    STATE(188), 1,
      aux_sym__raw_string_repeat1,
    STATE(194), 1,
      sym_multi_line_comment,
    ACTIONS(827), 33,
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
  [12200] = 4,
    ACTIONS(838), 1,
      anon_sym_CR,
    ACTIONS(835), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(195), 2,
      sym_multi_line_comment,
      aux_sym__hex_repeat1,
    ACTIONS(833), 32,
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
  [12246] = 4,
    ACTIONS(845), 1,
      anon_sym_CR,
    ACTIONS(842), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(196), 2,
      sym_multi_line_comment,
      aux_sym__octal_repeat1,
    ACTIONS(840), 32,
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
  [12292] = 8,
    ACTIONS(850), 1,
      anon_sym_BSLASH,
    ACTIONS(854), 1,
      anon_sym_CR,
    ACTIONS(861), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(197), 1,
      sym_multi_line_comment,
    STATE(51), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(847), 9,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_SLASH_SLASH,
    ACTIONS(857), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12345] = 4,
    ACTIONS(867), 1,
      sym__identifier_char,
    ACTIONS(870), 1,
      anon_sym_CR,
    STATE(198), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(865), 32,
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
  [12390] = 5,
    ACTIONS(874), 1,
      sym__identifier_char,
    ACTIONS(876), 1,
      anon_sym_CR,
    STATE(198), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(199), 1,
      sym_multi_line_comment,
    ACTIONS(872), 32,
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
  [12437] = 9,
    ACTIONS(878), 1,
      anon_sym_BSLASH,
    ACTIONS(884), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym__escline,
    STATE(249), 1,
      sym__node_space,
    STATE(200), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(139), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(217), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(141), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(881), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12492] = 5,
    ACTIONS(889), 1,
      sym__identifier_char,
    ACTIONS(891), 1,
      anon_sym_CR,
    STATE(199), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(201), 1,
      sym_multi_line_comment,
    ACTIONS(887), 32,
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
  [12539] = 3,
    ACTIONS(895), 1,
      anon_sym_CR,
    STATE(202), 1,
      sym_multi_line_comment,
    ACTIONS(893), 33,
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
  [12581] = 6,
    ACTIONS(900), 1,
      anon_sym_CR,
    ACTIONS(907), 1,
      anon_sym_SLASH_STAR,
    STATE(203), 1,
      sym_multi_line_comment,
    STATE(51), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(897), 10,
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
    ACTIONS(903), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12629] = 4,
    ACTIONS(913), 1,
      sym___identifier_char_no_digit,
    ACTIONS(915), 1,
      anon_sym_CR,
    STATE(204), 1,
      sym_multi_line_comment,
    ACTIONS(911), 32,
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
  [12673] = 4,
    ACTIONS(919), 1,
      anon_sym_EQ,
    ACTIONS(921), 1,
      anon_sym_CR,
    STATE(205), 1,
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
  [12717] = 6,
    ACTIONS(926), 1,
      anon_sym_CR,
    ACTIONS(933), 1,
      anon_sym_SLASH_STAR,
    STATE(206), 1,
      sym_multi_line_comment,
    STATE(203), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(923), 10,
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
    ACTIONS(929), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12765] = 3,
    ACTIONS(939), 1,
      anon_sym_CR,
    STATE(207), 1,
      sym_multi_line_comment,
    ACTIONS(937), 33,
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
  [12807] = 3,
    ACTIONS(943), 1,
      anon_sym_CR,
    STATE(208), 1,
      sym_multi_line_comment,
    ACTIONS(941), 33,
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
  [12849] = 3,
    ACTIONS(947), 1,
      anon_sym_CR,
    STATE(209), 1,
      sym_multi_line_comment,
    ACTIONS(945), 33,
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
  [12891] = 3,
    ACTIONS(951), 1,
      anon_sym_CR,
    STATE(210), 1,
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
  [12932] = 3,
    ACTIONS(955), 1,
      anon_sym_CR,
    STATE(211), 1,
      sym_multi_line_comment,
    ACTIONS(953), 32,
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
  [12973] = 3,
    ACTIONS(959), 1,
      anon_sym_CR,
    STATE(212), 1,
      sym_multi_line_comment,
    ACTIONS(957), 32,
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
  [13014] = 3,
    ACTIONS(963), 1,
      anon_sym_CR,
    STATE(213), 1,
      sym_multi_line_comment,
    ACTIONS(961), 32,
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
  [13055] = 3,
    ACTIONS(967), 1,
      anon_sym_CR,
    STATE(214), 1,
      sym_multi_line_comment,
    ACTIONS(965), 32,
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
  [13096] = 3,
    ACTIONS(971), 1,
      anon_sym_CR,
    STATE(215), 1,
      sym_multi_line_comment,
    ACTIONS(969), 32,
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
  [13137] = 3,
    ACTIONS(975), 1,
      anon_sym_CR,
    STATE(216), 1,
      sym_multi_line_comment,
    ACTIONS(973), 32,
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
  [13178] = 8,
    ACTIONS(977), 1,
      anon_sym_BSLASH,
    ACTIONS(983), 1,
      anon_sym_SLASH_STAR,
    STATE(217), 1,
      sym_multi_line_comment,
    STATE(236), 1,
      sym__escline,
    ACTIONS(224), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(122), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(226), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(980), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13229] = 8,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(986), 1,
      anon_sym_CR,
    STATE(218), 1,
      sym_multi_line_comment,
    STATE(248), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(122), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(988), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(990), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13280] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(992), 1,
      anon_sym_CR,
    ACTIONS(998), 1,
      anon_sym_SLASH_SLASH,
    STATE(219), 1,
      sym_multi_line_comment,
    STATE(59), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(230), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(994), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(996), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13331] = 3,
    ACTIONS(1002), 1,
      anon_sym_CR,
    STATE(220), 1,
      sym_multi_line_comment,
    ACTIONS(1000), 32,
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
  [13372] = 3,
    ACTIONS(1006), 1,
      anon_sym_CR,
    STATE(221), 1,
      sym_multi_line_comment,
    ACTIONS(1004), 32,
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
  [13413] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1008), 1,
      anon_sym_CR,
    ACTIONS(1014), 1,
      anon_sym_SLASH_SLASH,
    STATE(222), 1,
      sym_multi_line_comment,
    STATE(169), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(225), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(1010), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(1012), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13464] = 3,
    ACTIONS(743), 1,
      anon_sym_CR,
    STATE(223), 1,
      sym_multi_line_comment,
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
  [13505] = 3,
    ACTIONS(1016), 1,
      anon_sym_CR,
    STATE(224), 1,
      sym_multi_line_comment,
    ACTIONS(919), 32,
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
  [13546] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1014), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1018), 1,
      anon_sym_CR,
    STATE(225), 1,
      sym_multi_line_comment,
    STATE(182), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(122), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(1020), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(990), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13597] = 3,
    ACTIONS(1024), 1,
      anon_sym_CR,
    STATE(226), 1,
      sym_multi_line_comment,
    ACTIONS(1022), 32,
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
  [13638] = 3,
    ACTIONS(501), 1,
      anon_sym_CR,
    STATE(227), 1,
      sym_multi_line_comment,
    ACTIONS(496), 32,
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
  [13679] = 3,
    ACTIONS(1028), 1,
      anon_sym_CR,
    STATE(228), 1,
      sym_multi_line_comment,
    ACTIONS(1026), 32,
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
  [13720] = 3,
    ACTIONS(921), 1,
      anon_sym_CR,
    STATE(229), 1,
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
  [13761] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(998), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1030), 1,
      anon_sym_CR,
    STATE(230), 1,
      sym_multi_line_comment,
    STATE(58), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(122), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(1032), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(990), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13812] = 8,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1034), 1,
      anon_sym_CR,
    STATE(231), 1,
      sym_multi_line_comment,
    STATE(250), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(218), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(1036), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(1038), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13863] = 3,
    ACTIONS(1042), 1,
      anon_sym_CR,
    STATE(232), 1,
      sym_multi_line_comment,
    ACTIONS(1040), 32,
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
  [13904] = 6,
    ACTIONS(1047), 1,
      anon_sym_SLASH_STAR,
    STATE(233), 1,
      sym_multi_line_comment,
    ACTIONS(300), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(122), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(302), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(1044), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13950] = 6,
    ACTIONS(1053), 1,
      anon_sym_SLASH_STAR,
    STATE(234), 1,
      sym_multi_line_comment,
    ACTIONS(277), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(122), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(279), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(1050), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13996] = 6,
    ACTIONS(983), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym_multi_line_comment,
    ACTIONS(224), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(233), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(226), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(1056), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14042] = 6,
    ACTIONS(1047), 1,
      anon_sym_SLASH_STAR,
    STATE(236), 1,
      sym_multi_line_comment,
    ACTIONS(300), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(234), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(302), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(1059), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14088] = 3,
    ACTIONS(1064), 1,
      anon_sym_CR,
    STATE(237), 1,
      sym_multi_line_comment,
    ACTIONS(1062), 30,
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
  [14127] = 3,
    ACTIONS(1068), 1,
      anon_sym_CR,
    STATE(238), 1,
      sym_multi_line_comment,
    ACTIONS(1066), 30,
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
  [14166] = 3,
    ACTIONS(1072), 1,
      anon_sym_CR,
    STATE(239), 1,
      sym_multi_line_comment,
    ACTIONS(1070), 30,
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
  [14205] = 3,
    ACTIONS(1076), 1,
      anon_sym_CR,
    STATE(240), 1,
      sym_multi_line_comment,
    ACTIONS(1074), 30,
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
  [14244] = 3,
    ACTIONS(1080), 1,
      anon_sym_CR,
    STATE(241), 1,
      sym_multi_line_comment,
    ACTIONS(1078), 30,
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
  [14283] = 3,
    ACTIONS(1084), 1,
      anon_sym_CR,
    STATE(242), 1,
      sym_multi_line_comment,
    ACTIONS(1082), 30,
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
  [14322] = 3,
    ACTIONS(1088), 1,
      anon_sym_CR,
    STATE(243), 1,
      sym_multi_line_comment,
    ACTIONS(1086), 30,
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
  [14361] = 3,
    ACTIONS(1092), 1,
      anon_sym_CR,
    STATE(244), 1,
      sym_multi_line_comment,
    ACTIONS(1090), 30,
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
  [14400] = 3,
    ACTIONS(1096), 1,
      anon_sym_CR,
    STATE(245), 1,
      sym_multi_line_comment,
    ACTIONS(1094), 30,
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
  [14439] = 3,
    ACTIONS(1100), 1,
      anon_sym_CR,
    STATE(246), 1,
      sym_multi_line_comment,
    ACTIONS(1098), 30,
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
  [14478] = 3,
    ACTIONS(1104), 1,
      anon_sym_CR,
    STATE(247), 1,
      sym_multi_line_comment,
    ACTIONS(1102), 30,
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
  [14517] = 3,
    STATE(248), 1,
      sym_multi_line_comment,
    ACTIONS(321), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(323), 26,
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
  [14554] = 3,
    STATE(249), 1,
      sym_multi_line_comment,
    ACTIONS(337), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(339), 26,
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
  [14591] = 3,
    STATE(250), 1,
      sym_multi_line_comment,
    ACTIONS(325), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(327), 26,
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
  [14628] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
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
    ACTIONS(1106), 1,
      anon_sym_null,
    ACTIONS(1108), 1,
      aux_sym__raw_string_token1,
    STATE(179), 1,
      sym__integer,
    STATE(213), 1,
      sym_value,
    STATE(220), 1,
      sym_boolean,
    STATE(251), 1,
      sym_multi_line_comment,
    STATE(254), 1,
      sym_type,
    STATE(270), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1110), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(229), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(232), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [14700] = 9,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    STATE(200), 1,
      aux_sym_node_repeat1,
    STATE(235), 1,
      sym__escline,
    STATE(249), 1,
      sym__node_space,
    STATE(252), 1,
      sym_multi_line_comment,
    STATE(217), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(390), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14748] = 9,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    STATE(235), 1,
      sym__escline,
    STATE(249), 1,
      sym__node_space,
    STATE(252), 1,
      aux_sym_node_repeat1,
    STATE(253), 1,
      sym_multi_line_comment,
    STATE(217), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(390), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14796] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(49), 1,
      anon_sym_0x,
    ACTIONS(51), 1,
      anon_sym_0o,
    ACTIONS(53), 1,
      anon_sym_0b,
    ACTIONS(1106), 1,
      anon_sym_null,
    ACTIONS(1108), 1,
      aux_sym__raw_string_token1,
    STATE(179), 1,
      sym__integer,
    STATE(220), 1,
      sym_boolean,
    STATE(254), 1,
      sym_multi_line_comment,
    STATE(270), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1110), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(232), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [14859] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    STATE(67), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(255), 1,
      sym_multi_line_comment,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
  [14898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1114), 1,
      sym__digit,
    STATE(256), 1,
      sym_multi_line_comment,
    ACTIONS(1112), 11,
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
  [14921] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    STATE(65), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(257), 1,
      sym_multi_line_comment,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
  [14960] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    STATE(66), 1,
      sym_identifier,
    STATE(204), 1,
      sym__sign,
    STATE(258), 1,
      sym_multi_line_comment,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(224), 2,
      sym__bare_identifier,
      sym_string,
  [14999] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1116), 1,
      anon_sym_CR,
    ACTIONS(1120), 1,
      aux_sym_single_line_comment_token1,
    STATE(176), 1,
      sym__newline,
    STATE(259), 1,
      sym_multi_line_comment,
    STATE(262), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1118), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15027] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1122), 1,
      anon_sym_CR,
    STATE(57), 1,
      sym__newline,
    STATE(260), 1,
      sym_multi_line_comment,
    STATE(262), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1124), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15055] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1126), 1,
      anon_sym_CR,
    STATE(88), 1,
      sym__newline,
    STATE(261), 1,
      sym_multi_line_comment,
    STATE(262), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1128), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1130), 1,
      anon_sym_CR,
    ACTIONS(1134), 1,
      aux_sym_single_line_comment_token1,
    STATE(262), 2,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1132), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15106] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(263), 1,
      sym_multi_line_comment,
    ACTIONS(1137), 2,
      anon_sym_CR,
      aux_sym_single_line_comment_token1,
    ACTIONS(1139), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15126] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1143), 1,
      sym__digit,
    STATE(264), 1,
      sym_multi_line_comment,
    ACTIONS(1141), 6,
      sym___identifier_char_no_digit,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [15144] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(911), 1,
      anon_sym_EQ,
    ACTIONS(1145), 1,
      sym___identifier_char_no_digit,
    ACTIONS(1147), 1,
      anon_sym_0x,
    ACTIONS(1149), 1,
      anon_sym_0o,
    ACTIONS(1151), 1,
      anon_sym_0b,
    STATE(170), 1,
      sym__integer,
    STATE(265), 1,
      sym_multi_line_comment,
  [15172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(266), 1,
      sym_multi_line_comment,
    ACTIONS(1112), 3,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(1114), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
  [15189] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1155), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1159), 1,
      aux_sym_commented_block_token1,
    STATE(87), 1,
      sym_commented_block,
    STATE(267), 1,
      sym_multi_line_comment,
    ACTIONS(1157), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15209] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1165), 1,
      aux_sym_commented_block_token1,
    STATE(172), 1,
      sym_commented_block,
    STATE(268), 1,
      sym_multi_line_comment,
    ACTIONS(1163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15229] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1167), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1171), 1,
      aux_sym_commented_block_token1,
    STATE(61), 1,
      sym_commented_block,
    STATE(269), 1,
      sym_multi_line_comment,
    ACTIONS(1169), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15249] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(1147), 1,
      anon_sym_0x,
    ACTIONS(1149), 1,
      anon_sym_0o,
    ACTIONS(1151), 1,
      anon_sym_0b,
    STATE(170), 1,
      sym__integer,
    STATE(270), 1,
      sym_multi_line_comment,
  [15271] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1155), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1159), 1,
      aux_sym_commented_block_token1,
    STATE(84), 1,
      sym_commented_block,
    STATE(271), 1,
      sym_multi_line_comment,
    ACTIONS(1157), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15291] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1173), 1,
      sym__digit,
    STATE(215), 1,
      sym__integer,
    STATE(272), 1,
      sym_multi_line_comment,
    STATE(306), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [15311] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1165), 1,
      aux_sym_commented_block_token1,
    STATE(180), 1,
      sym_commented_block,
    STATE(273), 1,
      sym_multi_line_comment,
    ACTIONS(1163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15331] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1175), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1179), 1,
      aux_sym_commented_block_token1,
    STATE(274), 1,
      sym_multi_line_comment,
    STATE(331), 1,
      sym_commented_block,
    ACTIONS(1177), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15351] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1181), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1185), 1,
      aux_sym_commented_block_token1,
    STATE(275), 1,
      sym_multi_line_comment,
    STATE(280), 1,
      sym_commented_block,
    ACTIONS(1183), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15371] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1181), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1185), 1,
      aux_sym_commented_block_token1,
    STATE(276), 1,
      sym_multi_line_comment,
    STATE(289), 1,
      sym_commented_block,
    ACTIONS(1183), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15391] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1167), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1171), 1,
      aux_sym_commented_block_token1,
    STATE(60), 1,
      sym_commented_block,
    STATE(277), 1,
      sym_multi_line_comment,
    ACTIONS(1169), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15411] = 6,
    ACTIONS(1153), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1175), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1179), 1,
      aux_sym_commented_block_token1,
    STATE(278), 1,
      sym_multi_line_comment,
    STATE(332), 1,
      sym_commented_block,
    ACTIONS(1177), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15431] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1187), 1,
      anon_sym_DQUOTE,
    ACTIONS(1189), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1192), 1,
      aux_sym__escape_token1,
    STATE(279), 2,
      sym_multi_line_comment,
      aux_sym__escaped_string_repeat1,
  [15448] = 3,
    STATE(280), 1,
      sym_multi_line_comment,
    ACTIONS(329), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(331), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [15461] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1195), 1,
      anon_sym_DQUOTE,
    ACTIONS(1197), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1199), 1,
      aux_sym__escape_token1,
    STATE(281), 1,
      sym_multi_line_comment,
    STATE(287), 1,
      aux_sym__escaped_string_repeat1,
  [15480] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1199), 1,
      aux_sym__escape_token1,
    ACTIONS(1201), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      aux_sym__escaped_string_repeat1,
    STATE(282), 1,
      sym_multi_line_comment,
  [15499] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1199), 1,
      aux_sym__escape_token1,
    ACTIONS(1203), 1,
      anon_sym_DQUOTE,
    STATE(282), 1,
      aux_sym__escaped_string_repeat1,
    STATE(283), 1,
      sym_multi_line_comment,
  [15518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1205), 1,
      sym__identifier_char,
    STATE(284), 1,
      sym_multi_line_comment,
    STATE(286), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(872), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1205), 1,
      sym__identifier_char,
    STATE(284), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(285), 1,
      sym_multi_line_comment,
    ACTIONS(887), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1207), 1,
      sym__identifier_char,
    ACTIONS(865), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(286), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
  [15567] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1199), 1,
      aux_sym__escape_token1,
    ACTIONS(1210), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      aux_sym__escaped_string_repeat1,
    STATE(287), 1,
      sym_multi_line_comment,
  [15586] = 3,
    STATE(288), 1,
      sym_multi_line_comment,
    ACTIONS(313), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(315), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [15599] = 3,
    STATE(289), 1,
      sym_multi_line_comment,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [15612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1214), 1,
      aux_sym__escaped_string_token1,
    STATE(290), 1,
      sym_multi_line_comment,
    ACTIONS(1212), 2,
      anon_sym_DQUOTE,
      aux_sym__escape_token1,
  [15626] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(291), 1,
      sym_multi_line_comment,
    ACTIONS(1216), 3,
      sym__identifier_char,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15638] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    ACTIONS(1218), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_multi_line_comment,
    STATE(293), 1,
      aux_sym__raw_string_repeat1,
  [15654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    ACTIONS(1220), 1,
      anon_sym_POUND,
    STATE(293), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
  [15668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    ACTIONS(1145), 1,
      sym___identifier_char_no_digit,
    STATE(294), 1,
      sym_multi_line_comment,
  [15681] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(295), 1,
      sym_multi_line_comment,
    ACTIONS(1223), 2,
      anon_sym_0,
      anon_sym_1,
  [15692] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(296), 1,
      sym_multi_line_comment,
    ACTIONS(1225), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [15703] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_multi_line_comment,
    ACTIONS(911), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1173), 1,
      sym__digit,
    STATE(189), 1,
      sym__integer,
    STATE(298), 1,
      sym_multi_line_comment,
  [15727] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(299), 1,
      sym_multi_line_comment,
    ACTIONS(1227), 2,
      anon_sym_0,
      anon_sym_1,
  [15738] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(300), 1,
      sym_multi_line_comment,
    ACTIONS(919), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15749] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_single_line_comment_token1,
    STATE(259), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(301), 1,
      sym_multi_line_comment,
  [15762] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1218), 1,
      anon_sym_POUND,
    STATE(292), 1,
      aux_sym__raw_string_repeat1,
    STATE(302), 1,
      sym_multi_line_comment,
  [15775] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1173), 1,
      sym__digit,
    STATE(192), 1,
      sym__integer,
    STATE(303), 1,
      sym_multi_line_comment,
  [15788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_single_line_comment_token1,
    STATE(260), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(304), 1,
      sym_multi_line_comment,
  [15801] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1229), 1,
      anon_sym_POUND,
    STATE(194), 1,
      aux_sym__raw_string_repeat1,
    STATE(305), 1,
      sym_multi_line_comment,
  [15814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1173), 1,
      sym__digit,
    STATE(210), 1,
      sym__integer,
    STATE(306), 1,
      sym_multi_line_comment,
  [15827] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1120), 1,
      aux_sym_single_line_comment_token1,
    STATE(261), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(307), 1,
      sym_multi_line_comment,
  [15840] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
    STATE(308), 1,
      sym_multi_line_comment,
  [15850] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_multi_line_comment,
  [15860] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      aux_sym__octal_token1,
    STATE(310), 1,
      sym_multi_line_comment,
  [15870] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1237), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      sym_multi_line_comment,
  [15880] = 3,
    ACTIONS(1239), 1,
      aux_sym__raw_string_token2,
    ACTIONS(1241), 1,
      anon_sym_SLASH_STAR,
    STATE(312), 1,
      sym_multi_line_comment,
  [15890] = 3,
    ACTIONS(1241), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1243), 1,
      aux_sym__raw_string_token2,
    STATE(313), 1,
      sym_multi_line_comment,
  [15900] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1245), 1,
      sym__hex_digit,
    STATE(314), 1,
      sym_multi_line_comment,
  [15910] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      sym_multi_line_comment,
  [15920] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      sym_multi_line_comment,
  [15930] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1251), 1,
      anon_sym_DQUOTE,
    STATE(317), 1,
      sym_multi_line_comment,
  [15940] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      sym_multi_line_comment,
  [15950] = 3,
    ACTIONS(1241), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1255), 1,
      aux_sym__raw_string_token2,
    STATE(319), 1,
      sym_multi_line_comment,
  [15960] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_multi_line_comment,
  [15970] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1257), 1,
      anon_sym_EQ,
    STATE(321), 1,
      sym_multi_line_comment,
  [15980] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      sym_multi_line_comment,
  [15990] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      sym_multi_line_comment,
  [16000] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1261), 1,
      ts_builtin_sym_end,
    STATE(324), 1,
      sym_multi_line_comment,
  [16010] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      sym_multi_line_comment,
  [16020] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1263), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      sym_multi_line_comment,
  [16030] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1265), 1,
      sym__hex_digit,
    STATE(327), 1,
      sym_multi_line_comment,
  [16040] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1267), 1,
      aux_sym__octal_token1,
    STATE(328), 1,
      sym_multi_line_comment,
  [16050] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym_multi_line_comment,
  [16060] = 3,
    ACTIONS(1241), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1269), 1,
      aux_sym__raw_string_token2,
    STATE(330), 1,
      sym_multi_line_comment,
  [16070] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [16074] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [16078] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 630,
  [SMALL_STATE(15)] = 725,
  [SMALL_STATE(16)] = 798,
  [SMALL_STATE(17)] = 894,
  [SMALL_STATE(18)] = 990,
  [SMALL_STATE(19)] = 1086,
  [SMALL_STATE(20)] = 1182,
  [SMALL_STATE(21)] = 1278,
  [SMALL_STATE(22)] = 1374,
  [SMALL_STATE(23)] = 1470,
  [SMALL_STATE(24)] = 1566,
  [SMALL_STATE(25)] = 1662,
  [SMALL_STATE(26)] = 1758,
  [SMALL_STATE(27)] = 1854,
  [SMALL_STATE(28)] = 1950,
  [SMALL_STATE(29)] = 2046,
  [SMALL_STATE(30)] = 2142,
  [SMALL_STATE(31)] = 2237,
  [SMALL_STATE(32)] = 2332,
  [SMALL_STATE(33)] = 2401,
  [SMALL_STATE(34)] = 2482,
  [SMALL_STATE(35)] = 2577,
  [SMALL_STATE(36)] = 2672,
  [SMALL_STATE(37)] = 2767,
  [SMALL_STATE(38)] = 2862,
  [SMALL_STATE(39)] = 2957,
  [SMALL_STATE(40)] = 3052,
  [SMALL_STATE(41)] = 3147,
  [SMALL_STATE(42)] = 3242,
  [SMALL_STATE(43)] = 3337,
  [SMALL_STATE(44)] = 3432,
  [SMALL_STATE(45)] = 3513,
  [SMALL_STATE(46)] = 3608,
  [SMALL_STATE(47)] = 3703,
  [SMALL_STATE(48)] = 3798,
  [SMALL_STATE(49)] = 3893,
  [SMALL_STATE(50)] = 3988,
  [SMALL_STATE(51)] = 4052,
  [SMALL_STATE(52)] = 4114,
  [SMALL_STATE(53)] = 4178,
  [SMALL_STATE(54)] = 4270,
  [SMALL_STATE(55)] = 4334,
  [SMALL_STATE(56)] = 4398,
  [SMALL_STATE(57)] = 4453,
  [SMALL_STATE(58)] = 4508,
  [SMALL_STATE(59)] = 4563,
  [SMALL_STATE(60)] = 4618,
  [SMALL_STATE(61)] = 4673,
  [SMALL_STATE(62)] = 4728,
  [SMALL_STATE(63)] = 4783,
  [SMALL_STATE(64)] = 4861,
  [SMALL_STATE(65)] = 4939,
  [SMALL_STATE(66)] = 5017,
  [SMALL_STATE(67)] = 5095,
  [SMALL_STATE(68)] = 5173,
  [SMALL_STATE(69)] = 5251,
  [SMALL_STATE(70)] = 5329,
  [SMALL_STATE(71)] = 5407,
  [SMALL_STATE(72)] = 5485,
  [SMALL_STATE(73)] = 5545,
  [SMALL_STATE(74)] = 5623,
  [SMALL_STATE(75)] = 5686,
  [SMALL_STATE(76)] = 5749,
  [SMALL_STATE(77)] = 5812,
  [SMALL_STATE(78)] = 5875,
  [SMALL_STATE(79)] = 5938,
  [SMALL_STATE(80)] = 6021,
  [SMALL_STATE(81)] = 6080,
  [SMALL_STATE(82)] = 6163,
  [SMALL_STATE(83)] = 6229,
  [SMALL_STATE(84)] = 6295,
  [SMALL_STATE(85)] = 6343,
  [SMALL_STATE(86)] = 6409,
  [SMALL_STATE(87)] = 6475,
  [SMALL_STATE(88)] = 6523,
  [SMALL_STATE(89)] = 6571,
  [SMALL_STATE(90)] = 6637,
  [SMALL_STATE(91)] = 6703,
  [SMALL_STATE(92)] = 6751,
  [SMALL_STATE(93)] = 6817,
  [SMALL_STATE(94)] = 6883,
  [SMALL_STATE(95)] = 6949,
  [SMALL_STATE(96)] = 7015,
  [SMALL_STATE(97)] = 7081,
  [SMALL_STATE(98)] = 7147,
  [SMALL_STATE(99)] = 7201,
  [SMALL_STATE(100)] = 7267,
  [SMALL_STATE(101)] = 7333,
  [SMALL_STATE(102)] = 7387,
  [SMALL_STATE(103)] = 7453,
  [SMALL_STATE(104)] = 7505,
  [SMALL_STATE(105)] = 7571,
  [SMALL_STATE(106)] = 7637,
  [SMALL_STATE(107)] = 7703,
  [SMALL_STATE(108)] = 7769,
  [SMALL_STATE(109)] = 7835,
  [SMALL_STATE(110)] = 7889,
  [SMALL_STATE(111)] = 7951,
  [SMALL_STATE(112)] = 8017,
  [SMALL_STATE(113)] = 8083,
  [SMALL_STATE(114)] = 8149,
  [SMALL_STATE(115)] = 8215,
  [SMALL_STATE(116)] = 8281,
  [SMALL_STATE(117)] = 8347,
  [SMALL_STATE(118)] = 8413,
  [SMALL_STATE(119)] = 8479,
  [SMALL_STATE(120)] = 8545,
  [SMALL_STATE(121)] = 8611,
  [SMALL_STATE(122)] = 8665,
  [SMALL_STATE(123)] = 8717,
  [SMALL_STATE(124)] = 8783,
  [SMALL_STATE(125)] = 8849,
  [SMALL_STATE(126)] = 8915,
  [SMALL_STATE(127)] = 8981,
  [SMALL_STATE(128)] = 9047,
  [SMALL_STATE(129)] = 9113,
  [SMALL_STATE(130)] = 9164,
  [SMALL_STATE(131)] = 9213,
  [SMALL_STATE(132)] = 9264,
  [SMALL_STATE(133)] = 9310,
  [SMALL_STATE(134)] = 9356,
  [SMALL_STATE(135)] = 9402,
  [SMALL_STATE(136)] = 9448,
  [SMALL_STATE(137)] = 9494,
  [SMALL_STATE(138)] = 9540,
  [SMALL_STATE(139)] = 9586,
  [SMALL_STATE(140)] = 9632,
  [SMALL_STATE(141)] = 9678,
  [SMALL_STATE(142)] = 9724,
  [SMALL_STATE(143)] = 9770,
  [SMALL_STATE(144)] = 9816,
  [SMALL_STATE(145)] = 9862,
  [SMALL_STATE(146)] = 9908,
  [SMALL_STATE(147)] = 9954,
  [SMALL_STATE(148)] = 10000,
  [SMALL_STATE(149)] = 10046,
  [SMALL_STATE(150)] = 10092,
  [SMALL_STATE(151)] = 10138,
  [SMALL_STATE(152)] = 10184,
  [SMALL_STATE(153)] = 10230,
  [SMALL_STATE(154)] = 10276,
  [SMALL_STATE(155)] = 10322,
  [SMALL_STATE(156)] = 10368,
  [SMALL_STATE(157)] = 10414,
  [SMALL_STATE(158)] = 10460,
  [SMALL_STATE(159)] = 10506,
  [SMALL_STATE(160)] = 10552,
  [SMALL_STATE(161)] = 10598,
  [SMALL_STATE(162)] = 10644,
  [SMALL_STATE(163)] = 10690,
  [SMALL_STATE(164)] = 10736,
  [SMALL_STATE(165)] = 10782,
  [SMALL_STATE(166)] = 10828,
  [SMALL_STATE(167)] = 10874,
  [SMALL_STATE(168)] = 10920,
  [SMALL_STATE(169)] = 10966,
  [SMALL_STATE(170)] = 11011,
  [SMALL_STATE(171)] = 11062,
  [SMALL_STATE(172)] = 11111,
  [SMALL_STATE(173)] = 11156,
  [SMALL_STATE(174)] = 11205,
  [SMALL_STATE(175)] = 11250,
  [SMALL_STATE(176)] = 11297,
  [SMALL_STATE(177)] = 11342,
  [SMALL_STATE(178)] = 11391,
  [SMALL_STATE(179)] = 11440,
  [SMALL_STATE(180)] = 11491,
  [SMALL_STATE(181)] = 11536,
  [SMALL_STATE(182)] = 11581,
  [SMALL_STATE(183)] = 11626,
  [SMALL_STATE(184)] = 11674,
  [SMALL_STATE(185)] = 11722,
  [SMALL_STATE(186)] = 11770,
  [SMALL_STATE(187)] = 11818,
  [SMALL_STATE(188)] = 11866,
  [SMALL_STATE(189)] = 11912,
  [SMALL_STATE(190)] = 11960,
  [SMALL_STATE(191)] = 12008,
  [SMALL_STATE(192)] = 12056,
  [SMALL_STATE(193)] = 12104,
  [SMALL_STATE(194)] = 12152,
  [SMALL_STATE(195)] = 12200,
  [SMALL_STATE(196)] = 12246,
  [SMALL_STATE(197)] = 12292,
  [SMALL_STATE(198)] = 12345,
  [SMALL_STATE(199)] = 12390,
  [SMALL_STATE(200)] = 12437,
  [SMALL_STATE(201)] = 12492,
  [SMALL_STATE(202)] = 12539,
  [SMALL_STATE(203)] = 12581,
  [SMALL_STATE(204)] = 12629,
  [SMALL_STATE(205)] = 12673,
  [SMALL_STATE(206)] = 12717,
  [SMALL_STATE(207)] = 12765,
  [SMALL_STATE(208)] = 12807,
  [SMALL_STATE(209)] = 12849,
  [SMALL_STATE(210)] = 12891,
  [SMALL_STATE(211)] = 12932,
  [SMALL_STATE(212)] = 12973,
  [SMALL_STATE(213)] = 13014,
  [SMALL_STATE(214)] = 13055,
  [SMALL_STATE(215)] = 13096,
  [SMALL_STATE(216)] = 13137,
  [SMALL_STATE(217)] = 13178,
  [SMALL_STATE(218)] = 13229,
  [SMALL_STATE(219)] = 13280,
  [SMALL_STATE(220)] = 13331,
  [SMALL_STATE(221)] = 13372,
  [SMALL_STATE(222)] = 13413,
  [SMALL_STATE(223)] = 13464,
  [SMALL_STATE(224)] = 13505,
  [SMALL_STATE(225)] = 13546,
  [SMALL_STATE(226)] = 13597,
  [SMALL_STATE(227)] = 13638,
  [SMALL_STATE(228)] = 13679,
  [SMALL_STATE(229)] = 13720,
  [SMALL_STATE(230)] = 13761,
  [SMALL_STATE(231)] = 13812,
  [SMALL_STATE(232)] = 13863,
  [SMALL_STATE(233)] = 13904,
  [SMALL_STATE(234)] = 13950,
  [SMALL_STATE(235)] = 13996,
  [SMALL_STATE(236)] = 14042,
  [SMALL_STATE(237)] = 14088,
  [SMALL_STATE(238)] = 14127,
  [SMALL_STATE(239)] = 14166,
  [SMALL_STATE(240)] = 14205,
  [SMALL_STATE(241)] = 14244,
  [SMALL_STATE(242)] = 14283,
  [SMALL_STATE(243)] = 14322,
  [SMALL_STATE(244)] = 14361,
  [SMALL_STATE(245)] = 14400,
  [SMALL_STATE(246)] = 14439,
  [SMALL_STATE(247)] = 14478,
  [SMALL_STATE(248)] = 14517,
  [SMALL_STATE(249)] = 14554,
  [SMALL_STATE(250)] = 14591,
  [SMALL_STATE(251)] = 14628,
  [SMALL_STATE(252)] = 14700,
  [SMALL_STATE(253)] = 14748,
  [SMALL_STATE(254)] = 14796,
  [SMALL_STATE(255)] = 14859,
  [SMALL_STATE(256)] = 14898,
  [SMALL_STATE(257)] = 14921,
  [SMALL_STATE(258)] = 14960,
  [SMALL_STATE(259)] = 14999,
  [SMALL_STATE(260)] = 15027,
  [SMALL_STATE(261)] = 15055,
  [SMALL_STATE(262)] = 15083,
  [SMALL_STATE(263)] = 15106,
  [SMALL_STATE(264)] = 15126,
  [SMALL_STATE(265)] = 15144,
  [SMALL_STATE(266)] = 15172,
  [SMALL_STATE(267)] = 15189,
  [SMALL_STATE(268)] = 15209,
  [SMALL_STATE(269)] = 15229,
  [SMALL_STATE(270)] = 15249,
  [SMALL_STATE(271)] = 15271,
  [SMALL_STATE(272)] = 15291,
  [SMALL_STATE(273)] = 15311,
  [SMALL_STATE(274)] = 15331,
  [SMALL_STATE(275)] = 15351,
  [SMALL_STATE(276)] = 15371,
  [SMALL_STATE(277)] = 15391,
  [SMALL_STATE(278)] = 15411,
  [SMALL_STATE(279)] = 15431,
  [SMALL_STATE(280)] = 15448,
  [SMALL_STATE(281)] = 15461,
  [SMALL_STATE(282)] = 15480,
  [SMALL_STATE(283)] = 15499,
  [SMALL_STATE(284)] = 15518,
  [SMALL_STATE(285)] = 15535,
  [SMALL_STATE(286)] = 15552,
  [SMALL_STATE(287)] = 15567,
  [SMALL_STATE(288)] = 15586,
  [SMALL_STATE(289)] = 15599,
  [SMALL_STATE(290)] = 15612,
  [SMALL_STATE(291)] = 15626,
  [SMALL_STATE(292)] = 15638,
  [SMALL_STATE(293)] = 15654,
  [SMALL_STATE(294)] = 15668,
  [SMALL_STATE(295)] = 15681,
  [SMALL_STATE(296)] = 15692,
  [SMALL_STATE(297)] = 15703,
  [SMALL_STATE(298)] = 15714,
  [SMALL_STATE(299)] = 15727,
  [SMALL_STATE(300)] = 15738,
  [SMALL_STATE(301)] = 15749,
  [SMALL_STATE(302)] = 15762,
  [SMALL_STATE(303)] = 15775,
  [SMALL_STATE(304)] = 15788,
  [SMALL_STATE(305)] = 15801,
  [SMALL_STATE(306)] = 15814,
  [SMALL_STATE(307)] = 15827,
  [SMALL_STATE(308)] = 15840,
  [SMALL_STATE(309)] = 15850,
  [SMALL_STATE(310)] = 15860,
  [SMALL_STATE(311)] = 15870,
  [SMALL_STATE(312)] = 15880,
  [SMALL_STATE(313)] = 15890,
  [SMALL_STATE(314)] = 15900,
  [SMALL_STATE(315)] = 15910,
  [SMALL_STATE(316)] = 15920,
  [SMALL_STATE(317)] = 15930,
  [SMALL_STATE(318)] = 15940,
  [SMALL_STATE(319)] = 15950,
  [SMALL_STATE(320)] = 15960,
  [SMALL_STATE(321)] = 15970,
  [SMALL_STATE(322)] = 15980,
  [SMALL_STATE(323)] = 15990,
  [SMALL_STATE(324)] = 16000,
  [SMALL_STATE(325)] = 16010,
  [SMALL_STATE(326)] = 16020,
  [SMALL_STATE(327)] = 16030,
  [SMALL_STATE(328)] = 16040,
  [SMALL_STATE(329)] = 16050,
  [SMALL_STATE(330)] = 16060,
  [SMALL_STATE(331)] = 16070,
  [SMALL_STATE(332)] = 16074,
  [SMALL_STATE(333)] = 16078,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(224),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(81),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(33),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(281),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(308),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(312),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(204),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(204),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(53),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(53),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(307),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(267),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(219),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(32),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(277),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(219),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(51),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(277),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(51),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(277),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(51),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(277),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(55),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(50),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(277),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(51),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(307),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(267),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(237),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(243),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(241),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(222),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(80),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(268),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(222),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(103),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(268),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(103),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(268),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(121),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(103),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(268),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(98),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(268),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(222),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(80),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(268),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(103),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(122),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(267),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(130),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 13),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 13),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 14),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 15),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 15),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 7),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 10),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 13),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 13),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 6),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 13),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 13),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 10),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 10),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 10),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 10),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 15),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 6),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 6),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 6),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 6),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 14),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(175),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__binary_repeat1, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(188),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 12),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 12),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 9),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3, .production_id = 9),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 5),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string, 5),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(195),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hex_repeat1, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(196),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octal_repeat1, 2),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [850] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(219),
  [854] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [857] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(51),
  [861] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(277),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(198),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 3),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(231),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(217),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(267),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string, 3),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [900] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [903] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(51),
  [907] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(277),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [929] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(203),
  [933] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(277),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 12),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 5, .production_id = 12),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 9),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 9),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 3, .production_id = 8),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 3, .production_id = 8),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(231),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(122),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(267),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_prop_or_arg, 2, .production_id = 5),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_prop_or_arg, 2, .production_id = 5),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(122),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(267),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(122),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(267),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(233),
  [1059] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(234),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 4),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3, .production_id = 4),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 4),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5, .production_id = 4),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 4),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6, .production_id = 4),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 4),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 7, .production_id = 4),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 4),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 8, .production_id = 4),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 4),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4, .production_id = 4),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(263),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sign, 1),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sign, 1),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(290),
  [1192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(290),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(291),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 1),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(296),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 1),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
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
