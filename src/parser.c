#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 4
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 17

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
  aux_sym__newline_token1 = 74,
  aux_sym__newline_token2 = 75,
  aux_sym__newline_token3 = 76,
  aux_sym__newline_token4 = 77,
  aux_sym__newline_token5 = 78,
  aux_sym__newline_token6 = 79,
  aux_sym__newline_token7 = 80,
  sym__bom = 81,
  sym__unicode_space = 82,
  anon_sym_SLASH_SLASH = 83,
  aux_sym_single_line_comment_token1 = 84,
  anon_sym_SLASH_STAR = 85,
  anon_sym_STAR_SLASH = 86,
  anon_sym_STAR = 87,
  anon_sym_SLASH = 88,
  aux_sym_commented_block_token1 = 89,
  sym__eof = 90,
  sym_document = 91,
  sym_node = 92,
  sym_node_field = 93,
  sym__node_field_comment = 94,
  sym__node_field = 95,
  sym_node_children = 96,
  sym__node_space = 97,
  sym__node_terminator = 98,
  sym_identifier = 99,
  sym__bare_identifier = 100,
  sym_keyword = 101,
  sym_annotation_type = 102,
  sym_prop = 103,
  sym_value = 104,
  sym_type = 105,
  sym_string = 106,
  sym__escaped_string = 107,
  sym__raw_string = 108,
  sym_number = 109,
  sym__decimal = 110,
  sym__exponent = 111,
  sym__integer = 112,
  sym__sign = 113,
  sym__hex = 114,
  sym__octal = 115,
  sym__binary = 116,
  sym_boolean = 117,
  sym__escline = 118,
  sym__linespace = 119,
  sym__newline = 120,
  sym__ws = 121,
  sym_single_line_comment = 122,
  sym_multi_line_comment = 123,
  sym_commented_block = 124,
  aux_sym_document_repeat1 = 125,
  aux_sym_document_repeat2 = 126,
  aux_sym_node_repeat1 = 127,
  aux_sym_node_repeat2 = 128,
  aux_sym_node_repeat3 = 129,
  aux_sym__bare_identifier_repeat1 = 130,
  aux_sym__escaped_string_repeat1 = 131,
  aux_sym__raw_string_repeat1 = 132,
  aux_sym__integer_repeat1 = 133,
  aux_sym__hex_repeat1 = 134,
  aux_sym__octal_repeat1 = 135,
  aux_sym__binary_repeat1 = 136,
  aux_sym_single_line_comment_repeat1 = 137,
  alias_sym_decimal = 138,
  alias_sym_node_children_comment = 139,
  alias_sym_node_field_comment = 140,
  alias_sym_text = 141,
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
  [aux_sym__newline_token1] = "_newline_token1",
  [aux_sym__newline_token2] = "_newline_token2",
  [aux_sym__newline_token3] = "_newline_token3",
  [aux_sym__newline_token4] = "_newline_token4",
  [aux_sym__newline_token5] = "_newline_token5",
  [aux_sym__newline_token6] = "_newline_token6",
  [aux_sym__newline_token7] = "_newline_token7",
  [sym__bom] = "_bom",
  [sym__unicode_space] = "_unicode_space",
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
  [alias_sym_text] = "text",
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
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [aux_sym__newline_token2] = aux_sym__newline_token2,
  [aux_sym__newline_token3] = aux_sym__newline_token3,
  [aux_sym__newline_token4] = aux_sym__newline_token4,
  [aux_sym__newline_token5] = aux_sym__newline_token5,
  [aux_sym__newline_token6] = aux_sym__newline_token6,
  [aux_sym__newline_token7] = aux_sym__newline_token7,
  [sym__bom] = sym__bom,
  [sym__unicode_space] = sym__unicode_space,
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
  [alias_sym_text] = alias_sym_text,
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
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token7] = {
    .visible = false,
    .named = false,
  },
  [sym__bom] = {
    .visible = false,
    .named = true,
  },
  [sym__unicode_space] = {
    .visible = false,
    .named = true,
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
  [alias_sym_text] = {
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
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 2, .length = 1},
  [11] = {.index = 3, .length = 1},
  [12] = {.index = 3, .length = 1},
  [14] = {.index = 4, .length = 1},
  [15] = {.index = 4, .length = 1},
  [16] = {.index = 5, .length = 1},
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
  [1] = {
    [1] = alias_sym_text,
  },
  [4] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [5] = {
    [0] = alias_sym_node_children_comment,
  },
  [6] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
  },
  [8] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [9] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
    [2] = alias_sym_node_field_comment,
  },
  [10] = {
    [2] = alias_sym_decimal,
  },
  [12] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [13] = {
    [3] = alias_sym_decimal,
  },
  [15] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [16] = {
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
  aux_sym__escaped_string_repeat1, 2,
    aux_sym__escaped_string_repeat1,
    alias_sym_text,
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
  [10] = 9,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 16,
  [81] = 59,
  [82] = 45,
  [83] = 83,
  [84] = 56,
  [85] = 57,
  [86] = 61,
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
  [99] = 55,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 50,
  [111] = 111,
  [112] = 112,
  [113] = 53,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 52,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 54,
  [131] = 131,
  [132] = 50,
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
  [169] = 169,
  [170] = 170,
  [171] = 60,
  [172] = 59,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 58,
  [179] = 179,
  [180] = 57,
  [181] = 62,
  [182] = 61,
  [183] = 183,
  [184] = 56,
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
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 16,
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
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 230,
  [233] = 230,
  [234] = 231,
  [235] = 45,
  [236] = 231,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 55,
  [241] = 241,
  [242] = 54,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 53,
  [247] = 247,
  [248] = 248,
  [249] = 52,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 62,
  [258] = 256,
  [259] = 256,
  [260] = 60,
  [261] = 58,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 254,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 269,
  [273] = 271,
  [274] = 271,
  [275] = 275,
  [276] = 269,
  [277] = 269,
  [278] = 271,
  [279] = 269,
  [280] = 271,
  [281] = 200,
  [282] = 282,
  [283] = 283,
  [284] = 56,
  [285] = 199,
  [286] = 201,
  [287] = 57,
  [288] = 288,
  [289] = 61,
  [290] = 283,
  [291] = 282,
  [292] = 292,
  [293] = 293,
  [294] = 190,
  [295] = 186,
  [296] = 221,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 297,
  [302] = 302,
  [303] = 303,
  [304] = 297,
  [305] = 303,
  [306] = 207,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 208,
  [318] = 318,
  [319] = 319,
  [320] = 311,
  [321] = 310,
  [322] = 322,
  [323] = 323,
  [324] = 202,
  [325] = 325,
  [326] = 203,
  [327] = 209,
  [328] = 325,
  [329] = 329,
  [330] = 313,
  [331] = 323,
  [332] = 314,
  [333] = 56,
  [334] = 61,
  [335] = 57,
};

static inline bool sym__normal_bare_identifier_character_set_1(int32_t c) {
  return (c < 10133
    ? (c < 9851
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
        : (c <= 9742 || (c < 9774
          ? (c < 9760
            ? (c < 9752
              ? (c < 9748
                ? c == 9745
                : c <= 9749)
              : (c <= 9752 || c == 9757))
            : (c <= 9760 || (c < 9766
              ? (c >= 9762 && c <= 9763)
              : (c <= 9766 || c == 9770))))
          : (c <= 9775 || (c < 9823
            ? (c < 9794
              ? (c < 9792
                ? (c >= 9784 && c <= 9786)
                : c <= 9792)
              : (c <= 9794 || (c >= 9800 && c <= 9811)))
            : (c <= 9824 || (c < 9829
              ? c == 9827
              : (c <= 9830 || c == 9832))))))))
      : (c <= 9851 || (c < 9986
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
            : (c <= 9962 || (c < 9975
              ? (c >= 9968 && c <= 9973)
              : (c <= 9978 || c == 9981))))))
        : (c <= 9986 || (c < 10024
          ? (c < 10004
            ? (c < 9999
              ? (c < 9992
                ? c == 9989
                : c <= 9997)
              : (c <= 9999 || c == 10002))
            : (c <= 10004 || (c < 10013
              ? c == 10006
              : (c <= 10013 || c == 10017))))
          : (c <= 10024 || (c < 10062
            ? (c < 10055
              ? (c < 10052
                ? (c >= 10035 && c <= 10036)
                : c <= 10052)
              : (c <= 10055 || c == 10060))
            : (c <= 10062 || (c < 10071
              ? (c >= 10067 && c <= 10069)
              : (c <= 10071 || (c >= 10083 && c <= 10084)))))))))))
    : (c <= 10135 || (c < 128391
      ? (c < 127462
        ? (c < 12349
          ? (c < 11013
            ? (c < 10175
              ? (c < 10160
                ? c == 10145
                : c <= 10160)
              : (c <= 10175 || (c >= 10548 && c <= 10549)))
            : (c <= 11015 || (c < 11093
              ? (c < 11088
                ? (c >= 11035 && c <= 11036)
                : c <= 11088)
              : (c <= 11093 || c == 12336))))
          : (c <= 12349 || (c < 127344
            ? (c < 126980
              ? (c < 12953
                ? c == 12951
                : c <= 12953)
              : (c <= 126980 || c == 127183))
            : (c <= 127345 || (c < 127374
              ? (c >= 127358 && c <= 127359)
              : (c <= 127374 || (c >= 127377 && c <= 127386)))))))
        : (c <= 127487 || (c < 127897
          ? (c < 127568
            ? (c < 127535
              ? (c < 127514
                ? (c >= 127489 && c <= 127490)
                : c <= 127514)
              : (c <= 127535 || (c >= 127538 && c <= 127546)))
            : (c <= 127569 || (c < 127780
              ? (c >= 127744 && c <= 127777)
              : (c <= 127891 || (c >= 127894 && c <= 127895)))))
          : (c <= 127899 || (c < 128329
            ? (c < 127991
              ? (c < 127987
                ? (c >= 127902 && c <= 127984)
                : c <= 127989)
              : (c <= 128253 || (c >= 128255 && c <= 128317)))
            : (c <= 128334 || (c < 128367
              ? (c >= 128336 && c <= 128359)
              : (c <= 128368 || (c >= 128371 && c <= 128378)))))))))
      : (c <= 128391 || (c < 128725
        ? (c < 128476
          ? (c < 128424
            ? (c < 128405
              ? (c < 128400
                ? (c >= 128394 && c <= 128397)
                : c <= 128400)
              : (c <= 128406 || (c >= 128420 && c <= 128421)))
            : (c <= 128424 || (c < 128450
              ? (c < 128444
                ? (c >= 128433 && c <= 128434)
                : c <= 128444)
              : (c <= 128452 || (c >= 128465 && c <= 128467)))))
          : (c <= 128478 || (c < 128499
            ? (c < 128488
              ? (c < 128483
                ? c == 128481
                : c <= 128483)
              : (c <= 128488 || c == 128495))
            : (c <= 128499 || (c < 128640
              ? (c >= 128506 && c <= 128591)
              : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
        : (c <= 128727 || (c < 129340
          ? (c < 128755
            ? (c < 128747
              ? (c < 128745
                ? (c >= 128732 && c <= 128741)
                : c <= 128745)
              : (c <= 128748 || c == 128752))
            : (c <= 128764 || (c < 129008
              ? (c >= 128992 && c <= 129003)
              : (c <= 129008 || (c >= 129292 && c <= 129338)))))
          : (c <= 129349 || (c < 129727
            ? (c < 129664
              ? (c < 129648
                ? (c >= 129351 && c <= 129535)
                : c <= 129660)
              : (c <= 129672 || (c >= 129680 && c <= 129725)))
            : (c <= 129733 || (c < 129760
              ? (c >= 129742 && c <= 129755)
              : (c <= 129768 || (c >= 129776 && c <= 129784)))))))))))));
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
              : (c <= 3315 || (c < 3398
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
                  ? (c >= 3784 && c <= 3790)
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
                  : c <= 67880)))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_3(int32_t c) {
  return (c < 8488
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
      : (c <= 3277 || (c < 5743
        ? (c < 3840
          ? (c < 3530
            ? (c < 3402
              ? (c < 3313
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))
                : (c <= 3315 || (c < 3346
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
                    : c <= 3790)
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
        : (c <= 5786 || (c < 7245
          ? (c < 6432
            ? (c < 6103
              ? (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))
                : (c <= 5971 || (c < 6002
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))))
              : (c <= 6103 || (c < 6159
                ? (c < 6128
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6137 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))))
            : (c <= 6443 || (c < 6783
              ? (c < 6576
                ? (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))))
              : (c <= 6793 || (c < 6992
                ? (c < 6832
                  ? (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))
                : (c <= 7001 || (c < 7168
                  ? (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))))))))
          : (c <= 7293 || (c < 8144
            ? (c < 8016
              ? (c < 7380
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8336
              ? (c < 8252
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8252 || (c < 8308
                  ? (c < 8304
                    ? c == 8265
                    : c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))))
              : (c <= 8348 || (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8400 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c < 8482
                    ? (c >= 8473 && c <= 8477)
                    : c <= 8482)
                  : (c <= 8484 || c == 8486))))))))))))))
    : (c <= 8488 || (c < 43642
      ? (c < 10160
        ? (c < 9851
          ? (c < 9723
            ? (c < 9000
              ? (c < 8526
                ? (c < 8508
                  ? (c < 8495
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
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
        : (c <= 10160 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 11013
                  ? (c < 10548
                    ? c == 10175
                    : c <= 10549)
                  : (c <= 11015 || (c >= 11035 && c <= 11036)))
                : (c <= 11088 || (c < 11499
                  ? (c < 11264
                    ? c == 11093
                    : c <= 11492)
                  : (c <= 11507 || c == 11517))))
              : (c <= 11557 || (c < 11647
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))))
            : (c <= 11718 || (c < 12441
              ? (c < 11823
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11823 || (c < 12344
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12341)
                  : (c <= 12349 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12690 && c <= 12693)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))))))))
          : (c <= 12879 || (c < 42963
            ? (c < 42192
              ? (c < 12977
                ? (c < 12951
                  ? (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : c <= 12937)
                  : (c <= 12951 || c == 12953))
                : (c <= 12991 || (c < 19968
                  ? (c < 19903
                    ? c == 13312
                    : c <= 19903)
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42610 || (c >= 42612 && c <= 42621)))
                : (c <= 42737 || (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))))
            : (c <= 42963 || (c < 43261
              ? (c < 43072
                ? (c < 43052
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43047)
                  : (c <= 43052 || (c >= 43056 && c <= 43061)))
                : (c <= 43123 || (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || c == 43259))))
              : (c <= 43309 || (c < 43488
                ? (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))))))))))
      : (c <= 43714 || (c < 67072
        ? (c < 65382
          ? (c < 64256
            ? (c < 43868
              ? (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))
              : (c <= 43881 || (c < 55203
                ? (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || c == 44032))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))))
            : (c <= 64262 || (c < 64848
              ? (c < 64318
                ? (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65136
                ? (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))))))
          : (c <= 65470 || (c < 66349
            ? (c < 65616
              ? (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))
              : (c <= 65629 || (c < 66045
                ? (c < 65856
                  ? (c < 65799
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65843)
                  : (c <= 65912 || (c >= 65930 && c <= 65931)))
                : (c <= 66045 || (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))))
            : (c <= 66378 || (c < 66816
              ? (c < 66513
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 66964
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))
        : (c <= 67382 || (c < 128336
          ? (c < 127183
            ? (c < 67644
              ? (c < 67506
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67705
                  ? (c < 67672
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67835
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67867)
                  : (c <= 67880 || c == 126980))))))
            : (c <= 127183 || (c < 127568
              ? (c < 127462
                ? (c < 127374
                  ? (c < 127358
                    ? (c >= 127344 && c <= 127345)
                    : c <= 127359)
                  : (c <= 127374 || (c >= 127377 && c <= 127386)))
                : (c <= 127487 || (c < 127535
                  ? (c < 127514
                    ? (c >= 127489 && c <= 127490)
                    : c <= 127514)
                  : (c <= 127535 || (c >= 127538 && c <= 127546)))))
              : (c <= 127569 || (c < 127902
                ? (c < 127894
                  ? (c < 127780
                    ? (c >= 127744 && c <= 127777)
                    : c <= 127891)
                  : (c <= 127895 || (c >= 127897 && c <= 127899)))
                : (c <= 127984 || (c < 128255
                  ? (c < 127991
                    ? (c >= 127987 && c <= 127989)
                    : c <= 128253)
                  : (c <= 128317 || (c >= 128329 && c <= 128334)))))))))
          : (c <= 128359 || (c < 128640
            ? (c < 128444
              ? (c < 128400
                ? (c < 128391
                  ? (c < 128371
                    ? (c >= 128367 && c <= 128368)
                    : c <= 128378)
                  : (c <= 128391 || (c >= 128394 && c <= 128397)))
                : (c <= 128400 || (c < 128424
                  ? (c < 128420
                    ? (c >= 128405 && c <= 128406)
                    : c <= 128421)
                  : (c <= 128424 || (c >= 128433 && c <= 128434)))))
              : (c <= 128444 || (c < 128483
                ? (c < 128476
                  ? (c < 128465
                    ? (c >= 128450 && c <= 128452)
                    : c <= 128467)
                  : (c <= 128478 || c == 128481))
                : (c <= 128483 || (c < 128499
                  ? (c < 128495
                    ? c == 128488
                    : c <= 128495)
                  : (c <= 128499 || (c >= 128506 && c <= 128591)))))))
            : (c <= 128709 || (c < 129292
              ? (c < 128747
                ? (c < 128732
                  ? (c < 128725
                    ? (c >= 128715 && c <= 128722)
                    : c <= 128727)
                  : (c <= 128741 || c == 128745))
                : (c <= 128748 || (c < 128992
                  ? (c < 128755
                    ? c == 128752
                    : c <= 128764)
                  : (c <= 129003 || c == 129008))))
              : (c <= 129338 || (c < 129680
                ? (c < 129648
                  ? (c < 129351
                    ? (c >= 129340 && c <= 129349)
                    : c <= 129535)
                  : (c <= 129660 || (c >= 129664 && c <= 129672)))
                : (c <= 129725 || (c < 129760
                  ? (c < 129742
                    ? (c >= 129727 && c <= 129733)
                    : c <= 129755)
                  : (c <= 129768 || (c >= 129776 && c <= 129784)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_4(int32_t c) {
  return (c < 8490
    ? (c < 3285
      ? (c < 2579
        ? (c < 1552
          ? (c < 886
            ? (c < 185
              ? (c < 'a'
                ? (c < '?'
                  ? (c < '.'
                    ? (c >= '!' && c <= '*')
                    : c <= ':')
                  : (c <= 'Z' || (c >= '^' && c <= '_')))
                : (c <= '~' || (c < 178
                  ? (c < 174
                    ? (c >= 169 && c <= 170)
                    : c <= 174)
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c < 192
                    ? (c >= 188 && c <= 190)
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 768 && c <= 884)))))))
            : (c <= 887 || (c < 1329
              ? (c < 908
                ? (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1155 && c <= 1327)))))
              : (c <= 1366 || (c < 1473
                ? (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || c == 1471))
                : (c <= 1474 || (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))))))
          : (c <= 1562 || (c < 2417
            ? (c < 2042
              ? (c < 1770
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c >= 1759 && c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))))
              : (c <= 2042 || (c < 2160
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))))))
            : (c <= 2435 || (c < 2519
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))
              : (c <= 2519 || (c < 2556
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))))))))
        : (c <= 2600 || (c < 2918
          ? (c < 2748
            ? (c < 2649
              ? (c < 2620
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2620 || (c < 2635
                  ? (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2703
                ? (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))
            : (c <= 2757 || (c < 2835
              ? (c < 2790
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2887
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))))))
          : (c <= 2927 || (c < 3090
            ? (c < 2984
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2946
                    ? (c >= 2929 && c <= 2935)
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3024
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))
            : (c <= 3112 || (c < 3192
              ? (c < 3157
                ? (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))))))))))))
      : (c <= 3286 || (c < 5792
        ? (c < 3864
          ? (c < 3535
            ? (c < 3412
              ? (c < 3328
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3315)))
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
                    ? (c >= 3784 && c <= 3790)
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
    : (c <= 8493 || (c < 43739
      ? (c < 10175
        ? (c < 9854
          ? (c < 9728
            ? (c < 9167
              ? (c < 8528
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 8986
                  ? (c < 8617
                    ? (c >= 8596 && c <= 8601)
                    : c <= 8618)
                  : (c <= 8987 || c == 9000))))
              : (c <= 9167 || (c < 9450
                ? (c < 9312
                  ? (c < 9208
                    ? (c >= 9193 && c <= 9203)
                    : c <= 9210)
                  : (c <= 9371 || c == 9410))
                : (c <= 9471 || (c < 9664
                  ? (c < 9654
                    ? (c >= 9642 && c <= 9643)
                    : c <= 9654)
                  : (c <= 9664 || (c >= 9723 && c <= 9726)))))))
            : (c <= 9732 || (c < 9774
              ? (c < 9757
                ? (c < 9748
                  ? (c < 9745
                    ? c == 9742
                    : c <= 9745)
                  : (c <= 9749 || c == 9752))
                : (c <= 9757 || (c < 9766
                  ? (c < 9762
                    ? c == 9760
                    : c <= 9763)
                  : (c <= 9766 || c == 9770))))
              : (c <= 9775 || (c < 9823
                ? (c < 9794
                  ? (c < 9792
                    ? (c >= 9784 && c <= 9786)
                    : c <= 9792)
                  : (c <= 9794 || (c >= 9800 && c <= 9811)))
                : (c <= 9824 || (c < 9832
                  ? (c < 9829
                    ? c == 9827
                    : c <= 9830)
                  : (c <= 9832 || c == 9851))))))))
          : (c <= 9855 || (c < 9992
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
                : (c <= 9973 || (c < 9986
                  ? (c < 9981
                    ? (c >= 9975 && c <= 9978)
                    : c <= 9981)
                  : (c <= 9986 || c == 9989))))))
            : (c <= 9997 || (c < 10055
              ? (c < 10013
                ? (c < 10004
                  ? (c < 10002
                    ? c == 9999
                    : c <= 10002)
                  : (c <= 10004 || c == 10006))
                : (c <= 10013 || (c < 10035
                  ? (c < 10024
                    ? c == 10017
                    : c <= 10024)
                  : (c <= 10036 || c == 10052))))
              : (c <= 10055 || (c < 10083
                ? (c < 10067
                  ? (c < 10062
                    ? c == 10060
                    : c <= 10062)
                  : (c <= 10069 || c == 10071))
                : (c <= 10084 || (c < 10145
                  ? (c < 10133
                    ? (c >= 10102 && c <= 10131)
                    : c <= 10135)
                  : (c <= 10145 || c == 10160))))))))))
        : (c <= 10175 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11035
                  ? (c < 11013
                    ? (c >= 10548 && c <= 10549)
                    : c <= 11015)
                  : (c <= 11036 || c == 11088))
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
      : (c <= 43741 || (c < 67392
        ? (c < 65474
          ? (c < 64275
            ? (c < 43888
              ? (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))
              : (c <= 44010 || (c < 55216
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 44032 || c == 55203))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))))
            : (c <= 64279 || (c < 64914
              ? (c < 64320
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))
              : (c <= 64967 || (c < 65142
                ? (c < 65056
                  ? (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)
                  : (c <= 65071 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))))))))
          : (c <= 65479 || (c < 66384
            ? (c < 65664
              ? (c < 65549
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))
              : (c <= 65786 || (c < 66176
                ? (c < 65930
                  ? (c < 65856
                    ? (c >= 65799 && c <= 65843)
                    : c <= 65912)
                  : (c <= 65931 || c == 66045))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))))
            : (c <= 66426 || (c < 66864
              ? (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))))
              : (c <= 66915 || (c < 66967
                ? (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 67003
                  ? (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 128367
          ? (c < 127344
            ? (c < 67647
              ? (c < 67584
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c < 67705
                    ? (c >= 67672 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 126980
                  ? (c < 67872
                    ? (c >= 67835 && c <= 67867)
                    : c <= 67880)
                  : (c <= 126980 || c == 127183))))))
            : (c <= 127345 || (c < 127744
              ? (c < 127489
                ? (c < 127377
                  ? (c < 127374
                    ? (c >= 127358 && c <= 127359)
                    : c <= 127374)
                  : (c <= 127386 || (c >= 127462 && c <= 127487)))
                : (c <= 127490 || (c < 127538
                  ? (c < 127535
                    ? c == 127514
                    : c <= 127535)
                  : (c <= 127546 || (c >= 127568 && c <= 127569)))))
              : (c <= 127777 || (c < 127987
                ? (c < 127897
                  ? (c < 127894
                    ? (c >= 127780 && c <= 127891)
                    : c <= 127895)
                  : (c <= 127899 || (c >= 127902 && c <= 127984)))
                : (c <= 127989 || (c < 128329
                  ? (c < 128255
                    ? (c >= 127991 && c <= 128253)
                    : c <= 128317)
                  : (c <= 128334 || (c >= 128336 && c <= 128359)))))))))
          : (c <= 128368 || (c < 128715
            ? (c < 128450
              ? (c < 128405
                ? (c < 128394
                  ? (c < 128391
                    ? (c >= 128371 && c <= 128378)
                    : c <= 128391)
                  : (c <= 128397 || c == 128400))
                : (c <= 128406 || (c < 128433
                  ? (c < 128424
                    ? (c >= 128420 && c <= 128421)
                    : c <= 128424)
                  : (c <= 128434 || c == 128444))))
              : (c <= 128452 || (c < 128488
                ? (c < 128481
                  ? (c < 128476
                    ? (c >= 128465 && c <= 128467)
                    : c <= 128478)
                  : (c <= 128481 || c == 128483))
                : (c <= 128488 || (c < 128506
                  ? (c < 128499
                    ? c == 128495
                    : c <= 128499)
                  : (c <= 128591 || (c >= 128640 && c <= 128709)))))))
            : (c <= 128722 || (c < 129340
              ? (c < 128752
                ? (c < 128745
                  ? (c < 128732
                    ? (c >= 128725 && c <= 128727)
                    : c <= 128741)
                  : (c <= 128745 || (c >= 128747 && c <= 128748)))
                : (c <= 128752 || (c < 129008
                  ? (c < 128992
                    ? (c >= 128755 && c <= 128764)
                    : c <= 129003)
                  : (c <= 129008 || (c >= 129292 && c <= 129338)))))
              : (c <= 129349 || (c < 129727
                ? (c < 129664
                  ? (c < 129648
                    ? (c >= 129351 && c <= 129535)
                    : c <= 129660)
                  : (c <= 129672 || (c >= 129680 && c <= 129725)))
                : (c <= 129733 || (c < 129760
                  ? (c >= 129742 && c <= 129755)
                  : (c <= 129768 || (c >= 129776 && c <= 129784)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_5(int32_t c) {
  return (c < 8484
    ? (c < 3260
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
        : (c <= 2563 || (c < 2901
          ? (c < 2730
            ? (c < 2631
              ? (c < 2610
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
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
                    ? (c >= 3313 && c <= 3315)
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
                  : (c <= 3790 || (c >= 3792 && c <= 3801)))))))))
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
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43616
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12832
          ? (c < 11704
            ? (c < 11517
              ? (c < 11035
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c >= 11013 && c <= 11015)))
                : (c <= 11036 || (c < 11264
                  ? (c < 11093
                    ? c == 11088
                    : c <= 11093)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))))
              : (c <= 11517 || (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))))
            : (c <= 11710 || (c < 12353
              ? (c < 11744
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11775 || (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12341 || (c >= 12344 && c <= 12349)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c < 12690
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))))))
          : (c <= 12841 || (c < 42960
            ? (c < 40959
              ? (c < 12953
                ? (c < 12928
                  ? (c < 12881
                    ? (c >= 12872 && c <= 12879)
                    : c <= 12895)
                  : (c <= 12937 || c == 12951))
                : (c <= 12953 || (c < 19903
                  ? (c < 13312
                    ? (c >= 12977 && c <= 12991)
                    : c <= 13312)
                  : (c <= 19903 || c == 19968))))
              : (c <= 42124 || (c < 42612
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))
                : (c <= 42621 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43056
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || c == 43052))
                : (c <= 43061 || (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c >= 43232 && c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))
      : (c <= 43638 || (c < 67072
        ? (c < 65382
          ? (c < 64256
            ? (c < 43868
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))
              : (c <= 43881 || (c < 55203
                ? (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || c == 44032))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))))
            : (c <= 64262 || (c < 64848
              ? (c < 64318
                ? (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65136
                ? (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))))))
          : (c <= 65470 || (c < 66349
            ? (c < 65616
              ? (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))
              : (c <= 65629 || (c < 66045
                ? (c < 65856
                  ? (c < 65799
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65843)
                  : (c <= 65912 || (c >= 65930 && c <= 65931)))
                : (c <= 66045 || (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))))
            : (c <= 66378 || (c < 66816
              ? (c < 66513
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 66964
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))
        : (c <= 67382 || (c < 128336
          ? (c < 127183
            ? (c < 67644
              ? (c < 67506
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67705
                  ? (c < 67672
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67835
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67867)
                  : (c <= 67880 || c == 126980))))))
            : (c <= 127183 || (c < 127568
              ? (c < 127462
                ? (c < 127374
                  ? (c < 127358
                    ? (c >= 127344 && c <= 127345)
                    : c <= 127359)
                  : (c <= 127374 || (c >= 127377 && c <= 127386)))
                : (c <= 127487 || (c < 127535
                  ? (c < 127514
                    ? (c >= 127489 && c <= 127490)
                    : c <= 127514)
                  : (c <= 127535 || (c >= 127538 && c <= 127546)))))
              : (c <= 127569 || (c < 127902
                ? (c < 127894
                  ? (c < 127780
                    ? (c >= 127744 && c <= 127777)
                    : c <= 127891)
                  : (c <= 127895 || (c >= 127897 && c <= 127899)))
                : (c <= 127984 || (c < 128255
                  ? (c < 127991
                    ? (c >= 127987 && c <= 127989)
                    : c <= 128253)
                  : (c <= 128317 || (c >= 128329 && c <= 128334)))))))))
          : (c <= 128359 || (c < 128640
            ? (c < 128444
              ? (c < 128400
                ? (c < 128391
                  ? (c < 128371
                    ? (c >= 128367 && c <= 128368)
                    : c <= 128378)
                  : (c <= 128391 || (c >= 128394 && c <= 128397)))
                : (c <= 128400 || (c < 128424
                  ? (c < 128420
                    ? (c >= 128405 && c <= 128406)
                    : c <= 128421)
                  : (c <= 128424 || (c >= 128433 && c <= 128434)))))
              : (c <= 128444 || (c < 128483
                ? (c < 128476
                  ? (c < 128465
                    ? (c >= 128450 && c <= 128452)
                    : c <= 128467)
                  : (c <= 128478 || c == 128481))
                : (c <= 128483 || (c < 128499
                  ? (c < 128495
                    ? c == 128488
                    : c <= 128495)
                  : (c <= 128499 || (c >= 128506 && c <= 128591)))))))
            : (c <= 128709 || (c < 129292
              ? (c < 128747
                ? (c < 128732
                  ? (c < 128725
                    ? (c >= 128715 && c <= 128722)
                    : c <= 128727)
                  : (c <= 128741 || c == 128745))
                : (c <= 128748 || (c < 128992
                  ? (c < 128755
                    ? c == 128752
                    : c <= 128764)
                  : (c <= 129003 || c == 129008))))
              : (c <= 129338 || (c < 129680
                ? (c < 129648
                  ? (c < 129351
                    ? (c >= 129340 && c <= 129349)
                    : c <= 129535)
                  : (c <= 129660 || (c >= 129664 && c <= 129672)))
                : (c <= 129725 || (c < 129760
                  ? (c < 129742
                    ? (c >= 129727 && c <= 129733)
                    : c <= 129755)
                  : (c <= 129768 || (c >= 129776 && c <= 129784)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_6(int32_t c) {
  return (c < 8484
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
                    ? (c >= 3313 && c <= 3315)
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
                  : (c <= 3790 || (c >= 3792 && c <= 3801)))))))))
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
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43616
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12832
          ? (c < 11704
            ? (c < 11517
              ? (c < 11035
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c >= 11013 && c <= 11015)))
                : (c <= 11036 || (c < 11264
                  ? (c < 11093
                    ? c == 11088
                    : c <= 11093)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))))
              : (c <= 11517 || (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))))
            : (c <= 11710 || (c < 12353
              ? (c < 11744
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11775 || (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12341 || (c >= 12344 && c <= 12349)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c < 12690
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))))))
          : (c <= 12841 || (c < 42960
            ? (c < 40959
              ? (c < 12953
                ? (c < 12928
                  ? (c < 12881
                    ? (c >= 12872 && c <= 12879)
                    : c <= 12895)
                  : (c <= 12937 || c == 12951))
                : (c <= 12953 || (c < 19903
                  ? (c < 13312
                    ? (c >= 12977 && c <= 12991)
                    : c <= 13312)
                  : (c <= 19903 || c == 19968))))
              : (c <= 42124 || (c < 42612
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))
                : (c <= 42621 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43056
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || c == 43052))
                : (c <= 43061 || (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c >= 43232 && c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))
      : (c <= 43638 || (c < 67072
        ? (c < 65382
          ? (c < 64256
            ? (c < 43868
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))
              : (c <= 43881 || (c < 55203
                ? (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || c == 44032))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))))
            : (c <= 64262 || (c < 64848
              ? (c < 64318
                ? (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65136
                ? (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))))))
          : (c <= 65470 || (c < 66349
            ? (c < 65616
              ? (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))
              : (c <= 65629 || (c < 66045
                ? (c < 65856
                  ? (c < 65799
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65843)
                  : (c <= 65912 || (c >= 65930 && c <= 65931)))
                : (c <= 66045 || (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))))
            : (c <= 66378 || (c < 66816
              ? (c < 66513
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 66964
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))
        : (c <= 67382 || (c < 128336
          ? (c < 127183
            ? (c < 67644
              ? (c < 67506
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67705
                  ? (c < 67672
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67835
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67867)
                  : (c <= 67880 || c == 126980))))))
            : (c <= 127183 || (c < 127568
              ? (c < 127462
                ? (c < 127374
                  ? (c < 127358
                    ? (c >= 127344 && c <= 127345)
                    : c <= 127359)
                  : (c <= 127374 || (c >= 127377 && c <= 127386)))
                : (c <= 127487 || (c < 127535
                  ? (c < 127514
                    ? (c >= 127489 && c <= 127490)
                    : c <= 127514)
                  : (c <= 127535 || (c >= 127538 && c <= 127546)))))
              : (c <= 127569 || (c < 127902
                ? (c < 127894
                  ? (c < 127780
                    ? (c >= 127744 && c <= 127777)
                    : c <= 127891)
                  : (c <= 127895 || (c >= 127897 && c <= 127899)))
                : (c <= 127984 || (c < 128255
                  ? (c < 127991
                    ? (c >= 127987 && c <= 127989)
                    : c <= 128253)
                  : (c <= 128317 || (c >= 128329 && c <= 128334)))))))))
          : (c <= 128359 || (c < 128640
            ? (c < 128444
              ? (c < 128400
                ? (c < 128391
                  ? (c < 128371
                    ? (c >= 128367 && c <= 128368)
                    : c <= 128378)
                  : (c <= 128391 || (c >= 128394 && c <= 128397)))
                : (c <= 128400 || (c < 128424
                  ? (c < 128420
                    ? (c >= 128405 && c <= 128406)
                    : c <= 128421)
                  : (c <= 128424 || (c >= 128433 && c <= 128434)))))
              : (c <= 128444 || (c < 128483
                ? (c < 128476
                  ? (c < 128465
                    ? (c >= 128450 && c <= 128452)
                    : c <= 128467)
                  : (c <= 128478 || c == 128481))
                : (c <= 128483 || (c < 128499
                  ? (c < 128495
                    ? c == 128488
                    : c <= 128495)
                  : (c <= 128499 || (c >= 128506 && c <= 128591)))))))
            : (c <= 128709 || (c < 129292
              ? (c < 128747
                ? (c < 128732
                  ? (c < 128725
                    ? (c >= 128715 && c <= 128722)
                    : c <= 128727)
                  : (c <= 128741 || c == 128745))
                : (c <= 128748 || (c < 128992
                  ? (c < 128755
                    ? c == 128752
                    : c <= 128764)
                  : (c <= 129003 || c == 129008))))
              : (c <= 129338 || (c < 129680
                ? (c < 129648
                  ? (c < 129351
                    ? (c >= 129340 && c <= 129349)
                    : c <= 129535)
                  : (c <= 129660 || (c >= 129664 && c <= 129672)))
                : (c <= 129725 || (c < 129760
                  ? (c < 129742
                    ? (c >= 129727 && c <= 129733)
                    : c <= 129755)
                  : (c <= 129768 || (c >= 129776 && c <= 129784)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_7(int32_t c) {
  return (c < 8484
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
                    ? (c >= 3313 && c <= 3315)
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
                  : (c <= 3790 || (c >= 3792 && c <= 3801)))))))))
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
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43616
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12832
          ? (c < 11704
            ? (c < 11517
              ? (c < 11035
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c >= 11013 && c <= 11015)))
                : (c <= 11036 || (c < 11264
                  ? (c < 11093
                    ? c == 11088
                    : c <= 11093)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))))
              : (c <= 11517 || (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))))
            : (c <= 11710 || (c < 12353
              ? (c < 11744
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11775 || (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12341 || (c >= 12344 && c <= 12349)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c < 12690
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))))))
          : (c <= 12841 || (c < 42960
            ? (c < 40959
              ? (c < 12953
                ? (c < 12928
                  ? (c < 12881
                    ? (c >= 12872 && c <= 12879)
                    : c <= 12895)
                  : (c <= 12937 || c == 12951))
                : (c <= 12953 || (c < 19903
                  ? (c < 13312
                    ? (c >= 12977 && c <= 12991)
                    : c <= 13312)
                  : (c <= 19903 || c == 19968))))
              : (c <= 42124 || (c < 42612
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))
                : (c <= 42621 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43056
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || c == 43052))
                : (c <= 43061 || (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c >= 43232 && c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))
      : (c <= 43638 || (c < 67072
        ? (c < 65382
          ? (c < 64256
            ? (c < 43868
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))
              : (c <= 43881 || (c < 55203
                ? (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || c == 44032))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))))
            : (c <= 64262 || (c < 64848
              ? (c < 64318
                ? (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65136
                ? (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))))))
          : (c <= 65470 || (c < 66349
            ? (c < 65616
              ? (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))
              : (c <= 65629 || (c < 66045
                ? (c < 65856
                  ? (c < 65799
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65843)
                  : (c <= 65912 || (c >= 65930 && c <= 65931)))
                : (c <= 66045 || (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))))
            : (c <= 66378 || (c < 66816
              ? (c < 66513
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 66964
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))
        : (c <= 67382 || (c < 128336
          ? (c < 127183
            ? (c < 67644
              ? (c < 67506
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67705
                  ? (c < 67672
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67835
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67867)
                  : (c <= 67880 || c == 126980))))))
            : (c <= 127183 || (c < 127568
              ? (c < 127462
                ? (c < 127374
                  ? (c < 127358
                    ? (c >= 127344 && c <= 127345)
                    : c <= 127359)
                  : (c <= 127374 || (c >= 127377 && c <= 127386)))
                : (c <= 127487 || (c < 127535
                  ? (c < 127514
                    ? (c >= 127489 && c <= 127490)
                    : c <= 127514)
                  : (c <= 127535 || (c >= 127538 && c <= 127546)))))
              : (c <= 127569 || (c < 127902
                ? (c < 127894
                  ? (c < 127780
                    ? (c >= 127744 && c <= 127777)
                    : c <= 127891)
                  : (c <= 127895 || (c >= 127897 && c <= 127899)))
                : (c <= 127984 || (c < 128255
                  ? (c < 127991
                    ? (c >= 127987 && c <= 127989)
                    : c <= 128253)
                  : (c <= 128317 || (c >= 128329 && c <= 128334)))))))))
          : (c <= 128359 || (c < 128640
            ? (c < 128444
              ? (c < 128400
                ? (c < 128391
                  ? (c < 128371
                    ? (c >= 128367 && c <= 128368)
                    : c <= 128378)
                  : (c <= 128391 || (c >= 128394 && c <= 128397)))
                : (c <= 128400 || (c < 128424
                  ? (c < 128420
                    ? (c >= 128405 && c <= 128406)
                    : c <= 128421)
                  : (c <= 128424 || (c >= 128433 && c <= 128434)))))
              : (c <= 128444 || (c < 128483
                ? (c < 128476
                  ? (c < 128465
                    ? (c >= 128450 && c <= 128452)
                    : c <= 128467)
                  : (c <= 128478 || c == 128481))
                : (c <= 128483 || (c < 128499
                  ? (c < 128495
                    ? c == 128488
                    : c <= 128495)
                  : (c <= 128499 || (c >= 128506 && c <= 128591)))))))
            : (c <= 128709 || (c < 129292
              ? (c < 128747
                ? (c < 128732
                  ? (c < 128725
                    ? (c >= 128715 && c <= 128722)
                    : c <= 128727)
                  : (c <= 128741 || c == 128745))
                : (c <= 128748 || (c < 128992
                  ? (c < 128755
                    ? c == 128752
                    : c <= 128764)
                  : (c <= 129003 || c == 129008))))
              : (c <= 129338 || (c < 129680
                ? (c < 129648
                  ? (c < 129351
                    ? (c >= 129340 && c <= 129349)
                    : c <= 129535)
                  : (c <= 129660 || (c >= 129664 && c <= 129672)))
                : (c <= 129725 || (c < 129760
                  ? (c < 129742
                    ? (c >= 129727 && c <= 129733)
                    : c <= 129755)
                  : (c <= 129768 || (c >= 129776 && c <= 129784)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_8(int32_t c) {
  return (c < 8484
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
                    ? (c >= 3313 && c <= 3315)
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
                  : (c <= 3790 || (c >= 3792 && c <= 3801)))))))))
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
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43616
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12832
          ? (c < 11704
            ? (c < 11517
              ? (c < 11035
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c >= 11013 && c <= 11015)))
                : (c <= 11036 || (c < 11264
                  ? (c < 11093
                    ? c == 11088
                    : c <= 11093)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))))
              : (c <= 11517 || (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))))
            : (c <= 11710 || (c < 12353
              ? (c < 11744
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11775 || (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12341 || (c >= 12344 && c <= 12349)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c < 12690
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))))))
          : (c <= 12841 || (c < 42960
            ? (c < 40959
              ? (c < 12953
                ? (c < 12928
                  ? (c < 12881
                    ? (c >= 12872 && c <= 12879)
                    : c <= 12895)
                  : (c <= 12937 || c == 12951))
                : (c <= 12953 || (c < 19903
                  ? (c < 13312
                    ? (c >= 12977 && c <= 12991)
                    : c <= 13312)
                  : (c <= 19903 || c == 19968))))
              : (c <= 42124 || (c < 42612
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))
                : (c <= 42621 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43056
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || c == 43052))
                : (c <= 43061 || (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c >= 43232 && c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))
      : (c <= 43638 || (c < 67072
        ? (c < 65382
          ? (c < 64256
            ? (c < 43868
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))
              : (c <= 43881 || (c < 55203
                ? (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || c == 44032))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))))
            : (c <= 64262 || (c < 64848
              ? (c < 64318
                ? (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65136
                ? (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))))))
          : (c <= 65470 || (c < 66349
            ? (c < 65616
              ? (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))
              : (c <= 65629 || (c < 66045
                ? (c < 65856
                  ? (c < 65799
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65843)
                  : (c <= 65912 || (c >= 65930 && c <= 65931)))
                : (c <= 66045 || (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))))
            : (c <= 66378 || (c < 66816
              ? (c < 66513
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 66964
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))
        : (c <= 67382 || (c < 128336
          ? (c < 127183
            ? (c < 67644
              ? (c < 67506
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))
                : (c <= 67514 || (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67705
                  ? (c < 67672
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67835
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67867)
                  : (c <= 67880 || c == 126980))))))
            : (c <= 127183 || (c < 127568
              ? (c < 127462
                ? (c < 127374
                  ? (c < 127358
                    ? (c >= 127344 && c <= 127345)
                    : c <= 127359)
                  : (c <= 127374 || (c >= 127377 && c <= 127386)))
                : (c <= 127487 || (c < 127535
                  ? (c < 127514
                    ? (c >= 127489 && c <= 127490)
                    : c <= 127514)
                  : (c <= 127535 || (c >= 127538 && c <= 127546)))))
              : (c <= 127569 || (c < 127902
                ? (c < 127894
                  ? (c < 127780
                    ? (c >= 127744 && c <= 127777)
                    : c <= 127891)
                  : (c <= 127895 || (c >= 127897 && c <= 127899)))
                : (c <= 127984 || (c < 128255
                  ? (c < 127991
                    ? (c >= 127987 && c <= 127989)
                    : c <= 128253)
                  : (c <= 128317 || (c >= 128329 && c <= 128334)))))))))
          : (c <= 128359 || (c < 128640
            ? (c < 128444
              ? (c < 128400
                ? (c < 128391
                  ? (c < 128371
                    ? (c >= 128367 && c <= 128368)
                    : c <= 128378)
                  : (c <= 128391 || (c >= 128394 && c <= 128397)))
                : (c <= 128400 || (c < 128424
                  ? (c < 128420
                    ? (c >= 128405 && c <= 128406)
                    : c <= 128421)
                  : (c <= 128424 || (c >= 128433 && c <= 128434)))))
              : (c <= 128444 || (c < 128483
                ? (c < 128476
                  ? (c < 128465
                    ? (c >= 128450 && c <= 128452)
                    : c <= 128467)
                  : (c <= 128478 || c == 128481))
                : (c <= 128483 || (c < 128499
                  ? (c < 128495
                    ? c == 128488
                    : c <= 128495)
                  : (c <= 128499 || (c >= 128506 && c <= 128591)))))))
            : (c <= 128709 || (c < 129292
              ? (c < 128747
                ? (c < 128732
                  ? (c < 128725
                    ? (c >= 128715 && c <= 128722)
                    : c <= 128727)
                  : (c <= 128741 || c == 128745))
                : (c <= 128748 || (c < 128992
                  ? (c < 128755
                    ? c == 128752
                    : c <= 128764)
                  : (c <= 129003 || c == 129008))))
              : (c <= 129338 || (c < 129680
                ? (c < 129648
                  ? (c < 129351
                    ? (c >= 129340 && c <= 129349)
                    : c <= 129535)
                  : (c <= 129660 || (c >= 129664 && c <= 129672)))
                : (c <= 129725 || (c < 129760
                  ? (c < 129742
                    ? (c >= 129727 && c <= 129733)
                    : c <= 129755)
                  : (c <= 129768 || (c >= 129776 && c <= 129784)))))))))))))))));
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
                  ? (c >= 3313 && c <= 3315)
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
                  : (c <= 3790 || (c >= 3792 && c <= 3801)))
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
                  : c <= 67880)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\f') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(162);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 133) ADVANCE(138);
      if (lookahead == 8232) ADVANCE(138);
      if (lookahead == 8233) ADVANCE(138);
      if (lookahead == 65279) ADVANCE(138);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(121);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(138);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(120);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(120);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == 'E') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '+') ADVANCE(162);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(175);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '#') ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(126);
      if (lookahead == '3') ADVANCE(127);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 75:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == '{') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == '}') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == '}') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '}') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '}') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == '}') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '+') ADVANCE(162);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 133) ADVANCE(178);
      if (lookahead == 8232) ADVANCE(180);
      if (lookahead == 8233) ADVANCE(181);
      if (lookahead == 65279) ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(183);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(120);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '#') ADVANCE(143);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(23);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(61);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(65);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(69);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(14);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(114);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(102);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'i') ADVANCE(92);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(93);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(115);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'o') ADVANCE(116);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(105);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 's') ADVANCE(100);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(99);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(106);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'y') ADVANCE(95);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '*') ADVANCE(187);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__escape_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead == '#') ADVANCE(143);
      if (sym__normal_bare_identifier_character_set_8(lookahead)) ADVANCE(120);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead == '#') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__raw_string_token3);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_E);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym__);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__newline_token2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__newline_token3);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__newline_token4);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__newline_token5);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__newline_token6);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__newline_token7);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__unicode_space);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(120);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(187);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_commented_block_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(193);
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
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 2, .external_lex_state = 1},
  [3] = {.lex_state = 2, .external_lex_state = 1},
  [4] = {.lex_state = 2, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 1},
  [6] = {.lex_state = 2, .external_lex_state = 1},
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 2, .external_lex_state = 1},
  [9] = {.lex_state = 84},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 1},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 84},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 84},
  [24] = {.lex_state = 84},
  [25] = {.lex_state = 84},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 84},
  [28] = {.lex_state = 84},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 84},
  [32] = {.lex_state = 84},
  [33] = {.lex_state = 84},
  [34] = {.lex_state = 84},
  [35] = {.lex_state = 84},
  [36] = {.lex_state = 84},
  [37] = {.lex_state = 84},
  [38] = {.lex_state = 84},
  [39] = {.lex_state = 84},
  [40] = {.lex_state = 84},
  [41] = {.lex_state = 84},
  [42] = {.lex_state = 84},
  [43] = {.lex_state = 84},
  [44] = {.lex_state = 84},
  [45] = {.lex_state = 2, .external_lex_state = 1},
  [46] = {.lex_state = 84},
  [47] = {.lex_state = 84},
  [48] = {.lex_state = 84},
  [49] = {.lex_state = 84},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 2, .external_lex_state = 1},
  [54] = {.lex_state = 2, .external_lex_state = 1},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 2, .external_lex_state = 1},
  [58] = {.lex_state = 2, .external_lex_state = 1},
  [59] = {.lex_state = 2, .external_lex_state = 1},
  [60] = {.lex_state = 2, .external_lex_state = 1},
  [61] = {.lex_state = 2, .external_lex_state = 1},
  [62] = {.lex_state = 2, .external_lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 84, .external_lex_state = 1},
  [65] = {.lex_state = 84, .external_lex_state = 1},
  [66] = {.lex_state = 84, .external_lex_state = 1},
  [67] = {.lex_state = 84, .external_lex_state = 1},
  [68] = {.lex_state = 84, .external_lex_state = 1},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 84, .external_lex_state = 1},
  [71] = {.lex_state = 84, .external_lex_state = 1},
  [72] = {.lex_state = 84, .external_lex_state = 1},
  [73] = {.lex_state = 84, .external_lex_state = 1},
  [74] = {.lex_state = 84, .external_lex_state = 1},
  [75] = {.lex_state = 84},
  [76] = {.lex_state = 84},
  [77] = {.lex_state = 84},
  [78] = {.lex_state = 84},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 84},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 84},
  [84] = {.lex_state = 84},
  [85] = {.lex_state = 84},
  [86] = {.lex_state = 84},
  [87] = {.lex_state = 84},
  [88] = {.lex_state = 84, .external_lex_state = 1},
  [89] = {.lex_state = 84, .external_lex_state = 1},
  [90] = {.lex_state = 84, .external_lex_state = 1},
  [91] = {.lex_state = 84, .external_lex_state = 1},
  [92] = {.lex_state = 84, .external_lex_state = 1},
  [93] = {.lex_state = 84, .external_lex_state = 1},
  [94] = {.lex_state = 84, .external_lex_state = 1},
  [95] = {.lex_state = 84, .external_lex_state = 1},
  [96] = {.lex_state = 84, .external_lex_state = 1},
  [97] = {.lex_state = 1, .external_lex_state = 1},
  [98] = {.lex_state = 84, .external_lex_state = 1},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 84, .external_lex_state = 1},
  [101] = {.lex_state = 84, .external_lex_state = 1},
  [102] = {.lex_state = 84, .external_lex_state = 1},
  [103] = {.lex_state = 84, .external_lex_state = 1},
  [104] = {.lex_state = 84, .external_lex_state = 1},
  [105] = {.lex_state = 84, .external_lex_state = 1},
  [106] = {.lex_state = 84, .external_lex_state = 1},
  [107] = {.lex_state = 84, .external_lex_state = 1},
  [108] = {.lex_state = 84, .external_lex_state = 1},
  [109] = {.lex_state = 84, .external_lex_state = 1},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 84, .external_lex_state = 1},
  [112] = {.lex_state = 84, .external_lex_state = 1},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 84, .external_lex_state = 1},
  [115] = {.lex_state = 84, .external_lex_state = 1},
  [116] = {.lex_state = 84, .external_lex_state = 1},
  [117] = {.lex_state = 84, .external_lex_state = 1},
  [118] = {.lex_state = 84, .external_lex_state = 1},
  [119] = {.lex_state = 84, .external_lex_state = 1},
  [120] = {.lex_state = 1, .external_lex_state = 1},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 84, .external_lex_state = 1},
  [123] = {.lex_state = 84, .external_lex_state = 1},
  [124] = {.lex_state = 84, .external_lex_state = 1},
  [125] = {.lex_state = 84, .external_lex_state = 1},
  [126] = {.lex_state = 84, .external_lex_state = 1},
  [127] = {.lex_state = 84, .external_lex_state = 1},
  [128] = {.lex_state = 84, .external_lex_state = 1},
  [129] = {.lex_state = 84, .external_lex_state = 1},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 1, .external_lex_state = 1},
  [132] = {.lex_state = 84},
  [133] = {.lex_state = 84, .external_lex_state = 1},
  [134] = {.lex_state = 84},
  [135] = {.lex_state = 84},
  [136] = {.lex_state = 84},
  [137] = {.lex_state = 84},
  [138] = {.lex_state = 84},
  [139] = {.lex_state = 84},
  [140] = {.lex_state = 84},
  [141] = {.lex_state = 84},
  [142] = {.lex_state = 84},
  [143] = {.lex_state = 84},
  [144] = {.lex_state = 84},
  [145] = {.lex_state = 84},
  [146] = {.lex_state = 84},
  [147] = {.lex_state = 84},
  [148] = {.lex_state = 84},
  [149] = {.lex_state = 84},
  [150] = {.lex_state = 84},
  [151] = {.lex_state = 84},
  [152] = {.lex_state = 84},
  [153] = {.lex_state = 84},
  [154] = {.lex_state = 84},
  [155] = {.lex_state = 84},
  [156] = {.lex_state = 84},
  [157] = {.lex_state = 84},
  [158] = {.lex_state = 84},
  [159] = {.lex_state = 84},
  [160] = {.lex_state = 84},
  [161] = {.lex_state = 84},
  [162] = {.lex_state = 84},
  [163] = {.lex_state = 84},
  [164] = {.lex_state = 84},
  [165] = {.lex_state = 84},
  [166] = {.lex_state = 84},
  [167] = {.lex_state = 84},
  [168] = {.lex_state = 84},
  [169] = {.lex_state = 84},
  [170] = {.lex_state = 84},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 5, .external_lex_state = 1},
  [174] = {.lex_state = 5, .external_lex_state = 1},
  [175] = {.lex_state = 5, .external_lex_state = 1},
  [176] = {.lex_state = 1, .external_lex_state = 1},
  [177] = {.lex_state = 1, .external_lex_state = 1},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 5, .external_lex_state = 1},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 5, .external_lex_state = 1},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 7, .external_lex_state = 1},
  [186] = {.lex_state = 1, .external_lex_state = 1},
  [187] = {.lex_state = 7, .external_lex_state = 1},
  [188] = {.lex_state = 7, .external_lex_state = 1},
  [189] = {.lex_state = 6, .external_lex_state = 1},
  [190] = {.lex_state = 1, .external_lex_state = 1},
  [191] = {.lex_state = 1, .external_lex_state = 1},
  [192] = {.lex_state = 6, .external_lex_state = 1},
  [193] = {.lex_state = 6, .external_lex_state = 1},
  [194] = {.lex_state = 7, .external_lex_state = 1},
  [195] = {.lex_state = 6, .external_lex_state = 1},
  [196] = {.lex_state = 1, .external_lex_state = 1},
  [197] = {.lex_state = 6, .external_lex_state = 1},
  [198] = {.lex_state = 7, .external_lex_state = 1},
  [199] = {.lex_state = 4, .external_lex_state = 1},
  [200] = {.lex_state = 4, .external_lex_state = 1},
  [201] = {.lex_state = 4, .external_lex_state = 1},
  [202] = {.lex_state = 84, .external_lex_state = 1},
  [203] = {.lex_state = 84, .external_lex_state = 1},
  [204] = {.lex_state = 84},
  [205] = {.lex_state = 84, .external_lex_state = 1},
  [206] = {.lex_state = 84, .external_lex_state = 1},
  [207] = {.lex_state = 3, .external_lex_state = 1},
  [208] = {.lex_state = 84, .external_lex_state = 1},
  [209] = {.lex_state = 84, .external_lex_state = 1},
  [210] = {.lex_state = 84, .external_lex_state = 1},
  [211] = {.lex_state = 84, .external_lex_state = 1},
  [212] = {.lex_state = 84, .external_lex_state = 1},
  [213] = {.lex_state = 84, .external_lex_state = 1},
  [214] = {.lex_state = 84, .external_lex_state = 1},
  [215] = {.lex_state = 84, .external_lex_state = 1},
  [216] = {.lex_state = 84, .external_lex_state = 1},
  [217] = {.lex_state = 84, .external_lex_state = 1},
  [218] = {.lex_state = 84, .external_lex_state = 1},
  [219] = {.lex_state = 84, .external_lex_state = 1},
  [220] = {.lex_state = 84, .external_lex_state = 1},
  [221] = {.lex_state = 84, .external_lex_state = 1},
  [222] = {.lex_state = 84, .external_lex_state = 1},
  [223] = {.lex_state = 84, .external_lex_state = 1},
  [224] = {.lex_state = 84, .external_lex_state = 1},
  [225] = {.lex_state = 84, .external_lex_state = 1},
  [226] = {.lex_state = 84, .external_lex_state = 1},
  [227] = {.lex_state = 84, .external_lex_state = 1},
  [228] = {.lex_state = 84, .external_lex_state = 1},
  [229] = {.lex_state = 84, .external_lex_state = 1},
  [230] = {.lex_state = 84},
  [231] = {.lex_state = 84},
  [232] = {.lex_state = 84},
  [233] = {.lex_state = 84},
  [234] = {.lex_state = 84},
  [235] = {.lex_state = 84},
  [236] = {.lex_state = 84},
  [237] = {.lex_state = 84, .external_lex_state = 1},
  [238] = {.lex_state = 84, .external_lex_state = 1},
  [239] = {.lex_state = 84, .external_lex_state = 1},
  [240] = {.lex_state = 84},
  [241] = {.lex_state = 84, .external_lex_state = 1},
  [242] = {.lex_state = 84},
  [243] = {.lex_state = 84, .external_lex_state = 1},
  [244] = {.lex_state = 84, .external_lex_state = 1},
  [245] = {.lex_state = 84, .external_lex_state = 1},
  [246] = {.lex_state = 84},
  [247] = {.lex_state = 84, .external_lex_state = 1},
  [248] = {.lex_state = 84, .external_lex_state = 1},
  [249] = {.lex_state = 84},
  [250] = {.lex_state = 84, .external_lex_state = 1},
  [251] = {.lex_state = 84, .external_lex_state = 1},
  [252] = {.lex_state = 84},
  [253] = {.lex_state = 84},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 84},
  [256] = {.lex_state = 8, .external_lex_state = 1},
  [257] = {.lex_state = 84},
  [258] = {.lex_state = 8, .external_lex_state = 1},
  [259] = {.lex_state = 8, .external_lex_state = 1},
  [260] = {.lex_state = 84},
  [261] = {.lex_state = 84},
  [262] = {.lex_state = 8, .external_lex_state = 1},
  [263] = {.lex_state = 84},
  [264] = {.lex_state = 8, .external_lex_state = 1},
  [265] = {.lex_state = 84},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 84},
  [269] = {.lex_state = 13},
  [270] = {.lex_state = 84},
  [271] = {.lex_state = 13},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 13},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 13},
  [278] = {.lex_state = 13},
  [279] = {.lex_state = 13},
  [280] = {.lex_state = 13},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 13},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 13},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 10},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 84},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 84},
  [299] = {.lex_state = 84},
  [300] = {.lex_state = 84},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 84},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 3},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 84},
  [311] = {.lex_state = 84},
  [312] = {.lex_state = 84},
  [313] = {.lex_state = 84},
  [314] = {.lex_state = 146},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 84},
  [318] = {.lex_state = 7},
  [319] = {.lex_state = 84},
  [320] = {.lex_state = 84},
  [321] = {.lex_state = 84},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 146},
  [324] = {.lex_state = 84},
  [325] = {.lex_state = 84},
  [326] = {.lex_state = 84},
  [327] = {.lex_state = 84},
  [328] = {.lex_state = 84},
  [329] = {.lex_state = 7},
  [330] = {.lex_state = 84},
  [331] = {.lex_state = 146},
  [332] = {.lex_state = 146},
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
    [aux_sym__newline_token2] = ACTIONS(1),
    [aux_sym__newline_token4] = ACTIONS(1),
    [aux_sym__newline_token5] = ACTIONS(1),
    [aux_sym__newline_token6] = ACTIONS(1),
    [aux_sym__newline_token7] = ACTIONS(1),
    [sym__bom] = ACTIONS(1),
    [sym__unicode_space] = ACTIONS(1),
    [aux_sym_single_line_comment_token1] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(322),
    [sym_node] = STATE(30),
    [sym_identifier] = STATE(70),
    [sym__bare_identifier] = STATE(221),
    [sym_type] = STATE(255),
    [sym_string] = STATE(221),
    [sym__escaped_string] = STATE(202),
    [sym__raw_string] = STATE(202),
    [sym__sign] = STATE(207),
    [sym__linespace] = STATE(32),
    [sym__newline] = STATE(32),
    [sym__ws] = STATE(32),
    [sym_single_line_comment] = STATE(32),
    [sym_multi_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__normal_bare_identifier] = ACTIONS(7),
    [anon_sym_SLASH_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [aux_sym__newline_token1] = ACTIONS(23),
    [aux_sym__newline_token2] = ACTIONS(23),
    [aux_sym__newline_token3] = ACTIONS(23),
    [aux_sym__newline_token4] = ACTIONS(23),
    [aux_sym__newline_token5] = ACTIONS(23),
    [aux_sym__newline_token6] = ACTIONS(23),
    [aux_sym__newline_token7] = ACTIONS(23),
    [sym__bom] = ACTIONS(23),
    [sym__unicode_space] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_STAR] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 40,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(2), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(129), 1,
      sym_node_children,
    STATE(176), 1,
      sym__integer,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(35), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [141] = 40,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(126), 1,
      sym_node_children,
    STATE(176), 1,
      sym__integer,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(61), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [282] = 40,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(107), 1,
      sym_node_children,
    STATE(176), 1,
      sym__integer,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(63), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [423] = 40,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(103), 1,
      sym_node_children,
    STATE(176), 1,
      sym__integer,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(65), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [564] = 40,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(117), 1,
      sym_node_children,
    STATE(176), 1,
      sym__integer,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(67), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [705] = 40,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(91), 1,
      sym_node_children,
    STATE(176), 1,
      sym__integer,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(141), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(69), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [846] = 40,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(122), 1,
      sym_node_children,
    STATE(176), 1,
      sym__integer,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(169), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(71), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [987] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym__raw_string_token1,
    ACTIONS(81), 1,
      aux_sym__raw_string_token3,
    STATE(9), 1,
      sym_multi_line_comment,
    STATE(306), 1,
      sym__sign,
    STATE(296), 2,
      sym__bare_identifier,
      sym_string,
    STATE(311), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(324), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(75), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(73), 28,
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
  [1068] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym__raw_string_token1,
    ACTIONS(81), 1,
      aux_sym__raw_string_token3,
    STATE(10), 1,
      sym_multi_line_comment,
    STATE(306), 1,
      sym__sign,
    STATE(296), 2,
      sym__bare_identifier,
      sym_string,
    STATE(320), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(324), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(75), 9,
      anon_sym_date_DASHtime,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_idn_DASHemail,
      anon_sym_idn_DASHhostname,
      anon_sym_url_DASHreference,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
    ACTIONS(73), 28,
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
  [1149] = 35,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(83), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_multi_line_comment,
    STATE(79), 1,
      sym_type,
    STATE(80), 1,
      aux_sym_node_repeat1,
    STATE(130), 1,
      sym__escline,
    STATE(176), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(220), 1,
      sym_node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym__bom,
      sym__unicode_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(223), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1265] = 34,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_multi_line_comment,
    STATE(13), 1,
      aux_sym_node_repeat1,
    STATE(79), 1,
      sym_type,
    STATE(130), 1,
      sym__escline,
    STATE(176), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(218), 1,
      sym__node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym__bom,
      sym__unicode_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1377] = 34,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_multi_line_comment,
    STATE(79), 1,
      sym_type,
    STATE(80), 1,
      aux_sym_node_repeat1,
    STATE(130), 1,
      sym__escline,
    STATE(176), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(210), 1,
      sym__node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym__bom,
      sym__unicode_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1489] = 33,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_multi_line_comment,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(79), 1,
      sym_type,
    STATE(130), 1,
      sym__escline,
    STATE(176), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(218), 1,
      sym__node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym__bom,
      sym__unicode_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1598] = 33,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(37), 1,
      anon_sym_null,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(89), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_multi_line_comment,
    STATE(79), 1,
      sym_type,
    STATE(80), 1,
      aux_sym_node_repeat1,
    STATE(130), 1,
      sym__escline,
    STATE(176), 1,
      sym__integer,
    STATE(181), 1,
      sym__node_space,
    STATE(205), 1,
      sym_string,
    STATE(210), 1,
      sym__node_field,
    STATE(228), 1,
      sym_boolean,
    STATE(267), 1,
      sym__sign,
    STATE(296), 1,
      sym__bare_identifier,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym__bom,
      sym__unicode_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 2,
      sym_keyword,
      sym_number,
    STATE(217), 2,
      sym_prop,
      sym_value,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1707] = 9,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    ACTIONS(102), 2,
      sym__bom,
      sym__unicode_space,
    STATE(16), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(95), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 19,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [1762] = 19,
    ACTIONS(110), 1,
      sym__normal_bare_identifier,
    ACTIONS(113), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym__raw_string_token1,
    ACTIONS(125), 1,
      aux_sym__raw_string_token3,
    ACTIONS(128), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(17), 3,
      sym_node,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
    STATE(51), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(134), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1837] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(20), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(40), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(145), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1913] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(35), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(149), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1989] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(153), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2065] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(153), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2141] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(34), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(157), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2217] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(24), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(38), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(161), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2293] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(48), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2369] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(29), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(35), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(149), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2445] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(43), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(169), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2521] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(31), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(43), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(169), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2597] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(22), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(48), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2673] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(173), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2749] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(19), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(177), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2825] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(49), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(181), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2901] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_node,
    STATE(32), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(76), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(183), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2976] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3051] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3126] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3201] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3276] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3351] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3426] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_node,
    STATE(39), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(41), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(193), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3501] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3576] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_node,
    STATE(41), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(195), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3651] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_node,
    STATE(42), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(44), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(197), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3726] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3801] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_node,
    STATE(44), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(78), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(199), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3876] = 8,
    ACTIONS(205), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_multi_line_comment,
    STATE(53), 1,
      sym__escline,
    ACTIONS(208), 2,
      sym__bom,
      sym__unicode_space,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(201), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 19,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [3927] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_node,
    STATE(46), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(47), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(216), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4002] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_node,
    STATE(47), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(75), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(218), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4077] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4152] = 20,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4227] = 5,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(226), 2,
      sym__bom,
      sym__unicode_space,
    STATE(50), 3,
      sym__ws,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(222), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 20,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [4271] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_multi_line_comment,
    STATE(70), 1,
      sym_identifier,
    STATE(165), 1,
      sym_node,
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_type,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(185), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4343] = 6,
    ACTIONS(239), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_multi_line_comment,
    ACTIONS(236), 2,
      sym__bom,
      sym__unicode_space,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 20,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [4389] = 6,
    ACTIONS(239), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_multi_line_comment,
    ACTIONS(242), 2,
      sym__bom,
      sym__unicode_space,
    STATE(55), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 20,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [4435] = 6,
    ACTIONS(211), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_multi_line_comment,
    ACTIONS(245), 2,
      sym__bom,
      sym__unicode_space,
    STATE(52), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(201), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 20,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [4481] = 6,
    ACTIONS(255), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_multi_line_comment,
    ACTIONS(252), 2,
      sym__bom,
      sym__unicode_space,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(248), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 20,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [4527] = 3,
    STATE(56), 1,
      sym_multi_line_comment,
    ACTIONS(258), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(260), 23,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4565] = 3,
    STATE(57), 1,
      sym_multi_line_comment,
    ACTIONS(262), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(264), 23,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4603] = 3,
    STATE(58), 1,
      sym_multi_line_comment,
    ACTIONS(266), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(268), 23,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4641] = 3,
    STATE(59), 1,
      sym_multi_line_comment,
    ACTIONS(270), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(272), 23,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4679] = 3,
    STATE(60), 1,
      sym_multi_line_comment,
    ACTIONS(274), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 23,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4717] = 3,
    STATE(61), 1,
      sym_multi_line_comment,
    ACTIONS(278), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 23,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4755] = 3,
    STATE(62), 1,
      sym_multi_line_comment,
    ACTIONS(282), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 23,
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
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4793] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(286), 1,
      anon_sym_null,
    ACTIONS(288), 1,
      aux_sym__raw_string_token1,
    STATE(63), 1,
      sym_multi_line_comment,
    STATE(79), 1,
      sym_type,
    STATE(176), 1,
      sym__integer,
    STATE(211), 1,
      sym_value,
    STATE(228), 1,
      sym_boolean,
    STATE(270), 1,
      sym__sign,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [4865] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(64), 1,
      sym_multi_line_comment,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(117), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(67), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4923] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(65), 1,
      sym_multi_line_comment,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(126), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(61), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4981] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(64), 1,
      aux_sym_node_repeat2,
    STATE(66), 1,
      sym_multi_line_comment,
    STATE(122), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(169), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(71), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5039] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(67), 1,
      sym_multi_line_comment,
    STATE(103), 1,
      sym_node_children,
    STATE(111), 1,
      aux_sym_node_repeat2,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(65), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5097] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(68), 1,
      sym_multi_line_comment,
    STATE(72), 1,
      aux_sym_node_repeat2,
    STATE(119), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(142), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(294), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5155] = 6,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(298), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(69), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(300), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5195] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(70), 1,
      sym_multi_line_comment,
    STATE(74), 1,
      aux_sym_node_repeat2,
    STATE(102), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(162), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(309), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5253] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(67), 1,
      aux_sym_node_repeat2,
    STATE(71), 1,
      sym_multi_line_comment,
    STATE(129), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(35), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5311] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(72), 1,
      sym_multi_line_comment,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(129), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(35), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5369] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(65), 1,
      aux_sym_node_repeat2,
    STATE(73), 1,
      sym_multi_line_comment,
    STATE(117), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(67), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5427] = 15,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(74), 1,
      sym_multi_line_comment,
    STATE(111), 1,
      aux_sym_node_repeat2,
    STATE(122), 1,
      sym_node_children,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(169), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(71), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5485] = 8,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_multi_line_comment,
    ACTIONS(298), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(296), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(300), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5528] = 8,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_multi_line_comment,
    ACTIONS(298), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(296), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(300), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5571] = 8,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_multi_line_comment,
    ACTIONS(298), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(296), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(300), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5614] = 8,
    ACTIONS(303), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_multi_line_comment,
    ACTIONS(298), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(296), 5,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(300), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5657] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(47), 1,
      anon_sym_0x,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0b,
    ACTIONS(286), 1,
      anon_sym_null,
    ACTIONS(288), 1,
      aux_sym__raw_string_token1,
    STATE(79), 1,
      sym_multi_line_comment,
    STATE(176), 1,
      sym__integer,
    STATE(228), 1,
      sym_boolean,
    STATE(270), 1,
      sym__sign,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(229), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(227), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [5720] = 9,
    ACTIONS(323), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym__escline,
    STATE(181), 1,
      sym__node_space,
    ACTIONS(326), 2,
      sym__bom,
      sym__unicode_space,
    STATE(80), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(95), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5765] = 3,
    STATE(81), 1,
      sym_multi_line_comment,
    ACTIONS(270), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(272), 20,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [5796] = 8,
    ACTIONS(332), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_multi_line_comment,
    STATE(113), 1,
      sym__escline,
    ACTIONS(335), 2,
      sym__bom,
      sym__unicode_space,
    STATE(110), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(201), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 9,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5837] = 20,
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
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    STATE(66), 1,
      sym_identifier,
    STATE(83), 1,
      sym_multi_line_comment,
    STATE(87), 1,
      aux_sym_node_repeat1,
    STATE(207), 1,
      sym__sign,
    STATE(242), 1,
      sym__escline,
    STATE(253), 1,
      sym_type,
    STATE(257), 1,
      sym__node_space,
    ACTIONS(343), 2,
      sym__bom,
      sym__unicode_space,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(235), 2,
      sym__ws,
      aux_sym_node_repeat3,
  [5902] = 3,
    STATE(84), 1,
      sym_multi_line_comment,
    ACTIONS(258), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(260), 20,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [5933] = 3,
    STATE(85), 1,
      sym_multi_line_comment,
    ACTIONS(262), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(264), 20,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [5964] = 3,
    STATE(86), 1,
      sym_multi_line_comment,
    ACTIONS(278), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(280), 20,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [5995] = 20,
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
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    STATE(68), 1,
      sym_identifier,
    STATE(87), 1,
      sym_multi_line_comment,
    STATE(204), 1,
      aux_sym_node_repeat1,
    STATE(207), 1,
      sym__sign,
    STATE(242), 1,
      sym__escline,
    STATE(252), 1,
      sym_type,
    STATE(257), 1,
      sym__node_space,
    ACTIONS(343), 2,
      sym__bom,
      sym__unicode_space,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
    STATE(235), 2,
      sym__ws,
      aux_sym_node_repeat3,
  [6060] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(88), 1,
      sym_multi_line_comment,
    STATE(123), 1,
      aux_sym_node_repeat1,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(167), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(345), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6106] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(89), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(349), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6152] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(90), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(170), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(351), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6198] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(91), 1,
      sym_multi_line_comment,
    STATE(118), 1,
      aux_sym_node_repeat1,
    ACTIONS(355), 2,
      sym__bom,
      sym__unicode_space,
    STATE(88), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(138), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(353), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6244] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(92), 1,
      sym_multi_line_comment,
    STATE(114), 1,
      aux_sym_node_repeat1,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(136), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(357), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6290] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(93), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(136), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(357), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6336] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(94), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(359), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6382] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(95), 1,
      sym_multi_line_comment,
    STATE(127), 1,
      aux_sym_node_repeat1,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(359), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6428] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(96), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(137), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(361), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6474] = 4,
    STATE(97), 1,
      sym_multi_line_comment,
    STATE(131), 1,
      aux_sym__integer_repeat1,
    ACTIONS(365), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(363), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [6506] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(90), 1,
      aux_sym_node_repeat1,
    STATE(98), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(139), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(367), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6552] = 6,
    ACTIONS(372), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_multi_line_comment,
    ACTIONS(369), 2,
      sym__bom,
      sym__unicode_space,
    STATE(110), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(248), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 10,
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
  [6588] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(100), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(139), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(367), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6634] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(101), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(375), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6680] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(94), 1,
      aux_sym_node_repeat1,
    STATE(102), 1,
      sym_multi_line_comment,
    ACTIONS(379), 2,
      sym__bom,
      sym__unicode_space,
    STATE(95), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(144), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(377), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6726] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(93), 1,
      aux_sym_node_repeat1,
    STATE(103), 1,
      sym_multi_line_comment,
    ACTIONS(383), 2,
      sym__bom,
      sym__unicode_space,
    STATE(92), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(381), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6772] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(96), 1,
      aux_sym_node_repeat1,
    STATE(104), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(385), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6818] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(105), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(385), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6864] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(106), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(149), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(387), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6910] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(100), 1,
      aux_sym_node_repeat1,
    STATE(107), 1,
      sym_multi_line_comment,
    ACTIONS(391), 2,
      sym__bom,
      sym__unicode_space,
    STATE(98), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(151), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(389), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6956] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(101), 1,
      aux_sym_node_repeat1,
    STATE(108), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(153), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(393), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7002] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(109), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(153), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(393), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7048] = 5,
    ACTIONS(398), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(395), 2,
      sym__bom,
      sym__unicode_space,
    STATE(110), 3,
      sym__ws,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(222), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 10,
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
  [7082] = 9,
    ACTIONS(403), 1,
      anon_sym_BSLASH,
    ACTIONS(409), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      aux_sym_node_repeat1,
    STATE(130), 1,
      sym__escline,
    STATE(181), 1,
      sym__node_space,
    ACTIONS(406), 2,
      sym__bom,
      sym__unicode_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(111), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat2,
    ACTIONS(401), 12,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [7124] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(112), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(154), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(412), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7170] = 6,
    ACTIONS(417), 1,
      anon_sym_SLASH_STAR,
    STATE(113), 1,
      sym_multi_line_comment,
    ACTIONS(414), 2,
      sym__bom,
      sym__unicode_space,
    STATE(99), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 10,
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
  [7206] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(114), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(168), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(420), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7252] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(115), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(422), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7298] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(116), 1,
      sym_multi_line_comment,
    STATE(133), 1,
      aux_sym_node_repeat1,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(422), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7344] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(117), 1,
      sym_multi_line_comment,
    STATE(124), 1,
      aux_sym_node_repeat1,
    ACTIONS(426), 2,
      sym__bom,
      sym__unicode_space,
    STATE(125), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(157), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(424), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7390] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(118), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(167), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(345), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7436] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat1,
    STATE(119), 1,
      sym_multi_line_comment,
    ACTIONS(430), 2,
      sym__bom,
      sym__unicode_space,
    STATE(128), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(135), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(428), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7482] = 3,
    ACTIONS(434), 2,
      anon_sym__,
      sym__digit,
    STATE(120), 2,
      sym_multi_line_comment,
      aux_sym__integer_repeat1,
    ACTIONS(432), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [7512] = 6,
    ACTIONS(417), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_multi_line_comment,
    ACTIONS(437), 2,
      sym__bom,
      sym__unicode_space,
    STATE(110), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 10,
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
  [7548] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(115), 1,
      aux_sym_node_repeat1,
    STATE(122), 1,
      sym_multi_line_comment,
    ACTIONS(442), 2,
      sym__bom,
      sym__unicode_space,
    STATE(116), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(150), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(440), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7594] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(123), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(444), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7640] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(124), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(446), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7686] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(112), 1,
      aux_sym_node_repeat1,
    STATE(125), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(446), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7732] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(109), 1,
      aux_sym_node_repeat1,
    STATE(126), 1,
      sym_multi_line_comment,
    ACTIONS(450), 2,
      sym__bom,
      sym__unicode_space,
    STATE(108), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(448), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7778] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(127), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(159), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(452), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7824] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym__node_space,
    STATE(106), 1,
      aux_sym_node_repeat1,
    STATE(128), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__escline,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(349), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7870] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(105), 1,
      aux_sym_node_repeat1,
    STATE(129), 1,
      sym_multi_line_comment,
    ACTIONS(456), 2,
      sym__bom,
      sym__unicode_space,
    STATE(104), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(166), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(454), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7916] = 6,
    ACTIONS(338), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_multi_line_comment,
    ACTIONS(458), 2,
      sym__bom,
      sym__unicode_space,
    STATE(121), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(201), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 10,
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
  [7952] = 4,
    STATE(120), 1,
      aux_sym__integer_repeat1,
    STATE(131), 1,
      sym_multi_line_comment,
    ACTIONS(463), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(461), 19,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [7984] = 5,
    ACTIONS(468), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 2,
      sym__bom,
      sym__unicode_space,
    ACTIONS(222), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    STATE(132), 3,
      sym__ws,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(224), 14,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8018] = 11,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(54), 1,
      sym__escline,
    STATE(62), 1,
      sym__node_space,
    STATE(133), 1,
      sym_multi_line_comment,
    ACTIONS(57), 2,
      sym__bom,
      sym__unicode_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(145), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(471), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [8064] = 3,
    STATE(134), 1,
      sym_multi_line_comment,
    ACTIONS(475), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(473), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8093] = 3,
    STATE(135), 1,
      sym_multi_line_comment,
    ACTIONS(479), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(477), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8122] = 3,
    STATE(136), 1,
      sym_multi_line_comment,
    ACTIONS(483), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(481), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8151] = 3,
    STATE(137), 1,
      sym_multi_line_comment,
    ACTIONS(487), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(485), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8180] = 3,
    STATE(138), 1,
      sym_multi_line_comment,
    ACTIONS(491), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(489), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8209] = 3,
    STATE(139), 1,
      sym_multi_line_comment,
    ACTIONS(495), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(493), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8238] = 3,
    STATE(140), 1,
      sym_multi_line_comment,
    ACTIONS(499), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(497), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8267] = 3,
    STATE(141), 1,
      sym_multi_line_comment,
    ACTIONS(503), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(501), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8296] = 3,
    STATE(142), 1,
      sym_multi_line_comment,
    ACTIONS(507), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(505), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8325] = 3,
    STATE(143), 1,
      sym_multi_line_comment,
    ACTIONS(511), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(509), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8354] = 3,
    STATE(144), 1,
      sym_multi_line_comment,
    ACTIONS(515), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(513), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8383] = 3,
    STATE(145), 1,
      sym_multi_line_comment,
    ACTIONS(519), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(517), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8412] = 3,
    STATE(146), 1,
      sym_multi_line_comment,
    ACTIONS(523), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(521), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8441] = 3,
    STATE(147), 1,
      sym_multi_line_comment,
    ACTIONS(527), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(525), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8470] = 3,
    STATE(148), 1,
      sym_multi_line_comment,
    ACTIONS(531), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(529), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8499] = 3,
    STATE(149), 1,
      sym_multi_line_comment,
    ACTIONS(535), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(533), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8528] = 3,
    STATE(150), 1,
      sym_multi_line_comment,
    ACTIONS(539), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(537), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8557] = 3,
    STATE(151), 1,
      sym_multi_line_comment,
    ACTIONS(543), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(541), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8586] = 3,
    STATE(152), 1,
      sym_multi_line_comment,
    ACTIONS(547), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(545), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8615] = 3,
    STATE(153), 1,
      sym_multi_line_comment,
    ACTIONS(551), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(549), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8644] = 3,
    STATE(154), 1,
      sym_multi_line_comment,
    ACTIONS(555), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(553), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8673] = 3,
    STATE(155), 1,
      sym_multi_line_comment,
    ACTIONS(559), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(557), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8702] = 3,
    STATE(156), 1,
      sym_multi_line_comment,
    ACTIONS(563), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(561), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8731] = 3,
    STATE(157), 1,
      sym_multi_line_comment,
    ACTIONS(567), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(565), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8760] = 3,
    STATE(158), 1,
      sym_multi_line_comment,
    ACTIONS(571), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(569), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8789] = 3,
    STATE(159), 1,
      sym_multi_line_comment,
    ACTIONS(575), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(573), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8818] = 3,
    STATE(160), 1,
      sym_multi_line_comment,
    ACTIONS(579), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(577), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8847] = 3,
    STATE(161), 1,
      sym_multi_line_comment,
    ACTIONS(583), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(581), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8876] = 3,
    STATE(162), 1,
      sym_multi_line_comment,
    ACTIONS(587), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(585), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8905] = 3,
    STATE(163), 1,
      sym_multi_line_comment,
    ACTIONS(591), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(589), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8934] = 3,
    STATE(164), 1,
      sym_multi_line_comment,
    ACTIONS(595), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(593), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8963] = 3,
    STATE(165), 1,
      sym_multi_line_comment,
    ACTIONS(597), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(108), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [8992] = 3,
    STATE(166), 1,
      sym_multi_line_comment,
    ACTIONS(601), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(599), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9021] = 3,
    STATE(167), 1,
      sym_multi_line_comment,
    ACTIONS(605), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(603), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9050] = 3,
    STATE(168), 1,
      sym_multi_line_comment,
    ACTIONS(609), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(607), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9079] = 3,
    STATE(169), 1,
      sym_multi_line_comment,
    ACTIONS(613), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(611), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9108] = 3,
    STATE(170), 1,
      sym_multi_line_comment,
    ACTIONS(617), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(615), 18,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9137] = 3,
    STATE(171), 1,
      sym_multi_line_comment,
    ACTIONS(274), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 13,
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
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [9165] = 3,
    STATE(172), 1,
      sym_multi_line_comment,
    ACTIONS(270), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(272), 13,
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
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [9193] = 4,
    STATE(173), 1,
      sym_multi_line_comment,
    STATE(175), 1,
      aux_sym__binary_repeat1,
    ACTIONS(621), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(619), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9223] = 3,
    STATE(174), 2,
      sym_multi_line_comment,
      aux_sym__binary_repeat1,
    ACTIONS(625), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(623), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9251] = 4,
    STATE(174), 1,
      aux_sym__binary_repeat1,
    STATE(175), 1,
      sym_multi_line_comment,
    ACTIONS(630), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(628), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9281] = 5,
    ACTIONS(634), 1,
      anon_sym_DOT,
    STATE(176), 1,
      sym_multi_line_comment,
    STATE(226), 1,
      sym__exponent,
    ACTIONS(636), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(632), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9313] = 5,
    ACTIONS(640), 1,
      anon_sym_DOT,
    STATE(177), 1,
      sym_multi_line_comment,
    STATE(215), 1,
      sym__exponent,
    ACTIONS(636), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(638), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9345] = 3,
    STATE(178), 1,
      sym_multi_line_comment,
    ACTIONS(266), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(268), 13,
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
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [9373] = 4,
    STATE(174), 1,
      aux_sym__binary_repeat1,
    STATE(179), 1,
      sym_multi_line_comment,
    ACTIONS(630), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(619), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9403] = 3,
    STATE(180), 1,
      sym_multi_line_comment,
    ACTIONS(262), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(264), 13,
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
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [9431] = 3,
    STATE(181), 1,
      sym_multi_line_comment,
    ACTIONS(282), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 13,
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
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [9459] = 3,
    STATE(182), 1,
      sym_multi_line_comment,
    ACTIONS(278), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 13,
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
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [9487] = 4,
    STATE(179), 1,
      aux_sym__binary_repeat1,
    STATE(183), 1,
      sym_multi_line_comment,
    ACTIONS(644), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(642), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9517] = 3,
    STATE(184), 1,
      sym_multi_line_comment,
    ACTIONS(258), 7,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(260), 13,
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
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [9545] = 4,
    STATE(185), 1,
      sym_multi_line_comment,
    STATE(198), 1,
      aux_sym__hex_repeat1,
    ACTIONS(648), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(646), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9574] = 3,
    ACTIONS(652), 1,
      anon_sym_POUND,
    STATE(186), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
    ACTIONS(650), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9601] = 3,
    ACTIONS(657), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(187), 2,
      sym_multi_line_comment,
      aux_sym__hex_repeat1,
    ACTIONS(655), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9628] = 4,
    STATE(188), 1,
      sym_multi_line_comment,
    STATE(194), 1,
      aux_sym__hex_repeat1,
    ACTIONS(662), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(660), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9657] = 4,
    STATE(189), 1,
      sym_multi_line_comment,
    STATE(193), 1,
      aux_sym__octal_repeat1,
    ACTIONS(666), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(664), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9686] = 4,
    ACTIONS(670), 1,
      anon_sym_POUND,
    STATE(186), 1,
      aux_sym__raw_string_repeat1,
    STATE(190), 1,
      sym_multi_line_comment,
    ACTIONS(668), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9715] = 4,
    STATE(191), 1,
      sym_multi_line_comment,
    STATE(212), 1,
      sym__exponent,
    ACTIONS(636), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(672), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9744] = 3,
    ACTIONS(676), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(192), 2,
      sym_multi_line_comment,
      aux_sym__octal_repeat1,
    ACTIONS(674), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9771] = 4,
    STATE(192), 1,
      aux_sym__octal_repeat1,
    STATE(193), 1,
      sym_multi_line_comment,
    ACTIONS(681), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(679), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9800] = 4,
    STATE(187), 1,
      aux_sym__hex_repeat1,
    STATE(194), 1,
      sym_multi_line_comment,
    ACTIONS(683), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(646), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9829] = 4,
    STATE(195), 1,
      sym_multi_line_comment,
    STATE(197), 1,
      aux_sym__octal_repeat1,
    ACTIONS(685), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(679), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9858] = 4,
    STATE(196), 1,
      sym_multi_line_comment,
    STATE(225), 1,
      sym__exponent,
    ACTIONS(636), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(687), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9887] = 4,
    STATE(192), 1,
      aux_sym__octal_repeat1,
    STATE(197), 1,
      sym_multi_line_comment,
    ACTIONS(681), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(689), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9916] = 4,
    STATE(187), 1,
      aux_sym__hex_repeat1,
    STATE(198), 1,
      sym_multi_line_comment,
    ACTIONS(683), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(691), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9945] = 4,
    ACTIONS(695), 1,
      sym__identifier_char,
    STATE(199), 1,
      sym_multi_line_comment,
    STATE(201), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(693), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [9973] = 4,
    ACTIONS(699), 1,
      sym__identifier_char,
    STATE(199), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(200), 1,
      sym_multi_line_comment,
    ACTIONS(697), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10001] = 3,
    ACTIONS(703), 1,
      sym__identifier_char,
    STATE(201), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(701), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10027] = 2,
    STATE(202), 1,
      sym_multi_line_comment,
    ACTIONS(706), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10050] = 2,
    STATE(203), 1,
      sym_multi_line_comment,
    ACTIONS(708), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10073] = 9,
    ACTIONS(710), 1,
      anon_sym_BSLASH,
    ACTIONS(716), 1,
      anon_sym_SLASH_STAR,
    STATE(242), 1,
      sym__escline,
    STATE(257), 1,
      sym__node_space,
    ACTIONS(713), 2,
      sym__bom,
      sym__unicode_space,
    STATE(204), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(235), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(95), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(97), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
  [10110] = 3,
    ACTIONS(721), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_multi_line_comment,
    ACTIONS(719), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10135] = 7,
    ACTIONS(726), 1,
      anon_sym_BSLASH,
    ACTIONS(734), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym__escline,
    STATE(206), 1,
      sym_multi_line_comment,
    ACTIONS(730), 2,
      sym__bom,
      sym__unicode_space,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(723), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [10168] = 3,
    ACTIONS(740), 1,
      sym___identifier_char_no_digit,
    STATE(207), 1,
      sym_multi_line_comment,
    ACTIONS(738), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10193] = 2,
    STATE(208), 1,
      sym_multi_line_comment,
    ACTIONS(742), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10216] = 2,
    STATE(209), 1,
      sym_multi_line_comment,
    ACTIONS(744), 17,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10239] = 2,
    STATE(210), 1,
      sym_multi_line_comment,
    ACTIONS(746), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10261] = 2,
    STATE(211), 1,
      sym_multi_line_comment,
    ACTIONS(748), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10283] = 2,
    STATE(212), 1,
      sym_multi_line_comment,
    ACTIONS(750), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10305] = 2,
    STATE(213), 1,
      sym_multi_line_comment,
    ACTIONS(752), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10327] = 5,
    ACTIONS(761), 1,
      anon_sym_SLASH_STAR,
    STATE(214), 1,
      sym_multi_line_comment,
    ACTIONS(757), 2,
      sym__bom,
      sym__unicode_space,
    STATE(219), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(754), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [10355] = 2,
    STATE(215), 1,
      sym_multi_line_comment,
    ACTIONS(765), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10377] = 2,
    STATE(216), 1,
      sym_multi_line_comment,
    ACTIONS(719), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10399] = 2,
    STATE(217), 1,
      sym_multi_line_comment,
    ACTIONS(767), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10421] = 2,
    STATE(218), 1,
      sym_multi_line_comment,
    ACTIONS(769), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10443] = 5,
    ACTIONS(778), 1,
      anon_sym_SLASH_STAR,
    STATE(219), 1,
      sym_multi_line_comment,
    ACTIONS(774), 2,
      sym__bom,
      sym__unicode_space,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(771), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [10471] = 2,
    STATE(220), 1,
      sym_multi_line_comment,
    ACTIONS(401), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10493] = 2,
    STATE(221), 1,
      sym_multi_line_comment,
    ACTIONS(721), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10515] = 2,
    STATE(222), 1,
      sym_multi_line_comment,
    ACTIONS(782), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10537] = 2,
    STATE(223), 1,
      sym_multi_line_comment,
    ACTIONS(784), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10559] = 2,
    STATE(224), 1,
      sym_multi_line_comment,
    ACTIONS(786), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10581] = 2,
    STATE(225), 1,
      sym_multi_line_comment,
    ACTIONS(788), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10603] = 2,
    STATE(226), 1,
      sym_multi_line_comment,
    ACTIONS(638), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10625] = 2,
    STATE(227), 1,
      sym_multi_line_comment,
    ACTIONS(790), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10647] = 2,
    STATE(228), 1,
      sym_multi_line_comment,
    ACTIONS(792), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10669] = 2,
    STATE(229), 1,
      sym_multi_line_comment,
    ACTIONS(794), 16,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10691] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(800), 1,
      anon_sym_SLASH_SLASH,
    STATE(230), 1,
      sym_multi_line_comment,
    ACTIONS(798), 2,
      sym__bom,
      sym__unicode_space,
    STATE(58), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(132), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(796), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10722] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(806), 1,
      anon_sym_SLASH_SLASH,
    STATE(231), 1,
      sym_multi_line_comment,
    ACTIONS(804), 2,
      sym__bom,
      sym__unicode_space,
    STATE(171), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(233), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(802), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10753] = 7,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    STATE(232), 1,
      sym_multi_line_comment,
    ACTIONS(798), 2,
      sym__bom,
      sym__unicode_space,
    STATE(132), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(261), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(808), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10784] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(806), 1,
      anon_sym_SLASH_SLASH,
    STATE(233), 1,
      sym_multi_line_comment,
    ACTIONS(798), 2,
      sym__bom,
      sym__unicode_space,
    STATE(132), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(178), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(810), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10815] = 7,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    STATE(234), 1,
      sym_multi_line_comment,
    ACTIONS(814), 2,
      sym__bom,
      sym__unicode_space,
    STATE(232), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(260), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(812), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10846] = 8,
    ACTIONS(816), 1,
      anon_sym_BSLASH,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym_multi_line_comment,
    STATE(246), 1,
      sym__escline,
    ACTIONS(819), 2,
      sym__bom,
      sym__unicode_space,
    STATE(132), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(201), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(203), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
  [10879] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(800), 1,
      anon_sym_SLASH_SLASH,
    STATE(236), 1,
      sym_multi_line_comment,
    ACTIONS(827), 2,
      sym__bom,
      sym__unicode_space,
    STATE(60), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(825), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10910] = 2,
    STATE(237), 1,
      sym_multi_line_comment,
    ACTIONS(829), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10930] = 2,
    STATE(238), 1,
      sym_multi_line_comment,
    ACTIONS(831), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10950] = 2,
    STATE(239), 1,
      sym_multi_line_comment,
    ACTIONS(833), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [10970] = 6,
    ACTIONS(838), 1,
      anon_sym_SLASH_STAR,
    STATE(240), 1,
      sym_multi_line_comment,
    ACTIONS(835), 2,
      sym__bom,
      sym__unicode_space,
    STATE(132), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(248), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(250), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
  [10998] = 2,
    STATE(241), 1,
      sym_multi_line_comment,
    ACTIONS(841), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11018] = 6,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    STATE(242), 1,
      sym_multi_line_comment,
    ACTIONS(843), 2,
      sym__bom,
      sym__unicode_space,
    STATE(249), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(201), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(203), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
  [11046] = 2,
    STATE(243), 1,
      sym_multi_line_comment,
    ACTIONS(846), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11066] = 2,
    STATE(244), 1,
      sym_multi_line_comment,
    ACTIONS(848), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11086] = 2,
    STATE(245), 1,
      sym_multi_line_comment,
    ACTIONS(850), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11106] = 6,
    ACTIONS(855), 1,
      anon_sym_SLASH_STAR,
    STATE(246), 1,
      sym_multi_line_comment,
    ACTIONS(852), 2,
      sym__bom,
      sym__unicode_space,
    STATE(240), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(234), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
  [11134] = 2,
    STATE(247), 1,
      sym_multi_line_comment,
    ACTIONS(858), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11154] = 2,
    STATE(248), 1,
      sym_multi_line_comment,
    ACTIONS(860), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11174] = 6,
    ACTIONS(855), 1,
      anon_sym_SLASH_STAR,
    STATE(249), 1,
      sym_multi_line_comment,
    ACTIONS(862), 2,
      sym__bom,
      sym__unicode_space,
    STATE(132), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(234), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
  [11202] = 2,
    STATE(250), 1,
      sym_multi_line_comment,
    ACTIONS(865), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11222] = 2,
    STATE(251), 1,
      sym_multi_line_comment,
    ACTIONS(867), 14,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [11242] = 12,
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
    STATE(71), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(252), 1,
      sym_multi_line_comment,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
  [11281] = 12,
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
    STATE(73), 1,
      sym_identifier,
    STATE(207), 1,
      sym__sign,
    STATE(253), 1,
      sym_multi_line_comment,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
  [11320] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(871), 1,
      sym__digit,
    STATE(254), 1,
      sym_multi_line_comment,
    ACTIONS(869), 11,
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
  [11343] = 12,
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
    STATE(207), 1,
      sym__sign,
    STATE(255), 1,
      sym_multi_line_comment,
    STATE(202), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(221), 2,
      sym__bare_identifier,
      sym_string,
  [11382] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(875), 1,
      aux_sym_single_line_comment_token1,
    STATE(59), 1,
      sym__newline,
    STATE(256), 1,
      sym_multi_line_comment,
    STATE(262), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(873), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [11408] = 3,
    STATE(257), 1,
      sym_multi_line_comment,
    ACTIONS(282), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(284), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [11428] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(875), 1,
      aux_sym_single_line_comment_token1,
    STATE(81), 1,
      sym__newline,
    STATE(258), 1,
      sym_multi_line_comment,
    STATE(262), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(877), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [11454] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(875), 1,
      aux_sym_single_line_comment_token1,
    STATE(172), 1,
      sym__newline,
    STATE(259), 1,
      sym_multi_line_comment,
    STATE(262), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(879), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [11480] = 3,
    STATE(260), 1,
      sym_multi_line_comment,
    ACTIONS(274), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(276), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [11500] = 3,
    STATE(261), 1,
      sym_multi_line_comment,
    ACTIONS(266), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
    ACTIONS(268), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_STAR,
  [11520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(883), 1,
      aux_sym_single_line_comment_token1,
    STATE(262), 2,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(881), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [11541] = 9,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    STATE(204), 1,
      aux_sym_node_repeat1,
    STATE(242), 1,
      sym__escline,
    STATE(257), 1,
      sym__node_space,
    STATE(263), 1,
      sym_multi_line_comment,
    ACTIONS(343), 2,
      sym__bom,
      sym__unicode_space,
    STATE(235), 2,
      sym__ws,
      aux_sym_node_repeat3,
  [11571] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(888), 1,
      aux_sym_single_line_comment_token1,
    STATE(264), 1,
      sym_multi_line_comment,
    ACTIONS(886), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [11591] = 9,
    ACTIONS(27), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    STATE(242), 1,
      sym__escline,
    STATE(257), 1,
      sym__node_space,
    STATE(263), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym_multi_line_comment,
    ACTIONS(343), 2,
      sym__bom,
      sym__unicode_space,
    STATE(235), 2,
      sym__ws,
      aux_sym_node_repeat3,
  [11621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(892), 1,
      sym__digit,
    STATE(266), 1,
      sym_multi_line_comment,
    ACTIONS(890), 6,
      sym___identifier_char_no_digit,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [11639] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(738), 1,
      anon_sym_EQ,
    ACTIONS(894), 1,
      sym___identifier_char_no_digit,
    ACTIONS(896), 1,
      anon_sym_0x,
    ACTIONS(898), 1,
      anon_sym_0o,
    ACTIONS(900), 1,
      anon_sym_0b,
    STATE(177), 1,
      sym__integer,
    STATE(267), 1,
      sym_multi_line_comment,
  [11667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(268), 1,
      sym_multi_line_comment,
    ACTIONS(869), 3,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_DASH,
    ACTIONS(871), 3,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
      anon_sym_PLUS,
  [11684] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(904), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(908), 1,
      aux_sym_commented_block_token1,
    STATE(269), 1,
      sym_multi_line_comment,
    STATE(284), 1,
      sym_commented_block,
    ACTIONS(906), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11704] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(896), 1,
      anon_sym_0x,
    ACTIONS(898), 1,
      anon_sym_0o,
    ACTIONS(900), 1,
      anon_sym_0b,
    STATE(177), 1,
      sym__integer,
    STATE(270), 1,
      sym_multi_line_comment,
  [11726] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(910), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(914), 1,
      aux_sym_commented_block_token1,
    STATE(271), 1,
      sym_multi_line_comment,
    STATE(334), 1,
      sym_commented_block,
    ACTIONS(912), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11746] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(916), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(920), 1,
      aux_sym_commented_block_token1,
    STATE(56), 1,
      sym_commented_block,
    STATE(272), 1,
      sym_multi_line_comment,
    ACTIONS(918), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11766] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(916), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(920), 1,
      aux_sym_commented_block_token1,
    STATE(61), 1,
      sym_commented_block,
    STATE(273), 1,
      sym_multi_line_comment,
    ACTIONS(918), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11786] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(904), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(908), 1,
      aux_sym_commented_block_token1,
    STATE(274), 1,
      sym_multi_line_comment,
    STATE(289), 1,
      sym_commented_block,
    ACTIONS(906), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11806] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(922), 1,
      sym__digit,
    STATE(224), 1,
      sym__integer,
    STATE(275), 1,
      sym_multi_line_comment,
    STATE(300), 1,
      sym__sign,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11826] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(924), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(928), 1,
      aux_sym_commented_block_token1,
    STATE(184), 1,
      sym_commented_block,
    STATE(276), 1,
      sym_multi_line_comment,
    ACTIONS(926), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11846] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(930), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(934), 1,
      aux_sym_commented_block_token1,
    STATE(84), 1,
      sym_commented_block,
    STATE(277), 1,
      sym_multi_line_comment,
    ACTIONS(932), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11866] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(924), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(928), 1,
      aux_sym_commented_block_token1,
    STATE(182), 1,
      sym_commented_block,
    STATE(278), 1,
      sym_multi_line_comment,
    ACTIONS(926), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11886] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(910), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(914), 1,
      aux_sym_commented_block_token1,
    STATE(279), 1,
      sym_multi_line_comment,
    STATE(333), 1,
      sym_commented_block,
    ACTIONS(912), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11906] = 6,
    ACTIONS(902), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(930), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(934), 1,
      aux_sym_commented_block_token1,
    STATE(86), 1,
      sym_commented_block,
    STATE(280), 1,
      sym_multi_line_comment,
    ACTIONS(932), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [11926] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(936), 1,
      sym__identifier_char,
    STATE(281), 1,
      sym_multi_line_comment,
    STATE(285), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(697), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [11943] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    ACTIONS(940), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(942), 1,
      aux_sym__escape_token1,
    STATE(282), 1,
      sym_multi_line_comment,
    STATE(288), 1,
      aux_sym__escaped_string_repeat1,
  [11962] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(940), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(942), 1,
      aux_sym__escape_token1,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    STATE(282), 1,
      aux_sym__escaped_string_repeat1,
    STATE(283), 1,
      sym_multi_line_comment,
  [11981] = 3,
    STATE(284), 1,
      sym_multi_line_comment,
    ACTIONS(258), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(260), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [11994] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(936), 1,
      sym__identifier_char,
    STATE(285), 1,
      sym_multi_line_comment,
    STATE(286), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(693), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym__identifier_char,
    ACTIONS(701), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(286), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
  [12026] = 3,
    STATE(287), 1,
      sym_multi_line_comment,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(264), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [12039] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(954), 1,
      aux_sym__escape_token1,
    STATE(288), 2,
      sym_multi_line_comment,
      aux_sym__escaped_string_repeat1,
  [12056] = 3,
    STATE(289), 1,
      sym_multi_line_comment,
    ACTIONS(278), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(280), 3,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
      aux_sym_commented_block_token1,
  [12069] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(940), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(942), 1,
      aux_sym__escape_token1,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
    STATE(290), 1,
      sym_multi_line_comment,
    STATE(291), 1,
      aux_sym__escaped_string_repeat1,
  [12088] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(940), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(942), 1,
      aux_sym__escape_token1,
    ACTIONS(959), 1,
      anon_sym_DQUOTE,
    STATE(288), 1,
      aux_sym__escaped_string_repeat1,
    STATE(291), 1,
      sym_multi_line_comment,
  [12107] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(292), 1,
      sym_multi_line_comment,
    ACTIONS(961), 3,
      sym__identifier_char,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12119] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(965), 1,
      aux_sym__escaped_string_token1,
    STATE(293), 1,
      sym_multi_line_comment,
    ACTIONS(963), 2,
      anon_sym_DQUOTE,
      aux_sym__escape_token1,
  [12133] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 1,
      anon_sym_POUND,
    STATE(294), 1,
      sym_multi_line_comment,
    STATE(295), 1,
      aux_sym__raw_string_repeat1,
  [12149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    ACTIONS(969), 1,
      anon_sym_POUND,
    STATE(295), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
  [12163] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(296), 1,
      sym_multi_line_comment,
    ACTIONS(721), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(875), 1,
      aux_sym_single_line_comment_token1,
    STATE(258), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(297), 1,
      sym_multi_line_comment,
  [12187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(922), 1,
      sym__digit,
    STATE(191), 1,
      sym__integer,
    STATE(298), 1,
      sym_multi_line_comment,
  [12200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(922), 1,
      sym__digit,
    STATE(196), 1,
      sym__integer,
    STATE(299), 1,
      sym_multi_line_comment,
  [12213] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(922), 1,
      sym__digit,
    STATE(213), 1,
      sym__integer,
    STATE(300), 1,
      sym_multi_line_comment,
  [12226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(875), 1,
      aux_sym_single_line_comment_token1,
    STATE(259), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(301), 1,
      sym_multi_line_comment,
  [12239] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(302), 1,
      sym_multi_line_comment,
    ACTIONS(738), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [12250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(967), 1,
      anon_sym_POUND,
    STATE(294), 1,
      aux_sym__raw_string_repeat1,
    STATE(303), 1,
      sym_multi_line_comment,
  [12263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(875), 1,
      aux_sym_single_line_comment_token1,
    STATE(256), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(304), 1,
      sym_multi_line_comment,
  [12276] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(972), 1,
      anon_sym_POUND,
    STATE(190), 1,
      aux_sym__raw_string_repeat1,
    STATE(305), 1,
      sym_multi_line_comment,
  [12289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    ACTIONS(894), 1,
      sym___identifier_char_no_digit,
    STATE(306), 1,
      sym_multi_line_comment,
  [12302] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(307), 1,
      sym_multi_line_comment,
    ACTIONS(974), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [12313] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(308), 1,
      sym_multi_line_comment,
    ACTIONS(976), 2,
      anon_sym_0,
      anon_sym_1,
  [12324] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(309), 1,
      sym_multi_line_comment,
    ACTIONS(978), 2,
      anon_sym_0,
      anon_sym_1,
  [12335] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    STATE(310), 1,
      sym_multi_line_comment,
  [12345] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      sym_multi_line_comment,
  [12355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(984), 1,
      anon_sym_EQ,
    STATE(312), 1,
      sym_multi_line_comment,
  [12365] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(313), 1,
      sym_multi_line_comment,
  [12375] = 3,
    ACTIONS(988), 1,
      aux_sym__raw_string_token2,
    ACTIONS(990), 1,
      anon_sym_SLASH_STAR,
    STATE(314), 1,
      sym_multi_line_comment,
  [12385] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(992), 1,
      aux_sym__octal_token1,
    STATE(315), 1,
      sym_multi_line_comment,
  [12395] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(994), 1,
      aux_sym__octal_token1,
    STATE(316), 1,
      sym_multi_line_comment,
  [12405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_multi_line_comment,
  [12415] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(996), 1,
      sym__hex_digit,
    STATE(318), 1,
      sym_multi_line_comment,
  [12425] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      sym_multi_line_comment,
  [12435] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_multi_line_comment,
  [12445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE,
    STATE(321), 1,
      sym_multi_line_comment,
  [12455] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1004), 1,
      ts_builtin_sym_end,
    STATE(322), 1,
      sym_multi_line_comment,
  [12465] = 3,
    ACTIONS(990), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1006), 1,
      aux_sym__raw_string_token2,
    STATE(323), 1,
      sym_multi_line_comment,
  [12475] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_multi_line_comment,
  [12485] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    STATE(325), 1,
      sym_multi_line_comment,
  [12495] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym_multi_line_comment,
  [12505] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym_multi_line_comment,
  [12515] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(328), 1,
      sym_multi_line_comment,
  [12525] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1012), 1,
      sym__hex_digit,
    STATE(329), 1,
      sym_multi_line_comment,
  [12535] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
    STATE(330), 1,
      sym_multi_line_comment,
  [12545] = 3,
    ACTIONS(990), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1016), 1,
      aux_sym__raw_string_token2,
    STATE(331), 1,
      sym_multi_line_comment,
  [12555] = 3,
    ACTIONS(990), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1018), 1,
      aux_sym__raw_string_token2,
    STATE(332), 1,
      sym_multi_line_comment,
  [12565] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [12569] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [12573] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 141,
  [SMALL_STATE(4)] = 282,
  [SMALL_STATE(5)] = 423,
  [SMALL_STATE(6)] = 564,
  [SMALL_STATE(7)] = 705,
  [SMALL_STATE(8)] = 846,
  [SMALL_STATE(9)] = 987,
  [SMALL_STATE(10)] = 1068,
  [SMALL_STATE(11)] = 1149,
  [SMALL_STATE(12)] = 1265,
  [SMALL_STATE(13)] = 1377,
  [SMALL_STATE(14)] = 1489,
  [SMALL_STATE(15)] = 1598,
  [SMALL_STATE(16)] = 1707,
  [SMALL_STATE(17)] = 1762,
  [SMALL_STATE(18)] = 1837,
  [SMALL_STATE(19)] = 1913,
  [SMALL_STATE(20)] = 1989,
  [SMALL_STATE(21)] = 2065,
  [SMALL_STATE(22)] = 2141,
  [SMALL_STATE(23)] = 2217,
  [SMALL_STATE(24)] = 2293,
  [SMALL_STATE(25)] = 2369,
  [SMALL_STATE(26)] = 2445,
  [SMALL_STATE(27)] = 2521,
  [SMALL_STATE(28)] = 2597,
  [SMALL_STATE(29)] = 2673,
  [SMALL_STATE(30)] = 2749,
  [SMALL_STATE(31)] = 2825,
  [SMALL_STATE(32)] = 2901,
  [SMALL_STATE(33)] = 2976,
  [SMALL_STATE(34)] = 3051,
  [SMALL_STATE(35)] = 3126,
  [SMALL_STATE(36)] = 3201,
  [SMALL_STATE(37)] = 3276,
  [SMALL_STATE(38)] = 3351,
  [SMALL_STATE(39)] = 3426,
  [SMALL_STATE(40)] = 3501,
  [SMALL_STATE(41)] = 3576,
  [SMALL_STATE(42)] = 3651,
  [SMALL_STATE(43)] = 3726,
  [SMALL_STATE(44)] = 3801,
  [SMALL_STATE(45)] = 3876,
  [SMALL_STATE(46)] = 3927,
  [SMALL_STATE(47)] = 4002,
  [SMALL_STATE(48)] = 4077,
  [SMALL_STATE(49)] = 4152,
  [SMALL_STATE(50)] = 4227,
  [SMALL_STATE(51)] = 4271,
  [SMALL_STATE(52)] = 4343,
  [SMALL_STATE(53)] = 4389,
  [SMALL_STATE(54)] = 4435,
  [SMALL_STATE(55)] = 4481,
  [SMALL_STATE(56)] = 4527,
  [SMALL_STATE(57)] = 4565,
  [SMALL_STATE(58)] = 4603,
  [SMALL_STATE(59)] = 4641,
  [SMALL_STATE(60)] = 4679,
  [SMALL_STATE(61)] = 4717,
  [SMALL_STATE(62)] = 4755,
  [SMALL_STATE(63)] = 4793,
  [SMALL_STATE(64)] = 4865,
  [SMALL_STATE(65)] = 4923,
  [SMALL_STATE(66)] = 4981,
  [SMALL_STATE(67)] = 5039,
  [SMALL_STATE(68)] = 5097,
  [SMALL_STATE(69)] = 5155,
  [SMALL_STATE(70)] = 5195,
  [SMALL_STATE(71)] = 5253,
  [SMALL_STATE(72)] = 5311,
  [SMALL_STATE(73)] = 5369,
  [SMALL_STATE(74)] = 5427,
  [SMALL_STATE(75)] = 5485,
  [SMALL_STATE(76)] = 5528,
  [SMALL_STATE(77)] = 5571,
  [SMALL_STATE(78)] = 5614,
  [SMALL_STATE(79)] = 5657,
  [SMALL_STATE(80)] = 5720,
  [SMALL_STATE(81)] = 5765,
  [SMALL_STATE(82)] = 5796,
  [SMALL_STATE(83)] = 5837,
  [SMALL_STATE(84)] = 5902,
  [SMALL_STATE(85)] = 5933,
  [SMALL_STATE(86)] = 5964,
  [SMALL_STATE(87)] = 5995,
  [SMALL_STATE(88)] = 6060,
  [SMALL_STATE(89)] = 6106,
  [SMALL_STATE(90)] = 6152,
  [SMALL_STATE(91)] = 6198,
  [SMALL_STATE(92)] = 6244,
  [SMALL_STATE(93)] = 6290,
  [SMALL_STATE(94)] = 6336,
  [SMALL_STATE(95)] = 6382,
  [SMALL_STATE(96)] = 6428,
  [SMALL_STATE(97)] = 6474,
  [SMALL_STATE(98)] = 6506,
  [SMALL_STATE(99)] = 6552,
  [SMALL_STATE(100)] = 6588,
  [SMALL_STATE(101)] = 6634,
  [SMALL_STATE(102)] = 6680,
  [SMALL_STATE(103)] = 6726,
  [SMALL_STATE(104)] = 6772,
  [SMALL_STATE(105)] = 6818,
  [SMALL_STATE(106)] = 6864,
  [SMALL_STATE(107)] = 6910,
  [SMALL_STATE(108)] = 6956,
  [SMALL_STATE(109)] = 7002,
  [SMALL_STATE(110)] = 7048,
  [SMALL_STATE(111)] = 7082,
  [SMALL_STATE(112)] = 7124,
  [SMALL_STATE(113)] = 7170,
  [SMALL_STATE(114)] = 7206,
  [SMALL_STATE(115)] = 7252,
  [SMALL_STATE(116)] = 7298,
  [SMALL_STATE(117)] = 7344,
  [SMALL_STATE(118)] = 7390,
  [SMALL_STATE(119)] = 7436,
  [SMALL_STATE(120)] = 7482,
  [SMALL_STATE(121)] = 7512,
  [SMALL_STATE(122)] = 7548,
  [SMALL_STATE(123)] = 7594,
  [SMALL_STATE(124)] = 7640,
  [SMALL_STATE(125)] = 7686,
  [SMALL_STATE(126)] = 7732,
  [SMALL_STATE(127)] = 7778,
  [SMALL_STATE(128)] = 7824,
  [SMALL_STATE(129)] = 7870,
  [SMALL_STATE(130)] = 7916,
  [SMALL_STATE(131)] = 7952,
  [SMALL_STATE(132)] = 7984,
  [SMALL_STATE(133)] = 8018,
  [SMALL_STATE(134)] = 8064,
  [SMALL_STATE(135)] = 8093,
  [SMALL_STATE(136)] = 8122,
  [SMALL_STATE(137)] = 8151,
  [SMALL_STATE(138)] = 8180,
  [SMALL_STATE(139)] = 8209,
  [SMALL_STATE(140)] = 8238,
  [SMALL_STATE(141)] = 8267,
  [SMALL_STATE(142)] = 8296,
  [SMALL_STATE(143)] = 8325,
  [SMALL_STATE(144)] = 8354,
  [SMALL_STATE(145)] = 8383,
  [SMALL_STATE(146)] = 8412,
  [SMALL_STATE(147)] = 8441,
  [SMALL_STATE(148)] = 8470,
  [SMALL_STATE(149)] = 8499,
  [SMALL_STATE(150)] = 8528,
  [SMALL_STATE(151)] = 8557,
  [SMALL_STATE(152)] = 8586,
  [SMALL_STATE(153)] = 8615,
  [SMALL_STATE(154)] = 8644,
  [SMALL_STATE(155)] = 8673,
  [SMALL_STATE(156)] = 8702,
  [SMALL_STATE(157)] = 8731,
  [SMALL_STATE(158)] = 8760,
  [SMALL_STATE(159)] = 8789,
  [SMALL_STATE(160)] = 8818,
  [SMALL_STATE(161)] = 8847,
  [SMALL_STATE(162)] = 8876,
  [SMALL_STATE(163)] = 8905,
  [SMALL_STATE(164)] = 8934,
  [SMALL_STATE(165)] = 8963,
  [SMALL_STATE(166)] = 8992,
  [SMALL_STATE(167)] = 9021,
  [SMALL_STATE(168)] = 9050,
  [SMALL_STATE(169)] = 9079,
  [SMALL_STATE(170)] = 9108,
  [SMALL_STATE(171)] = 9137,
  [SMALL_STATE(172)] = 9165,
  [SMALL_STATE(173)] = 9193,
  [SMALL_STATE(174)] = 9223,
  [SMALL_STATE(175)] = 9251,
  [SMALL_STATE(176)] = 9281,
  [SMALL_STATE(177)] = 9313,
  [SMALL_STATE(178)] = 9345,
  [SMALL_STATE(179)] = 9373,
  [SMALL_STATE(180)] = 9403,
  [SMALL_STATE(181)] = 9431,
  [SMALL_STATE(182)] = 9459,
  [SMALL_STATE(183)] = 9487,
  [SMALL_STATE(184)] = 9517,
  [SMALL_STATE(185)] = 9545,
  [SMALL_STATE(186)] = 9574,
  [SMALL_STATE(187)] = 9601,
  [SMALL_STATE(188)] = 9628,
  [SMALL_STATE(189)] = 9657,
  [SMALL_STATE(190)] = 9686,
  [SMALL_STATE(191)] = 9715,
  [SMALL_STATE(192)] = 9744,
  [SMALL_STATE(193)] = 9771,
  [SMALL_STATE(194)] = 9800,
  [SMALL_STATE(195)] = 9829,
  [SMALL_STATE(196)] = 9858,
  [SMALL_STATE(197)] = 9887,
  [SMALL_STATE(198)] = 9916,
  [SMALL_STATE(199)] = 9945,
  [SMALL_STATE(200)] = 9973,
  [SMALL_STATE(201)] = 10001,
  [SMALL_STATE(202)] = 10027,
  [SMALL_STATE(203)] = 10050,
  [SMALL_STATE(204)] = 10073,
  [SMALL_STATE(205)] = 10110,
  [SMALL_STATE(206)] = 10135,
  [SMALL_STATE(207)] = 10168,
  [SMALL_STATE(208)] = 10193,
  [SMALL_STATE(209)] = 10216,
  [SMALL_STATE(210)] = 10239,
  [SMALL_STATE(211)] = 10261,
  [SMALL_STATE(212)] = 10283,
  [SMALL_STATE(213)] = 10305,
  [SMALL_STATE(214)] = 10327,
  [SMALL_STATE(215)] = 10355,
  [SMALL_STATE(216)] = 10377,
  [SMALL_STATE(217)] = 10399,
  [SMALL_STATE(218)] = 10421,
  [SMALL_STATE(219)] = 10443,
  [SMALL_STATE(220)] = 10471,
  [SMALL_STATE(221)] = 10493,
  [SMALL_STATE(222)] = 10515,
  [SMALL_STATE(223)] = 10537,
  [SMALL_STATE(224)] = 10559,
  [SMALL_STATE(225)] = 10581,
  [SMALL_STATE(226)] = 10603,
  [SMALL_STATE(227)] = 10625,
  [SMALL_STATE(228)] = 10647,
  [SMALL_STATE(229)] = 10669,
  [SMALL_STATE(230)] = 10691,
  [SMALL_STATE(231)] = 10722,
  [SMALL_STATE(232)] = 10753,
  [SMALL_STATE(233)] = 10784,
  [SMALL_STATE(234)] = 10815,
  [SMALL_STATE(235)] = 10846,
  [SMALL_STATE(236)] = 10879,
  [SMALL_STATE(237)] = 10910,
  [SMALL_STATE(238)] = 10930,
  [SMALL_STATE(239)] = 10950,
  [SMALL_STATE(240)] = 10970,
  [SMALL_STATE(241)] = 10998,
  [SMALL_STATE(242)] = 11018,
  [SMALL_STATE(243)] = 11046,
  [SMALL_STATE(244)] = 11066,
  [SMALL_STATE(245)] = 11086,
  [SMALL_STATE(246)] = 11106,
  [SMALL_STATE(247)] = 11134,
  [SMALL_STATE(248)] = 11154,
  [SMALL_STATE(249)] = 11174,
  [SMALL_STATE(250)] = 11202,
  [SMALL_STATE(251)] = 11222,
  [SMALL_STATE(252)] = 11242,
  [SMALL_STATE(253)] = 11281,
  [SMALL_STATE(254)] = 11320,
  [SMALL_STATE(255)] = 11343,
  [SMALL_STATE(256)] = 11382,
  [SMALL_STATE(257)] = 11408,
  [SMALL_STATE(258)] = 11428,
  [SMALL_STATE(259)] = 11454,
  [SMALL_STATE(260)] = 11480,
  [SMALL_STATE(261)] = 11500,
  [SMALL_STATE(262)] = 11520,
  [SMALL_STATE(263)] = 11541,
  [SMALL_STATE(264)] = 11571,
  [SMALL_STATE(265)] = 11591,
  [SMALL_STATE(266)] = 11621,
  [SMALL_STATE(267)] = 11639,
  [SMALL_STATE(268)] = 11667,
  [SMALL_STATE(269)] = 11684,
  [SMALL_STATE(270)] = 11704,
  [SMALL_STATE(271)] = 11726,
  [SMALL_STATE(272)] = 11746,
  [SMALL_STATE(273)] = 11766,
  [SMALL_STATE(274)] = 11786,
  [SMALL_STATE(275)] = 11806,
  [SMALL_STATE(276)] = 11826,
  [SMALL_STATE(277)] = 11846,
  [SMALL_STATE(278)] = 11866,
  [SMALL_STATE(279)] = 11886,
  [SMALL_STATE(280)] = 11906,
  [SMALL_STATE(281)] = 11926,
  [SMALL_STATE(282)] = 11943,
  [SMALL_STATE(283)] = 11962,
  [SMALL_STATE(284)] = 11981,
  [SMALL_STATE(285)] = 11994,
  [SMALL_STATE(286)] = 12011,
  [SMALL_STATE(287)] = 12026,
  [SMALL_STATE(288)] = 12039,
  [SMALL_STATE(289)] = 12056,
  [SMALL_STATE(290)] = 12069,
  [SMALL_STATE(291)] = 12088,
  [SMALL_STATE(292)] = 12107,
  [SMALL_STATE(293)] = 12119,
  [SMALL_STATE(294)] = 12133,
  [SMALL_STATE(295)] = 12149,
  [SMALL_STATE(296)] = 12163,
  [SMALL_STATE(297)] = 12174,
  [SMALL_STATE(298)] = 12187,
  [SMALL_STATE(299)] = 12200,
  [SMALL_STATE(300)] = 12213,
  [SMALL_STATE(301)] = 12226,
  [SMALL_STATE(302)] = 12239,
  [SMALL_STATE(303)] = 12250,
  [SMALL_STATE(304)] = 12263,
  [SMALL_STATE(305)] = 12276,
  [SMALL_STATE(306)] = 12289,
  [SMALL_STATE(307)] = 12302,
  [SMALL_STATE(308)] = 12313,
  [SMALL_STATE(309)] = 12324,
  [SMALL_STATE(310)] = 12335,
  [SMALL_STATE(311)] = 12345,
  [SMALL_STATE(312)] = 12355,
  [SMALL_STATE(313)] = 12365,
  [SMALL_STATE(314)] = 12375,
  [SMALL_STATE(315)] = 12385,
  [SMALL_STATE(316)] = 12395,
  [SMALL_STATE(317)] = 12405,
  [SMALL_STATE(318)] = 12415,
  [SMALL_STATE(319)] = 12425,
  [SMALL_STATE(320)] = 12435,
  [SMALL_STATE(321)] = 12445,
  [SMALL_STATE(322)] = 12455,
  [SMALL_STATE(323)] = 12465,
  [SMALL_STATE(324)] = 12475,
  [SMALL_STATE(325)] = 12485,
  [SMALL_STATE(326)] = 12495,
  [SMALL_STATE(327)] = 12505,
  [SMALL_STATE(328)] = 12515,
  [SMALL_STATE(329)] = 12525,
  [SMALL_STATE(330)] = 12535,
  [SMALL_STATE(331)] = 12545,
  [SMALL_STATE(332)] = 12555,
  [SMALL_STATE(333)] = 12565,
  [SMALL_STATE(334)] = 12569,
  [SMALL_STATE(335)] = 12573,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(236),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(45),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(273),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(221),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(83),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(10),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(283),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(310),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(314),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(207),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(207),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(51),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(297),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(280),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(236),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(50),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(273),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(50),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(273),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(50),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(273),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(55),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(52),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(50),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(273),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commented_block, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(297),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(280),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(247),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(250),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(245),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(231),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(82),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(278),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(231),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(110),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(278),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(110),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(278),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(110),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(278),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(231),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(82),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(278),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(99),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(278),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(120),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(110),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(121),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(132),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(280),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 8),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 8),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 12),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 12),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 16),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 16),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 4),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 15),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 15),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 7),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 12),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 8),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 8),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 14),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 7),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 8),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 8),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 4),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 16),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 16),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 12),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 16),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 16),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 15),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 14),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(174),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(186),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(187),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 5),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(192),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(201),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(234),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(235),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(280),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [726] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(236),
  [730] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(50),
  [734] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(273),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 3, .production_id = 9),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [757] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(219),
  [761] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(273),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 2, .production_id = 6),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [774] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(50),
  [778] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(273),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_field, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 13),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(234),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(132),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(280),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 5),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(132),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(280),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(249),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 5),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 5),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(240),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(280),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 5),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 5),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(132),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 5),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [883] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(264),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sign, 1),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sign, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(292),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [951] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(293),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(293),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(307),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1004] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
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
