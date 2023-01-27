#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 156
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
  sym_node_field = 110,
  sym__node_field_comment = 111,
  sym__node_field = 112,
  sym_node_children = 113,
  sym__node_space = 114,
  sym__node_terminator = 115,
  sym_identifier = 116,
  sym__bare_identifier = 117,
  sym_keyword = 118,
  sym_annotation_type = 119,
  sym_prop = 120,
  sym_value = 121,
  sym_type = 122,
  sym_string = 123,
  sym__escaped_string = 124,
  sym__raw_string = 125,
  sym_number = 126,
  sym__decimal = 127,
  sym__exponent = 128,
  sym__integer = 129,
  sym__sign = 130,
  sym__hex = 131,
  sym__octal = 132,
  sym__binary = 133,
  sym_boolean = 134,
  sym__escline = 135,
  sym__linespace = 136,
  sym__newline = 137,
  sym__ws = 138,
  sym__unicode_space = 139,
  sym_single_line_comment = 140,
  sym_multi_line_comment = 141,
  sym_commented_block = 142,
  aux_sym_document_repeat1 = 143,
  aux_sym_document_repeat2 = 144,
  aux_sym_node_repeat1 = 145,
  aux_sym_node_repeat2 = 146,
  aux_sym_node_repeat3 = 147,
  aux_sym__bare_identifier_repeat1 = 148,
  aux_sym__escaped_string_repeat1 = 149,
  aux_sym__raw_string_repeat1 = 150,
  aux_sym__integer_repeat1 = 151,
  aux_sym__hex_repeat1 = 152,
  aux_sym__octal_repeat1 = 153,
  aux_sym__binary_repeat1 = 154,
  aux_sym_single_line_comment_repeat1 = 155,
  alias_sym_decimal = 156,
  alias_sym_node_children_comment = 157,
  alias_sym_node_field_comment = 158,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__normal_bare_identifier] = "_normal_bare_identifier",
  [anon_sym_SLASH_DASH] = "node_comment",
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
  [sym_node_field] = "node_field",
  [sym__node_field_comment] = "_node_field_comment",
  [sym__node_field] = "_node_field",
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
  [alias_sym_node_children_comment] = "node_children_comment",
  [alias_sym_node_field_comment] = "node_field_comment",
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
  [sym_node_field] = sym_node_field,
  [sym__node_field_comment] = sym__node_field_comment,
  [sym__node_field] = sym__node_field,
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
  [alias_sym_node_children_comment] = alias_sym_node_children_comment,
  [alias_sym_node_field_comment] = alias_sym_node_field_comment,
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
  [sym_node_field] = {
    .visible = true,
    .named = true,
  },
  [sym__node_field_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__node_field] = {
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
  [alias_sym_node_children_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_node_field_comment] = {
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
    [0] = alias_sym_node_children_comment,
  },
  [5] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
  },
  [7] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [8] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
    [2] = alias_sym_node_field_comment,
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
  sym__node_field, 2,
    sym__node_field,
    alias_sym_node_field_comment,
  sym__integer, 2,
    sym__integer,
    alias_sym_decimal,
  aux_sym_node_repeat1, 3,
    aux_sym_node_repeat1,
    alias_sym_node_field_comment,
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
  [41] = 34,
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
  [74] = 15,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 45,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 58,
  [87] = 60,
  [88] = 88,
  [89] = 89,
  [90] = 61,
  [91] = 57,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 53,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 55,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 51,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 55,
  [121] = 121,
  [122] = 50,
  [123] = 123,
  [124] = 52,
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
  [169] = 58,
  [170] = 170,
  [171] = 61,
  [172] = 172,
  [173] = 173,
  [174] = 56,
  [175] = 175,
  [176] = 176,
  [177] = 62,
  [178] = 59,
  [179] = 60,
  [180] = 180,
  [181] = 57,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 15,
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
  [213] = 45,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 212,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 216,
  [225] = 225,
  [226] = 226,
  [227] = 212,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 216,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 53,
  [236] = 52,
  [237] = 50,
  [238] = 51,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 59,
  [251] = 62,
  [252] = 56,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 261,
  [263] = 261,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 257,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 271,
  [274] = 270,
  [275] = 270,
  [276] = 270,
  [277] = 271,
  [278] = 271,
  [279] = 271,
  [280] = 270,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 283,
  [285] = 58,
  [286] = 61,
  [287] = 198,
  [288] = 281,
  [289] = 200,
  [290] = 57,
  [291] = 199,
  [292] = 292,
  [293] = 191,
  [294] = 188,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 203,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 304,
  [306] = 301,
  [307] = 307,
  [308] = 301,
  [309] = 226,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 208,
  [319] = 319,
  [320] = 310,
  [321] = 202,
  [322] = 209,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 319,
  [327] = 311,
  [328] = 206,
  [329] = 324,
  [330] = 325,
  [331] = 331,
  [332] = 314,
  [333] = 61,
  [334] = 57,
  [335] = 58,
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
  [32] = {.lex_state = 83},
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
  [45] = {.lex_state = 2, .external_lex_state = 1},
  [46] = {.lex_state = 83},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 2, .external_lex_state = 1},
  [54] = {.lex_state = 83},
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
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 83, .external_lex_state = 1},
  [69] = {.lex_state = 83, .external_lex_state = 1},
  [70] = {.lex_state = 83, .external_lex_state = 1},
  [71] = {.lex_state = 83, .external_lex_state = 1},
  [72] = {.lex_state = 83, .external_lex_state = 1},
  [73] = {.lex_state = 83, .external_lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 83},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 83},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 83, .external_lex_state = 1},
  [83] = {.lex_state = 83, .external_lex_state = 1},
  [84] = {.lex_state = 83, .external_lex_state = 1},
  [85] = {.lex_state = 83, .external_lex_state = 1},
  [86] = {.lex_state = 83},
  [87] = {.lex_state = 83},
  [88] = {.lex_state = 83, .external_lex_state = 1},
  [89] = {.lex_state = 83, .external_lex_state = 1},
  [90] = {.lex_state = 83},
  [91] = {.lex_state = 83},
  [92] = {.lex_state = 83, .external_lex_state = 1},
  [93] = {.lex_state = 83, .external_lex_state = 1},
  [94] = {.lex_state = 83, .external_lex_state = 1},
  [95] = {.lex_state = 83, .external_lex_state = 1},
  [96] = {.lex_state = 83, .external_lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 83, .external_lex_state = 1},
  [99] = {.lex_state = 83, .external_lex_state = 1},
  [100] = {.lex_state = 83, .external_lex_state = 1},
  [101] = {.lex_state = 83, .external_lex_state = 1},
  [102] = {.lex_state = 83, .external_lex_state = 1},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 83, .external_lex_state = 1},
  [105] = {.lex_state = 83, .external_lex_state = 1},
  [106] = {.lex_state = 83, .external_lex_state = 1},
  [107] = {.lex_state = 83, .external_lex_state = 1},
  [108] = {.lex_state = 83, .external_lex_state = 1},
  [109] = {.lex_state = 83, .external_lex_state = 1},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 83, .external_lex_state = 1},
  [112] = {.lex_state = 83, .external_lex_state = 1},
  [113] = {.lex_state = 83, .external_lex_state = 1},
  [114] = {.lex_state = 83, .external_lex_state = 1},
  [115] = {.lex_state = 83, .external_lex_state = 1},
  [116] = {.lex_state = 83, .external_lex_state = 1},
  [117] = {.lex_state = 83, .external_lex_state = 1},
  [118] = {.lex_state = 83, .external_lex_state = 1},
  [119] = {.lex_state = 83, .external_lex_state = 1},
  [120] = {.lex_state = 83},
  [121] = {.lex_state = 83, .external_lex_state = 1},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 83, .external_lex_state = 1},
  [124] = {.lex_state = 2},
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
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 5, .external_lex_state = 1},
  [173] = {.lex_state = 5, .external_lex_state = 1},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 5, .external_lex_state = 1},
  [176] = {.lex_state = 5, .external_lex_state = 1},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 5, .external_lex_state = 1},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 1, .external_lex_state = 1},
  [183] = {.lex_state = 6, .external_lex_state = 1},
  [184] = {.lex_state = 1, .external_lex_state = 1},
  [185] = {.lex_state = 6, .external_lex_state = 1},
  [186] = {.lex_state = 7, .external_lex_state = 1},
  [187] = {.lex_state = 7, .external_lex_state = 1},
  [188] = {.lex_state = 1, .external_lex_state = 1},
  [189] = {.lex_state = 1, .external_lex_state = 1},
  [190] = {.lex_state = 6, .external_lex_state = 1},
  [191] = {.lex_state = 1, .external_lex_state = 1},
  [192] = {.lex_state = 7, .external_lex_state = 1},
  [193] = {.lex_state = 6, .external_lex_state = 1},
  [194] = {.lex_state = 7, .external_lex_state = 1},
  [195] = {.lex_state = 7, .external_lex_state = 1},
  [196] = {.lex_state = 6, .external_lex_state = 1},
  [197] = {.lex_state = 83, .external_lex_state = 1},
  [198] = {.lex_state = 4, .external_lex_state = 1},
  [199] = {.lex_state = 4, .external_lex_state = 1},
  [200] = {.lex_state = 4, .external_lex_state = 1},
  [201] = {.lex_state = 83},
  [202] = {.lex_state = 83, .external_lex_state = 1},
  [203] = {.lex_state = 3, .external_lex_state = 1},
  [204] = {.lex_state = 83, .external_lex_state = 1},
  [205] = {.lex_state = 83, .external_lex_state = 1},
  [206] = {.lex_state = 83, .external_lex_state = 1},
  [207] = {.lex_state = 83, .external_lex_state = 1},
  [208] = {.lex_state = 83, .external_lex_state = 1},
  [209] = {.lex_state = 83, .external_lex_state = 1},
  [210] = {.lex_state = 83, .external_lex_state = 1},
  [211] = {.lex_state = 83, .external_lex_state = 1},
  [212] = {.lex_state = 83},
  [213] = {.lex_state = 83},
  [214] = {.lex_state = 83, .external_lex_state = 1},
  [215] = {.lex_state = 83, .external_lex_state = 1},
  [216] = {.lex_state = 83},
  [217] = {.lex_state = 83},
  [218] = {.lex_state = 83, .external_lex_state = 1},
  [219] = {.lex_state = 83, .external_lex_state = 1},
  [220] = {.lex_state = 83, .external_lex_state = 1},
  [221] = {.lex_state = 83, .external_lex_state = 1},
  [222] = {.lex_state = 83, .external_lex_state = 1},
  [223] = {.lex_state = 83, .external_lex_state = 1},
  [224] = {.lex_state = 83},
  [225] = {.lex_state = 83, .external_lex_state = 1},
  [226] = {.lex_state = 83, .external_lex_state = 1},
  [227] = {.lex_state = 83},
  [228] = {.lex_state = 83, .external_lex_state = 1},
  [229] = {.lex_state = 83, .external_lex_state = 1},
  [230] = {.lex_state = 83, .external_lex_state = 1},
  [231] = {.lex_state = 83},
  [232] = {.lex_state = 83, .external_lex_state = 1},
  [233] = {.lex_state = 83, .external_lex_state = 1},
  [234] = {.lex_state = 83, .external_lex_state = 1},
  [235] = {.lex_state = 83},
  [236] = {.lex_state = 83},
  [237] = {.lex_state = 83},
  [238] = {.lex_state = 83},
  [239] = {.lex_state = 83, .external_lex_state = 1},
  [240] = {.lex_state = 83, .external_lex_state = 1},
  [241] = {.lex_state = 83, .external_lex_state = 1},
  [242] = {.lex_state = 83, .external_lex_state = 1},
  [243] = {.lex_state = 83, .external_lex_state = 1},
  [244] = {.lex_state = 83, .external_lex_state = 1},
  [245] = {.lex_state = 83, .external_lex_state = 1},
  [246] = {.lex_state = 83, .external_lex_state = 1},
  [247] = {.lex_state = 83, .external_lex_state = 1},
  [248] = {.lex_state = 83, .external_lex_state = 1},
  [249] = {.lex_state = 83, .external_lex_state = 1},
  [250] = {.lex_state = 83},
  [251] = {.lex_state = 83},
  [252] = {.lex_state = 83},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 83},
  [255] = {.lex_state = 83},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 83},
  [259] = {.lex_state = 83},
  [260] = {.lex_state = 83},
  [261] = {.lex_state = 8, .external_lex_state = 1},
  [262] = {.lex_state = 8, .external_lex_state = 1},
  [263] = {.lex_state = 8, .external_lex_state = 1},
  [264] = {.lex_state = 8, .external_lex_state = 1},
  [265] = {.lex_state = 8, .external_lex_state = 1},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 83},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 83},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 12},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 83},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 83},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 83},
  [303] = {.lex_state = 83},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 83},
  [310] = {.lex_state = 83},
  [311] = {.lex_state = 83},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 145},
  [315] = {.lex_state = 83},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 83},
  [319] = {.lex_state = 83},
  [320] = {.lex_state = 83},
  [321] = {.lex_state = 83},
  [322] = {.lex_state = 83},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 145},
  [325] = {.lex_state = 83},
  [326] = {.lex_state = 83},
  [327] = {.lex_state = 83},
  [328] = {.lex_state = 83},
  [329] = {.lex_state = 145},
  [330] = {.lex_state = 83},
  [331] = {.lex_state = 83},
  [332] = {.lex_state = 145},
  [333] = {(TSStateId)(-1)},
  [334] = {(TSStateId)(-1)},
  [335] = {(TSStateId)(-1)},
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
    [sym_document] = STATE(317),
    [sym_node] = STATE(22),
    [sym_identifier] = STATE(63),
    [sym__bare_identifier] = STATE(226),
    [sym_type] = STATE(259),
    [sym_string] = STATE(226),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym__sign] = STATE(203),
    [sym__linespace] = STATE(36),
    [sym__newline] = STATE(36),
    [sym__ws] = STATE(36),
    [sym__unicode_space] = STATE(36),
    [sym_single_line_comment] = STATE(36),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(36),
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
    [sym_node_field] = STATE(220),
    [sym__node_field_comment] = STATE(221),
    [sym__node_field] = STATE(221),
    [sym_node_children] = STATE(126),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(143),
    [sym_identifier] = STATE(315),
    [sym__bare_identifier] = STATE(309),
    [sym_keyword] = STATE(223),
    [sym_prop] = STATE(229),
    [sym_value] = STATE(229),
    [sym_type] = STATE(256),
    [sym_string] = STATE(204),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(223),
    [sym__decimal] = STATE(233),
    [sym__integer] = STATE(182),
    [sym__sign] = STATE(266),
    [sym__hex] = STATE(233),
    [sym__octal] = STATE(233),
    [sym__binary] = STATE(233),
    [sym_boolean] = STATE(218),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(143),
    [sym__ws] = STATE(45),
    [sym__unicode_space] = STATE(45),
    [sym_single_line_comment] = STATE(143),
    [sym_multi_line_comment] = STATE(2),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(45),
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
    [sym_node_field] = STATE(220),
    [sym__node_field_comment] = STATE(221),
    [sym__node_field] = STATE(221),
    [sym_node_children] = STATE(109),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(154),
    [sym_identifier] = STATE(315),
    [sym__bare_identifier] = STATE(309),
    [sym_keyword] = STATE(223),
    [sym_prop] = STATE(229),
    [sym_value] = STATE(229),
    [sym_type] = STATE(256),
    [sym_string] = STATE(204),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(223),
    [sym__decimal] = STATE(233),
    [sym__integer] = STATE(182),
    [sym__sign] = STATE(266),
    [sym__hex] = STATE(233),
    [sym__octal] = STATE(233),
    [sym__binary] = STATE(233),
    [sym_boolean] = STATE(218),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(154),
    [sym__ws] = STATE(45),
    [sym__unicode_space] = STATE(45),
    [sym_single_line_comment] = STATE(154),
    [sym_multi_line_comment] = STATE(3),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(45),
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
    [sym_node_field] = STATE(220),
    [sym__node_field_comment] = STATE(221),
    [sym__node_field] = STATE(221),
    [sym_node_children] = STATE(92),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(142),
    [sym_identifier] = STATE(315),
    [sym__bare_identifier] = STATE(309),
    [sym_keyword] = STATE(223),
    [sym_prop] = STATE(229),
    [sym_value] = STATE(229),
    [sym_type] = STATE(256),
    [sym_string] = STATE(204),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(223),
    [sym__decimal] = STATE(233),
    [sym__integer] = STATE(182),
    [sym__sign] = STATE(266),
    [sym__hex] = STATE(233),
    [sym__octal] = STATE(233),
    [sym__binary] = STATE(233),
    [sym_boolean] = STATE(218),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(142),
    [sym__ws] = STATE(45),
    [sym__unicode_space] = STATE(45),
    [sym_single_line_comment] = STATE(142),
    [sym_multi_line_comment] = STATE(4),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(45),
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
    [sym_node_field] = STATE(220),
    [sym__node_field_comment] = STATE(221),
    [sym__node_field] = STATE(221),
    [sym_node_children] = STATE(84),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(134),
    [sym_identifier] = STATE(315),
    [sym__bare_identifier] = STATE(309),
    [sym_keyword] = STATE(223),
    [sym_prop] = STATE(229),
    [sym_value] = STATE(229),
    [sym_type] = STATE(256),
    [sym_string] = STATE(204),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(223),
    [sym__decimal] = STATE(233),
    [sym__integer] = STATE(182),
    [sym__sign] = STATE(266),
    [sym__hex] = STATE(233),
    [sym__octal] = STATE(233),
    [sym__binary] = STATE(233),
    [sym_boolean] = STATE(218),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(134),
    [sym__ws] = STATE(45),
    [sym__unicode_space] = STATE(45),
    [sym_single_line_comment] = STATE(134),
    [sym_multi_line_comment] = STATE(5),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(45),
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
    [sym_node_field] = STATE(220),
    [sym__node_field_comment] = STATE(221),
    [sym__node_field] = STATE(221),
    [sym_node_children] = STATE(117),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(151),
    [sym_identifier] = STATE(315),
    [sym__bare_identifier] = STATE(309),
    [sym_keyword] = STATE(223),
    [sym_prop] = STATE(229),
    [sym_value] = STATE(229),
    [sym_type] = STATE(256),
    [sym_string] = STATE(204),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(223),
    [sym__decimal] = STATE(233),
    [sym__integer] = STATE(182),
    [sym__sign] = STATE(266),
    [sym__hex] = STATE(233),
    [sym__octal] = STATE(233),
    [sym__binary] = STATE(233),
    [sym_boolean] = STATE(218),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(151),
    [sym__ws] = STATE(45),
    [sym__unicode_space] = STATE(45),
    [sym_single_line_comment] = STATE(151),
    [sym_multi_line_comment] = STATE(6),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(45),
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
    [sym_node_field] = STATE(220),
    [sym__node_field_comment] = STATE(221),
    [sym__node_field] = STATE(221),
    [sym_node_children] = STATE(102),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(166),
    [sym_identifier] = STATE(315),
    [sym__bare_identifier] = STATE(309),
    [sym_keyword] = STATE(223),
    [sym_prop] = STATE(229),
    [sym_value] = STATE(229),
    [sym_type] = STATE(256),
    [sym_string] = STATE(204),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(223),
    [sym__decimal] = STATE(233),
    [sym__integer] = STATE(182),
    [sym__sign] = STATE(266),
    [sym__hex] = STATE(233),
    [sym__octal] = STATE(233),
    [sym__binary] = STATE(233),
    [sym_boolean] = STATE(218),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(166),
    [sym__ws] = STATE(45),
    [sym__unicode_space] = STATE(45),
    [sym_single_line_comment] = STATE(166),
    [sym_multi_line_comment] = STATE(7),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(45),
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
    [sym_node_field] = STATE(220),
    [sym__node_field_comment] = STATE(221),
    [sym__node_field] = STATE(221),
    [sym_node_children] = STATE(104),
    [sym__node_space] = STATE(62),
    [sym__node_terminator] = STATE(160),
    [sym_identifier] = STATE(315),
    [sym__bare_identifier] = STATE(309),
    [sym_keyword] = STATE(223),
    [sym_prop] = STATE(229),
    [sym_value] = STATE(229),
    [sym_type] = STATE(256),
    [sym_string] = STATE(204),
    [sym__escaped_string] = STATE(208),
    [sym__raw_string] = STATE(208),
    [sym_number] = STATE(223),
    [sym__decimal] = STATE(233),
    [sym__integer] = STATE(182),
    [sym__sign] = STATE(266),
    [sym__hex] = STATE(233),
    [sym__octal] = STATE(233),
    [sym__binary] = STATE(233),
    [sym_boolean] = STATE(218),
    [sym__escline] = STATE(52),
    [sym__newline] = STATE(160),
    [sym__ws] = STATE(45),
    [sym__unicode_space] = STATE(45),
    [sym_single_line_comment] = STATE(160),
    [sym_multi_line_comment] = STATE(8),
    [aux_sym_node_repeat1] = STATE(15),
    [aux_sym_node_repeat3] = STATE(45),
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
  [0] = 35,
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
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(124), 1,
      sym__escline,
    STATE(177), 1,
      sym__node_space,
    STATE(182), 1,
      sym__integer,
    STATE(204), 1,
      sym_string,
    STATE(218), 1,
      sym_boolean,
    STATE(220), 1,
      sym_node_field,
    STATE(256), 1,
      sym_type,
    STATE(266), 1,
      sym__sign,
    STATE(309), 1,
      sym__bare_identifier,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(223), 2,
      sym_keyword,
      sym_number,
    STATE(229), 2,
      sym_prop,
      sym_value,
    STATE(79), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(233), 4,
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
  [134] = 34,
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
    STATE(124), 1,
      sym__escline,
    STATE(177), 1,
      sym__node_space,
    STATE(182), 1,
      sym__integer,
    STATE(204), 1,
      sym_string,
    STATE(218), 1,
      sym_boolean,
    STATE(230), 1,
      sym__node_field,
    STATE(256), 1,
      sym_type,
    STATE(266), 1,
      sym__sign,
    STATE(309), 1,
      sym__bare_identifier,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(223), 2,
      sym_keyword,
      sym_number,
    STATE(229), 2,
      sym_prop,
      sym_value,
    STATE(79), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(233), 4,
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
  [264] = 34,
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
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(124), 1,
      sym__escline,
    STATE(177), 1,
      sym__node_space,
    STATE(182), 1,
      sym__integer,
    STATE(204), 1,
      sym_string,
    STATE(218), 1,
      sym_boolean,
    STATE(222), 1,
      sym__node_field,
    STATE(256), 1,
      sym_type,
    STATE(266), 1,
      sym__sign,
    STATE(309), 1,
      sym__bare_identifier,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(223), 2,
      sym_keyword,
      sym_number,
    STATE(229), 2,
      sym_prop,
      sym_value,
    STATE(79), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(233), 4,
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
  [394] = 33,
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
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(124), 1,
      sym__escline,
    STATE(177), 1,
      sym__node_space,
    STATE(182), 1,
      sym__integer,
    STATE(204), 1,
      sym_string,
    STATE(218), 1,
      sym_boolean,
    STATE(222), 1,
      sym__node_field,
    STATE(256), 1,
      sym_type,
    STATE(266), 1,
      sym__sign,
    STATE(309), 1,
      sym__bare_identifier,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(223), 2,
      sym_keyword,
      sym_number,
    STATE(229), 2,
      sym_prop,
      sym_value,
    STATE(79), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(233), 4,
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
  [521] = 33,
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
    STATE(124), 1,
      sym__escline,
    STATE(177), 1,
      sym__node_space,
    STATE(182), 1,
      sym__integer,
    STATE(204), 1,
      sym_string,
    STATE(218), 1,
      sym_boolean,
    STATE(230), 1,
      sym__node_field,
    STATE(256), 1,
      sym_type,
    STATE(266), 1,
      sym__sign,
    STATE(309), 1,
      sym__bare_identifier,
    STATE(315), 1,
      sym_identifier,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(223), 2,
      sym_keyword,
      sym_number,
    STATE(229), 2,
      sym_prop,
      sym_value,
    STATE(79), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(233), 4,
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
  [648] = 20,
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
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(14), 3,
      sym_node,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
    STATE(54), 6,
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
  [743] = 9,
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
    STATE(45), 3,
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
  [816] = 21,
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
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 6,
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
  [912] = 21,
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
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(44), 6,
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
  [1008] = 21,
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
    STATE(18), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(31), 6,
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
  [1104] = 21,
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
    STATE(19), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(23), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(49), 6,
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
  [1200] = 21,
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
    STATE(20), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(44), 6,
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
  [1296] = 21,
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
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
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
  [1392] = 21,
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
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(38), 6,
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
  [1488] = 21,
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
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 6,
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
  [1584] = 21,
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
    STATE(24), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(27), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 6,
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
  [1680] = 21,
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
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      anon_sym_CR,
    STATE(25), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(21), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
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
  [1776] = 21,
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
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      anon_sym_CR,
    STATE(26), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
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
  [1872] = 21,
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
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_CR,
    STATE(27), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(32), 6,
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
  [1968] = 21,
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
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_CR,
    STATE(28), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(29), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(32), 6,
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
  [2064] = 21,
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
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(14), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(42), 6,
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
  [2160] = 21,
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
    ACTIONS(212), 1,
      anon_sym_CR,
    STATE(24), 1,
      sym_node,
    STATE(30), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(75), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(214), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2255] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(31), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2350] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(32), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2445] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2540] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      aux_sym__raw_string_token1,
    ACTIONS(230), 1,
      aux_sym__raw_string_token3,
    STATE(34), 1,
      sym_multi_line_comment,
    STATE(298), 1,
      sym__sign,
    STATE(309), 2,
      sym__bare_identifier,
      sym_string,
    STATE(318), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(327), 2,
      sym_identifier,
      sym_annotation_type,
    ACTIONS(224), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(222), 28,
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
  [2621] = 21,
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
    ACTIONS(232), 1,
      anon_sym_CR,
    STATE(28), 1,
      sym_node,
    STATE(35), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [2716] = 21,
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
    ACTIONS(236), 1,
      anon_sym_CR,
    STATE(25), 1,
      sym_node,
    STATE(36), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(76), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [2811] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(37), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [2906] = 21,
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
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(38), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3001] = 21,
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
    ACTIONS(240), 1,
      anon_sym_CR,
    STATE(20), 1,
      sym_node,
    STATE(39), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(78), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
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
  [3096] = 21,
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
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      anon_sym_CR,
    STATE(18), 1,
      sym_node,
    STATE(40), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(248), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3191] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      sym__normal_bare_identifier,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      aux_sym__raw_string_token1,
    ACTIONS(230), 1,
      aux_sym__raw_string_token3,
    STATE(41), 1,
      sym_multi_line_comment,
    STATE(298), 1,
      sym__sign,
    STATE(309), 2,
      sym__bare_identifier,
      sym_string,
    STATE(311), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(318), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(224), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(222), 28,
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
  [3272] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3367] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3462] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(44), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3557] = 8,
    ACTIONS(258), 1,
      anon_sym_BSLASH,
    ACTIONS(264), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_multi_line_comment,
    STATE(51), 1,
      sym__escline,
    STATE(55), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(254), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(256), 18,
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
    ACTIONS(261), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3626] = 21,
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
      anon_sym_RBRACE,
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(46), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [3721] = 21,
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
    ACTIONS(267), 1,
      anon_sym_CR,
    STATE(24), 1,
      sym_node,
    STATE(47), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(35), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
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
  [3816] = 21,
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
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_CR,
    STATE(19), 1,
      sym_node,
    STATE(48), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(30), 6,
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
  [3911] = 21,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(49), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4006] = 6,
    ACTIONS(284), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_multi_line_comment,
    STATE(55), 3,
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
  [4070] = 6,
    ACTIONS(284), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_multi_line_comment,
    STATE(53), 3,
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
    ACTIONS(287), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4134] = 6,
    ACTIONS(264), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_multi_line_comment,
    STATE(50), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(254), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(256), 19,
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
    ACTIONS(290), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4198] = 6,
    ACTIONS(300), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_multi_line_comment,
    STATE(55), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(293), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(295), 19,
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
  [4262] = 20,
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
    ACTIONS(216), 1,
      anon_sym_CR,
    STATE(54), 1,
      sym_multi_line_comment,
    STATE(63), 1,
      sym_identifier,
    STATE(135), 1,
      sym_node,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym__unicode_space,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 25,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4354] = 5,
    ACTIONS(310), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 4,
      sym__ws,
      sym__unicode_space,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(303), 8,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      anon_sym_CR,
    ACTIONS(305), 19,
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
    ACTIONS(307), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [4416] = 3,
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
  [4471] = 3,
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
  [4526] = 3,
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
  [4581] = 3,
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
  [4636] = 3,
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
  [4691] = 3,
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
  [4746] = 3,
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
  [4801] = 16,
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
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(63), 1,
      sym_multi_line_comment,
    STATE(71), 1,
      aux_sym_node_repeat2,
    STATE(96), 1,
      sym_node_children,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(164), 3,
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
  [4879] = 16,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(64), 1,
      sym_multi_line_comment,
    STATE(84), 1,
      sym_node_children,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [4957] = 16,
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
    STATE(65), 1,
      sym_multi_line_comment,
    STATE(66), 1,
      aux_sym_node_repeat2,
    STATE(119), 1,
      sym_node_children,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(149), 3,
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
  [5035] = 16,
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
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(66), 1,
      sym_multi_line_comment,
    STATE(104), 1,
      sym_node_children,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(160), 3,
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
  [5113] = 7,
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
    STATE(67), 7,
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
  [5173] = 16,
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
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(64), 1,
      aux_sym_node_repeat2,
    STATE(68), 1,
      sym_multi_line_comment,
    STATE(104), 1,
      sym_node_children,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(160), 3,
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
  [5251] = 16,
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
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(69), 1,
      sym_multi_line_comment,
    STATE(73), 1,
      aux_sym_node_repeat2,
    STATE(117), 1,
      sym_node_children,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(151), 3,
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
  [5329] = 16,
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
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(70), 1,
      sym_multi_line_comment,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(117), 1,
      sym_node_children,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(151), 3,
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
  [5407] = 16,
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
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(71), 1,
      sym_multi_line_comment,
    STATE(102), 1,
      sym_node_children,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(166), 3,
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
  [5485] = 16,
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
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(70), 1,
      aux_sym_node_repeat2,
    STATE(72), 1,
      sym_multi_line_comment,
    STATE(102), 1,
      sym_node_children,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(166), 3,
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
  [5563] = 16,
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
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(73), 1,
      sym_multi_line_comment,
    STATE(109), 1,
      sym_node_children,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(154), 3,
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
  [5641] = 9,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym__escline,
    STATE(177), 1,
      sym__node_space,
    STATE(74), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(79), 3,
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
    ACTIONS(370), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [5704] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(376), 1,
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
    STATE(67), 6,
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
  [5767] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
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
    STATE(67), 6,
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
  [5830] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
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
    STATE(67), 6,
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
  [5893] = 9,
    ACTIONS(355), 1,
      anon_sym_CR,
    ACTIONS(361), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(364), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
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
    STATE(67), 6,
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
  [5956] = 8,
    ACTIONS(388), 1,
      anon_sym_BSLASH,
    ACTIONS(394), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_multi_line_comment,
    STATE(110), 1,
      sym__escline,
    STATE(103), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(254), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
    ACTIONS(391), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6015] = 20,
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
    ACTIONS(397), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_identifier,
    STATE(80), 1,
      sym_multi_line_comment,
    STATE(201), 1,
      aux_sym_node_repeat1,
    STATE(203), 1,
      sym__sign,
    STATE(236), 1,
      sym__escline,
    STATE(251), 1,
      sym__node_space,
    STATE(260), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(213), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(399), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6098] = 20,
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
    ACTIONS(397), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      sym_identifier,
    STATE(80), 1,
      aux_sym_node_repeat1,
    STATE(81), 1,
      sym_multi_line_comment,
    STATE(203), 1,
      sym__sign,
    STATE(236), 1,
      sym__escline,
    STATE(251), 1,
      sym__node_space,
    STATE(258), 1,
      sym_type,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
    STATE(213), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(399), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [6181] = 12,
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
    STATE(100), 1,
      aux_sym_node_repeat1,
    STATE(207), 1,
      sym__escline,
    STATE(162), 3,
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
  [6247] = 12,
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
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(165), 3,
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
  [6313] = 12,
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
    STATE(84), 1,
      sym_multi_line_comment,
    STATE(101), 1,
      aux_sym_node_repeat1,
    STATE(128), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(136), 3,
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
  [6379] = 12,
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
    STATE(85), 1,
      sym_multi_line_comment,
    STATE(107), 1,
      aux_sym_node_repeat1,
    STATE(207), 1,
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
  [6445] = 3,
    STATE(86), 1,
      sym_multi_line_comment,
    ACTIONS(321), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(323), 36,
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
  [6493] = 3,
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
  [6541] = 12,
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
    STATE(88), 1,
      sym_multi_line_comment,
    STATE(45), 3,
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
  [6607] = 12,
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
    STATE(89), 1,
      sym_multi_line_comment,
    STATE(45), 3,
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
  [6673] = 3,
    STATE(90), 1,
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
  [6721] = 3,
    STATE(91), 1,
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
  [6769] = 12,
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
    STATE(145), 3,
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
  [6835] = 12,
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
    STATE(93), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(141), 3,
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
  [6901] = 12,
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
    STATE(94), 1,
      sym_multi_line_comment,
    STATE(127), 1,
      aux_sym_node_repeat1,
    STATE(207), 1,
      sym__escline,
    STATE(141), 3,
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
  [6967] = 12,
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
    STATE(121), 1,
      aux_sym_node_repeat1,
    STATE(207), 1,
      sym__escline,
    STATE(155), 3,
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
  [7033] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(93), 1,
      aux_sym_node_repeat1,
    STATE(96), 1,
      sym_multi_line_comment,
    STATE(94), 3,
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
    ACTIONS(443), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7099] = 6,
    ACTIONS(448), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_multi_line_comment,
    STATE(103), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(293), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 10,
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
    ACTIONS(445), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7153] = 12,
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
    STATE(98), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(155), 3,
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
  [7219] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(453), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(99), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(451), 8,
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
  [7285] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(457), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(100), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(144), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(455), 8,
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
  [7351] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(101), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(459), 8,
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
  [7417] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(102), 1,
      sym_multi_line_comment,
    STATE(115), 1,
      aux_sym_node_repeat1,
    STATE(116), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(463), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(467), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7483] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 4,
      sym__ws,
      sym__unicode_space,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(303), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(305), 10,
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
    ACTIONS(469), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7535] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(88), 1,
      aux_sym_node_repeat1,
    STATE(104), 1,
      sym_multi_line_comment,
    STATE(85), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(138), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(475), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(479), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7601] = 12,
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
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(162), 3,
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
  [7667] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat1,
    STATE(106), 1,
      sym_multi_line_comment,
    STATE(207), 1,
      sym__escline,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(481), 8,
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
  [7733] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(107), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(153), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(485), 8,
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
  [7799] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(108), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(481), 8,
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
  [7865] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(491), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(98), 1,
      aux_sym_node_repeat1,
    STATE(109), 1,
      sym_multi_line_comment,
    STATE(95), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(157), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(489), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(493), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7931] = 6,
    ACTIONS(498), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_multi_line_comment,
    STATE(97), 3,
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
    ACTIONS(495), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [7985] = 10,
    ACTIONS(503), 1,
      anon_sym_BSLASH,
    ACTIONS(506), 1,
      anon_sym_CR,
    ACTIONS(511), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(124), 1,
      sym__escline,
    STATE(177), 1,
      sym__node_space,
    STATE(111), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat2,
    STATE(79), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(501), 11,
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
    ACTIONS(508), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8047] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(99), 1,
      aux_sym_node_repeat1,
    STATE(112), 1,
      sym_multi_line_comment,
    STATE(207), 1,
      sym__escline,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(514), 8,
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
  [8113] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(520), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(113), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(167), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(518), 8,
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
  [8179] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(114), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(514), 8,
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
  [8245] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(524), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(115), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(522), 8,
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
  [8311] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(524), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(116), 1,
      sym_multi_line_comment,
    STATE(118), 1,
      aux_sym_node_repeat1,
    STATE(207), 1,
      sym__escline,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(522), 8,
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
  [8377] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(528), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(114), 1,
      aux_sym_node_repeat1,
    STATE(117), 1,
      sym_multi_line_comment,
    STATE(112), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(150), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(526), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(530), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8443] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(534), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(118), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(532), 8,
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
  [8509] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(538), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(108), 1,
      aux_sym_node_repeat1,
    STATE(119), 1,
      sym_multi_line_comment,
    STATE(106), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(536), 8,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(540), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8575] = 5,
    ACTIONS(545), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    STATE(120), 4,
      sym__ws,
      sym__unicode_space,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(305), 13,
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
    ACTIONS(542), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8627] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(550), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(121), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(548), 8,
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
  [8693] = 6,
    ACTIONS(498), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
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
    ACTIONS(552), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8747] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(123), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(555), 8,
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
  [8813] = 6,
    ACTIONS(394), 1,
      anon_sym_SLASH_STAR,
    STATE(124), 1,
      sym_multi_line_comment,
    STATE(122), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(254), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 10,
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
    ACTIONS(559), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8867] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(113), 1,
      aux_sym_node_repeat1,
    STATE(125), 1,
      sym_multi_line_comment,
    STATE(207), 1,
      sym__escline,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(555), 8,
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
  [8933] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(564), 1,
      anon_sym_CR,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(105), 1,
      aux_sym_node_repeat1,
    STATE(126), 1,
      sym_multi_line_comment,
    STATE(82), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(159), 3,
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
    ACTIONS(566), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [8999] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(570), 1,
      anon_sym_CR,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(127), 1,
      sym_multi_line_comment,
    STATE(45), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    STATE(168), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(568), 8,
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
  [9065] = 12,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      anon_sym_CR,
    STATE(62), 1,
      sym__node_space,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(128), 1,
      sym_multi_line_comment,
    STATE(207), 1,
      sym__escline,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(197), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(459), 8,
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
  [9131] = 4,
    ACTIONS(577), 1,
      anon_sym_CR,
    ACTIONS(574), 2,
      anon_sym__,
      sym__digit,
    STATE(129), 2,
      sym_multi_line_comment,
      aux_sym__integer_repeat1,
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
  [9180] = 5,
    ACTIONS(583), 1,
      anon_sym_CR,
    STATE(130), 1,
      sym_multi_line_comment,
    STATE(131), 1,
      aux_sym__integer_repeat1,
    ACTIONS(581), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(579), 35,
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
  [9231] = 5,
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
  [9282] = 3,
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
  [9328] = 3,
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
  [9374] = 3,
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
  [9420] = 3,
    STATE(135), 1,
      sym_multi_line_comment,
    ACTIONS(603), 4,
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
  [9466] = 3,
    STATE(136), 1,
      sym_multi_line_comment,
    ACTIONS(607), 4,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
      anon_sym_CR,
    ACTIONS(605), 34,
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
  [9512] = 3,
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
  [9558] = 3,
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
  [9604] = 3,
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
  [9650] = 3,
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
  [9696] = 3,
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
  [9742] = 3,
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
  [9788] = 3,
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
  [9834] = 3,
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
  [9880] = 3,
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
  [9926] = 3,
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
  [9972] = 3,
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
  [10018] = 3,
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
  [10064] = 3,
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
  [10110] = 3,
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
  [10156] = 3,
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
  [10202] = 3,
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
  [10248] = 3,
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
  [10294] = 3,
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
  [10340] = 3,
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
  [10386] = 3,
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
  [10432] = 3,
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
  [10478] = 3,
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
  [10524] = 3,
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
  [10570] = 3,
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
  [10616] = 3,
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
  [10662] = 3,
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
  [10708] = 3,
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
  [10754] = 3,
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
  [10800] = 3,
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
  [10846] = 3,
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
  [10892] = 3,
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
  [10938] = 3,
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
  [10984] = 3,
    STATE(169), 1,
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
  [11029] = 6,
    ACTIONS(739), 1,
      anon_sym_DOT,
    ACTIONS(743), 1,
      anon_sym_CR,
    STATE(170), 1,
      sym_multi_line_comment,
    STATE(234), 1,
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
  [11080] = 3,
    STATE(171), 1,
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
  [11125] = 5,
    ACTIONS(749), 1,
      anon_sym_CR,
    STATE(172), 1,
      sym_multi_line_comment,
    STATE(175), 1,
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
  [11174] = 5,
    ACTIONS(755), 1,
      anon_sym_CR,
    STATE(173), 1,
      sym_multi_line_comment,
    STATE(176), 1,
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
  [11223] = 3,
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
  [11268] = 4,
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
  [11315] = 5,
    ACTIONS(766), 1,
      anon_sym_CR,
    STATE(175), 1,
      aux_sym__binary_repeat1,
    STATE(176), 1,
      sym_multi_line_comment,
    ACTIONS(747), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(764), 32,
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
  [11364] = 3,
    STATE(177), 1,
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
  [11409] = 3,
    STATE(178), 1,
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
  [11454] = 3,
    STATE(179), 1,
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
  [11499] = 5,
    ACTIONS(766), 1,
      anon_sym_CR,
    STATE(172), 1,
      aux_sym__binary_repeat1,
    STATE(180), 1,
      sym_multi_line_comment,
    ACTIONS(768), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(764), 32,
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
  [11548] = 3,
    STATE(181), 1,
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
  [11593] = 6,
    ACTIONS(772), 1,
      anon_sym_DOT,
    ACTIONS(774), 1,
      anon_sym_CR,
    STATE(182), 1,
      sym_multi_line_comment,
    STATE(225), 1,
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
  [11644] = 4,
    ACTIONS(781), 1,
      anon_sym_CR,
    ACTIONS(778), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(183), 2,
      sym_multi_line_comment,
      aux_sym__octal_repeat1,
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
  [11690] = 5,
    ACTIONS(785), 1,
      anon_sym_CR,
    STATE(184), 1,
      sym_multi_line_comment,
    STATE(211), 1,
      sym__exponent,
    ACTIONS(741), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(783), 32,
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
  [11738] = 5,
    ACTIONS(791), 1,
      anon_sym_CR,
    STATE(185), 1,
      sym_multi_line_comment,
    STATE(193), 1,
      aux_sym__octal_repeat1,
    ACTIONS(789), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(787), 32,
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
  [11786] = 5,
    ACTIONS(797), 1,
      anon_sym_CR,
    STATE(186), 1,
      sym_multi_line_comment,
    STATE(192), 1,
      aux_sym__hex_repeat1,
    ACTIONS(795), 2,
      sym__hex_digit,
      anon_sym__,
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
  [11834] = 5,
    ACTIONS(803), 1,
      anon_sym_CR,
    STATE(187), 1,
      sym_multi_line_comment,
    STATE(194), 1,
      aux_sym__hex_repeat1,
    ACTIONS(801), 2,
      sym__hex_digit,
      anon_sym__,
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
  [11882] = 5,
    ACTIONS(807), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_CR,
    STATE(188), 1,
      sym_multi_line_comment,
    STATE(191), 1,
      aux_sym__raw_string_repeat1,
    ACTIONS(805), 33,
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
  [11930] = 5,
    ACTIONS(813), 1,
      anon_sym_CR,
    STATE(189), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__exponent,
    ACTIONS(741), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(811), 32,
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
  [11978] = 5,
    ACTIONS(791), 1,
      anon_sym_CR,
    STATE(183), 1,
      aux_sym__octal_repeat1,
    STATE(190), 1,
      sym_multi_line_comment,
    ACTIONS(815), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(787), 32,
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
  [12026] = 4,
    ACTIONS(819), 1,
      anon_sym_POUND,
    ACTIONS(822), 1,
      anon_sym_CR,
    STATE(191), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
    ACTIONS(817), 33,
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
  [12072] = 5,
    ACTIONS(803), 1,
      anon_sym_CR,
    STATE(192), 1,
      sym_multi_line_comment,
    STATE(195), 1,
      aux_sym__hex_repeat1,
    ACTIONS(824), 2,
      sym__hex_digit,
      anon_sym__,
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
  [12120] = 5,
    ACTIONS(828), 1,
      anon_sym_CR,
    STATE(183), 1,
      aux_sym__octal_repeat1,
    STATE(193), 1,
      sym_multi_line_comment,
    ACTIONS(815), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(826), 32,
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
  [12168] = 5,
    ACTIONS(832), 1,
      anon_sym_CR,
    STATE(194), 1,
      sym_multi_line_comment,
    STATE(195), 1,
      aux_sym__hex_repeat1,
    ACTIONS(824), 2,
      sym__hex_digit,
      anon_sym__,
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
  [12216] = 4,
    ACTIONS(839), 1,
      anon_sym_CR,
    ACTIONS(836), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(195), 2,
      sym_multi_line_comment,
      aux_sym__hex_repeat1,
    ACTIONS(834), 32,
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
  [12262] = 5,
    ACTIONS(845), 1,
      anon_sym_CR,
    STATE(190), 1,
      aux_sym__octal_repeat1,
    STATE(196), 1,
      sym_multi_line_comment,
    ACTIONS(843), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(841), 32,
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
  [12310] = 8,
    ACTIONS(850), 1,
      anon_sym_BSLASH,
    ACTIONS(854), 1,
      anon_sym_CR,
    ACTIONS(861), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym__escline,
    STATE(197), 1,
      sym_multi_line_comment,
    STATE(55), 3,
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
  [12363] = 5,
    ACTIONS(867), 1,
      sym__identifier_char,
    ACTIONS(869), 1,
      anon_sym_CR,
    STATE(198), 1,
      sym_multi_line_comment,
    STATE(200), 1,
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
  [12410] = 5,
    ACTIONS(873), 1,
      sym__identifier_char,
    ACTIONS(875), 1,
      anon_sym_CR,
    STATE(198), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(199), 1,
      sym_multi_line_comment,
    ACTIONS(871), 32,
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
  [12457] = 4,
    ACTIONS(879), 1,
      sym__identifier_char,
    ACTIONS(882), 1,
      anon_sym_CR,
    STATE(200), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(877), 32,
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
  [12502] = 9,
    ACTIONS(884), 1,
      anon_sym_BSLASH,
    ACTIONS(890), 1,
      anon_sym_SLASH_STAR,
    STATE(236), 1,
      sym__escline,
    STATE(251), 1,
      sym__node_space,
    STATE(201), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    ACTIONS(139), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(213), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(141), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(887), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12557] = 3,
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
  [12599] = 4,
    ACTIONS(899), 1,
      sym___identifier_char_no_digit,
    ACTIONS(901), 1,
      anon_sym_CR,
    STATE(203), 1,
      sym_multi_line_comment,
    ACTIONS(897), 32,
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
  [12643] = 4,
    ACTIONS(905), 1,
      anon_sym_EQ,
    ACTIONS(907), 1,
      anon_sym_CR,
    STATE(204), 1,
      sym_multi_line_comment,
    ACTIONS(903), 32,
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
  [12687] = 6,
    ACTIONS(912), 1,
      anon_sym_CR,
    ACTIONS(919), 1,
      anon_sym_SLASH_STAR,
    STATE(205), 1,
      sym_multi_line_comment,
    STATE(55), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(909), 10,
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
    ACTIONS(915), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12735] = 3,
    ACTIONS(925), 1,
      anon_sym_CR,
    STATE(206), 1,
      sym_multi_line_comment,
    ACTIONS(923), 33,
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
  [12777] = 6,
    ACTIONS(930), 1,
      anon_sym_CR,
    ACTIONS(937), 1,
      anon_sym_SLASH_STAR,
    STATE(207), 1,
      sym_multi_line_comment,
    STATE(205), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(927), 10,
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
    ACTIONS(933), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [12825] = 3,
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
  [12867] = 3,
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
  [12909] = 3,
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
  [12950] = 3,
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
  [12991] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(957), 1,
      anon_sym_CR,
    ACTIONS(963), 1,
      anon_sym_SLASH_SLASH,
    STATE(212), 1,
      sym_multi_line_comment,
    STATE(59), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(120), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(959), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(961), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13042] = 8,
    ACTIONS(965), 1,
      anon_sym_BSLASH,
    ACTIONS(971), 1,
      anon_sym_SLASH_STAR,
    STATE(213), 1,
      sym_multi_line_comment,
    STATE(238), 1,
      sym__escline,
    ACTIONS(254), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(120), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(256), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(968), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13093] = 3,
    ACTIONS(976), 1,
      anon_sym_CR,
    STATE(214), 1,
      sym_multi_line_comment,
    ACTIONS(974), 32,
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
  [13134] = 3,
    ACTIONS(980), 1,
      anon_sym_CR,
    STATE(215), 1,
      sym_multi_line_comment,
    ACTIONS(978), 32,
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
  [13175] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(963), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(982), 1,
      anon_sym_CR,
    STATE(216), 1,
      sym_multi_line_comment,
    STATE(56), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(212), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(984), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(986), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13226] = 8,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(988), 1,
      anon_sym_CR,
    STATE(217), 1,
      sym_multi_line_comment,
    STATE(250), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(120), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(990), 6,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
    ACTIONS(961), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13277] = 3,
    ACTIONS(994), 1,
      anon_sym_CR,
    STATE(218), 1,
      sym_multi_line_comment,
    ACTIONS(992), 32,
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
  [13318] = 3,
    ACTIONS(998), 1,
      anon_sym_CR,
    STATE(219), 1,
      sym_multi_line_comment,
    ACTIONS(996), 32,
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
  [13359] = 3,
    ACTIONS(506), 1,
      anon_sym_CR,
    STATE(220), 1,
      sym_multi_line_comment,
    ACTIONS(501), 32,
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
  [13400] = 3,
    ACTIONS(1002), 1,
      anon_sym_CR,
    STATE(221), 1,
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
  [13441] = 3,
    ACTIONS(1006), 1,
      anon_sym_CR,
    STATE(222), 1,
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
  [13482] = 3,
    ACTIONS(907), 1,
      anon_sym_CR,
    STATE(223), 1,
      sym_multi_line_comment,
    ACTIONS(903), 32,
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
  [13523] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1008), 1,
      anon_sym_CR,
    ACTIONS(1014), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 1,
      sym_multi_line_comment,
    STATE(174), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 3,
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
  [13574] = 3,
    ACTIONS(743), 1,
      anon_sym_CR,
    STATE(225), 1,
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
  [13615] = 3,
    ACTIONS(1016), 1,
      anon_sym_CR,
    STATE(226), 1,
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
  [13656] = 8,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1014), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1018), 1,
      anon_sym_CR,
    STATE(227), 1,
      sym_multi_line_comment,
    STATE(178), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(120), 3,
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
    ACTIONS(961), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [13707] = 3,
    ACTIONS(1024), 1,
      anon_sym_CR,
    STATE(228), 1,
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
  [13748] = 3,
    ACTIONS(1028), 1,
      anon_sym_CR,
    STATE(229), 1,
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
  [13789] = 3,
    ACTIONS(1032), 1,
      anon_sym_CR,
    STATE(230), 1,
      sym_multi_line_comment,
    ACTIONS(1030), 32,
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
  [13830] = 8,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1034), 1,
      anon_sym_CR,
    STATE(231), 1,
      sym_multi_line_comment,
    STATE(252), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(217), 3,
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
  [13881] = 3,
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
  [13922] = 3,
    ACTIONS(1046), 1,
      anon_sym_CR,
    STATE(233), 1,
      sym_multi_line_comment,
    ACTIONS(1044), 32,
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
  [13963] = 3,
    ACTIONS(1050), 1,
      anon_sym_CR,
    STATE(234), 1,
      sym_multi_line_comment,
    ACTIONS(1048), 32,
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
  [14004] = 6,
    ACTIONS(1055), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym_multi_line_comment,
    ACTIONS(293), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(120), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(295), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(1052), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14050] = 6,
    ACTIONS(971), 1,
      anon_sym_SLASH_STAR,
    STATE(236), 1,
      sym_multi_line_comment,
    ACTIONS(254), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(237), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(256), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(1058), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14096] = 6,
    ACTIONS(1064), 1,
      anon_sym_SLASH_STAR,
    STATE(237), 1,
      sym_multi_line_comment,
    ACTIONS(277), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(120), 3,
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
    ACTIONS(1061), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14142] = 6,
    ACTIONS(1064), 1,
      anon_sym_SLASH_STAR,
    STATE(238), 1,
      sym_multi_line_comment,
    ACTIONS(277), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(235), 3,
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
    ACTIONS(1067), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14188] = 3,
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
  [14227] = 3,
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
  [14266] = 3,
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
  [14305] = 3,
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
  [14344] = 3,
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
  [14383] = 3,
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
  [14422] = 3,
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
  [14461] = 3,
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
  [14500] = 3,
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
  [14539] = 3,
    ACTIONS(1108), 1,
      anon_sym_CR,
    STATE(248), 1,
      sym_multi_line_comment,
    ACTIONS(1106), 30,
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
  [14578] = 3,
    ACTIONS(1112), 1,
      anon_sym_CR,
    STATE(249), 1,
      sym_multi_line_comment,
    ACTIONS(1110), 30,
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
  [14617] = 3,
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
  [14654] = 3,
    STATE(251), 1,
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
  [14691] = 3,
    STATE(252), 1,
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
  [14728] = 21,
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
    ACTIONS(1114), 1,
      anon_sym_null,
    ACTIONS(1116), 1,
      aux_sym__raw_string_token1,
    STATE(182), 1,
      sym__integer,
    STATE(218), 1,
      sym_boolean,
    STATE(232), 1,
      sym_value,
    STATE(253), 1,
      sym_multi_line_comment,
    STATE(256), 1,
      sym_type,
    STATE(272), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(223), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(233), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [14800] = 9,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_BSLASH,
    STATE(236), 1,
      sym__escline,
    STATE(251), 1,
      sym__node_space,
    STATE(254), 1,
      sym_multi_line_comment,
    STATE(255), 1,
      aux_sym_node_repeat1,
    STATE(213), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(399), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14848] = 9,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_BSLASH,
    STATE(201), 1,
      aux_sym_node_repeat1,
    STATE(236), 1,
      sym__escline,
    STATE(251), 1,
      sym__node_space,
    STATE(255), 1,
      sym_multi_line_comment,
    STATE(213), 3,
      sym__ws,
      sym__unicode_space,
      aux_sym_node_repeat3,
    ACTIONS(399), 19,
      sym__bom,
      anon_sym_TAB,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
      anon_sym_17,
      anon_sym_18,
      anon_sym_19,
      anon_sym_20,
      anon_sym_21,
  [14896] = 18,
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
    ACTIONS(1114), 1,
      anon_sym_null,
    ACTIONS(1116), 1,
      aux_sym__raw_string_token1,
    STATE(182), 1,
      sym__integer,
    STATE(218), 1,
      sym_boolean,
    STATE(256), 1,
      sym_multi_line_comment,
    STATE(272), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1118), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(210), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(233), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [14959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1122), 1,
      sym__digit,
    STATE(257), 1,
      sym_multi_line_comment,
    ACTIONS(1120), 11,
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
  [14982] = 12,
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
    STATE(69), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(258), 1,
      sym_multi_line_comment,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
  [15021] = 12,
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
    STATE(72), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(259), 1,
      sym_multi_line_comment,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
  [15060] = 12,
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
    STATE(68), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sign,
    STATE(260), 1,
      sym_multi_line_comment,
    STATE(208), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(226), 2,
      sym__bare_identifier,
      sym_string,
  [15099] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1124), 1,
      anon_sym_CR,
    ACTIONS(1128), 1,
      aux_sym_single_line_comment_token1,
    STATE(87), 1,
      sym__newline,
    STATE(261), 1,
      sym_multi_line_comment,
    STATE(264), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1126), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15127] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1128), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1130), 1,
      anon_sym_CR,
    STATE(179), 1,
      sym__newline,
    STATE(262), 1,
      sym_multi_line_comment,
    STATE(264), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1132), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15155] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1128), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1134), 1,
      anon_sym_CR,
    STATE(60), 1,
      sym__newline,
    STATE(263), 1,
      sym_multi_line_comment,
    STATE(264), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1136), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15183] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1138), 1,
      anon_sym_CR,
    ACTIONS(1142), 1,
      aux_sym_single_line_comment_token1,
    STATE(264), 2,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1140), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15206] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(265), 1,
      sym_multi_line_comment,
    ACTIONS(1145), 2,
      anon_sym_CR,
      aux_sym_single_line_comment_token1,
    ACTIONS(1147), 7,
      sym__eof,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
  [15226] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(897), 1,
      anon_sym_EQ,
    ACTIONS(1149), 1,
      sym___identifier_char_no_digit,
    ACTIONS(1151), 1,
      anon_sym_0x,
    ACTIONS(1153), 1,
      anon_sym_0o,
    ACTIONS(1155), 1,
      anon_sym_0b,
    STATE(170), 1,
      sym__integer,
    STATE(266), 1,
      sym_multi_line_comment,
  [15254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1159), 1,
      sym__digit,
    STATE(267), 1,
      sym_multi_line_comment,
    ACTIONS(1157), 6,
      sym___identifier_char_no_digit,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [15272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(268), 1,
      sym_multi_line_comment,
    ACTIONS(1120), 3,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(1122), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
  [15289] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      sym__digit,
    STATE(228), 1,
      sym__integer,
    STATE(269), 1,
      sym_multi_line_comment,
    STATE(296), 1,
      sym__sign,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [15309] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1165), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1169), 1,
      aux_sym_commented_block_token1,
    STATE(86), 1,
      sym_commented_block,
    STATE(270), 1,
      sym_multi_line_comment,
    ACTIONS(1167), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15329] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1171), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1175), 1,
      aux_sym_commented_block_token1,
    STATE(271), 1,
      sym_multi_line_comment,
    STATE(333), 1,
      sym_commented_block,
    ACTIONS(1173), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15349] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      sym__digit,
    ACTIONS(1151), 1,
      anon_sym_0x,
    ACTIONS(1153), 1,
      anon_sym_0o,
    ACTIONS(1155), 1,
      anon_sym_0b,
    STATE(170), 1,
      sym__integer,
    STATE(272), 1,
      sym_multi_line_comment,
  [15371] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1177), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1181), 1,
      aux_sym_commented_block_token1,
    STATE(273), 1,
      sym_multi_line_comment,
    STATE(286), 1,
      sym_commented_block,
    ACTIONS(1179), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15391] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1177), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1181), 1,
      aux_sym_commented_block_token1,
    STATE(274), 1,
      sym_multi_line_comment,
    STATE(285), 1,
      sym_commented_block,
    ACTIONS(1179), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15411] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1183), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1187), 1,
      aux_sym_commented_block_token1,
    STATE(58), 1,
      sym_commented_block,
    STATE(275), 1,
      sym_multi_line_comment,
    ACTIONS(1185), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15431] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1189), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1193), 1,
      aux_sym_commented_block_token1,
    STATE(169), 1,
      sym_commented_block,
    STATE(276), 1,
      sym_multi_line_comment,
    ACTIONS(1191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15451] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1183), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1187), 1,
      aux_sym_commented_block_token1,
    STATE(61), 1,
      sym_commented_block,
    STATE(277), 1,
      sym_multi_line_comment,
    ACTIONS(1185), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15471] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1165), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1169), 1,
      aux_sym_commented_block_token1,
    STATE(90), 1,
      sym_commented_block,
    STATE(278), 1,
      sym_multi_line_comment,
    ACTIONS(1167), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15491] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1189), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1193), 1,
      aux_sym_commented_block_token1,
    STATE(171), 1,
      sym_commented_block,
    STATE(279), 1,
      sym_multi_line_comment,
    ACTIONS(1191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15511] = 6,
    ACTIONS(1163), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1171), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(1175), 1,
      aux_sym_commented_block_token1,
    STATE(280), 1,
      sym_multi_line_comment,
    STATE(335), 1,
      sym_commented_block,
    ACTIONS(1173), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [15531] = 6,
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
    STATE(282), 1,
      aux_sym__escaped_string_repeat1,
  [15550] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1201), 1,
      anon_sym_DQUOTE,
    ACTIONS(1203), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1206), 1,
      aux_sym__escape_token1,
    STATE(282), 2,
      sym_multi_line_comment,
      aux_sym__escaped_string_repeat1,
  [15567] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1199), 1,
      aux_sym__escape_token1,
    ACTIONS(1209), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym__escaped_string_repeat1,
    STATE(283), 1,
      sym_multi_line_comment,
  [15586] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1199), 1,
      aux_sym__escape_token1,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE,
    STATE(284), 1,
      sym_multi_line_comment,
    STATE(288), 1,
      aux_sym__escaped_string_repeat1,
  [15605] = 3,
    STATE(285), 1,
      sym_multi_line_comment,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(323), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [15618] = 3,
    STATE(286), 1,
      sym_multi_line_comment,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [15631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1213), 1,
      sym__identifier_char,
    STATE(287), 1,
      sym_multi_line_comment,
    STATE(289), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(865), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15648] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1199), 1,
      aux_sym__escape_token1,
    ACTIONS(1215), 1,
      anon_sym_DQUOTE,
    STATE(282), 1,
      aux_sym__escaped_string_repeat1,
    STATE(288), 1,
      sym_multi_line_comment,
  [15667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1217), 1,
      sym__identifier_char,
    ACTIONS(877), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(289), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
  [15682] = 3,
    STATE(290), 1,
      sym_multi_line_comment,
    ACTIONS(317), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(319), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [15695] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1213), 1,
      sym__identifier_char,
    STATE(287), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(291), 1,
      sym_multi_line_comment,
    ACTIONS(871), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15712] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(292), 1,
      sym_multi_line_comment,
    ACTIONS(1220), 3,
      sym__identifier_char,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    ACTIONS(1222), 1,
      anon_sym_POUND,
    STATE(293), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
  [15738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    ACTIONS(1225), 1,
      anon_sym_POUND,
    STATE(293), 1,
      aux_sym__raw_string_repeat1,
    STATE(294), 1,
      sym_multi_line_comment,
  [15754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1229), 1,
      aux_sym__escaped_string_token1,
    STATE(295), 1,
      sym_multi_line_comment,
    ACTIONS(1227), 2,
      anon_sym_DQUOTE,
      aux_sym__escape_token1,
  [15768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      sym__digit,
    STATE(215), 1,
      sym__integer,
    STATE(296), 1,
      sym_multi_line_comment,
  [15781] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(297), 1,
      sym_multi_line_comment,
    ACTIONS(1231), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [15792] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    ACTIONS(1149), 1,
      sym___identifier_char_no_digit,
    STATE(298), 1,
      sym_multi_line_comment,
  [15805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(299), 1,
      sym_multi_line_comment,
    ACTIONS(1233), 2,
      anon_sym_0,
      anon_sym_1,
  [15816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      sym__digit,
    STATE(184), 1,
      sym__integer,
    STATE(300), 1,
      sym_multi_line_comment,
  [15829] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1128), 1,
      aux_sym_single_line_comment_token1,
    STATE(263), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(301), 1,
      sym_multi_line_comment,
  [15842] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(302), 1,
      sym_multi_line_comment,
    ACTIONS(897), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15853] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      sym__digit,
    STATE(189), 1,
      sym__integer,
    STATE(303), 1,
      sym_multi_line_comment,
  [15866] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1225), 1,
      anon_sym_POUND,
    STATE(294), 1,
      aux_sym__raw_string_repeat1,
    STATE(304), 1,
      sym_multi_line_comment,
  [15879] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      anon_sym_POUND,
    STATE(188), 1,
      aux_sym__raw_string_repeat1,
    STATE(305), 1,
      sym_multi_line_comment,
  [15892] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1128), 1,
      aux_sym_single_line_comment_token1,
    STATE(262), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(306), 1,
      sym_multi_line_comment,
  [15905] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(307), 1,
      sym_multi_line_comment,
    ACTIONS(1237), 2,
      anon_sym_0,
      anon_sym_1,
  [15916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1128), 1,
      aux_sym_single_line_comment_token1,
    STATE(261), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(308), 1,
      sym_multi_line_comment,
  [15929] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(309), 1,
      sym_multi_line_comment,
    ACTIONS(905), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [15940] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE,
    STATE(310), 1,
      sym_multi_line_comment,
  [15950] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      sym_multi_line_comment,
  [15960] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1243), 1,
      sym__hex_digit,
    STATE(312), 1,
      sym_multi_line_comment,
  [15970] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1245), 1,
      aux_sym__octal_token1,
    STATE(313), 1,
      sym_multi_line_comment,
  [15980] = 3,
    ACTIONS(1247), 1,
      aux_sym__raw_string_token2,
    ACTIONS(1249), 1,
      anon_sym_SLASH_STAR,
    STATE(314), 1,
      sym_multi_line_comment,
  [15990] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1251), 1,
      anon_sym_EQ,
    STATE(315), 1,
      sym_multi_line_comment,
  [16000] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1253), 1,
      sym__hex_digit,
    STATE(316), 1,
      sym_multi_line_comment,
  [16010] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1255), 1,
      ts_builtin_sym_end,
    STATE(317), 1,
      sym_multi_line_comment,
  [16020] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_multi_line_comment,
  [16030] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      sym_multi_line_comment,
  [16040] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      sym_multi_line_comment,
  [16050] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym_multi_line_comment,
  [16060] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(322), 1,
      sym_multi_line_comment,
  [16070] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1261), 1,
      aux_sym__octal_token1,
    STATE(323), 1,
      sym_multi_line_comment,
  [16080] = 3,
    ACTIONS(1249), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1263), 1,
      aux_sym__raw_string_token2,
    STATE(324), 1,
      sym_multi_line_comment,
  [16090] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1265), 1,
      anon_sym_DQUOTE,
    STATE(325), 1,
      sym_multi_line_comment,
  [16100] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1267), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      sym_multi_line_comment,
  [16110] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym_multi_line_comment,
  [16120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      sym_multi_line_comment,
  [16130] = 3,
    ACTIONS(1249), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1271), 1,
      aux_sym__raw_string_token2,
    STATE(329), 1,
      sym_multi_line_comment,
  [16140] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1273), 1,
      anon_sym_DQUOTE,
    STATE(330), 1,
      sym_multi_line_comment,
  [16150] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      sym_multi_line_comment,
  [16160] = 3,
    ACTIONS(1249), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1277), 1,
      aux_sym__raw_string_token2,
    STATE(332), 1,
      sym_multi_line_comment,
  [16170] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [16174] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [16178] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 648,
  [SMALL_STATE(15)] = 743,
  [SMALL_STATE(16)] = 816,
  [SMALL_STATE(17)] = 912,
  [SMALL_STATE(18)] = 1008,
  [SMALL_STATE(19)] = 1104,
  [SMALL_STATE(20)] = 1200,
  [SMALL_STATE(21)] = 1296,
  [SMALL_STATE(22)] = 1392,
  [SMALL_STATE(23)] = 1488,
  [SMALL_STATE(24)] = 1584,
  [SMALL_STATE(25)] = 1680,
  [SMALL_STATE(26)] = 1776,
  [SMALL_STATE(27)] = 1872,
  [SMALL_STATE(28)] = 1968,
  [SMALL_STATE(29)] = 2064,
  [SMALL_STATE(30)] = 2160,
  [SMALL_STATE(31)] = 2255,
  [SMALL_STATE(32)] = 2350,
  [SMALL_STATE(33)] = 2445,
  [SMALL_STATE(34)] = 2540,
  [SMALL_STATE(35)] = 2621,
  [SMALL_STATE(36)] = 2716,
  [SMALL_STATE(37)] = 2811,
  [SMALL_STATE(38)] = 2906,
  [SMALL_STATE(39)] = 3001,
  [SMALL_STATE(40)] = 3096,
  [SMALL_STATE(41)] = 3191,
  [SMALL_STATE(42)] = 3272,
  [SMALL_STATE(43)] = 3367,
  [SMALL_STATE(44)] = 3462,
  [SMALL_STATE(45)] = 3557,
  [SMALL_STATE(46)] = 3626,
  [SMALL_STATE(47)] = 3721,
  [SMALL_STATE(48)] = 3816,
  [SMALL_STATE(49)] = 3911,
  [SMALL_STATE(50)] = 4006,
  [SMALL_STATE(51)] = 4070,
  [SMALL_STATE(52)] = 4134,
  [SMALL_STATE(53)] = 4198,
  [SMALL_STATE(54)] = 4262,
  [SMALL_STATE(55)] = 4354,
  [SMALL_STATE(56)] = 4416,
  [SMALL_STATE(57)] = 4471,
  [SMALL_STATE(58)] = 4526,
  [SMALL_STATE(59)] = 4581,
  [SMALL_STATE(60)] = 4636,
  [SMALL_STATE(61)] = 4691,
  [SMALL_STATE(62)] = 4746,
  [SMALL_STATE(63)] = 4801,
  [SMALL_STATE(64)] = 4879,
  [SMALL_STATE(65)] = 4957,
  [SMALL_STATE(66)] = 5035,
  [SMALL_STATE(67)] = 5113,
  [SMALL_STATE(68)] = 5173,
  [SMALL_STATE(69)] = 5251,
  [SMALL_STATE(70)] = 5329,
  [SMALL_STATE(71)] = 5407,
  [SMALL_STATE(72)] = 5485,
  [SMALL_STATE(73)] = 5563,
  [SMALL_STATE(74)] = 5641,
  [SMALL_STATE(75)] = 5704,
  [SMALL_STATE(76)] = 5767,
  [SMALL_STATE(77)] = 5830,
  [SMALL_STATE(78)] = 5893,
  [SMALL_STATE(79)] = 5956,
  [SMALL_STATE(80)] = 6015,
  [SMALL_STATE(81)] = 6098,
  [SMALL_STATE(82)] = 6181,
  [SMALL_STATE(83)] = 6247,
  [SMALL_STATE(84)] = 6313,
  [SMALL_STATE(85)] = 6379,
  [SMALL_STATE(86)] = 6445,
  [SMALL_STATE(87)] = 6493,
  [SMALL_STATE(88)] = 6541,
  [SMALL_STATE(89)] = 6607,
  [SMALL_STATE(90)] = 6673,
  [SMALL_STATE(91)] = 6721,
  [SMALL_STATE(92)] = 6769,
  [SMALL_STATE(93)] = 6835,
  [SMALL_STATE(94)] = 6901,
  [SMALL_STATE(95)] = 6967,
  [SMALL_STATE(96)] = 7033,
  [SMALL_STATE(97)] = 7099,
  [SMALL_STATE(98)] = 7153,
  [SMALL_STATE(99)] = 7219,
  [SMALL_STATE(100)] = 7285,
  [SMALL_STATE(101)] = 7351,
  [SMALL_STATE(102)] = 7417,
  [SMALL_STATE(103)] = 7483,
  [SMALL_STATE(104)] = 7535,
  [SMALL_STATE(105)] = 7601,
  [SMALL_STATE(106)] = 7667,
  [SMALL_STATE(107)] = 7733,
  [SMALL_STATE(108)] = 7799,
  [SMALL_STATE(109)] = 7865,
  [SMALL_STATE(110)] = 7931,
  [SMALL_STATE(111)] = 7985,
  [SMALL_STATE(112)] = 8047,
  [SMALL_STATE(113)] = 8113,
  [SMALL_STATE(114)] = 8179,
  [SMALL_STATE(115)] = 8245,
  [SMALL_STATE(116)] = 8311,
  [SMALL_STATE(117)] = 8377,
  [SMALL_STATE(118)] = 8443,
  [SMALL_STATE(119)] = 8509,
  [SMALL_STATE(120)] = 8575,
  [SMALL_STATE(121)] = 8627,
  [SMALL_STATE(122)] = 8693,
  [SMALL_STATE(123)] = 8747,
  [SMALL_STATE(124)] = 8813,
  [SMALL_STATE(125)] = 8867,
  [SMALL_STATE(126)] = 8933,
  [SMALL_STATE(127)] = 8999,
  [SMALL_STATE(128)] = 9065,
  [SMALL_STATE(129)] = 9131,
  [SMALL_STATE(130)] = 9180,
  [SMALL_STATE(131)] = 9231,
  [SMALL_STATE(132)] = 9282,
  [SMALL_STATE(133)] = 9328,
  [SMALL_STATE(134)] = 9374,
  [SMALL_STATE(135)] = 9420,
  [SMALL_STATE(136)] = 9466,
  [SMALL_STATE(137)] = 9512,
  [SMALL_STATE(138)] = 9558,
  [SMALL_STATE(139)] = 9604,
  [SMALL_STATE(140)] = 9650,
  [SMALL_STATE(141)] = 9696,
  [SMALL_STATE(142)] = 9742,
  [SMALL_STATE(143)] = 9788,
  [SMALL_STATE(144)] = 9834,
  [SMALL_STATE(145)] = 9880,
  [SMALL_STATE(146)] = 9926,
  [SMALL_STATE(147)] = 9972,
  [SMALL_STATE(148)] = 10018,
  [SMALL_STATE(149)] = 10064,
  [SMALL_STATE(150)] = 10110,
  [SMALL_STATE(151)] = 10156,
  [SMALL_STATE(152)] = 10202,
  [SMALL_STATE(153)] = 10248,
  [SMALL_STATE(154)] = 10294,
  [SMALL_STATE(155)] = 10340,
  [SMALL_STATE(156)] = 10386,
  [SMALL_STATE(157)] = 10432,
  [SMALL_STATE(158)] = 10478,
  [SMALL_STATE(159)] = 10524,
  [SMALL_STATE(160)] = 10570,
  [SMALL_STATE(161)] = 10616,
  [SMALL_STATE(162)] = 10662,
  [SMALL_STATE(163)] = 10708,
  [SMALL_STATE(164)] = 10754,
  [SMALL_STATE(165)] = 10800,
  [SMALL_STATE(166)] = 10846,
  [SMALL_STATE(167)] = 10892,
  [SMALL_STATE(168)] = 10938,
  [SMALL_STATE(169)] = 10984,
  [SMALL_STATE(170)] = 11029,
  [SMALL_STATE(171)] = 11080,
  [SMALL_STATE(172)] = 11125,
  [SMALL_STATE(173)] = 11174,
  [SMALL_STATE(174)] = 11223,
  [SMALL_STATE(175)] = 11268,
  [SMALL_STATE(176)] = 11315,
  [SMALL_STATE(177)] = 11364,
  [SMALL_STATE(178)] = 11409,
  [SMALL_STATE(179)] = 11454,
  [SMALL_STATE(180)] = 11499,
  [SMALL_STATE(181)] = 11548,
  [SMALL_STATE(182)] = 11593,
  [SMALL_STATE(183)] = 11644,
  [SMALL_STATE(184)] = 11690,
  [SMALL_STATE(185)] = 11738,
  [SMALL_STATE(186)] = 11786,
  [SMALL_STATE(187)] = 11834,
  [SMALL_STATE(188)] = 11882,
  [SMALL_STATE(189)] = 11930,
  [SMALL_STATE(190)] = 11978,
  [SMALL_STATE(191)] = 12026,
  [SMALL_STATE(192)] = 12072,
  [SMALL_STATE(193)] = 12120,
  [SMALL_STATE(194)] = 12168,
  [SMALL_STATE(195)] = 12216,
  [SMALL_STATE(196)] = 12262,
  [SMALL_STATE(197)] = 12310,
  [SMALL_STATE(198)] = 12363,
  [SMALL_STATE(199)] = 12410,
  [SMALL_STATE(200)] = 12457,
  [SMALL_STATE(201)] = 12502,
  [SMALL_STATE(202)] = 12557,
  [SMALL_STATE(203)] = 12599,
  [SMALL_STATE(204)] = 12643,
  [SMALL_STATE(205)] = 12687,
  [SMALL_STATE(206)] = 12735,
  [SMALL_STATE(207)] = 12777,
  [SMALL_STATE(208)] = 12825,
  [SMALL_STATE(209)] = 12867,
  [SMALL_STATE(210)] = 12909,
  [SMALL_STATE(211)] = 12950,
  [SMALL_STATE(212)] = 12991,
  [SMALL_STATE(213)] = 13042,
  [SMALL_STATE(214)] = 13093,
  [SMALL_STATE(215)] = 13134,
  [SMALL_STATE(216)] = 13175,
  [SMALL_STATE(217)] = 13226,
  [SMALL_STATE(218)] = 13277,
  [SMALL_STATE(219)] = 13318,
  [SMALL_STATE(220)] = 13359,
  [SMALL_STATE(221)] = 13400,
  [SMALL_STATE(222)] = 13441,
  [SMALL_STATE(223)] = 13482,
  [SMALL_STATE(224)] = 13523,
  [SMALL_STATE(225)] = 13574,
  [SMALL_STATE(226)] = 13615,
  [SMALL_STATE(227)] = 13656,
  [SMALL_STATE(228)] = 13707,
  [SMALL_STATE(229)] = 13748,
  [SMALL_STATE(230)] = 13789,
  [SMALL_STATE(231)] = 13830,
  [SMALL_STATE(232)] = 13881,
  [SMALL_STATE(233)] = 13922,
  [SMALL_STATE(234)] = 13963,
  [SMALL_STATE(235)] = 14004,
  [SMALL_STATE(236)] = 14050,
  [SMALL_STATE(237)] = 14096,
  [SMALL_STATE(238)] = 14142,
  [SMALL_STATE(239)] = 14188,
  [SMALL_STATE(240)] = 14227,
  [SMALL_STATE(241)] = 14266,
  [SMALL_STATE(242)] = 14305,
  [SMALL_STATE(243)] = 14344,
  [SMALL_STATE(244)] = 14383,
  [SMALL_STATE(245)] = 14422,
  [SMALL_STATE(246)] = 14461,
  [SMALL_STATE(247)] = 14500,
  [SMALL_STATE(248)] = 14539,
  [SMALL_STATE(249)] = 14578,
  [SMALL_STATE(250)] = 14617,
  [SMALL_STATE(251)] = 14654,
  [SMALL_STATE(252)] = 14691,
  [SMALL_STATE(253)] = 14728,
  [SMALL_STATE(254)] = 14800,
  [SMALL_STATE(255)] = 14848,
  [SMALL_STATE(256)] = 14896,
  [SMALL_STATE(257)] = 14959,
  [SMALL_STATE(258)] = 14982,
  [SMALL_STATE(259)] = 15021,
  [SMALL_STATE(260)] = 15060,
  [SMALL_STATE(261)] = 15099,
  [SMALL_STATE(262)] = 15127,
  [SMALL_STATE(263)] = 15155,
  [SMALL_STATE(264)] = 15183,
  [SMALL_STATE(265)] = 15206,
  [SMALL_STATE(266)] = 15226,
  [SMALL_STATE(267)] = 15254,
  [SMALL_STATE(268)] = 15272,
  [SMALL_STATE(269)] = 15289,
  [SMALL_STATE(270)] = 15309,
  [SMALL_STATE(271)] = 15329,
  [SMALL_STATE(272)] = 15349,
  [SMALL_STATE(273)] = 15371,
  [SMALL_STATE(274)] = 15391,
  [SMALL_STATE(275)] = 15411,
  [SMALL_STATE(276)] = 15431,
  [SMALL_STATE(277)] = 15451,
  [SMALL_STATE(278)] = 15471,
  [SMALL_STATE(279)] = 15491,
  [SMALL_STATE(280)] = 15511,
  [SMALL_STATE(281)] = 15531,
  [SMALL_STATE(282)] = 15550,
  [SMALL_STATE(283)] = 15567,
  [SMALL_STATE(284)] = 15586,
  [SMALL_STATE(285)] = 15605,
  [SMALL_STATE(286)] = 15618,
  [SMALL_STATE(287)] = 15631,
  [SMALL_STATE(288)] = 15648,
  [SMALL_STATE(289)] = 15667,
  [SMALL_STATE(290)] = 15682,
  [SMALL_STATE(291)] = 15695,
  [SMALL_STATE(292)] = 15712,
  [SMALL_STATE(293)] = 15724,
  [SMALL_STATE(294)] = 15738,
  [SMALL_STATE(295)] = 15754,
  [SMALL_STATE(296)] = 15768,
  [SMALL_STATE(297)] = 15781,
  [SMALL_STATE(298)] = 15792,
  [SMALL_STATE(299)] = 15805,
  [SMALL_STATE(300)] = 15816,
  [SMALL_STATE(301)] = 15829,
  [SMALL_STATE(302)] = 15842,
  [SMALL_STATE(303)] = 15853,
  [SMALL_STATE(304)] = 15866,
  [SMALL_STATE(305)] = 15879,
  [SMALL_STATE(306)] = 15892,
  [SMALL_STATE(307)] = 15905,
  [SMALL_STATE(308)] = 15916,
  [SMALL_STATE(309)] = 15929,
  [SMALL_STATE(310)] = 15940,
  [SMALL_STATE(311)] = 15950,
  [SMALL_STATE(312)] = 15960,
  [SMALL_STATE(313)] = 15970,
  [SMALL_STATE(314)] = 15980,
  [SMALL_STATE(315)] = 15990,
  [SMALL_STATE(316)] = 16000,
  [SMALL_STATE(317)] = 16010,
  [SMALL_STATE(318)] = 16020,
  [SMALL_STATE(319)] = 16030,
  [SMALL_STATE(320)] = 16040,
  [SMALL_STATE(321)] = 16050,
  [SMALL_STATE(322)] = 16060,
  [SMALL_STATE(323)] = 16070,
  [SMALL_STATE(324)] = 16080,
  [SMALL_STATE(325)] = 16090,
  [SMALL_STATE(326)] = 16100,
  [SMALL_STATE(327)] = 16110,
  [SMALL_STATE(328)] = 16120,
  [SMALL_STATE(329)] = 16130,
  [SMALL_STATE(330)] = 16140,
  [SMALL_STATE(331)] = 16150,
  [SMALL_STATE(332)] = 16160,
  [SMALL_STATE(333)] = 16170,
  [SMALL_STATE(334)] = 16174,
  [SMALL_STATE(335)] = 16178,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(226),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(81),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(34),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(284),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(310),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(314),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(203),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(203),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(54),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(54),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(308),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(278),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(216),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(45),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(277),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(216),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(55),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(277),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(55),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(277),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(53),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(50),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(55),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(277),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(55),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(277),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(308),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(278),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(224),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(79),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(279),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(242),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(241),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(248),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(224),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(103),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(279),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(103),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(279),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(103),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(279),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(97),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(279),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(224),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(79),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(279),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(120),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(278),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(103),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(122),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(129),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 14),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 7),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 15),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 15),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 13),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 13),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 10),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 10),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 13),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 13),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 6),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 6),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 10),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 10),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 10),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 10),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 6),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 6),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 15),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 6),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 6),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 14),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 13),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 13),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(175),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__binary_repeat1, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(183),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octal_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 12),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 12),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 5),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string, 5),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 9),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3, .production_id = 9),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(191),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(195),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hex_repeat1, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 2),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [850] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(216),
  [854] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [857] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(55),
  [861] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(277),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(200),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(231),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(213),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(278),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_string, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [912] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [915] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(55),
  [919] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(277),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 2),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [933] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(205),
  [937] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(277),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 12),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 5, .production_id = 12),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(231),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(120),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(278),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 9),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 9),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 3),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_field, 1),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_field, 1),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 3, .production_id = 8),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field_comment, 3, .production_id = 8),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field, 1),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field, 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 2, .production_id = 5),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field_comment, 2, .production_id = 5),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(120),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(278),
  [1058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(237),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(120),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(278),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(235),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 4),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 8, .production_id = 4),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 4),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6, .production_id = 4),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 4),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5, .production_id = 4),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 4),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 7, .production_id = 4),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 4),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4, .production_id = 4),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 4),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3, .production_id = 4),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(265),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sign, 1),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sign, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [1203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(295),
  [1206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(295),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(292),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 1),
  [1222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(297),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1255] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
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
