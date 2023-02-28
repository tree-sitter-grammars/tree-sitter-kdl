#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 286
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 4
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 2
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
  anon_sym_null = 8,
  anon_sym_i8 = 9,
  anon_sym_i16 = 10,
  anon_sym_i32 = 11,
  anon_sym_i64 = 12,
  anon_sym_u8 = 13,
  anon_sym_u16 = 14,
  anon_sym_u32 = 15,
  anon_sym_u64 = 16,
  anon_sym_isize = 17,
  anon_sym_usize = 18,
  anon_sym_f32 = 19,
  anon_sym_f64 = 20,
  anon_sym_decimal64 = 21,
  anon_sym_decimal128 = 22,
  anon_sym_date_DASHtime = 23,
  anon_sym_time = 24,
  anon_sym_date = 25,
  anon_sym_duration = 26,
  anon_sym_decimal = 27,
  anon_sym_currency = 28,
  anon_sym_country_DASH2 = 29,
  anon_sym_country_DASH3 = 30,
  anon_sym_country_DASHsubdivision = 31,
  anon_sym_email = 32,
  anon_sym_idn_DASHemail = 33,
  anon_sym_hostname = 34,
  anon_sym_idn_DASHhostname = 35,
  anon_sym_ipv4 = 36,
  anon_sym_ipv6 = 37,
  anon_sym_url = 38,
  anon_sym_url_DASHreference = 39,
  anon_sym_irl = 40,
  anon_sym_iri_DASHreference = 41,
  anon_sym_url_DASHtemplate = 42,
  anon_sym_uuid = 43,
  anon_sym_regex = 44,
  anon_sym_base64 = 45,
  anon_sym_EQ = 46,
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  anon_sym_DQUOTE = 49,
  aux_sym__escaped_string_token1 = 50,
  sym_escape = 51,
  sym__hex_digit = 52,
  aux_sym__raw_string_token1 = 53,
  aux_sym__raw_string_token2 = 54,
  anon_sym_POUND = 55,
  aux_sym__raw_string_token3 = 56,
  aux_sym__raw_string_token4 = 57,
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
  sym__eof = 85,
  sym_multi_line_comment = 86,
  sym_document = 87,
  sym_node = 88,
  sym_node_field = 89,
  sym__node_field_comment = 90,
  sym__node_field = 91,
  sym_node_children = 92,
  sym__node_space = 93,
  sym__node_terminator = 94,
  sym_identifier = 95,
  sym__bare_identifier = 96,
  sym_keyword = 97,
  sym_annotation_type = 98,
  sym_prop = 99,
  sym_value = 100,
  sym_type = 101,
  sym_string = 102,
  sym__escaped_string = 103,
  sym__raw_string = 104,
  sym_number = 105,
  sym__decimal = 106,
  sym__exponent = 107,
  sym__integer = 108,
  sym__sign = 109,
  sym__hex = 110,
  sym__octal = 111,
  sym__binary = 112,
  sym_boolean = 113,
  sym__escline = 114,
  sym__linespace = 115,
  sym__newline = 116,
  sym__ws = 117,
  sym_single_line_comment = 118,
  aux_sym_document_repeat1 = 119,
  aux_sym_document_repeat2 = 120,
  aux_sym_node_repeat1 = 121,
  aux_sym_node_repeat2 = 122,
  aux_sym_node_repeat3 = 123,
  aux_sym__bare_identifier_repeat1 = 124,
  aux_sym__escaped_string_repeat1 = 125,
  aux_sym__raw_string_repeat1 = 126,
  aux_sym__integer_repeat1 = 127,
  aux_sym__hex_repeat1 = 128,
  aux_sym__octal_repeat1 = 129,
  aux_sym__binary_repeat1 = 130,
  aux_sym_single_line_comment_repeat1 = 131,
  alias_sym_decimal = 132,
  alias_sym_node_children_comment = 133,
  alias_sym_node_field_comment = 134,
  alias_sym_string_fragment = 135,
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
  [sym_escape] = "escape",
  [sym__hex_digit] = "_hex_digit",
  [aux_sym__raw_string_token1] = "_raw_string_token1",
  [aux_sym__raw_string_token2] = "_raw_string_token2",
  [anon_sym_POUND] = "#",
  [aux_sym__raw_string_token3] = "_raw_string_token3",
  [aux_sym__raw_string_token4] = "_raw_string_token4",
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
  [sym__eof] = "_eof",
  [sym_multi_line_comment] = "multi_line_comment",
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
  [alias_sym_string_fragment] = "string_fragment",
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
  [sym_escape] = sym_escape,
  [sym__hex_digit] = sym__hex_digit,
  [aux_sym__raw_string_token1] = aux_sym__raw_string_token1,
  [aux_sym__raw_string_token2] = aux_sym__raw_string_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__raw_string_token3] = aux_sym__raw_string_token3,
  [aux_sym__raw_string_token4] = aux_sym__raw_string_token4,
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
  [sym__eof] = sym__eof,
  [sym_multi_line_comment] = sym_multi_line_comment,
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
  [alias_sym_string_fragment] = alias_sym_string_fragment,
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
  [sym_escape] = {
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
  [aux_sym__raw_string_token4] = {
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
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_multi_line_comment] = {
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
  [alias_sym_string_fragment] = {
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
    [1] = alias_sym_string_fragment,
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
    alias_sym_string_fragment,
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
  [58] = 55,
  [59] = 50,
  [60] = 60,
  [61] = 61,
  [62] = 57,
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
  [79] = 15,
  [80] = 80,
  [81] = 81,
  [82] = 45,
  [83] = 83,
  [84] = 84,
  [85] = 52,
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
  [107] = 49,
  [108] = 53,
  [109] = 109,
  [110] = 54,
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
  [121] = 121,
  [122] = 122,
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
  [165] = 56,
  [166] = 166,
  [167] = 167,
  [168] = 61,
  [169] = 169,
  [170] = 170,
  [171] = 60,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
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
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 220,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 238,
  [240] = 240,
  [241] = 240,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 189,
  [251] = 190,
  [252] = 191,
  [253] = 253,
  [254] = 248,
  [255] = 253,
  [256] = 256,
  [257] = 182,
  [258] = 184,
  [259] = 209,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 193,
  [264] = 261,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 195,
  [272] = 272,
  [273] = 198,
  [274] = 197,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 192,
  [283] = 279,
  [284] = 277,
  [285] = 276,
};

static inline bool sym__normal_bare_identifier_character_set_1(int32_t c) {
  return (c < 8488
    ? (c < 3285
      ? (c < 2579
        ? (c < 1552
          ? (c < 886
            ? (c < 185
              ? (c < 'g'
                ? (c < '?'
                  ? (c < ':'
                    ? (c >= '!' && c <= '*')
                    : c <= ':')
                  : (c <= 'Z' || c == '^'))
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
                : (c <= 8477 || (c < 8484
                  ? c == 8482
                  : (c <= 8484 || c == 8486))))))))))))))
    : (c <= 8488 || (c < 43739
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
          : (c <= 12879 || (c < 42965
            ? (c < 42240
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

static inline bool sym__normal_bare_identifier_character_set_2(int32_t c) {
  return (c < 8488
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
                : (c <= 8477 || (c < 8484
                  ? c == 8482
                  : (c <= 8484 || c == 8486))))))))))))))
    : (c <= 8488 || (c < 43739
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
          : (c <= 12879 || (c < 42965
            ? (c < 42240
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

static inline bool sym__normal_bare_identifier_character_set_3(int32_t c) {
  return (c < 8484
    ? (c < 3260
      ? (c < 2561
        ? (c < 1479
          ? (c < 748
            ? (c < 174
              ? (c < '^'
                ? (c < '-'
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
    : (c <= 8484 || (c < 43642
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
          : (c <= 12841 || (c < 42963
            ? (c < 42192
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
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
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
  return (c < 8482
    ? (c < 3253
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
                    ? (c >= '-' && c <= '.')
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
        : (c <= 2558 || (c < 2891
          ? (c < 2707
            ? (c < 2622
              ? (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || c == 2620))))
              : (c <= 2626 || (c < 2654
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2693
                  ? (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))
            : (c <= 2728 || (c < 2809
              ? (c < 2759
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))))
              : (c <= 2815 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))))))
          : (c <= 2893 || (c < 3031
            ? (c < 2969
              ? (c < 2929
                ? (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3018
                  ? (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)
                  : (c <= 3021 || c == 3024))))))
            : (c <= 3031 || (c < 3160
              ? (c < 3114
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3058)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))
              : (c <= 3162 || (c < 3200
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3203 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))))))
      : (c <= 3257 || (c < 5112
        ? (c < 3792
          ? (c < 3517
            ? (c < 3346
              ? (c < 3296
                ? (c < 3274
                  ? (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3277 || (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)))
                : (c <= 3299 || (c < 3328
                  ? (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3315)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3396 || (c < 3450
                ? (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3427 || (c >= 3430 && c <= 3448)))
                : (c <= 3455 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3664
              ? (c < 3544
                ? (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))
              : (c <= 3673 || (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3790)))))))))
          : (c <= 3801 || (c < 4348
            ? (c < 3953
              ? (c < 3893
                ? (c < 3864
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3865 || (c >= 3872 && c <= 3891)))
                : (c <= 3893 || (c < 3902
                  ? (c < 3897
                    ? c == 3895
                    : c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4176
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c >= 4096 && c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))))
            : (c <= 4680 || (c < 4800
              ? (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4888
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))))))))))
        : (c <= 5117 || (c < 7040
          ? (c < 6272
            ? (c < 5998
              ? (c < 5870
                ? (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))))
              : (c <= 6000 || (c < 6112
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c >= 6108 && c <= 6109)))
                : (c <= 6121 || (c < 6159
                  ? (c < 6155
                    ? (c >= 6128 && c <= 6137)
                    : c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))))))
            : (c <= 6314 || (c < 6656
              ? (c < 6470
                ? (c < 6432
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6823
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6832 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c >= 7019 && c <= 7027)))))))))
          : (c <= 7155 || (c < 8126
            ? (c < 7960
              ? (c < 7312
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))
            : (c <= 8126 || (c < 8304
              ? (c < 8160
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8252
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8252 || c == 8265))))
              : (c <= 8305 || (c < 8450
                ? (c < 8336
                  ? (c < 8319
                    ? (c >= 8308 && c <= 8313)
                    : c <= 8329)
                  : (c <= 8348 || (c >= 8400 && c <= 8432)))
                : (c <= 8450 || (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))))))))))))))
    : (c <= 8482 || (c < 43616
      ? (c < 10133
        ? (c < 9829
          ? (c < 9654
            ? (c < 8617
              ? (c < 8508
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8495
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8505)))
                : (c <= 8511 || (c < 8528
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8585 || (c >= 8596 && c <= 8601)))))
              : (c <= 8618 || (c < 9208
                ? (c < 9167
                  ? (c < 9000
                    ? (c >= 8986 && c <= 8987)
                    : c <= 9000)
                  : (c <= 9167 || (c >= 9193 && c <= 9203)))
                : (c <= 9210 || (c < 9450
                  ? (c < 9410
                    ? (c >= 9312 && c <= 9371)
                    : c <= 9410)
                  : (c <= 9471 || (c >= 9642 && c <= 9643)))))))
            : (c <= 9654 || (c < 9762
              ? (c < 9745
                ? (c < 9728
                  ? (c < 9723
                    ? c == 9664
                    : c <= 9726)
                  : (c <= 9732 || c == 9742))
                : (c <= 9745 || (c < 9757
                  ? (c < 9752
                    ? (c >= 9748 && c <= 9749)
                    : c <= 9752)
                  : (c <= 9757 || c == 9760))))
              : (c <= 9763 || (c < 9792
                ? (c < 9774
                  ? (c < 9770
                    ? c == 9766
                    : c <= 9770)
                  : (c <= 9775 || (c >= 9784 && c <= 9786)))
                : (c <= 9792 || (c < 9823
                  ? (c < 9800
                    ? c == 9794
                    : c <= 9811)
                  : (c <= 9824 || c == 9827))))))))
          : (c <= 9830 || (c < 9981
            ? (c < 9904
              ? (c < 9881
                ? (c < 9854
                  ? (c < 9851
                    ? c == 9832
                    : c <= 9851)
                  : (c <= 9855 || (c >= 9874 && c <= 9879)))
                : (c <= 9881 || (c < 9895
                  ? (c < 9888
                    ? (c >= 9883 && c <= 9884)
                    : c <= 9889)
                  : (c <= 9895 || (c >= 9898 && c <= 9899)))))
              : (c <= 9905 || (c < 9937
                ? (c < 9928
                  ? (c < 9924
                    ? (c >= 9917 && c <= 9918)
                    : c <= 9925)
                  : (c <= 9928 || (c >= 9934 && c <= 9935)))
                : (c <= 9937 || (c < 9968
                  ? (c < 9961
                    ? (c >= 9939 && c <= 9940)
                    : c <= 9962)
                  : (c <= 9973 || (c >= 9975 && c <= 9978)))))))
            : (c <= 9981 || (c < 10024
              ? (c < 10002
                ? (c < 9992
                  ? (c < 9989
                    ? c == 9986
                    : c <= 9989)
                  : (c <= 9997 || c == 9999))
                : (c <= 10002 || (c < 10013
                  ? (c < 10006
                    ? c == 10004
                    : c <= 10006)
                  : (c <= 10013 || c == 10017))))
              : (c <= 10024 || (c < 10062
                ? (c < 10055
                  ? (c < 10052
                    ? (c >= 10035 && c <= 10036)
                    : c <= 10052)
                  : (c <= 10055 || c == 10060))
                : (c <= 10062 || (c < 10083
                  ? (c < 10071
                    ? (c >= 10067 && c <= 10069)
                    : c <= 10071)
                  : (c <= 10084 || (c >= 10102 && c <= 10131)))))))))))
        : (c <= 10135 || (c < 12784
          ? (c < 11696
            ? (c < 11499
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
                  : (c <= 11093 || (c >= 11264 && c <= 11492)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c < 11520
                    ? c == 11517
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))
            : (c <= 11702 || (c < 12344
              ? (c < 11736
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? (c < 11823
                    ? (c >= 11744 && c <= 11775)
                    : c <= 11823)
                  : (c <= 12295 || (c >= 12321 && c <= 12341)))))
              : (c <= 12349 || (c < 12540
                ? (c < 12445
                  ? (c < 12441
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12442)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12690
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12693 || (c >= 12704 && c <= 12735)))))))))
          : (c <= 12799 || (c < 42960
            ? (c < 19968
              ? (c < 12951
                ? (c < 12881
                  ? (c < 12872
                    ? (c >= 12832 && c <= 12841)
                    : c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))
                : (c <= 12951 || (c < 13312
                  ? (c < 12977
                    ? c == 12953
                    : c <= 12991)
                  : (c <= 13312 || c == 19903))))
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
  return (c < 6002
    ? (c < 2949
      ? (c < 2437
        ? (c < 1329
          ? (c < 248
            ? (c < '~'
              ? (c < '-'
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
      : (c <= 2954 || (c < 3585
        ? (c < 3218
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
                  : c <= 3216)))))))
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
                  : (c <= 3315 || (c >= 3328 && c <= 3340)))
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
                  : (c <= 3782 || (c >= 3784 && c <= 3790)))
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
            : (c <= 4954 || (c < 5792
              ? (c < 5024
                ? (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))))))))))
    : (c <= 6003 || (c < 42623
      ? (c < 8455
        ? (c < 7245
          ? (c < 6528
            ? (c < 6176
              ? (c < 6112
                ? (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6108 && c <= 6109)))
                : (c <= 6121 || (c < 6155
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))))
              : (c <= 6264 || (c < 6432
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6443 || (c < 6470
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))))
            : (c <= 6571 || (c < 6823
              ? (c < 6688
                ? (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))
                : (c <= 6750 || (c < 6783
                  ? (c >= 6752 && c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))
              : (c <= 6823 || (c < 7019
                ? (c < 6912
                  ? (c >= 6832 && c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7027 || (c < 7168
                  ? (c >= 7040 && c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))))))))
          : (c <= 7293 || (c < 8118
            ? (c < 7968
              ? (c < 7376
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7424
                  ? (c >= 7380 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))
            : (c <= 8124 || (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8450
                  ? (c >= 8400 && c <= 8432)
                  : c <= 8450)))))))))
        : (c <= 8455 || (c < 11728
          ? (c < 11264
            ? (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : (c <= 9471 || (c >= 10102 && c <= 10131)))))))
            : (c <= 11492 || (c < 11647
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11499 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))))
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
              : (c <= 19903 || (c < 42512
                ? (c < 42192
                  ? (c >= 19968 && c <= 42124)
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
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(36);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(26);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\f') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(65);
      if (lookahead == 8232) ADVANCE(67);
      if (lookahead == 8233) ADVANCE(68);
      if (lookahead == 65279) ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(70);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '"') ADVANCE(40);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(26);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__raw_string_token3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__raw_string_token4);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(26);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_E);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(26);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(26);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__newline_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__newline_token3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__newline_token4);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__newline_token5);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__newline_token6);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__newline_token7);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__unicode_space);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(71);
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
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(37);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__raw_string_token1);
      if (lookahead == '#') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == '6') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(68);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(82);
      if (lookahead == '6') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_irl);
      END_STATE();
    case 61:
      if (lookahead == 'z') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'z') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == '6') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 87:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 93:
      if (lookahead == '4') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '6') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '3') ADVANCE(146);
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_currency);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == '4') ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_hostname);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 149:
      if (lookahead == '8') ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_decimal64);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_decimal128);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 1},
  [3] = {.lex_state = 19, .external_lex_state = 1},
  [4] = {.lex_state = 19, .external_lex_state = 1},
  [5] = {.lex_state = 19, .external_lex_state = 1},
  [6] = {.lex_state = 19, .external_lex_state = 1},
  [7] = {.lex_state = 19, .external_lex_state = 1},
  [8] = {.lex_state = 19, .external_lex_state = 1},
  [9] = {.lex_state = 19, .external_lex_state = 2},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 19, .external_lex_state = 2},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 19, .external_lex_state = 2},
  [15] = {.lex_state = 19, .external_lex_state = 1},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 19, .external_lex_state = 2},
  [26] = {.lex_state = 19, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 19, .external_lex_state = 2},
  [31] = {.lex_state = 19, .external_lex_state = 2},
  [32] = {.lex_state = 19, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 2},
  [35] = {.lex_state = 19, .external_lex_state = 2},
  [36] = {.lex_state = 19, .external_lex_state = 2},
  [37] = {.lex_state = 19, .external_lex_state = 2},
  [38] = {.lex_state = 19, .external_lex_state = 2},
  [39] = {.lex_state = 19, .external_lex_state = 2},
  [40] = {.lex_state = 19, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 19, .external_lex_state = 2},
  [43] = {.lex_state = 19, .external_lex_state = 2},
  [44] = {.lex_state = 19, .external_lex_state = 2},
  [45] = {.lex_state = 19, .external_lex_state = 1},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 19, .external_lex_state = 2},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 1},
  [50] = {.lex_state = 19, .external_lex_state = 1},
  [51] = {.lex_state = 19, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 1},
  [53] = {.lex_state = 19, .external_lex_state = 1},
  [54] = {.lex_state = 19, .external_lex_state = 1},
  [55] = {.lex_state = 19, .external_lex_state = 1},
  [56] = {.lex_state = 19, .external_lex_state = 1},
  [57] = {.lex_state = 19, .external_lex_state = 1},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 1},
  [61] = {.lex_state = 19, .external_lex_state = 1},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 19, .external_lex_state = 2},
  [64] = {.lex_state = 19, .external_lex_state = 1},
  [65] = {.lex_state = 19, .external_lex_state = 1},
  [66] = {.lex_state = 19, .external_lex_state = 2},
  [67] = {.lex_state = 19, .external_lex_state = 1},
  [68] = {.lex_state = 19, .external_lex_state = 1},
  [69] = {.lex_state = 19, .external_lex_state = 1},
  [70] = {.lex_state = 19, .external_lex_state = 1},
  [71] = {.lex_state = 19, .external_lex_state = 1},
  [72] = {.lex_state = 19, .external_lex_state = 1},
  [73] = {.lex_state = 19, .external_lex_state = 1},
  [74] = {.lex_state = 19, .external_lex_state = 1},
  [75] = {.lex_state = 19, .external_lex_state = 2},
  [76] = {.lex_state = 19, .external_lex_state = 2},
  [77] = {.lex_state = 19, .external_lex_state = 2},
  [78] = {.lex_state = 19, .external_lex_state = 2},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 19, .external_lex_state = 2},
  [81] = {.lex_state = 19, .external_lex_state = 2},
  [82] = {.lex_state = 19, .external_lex_state = 2},
  [83] = {.lex_state = 19, .external_lex_state = 2},
  [84] = {.lex_state = 19, .external_lex_state = 1},
  [85] = {.lex_state = 19, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 1},
  [87] = {.lex_state = 19, .external_lex_state = 1},
  [88] = {.lex_state = 19, .external_lex_state = 1},
  [89] = {.lex_state = 19, .external_lex_state = 1},
  [90] = {.lex_state = 19, .external_lex_state = 1},
  [91] = {.lex_state = 19, .external_lex_state = 1},
  [92] = {.lex_state = 19, .external_lex_state = 1},
  [93] = {.lex_state = 1, .external_lex_state = 1},
  [94] = {.lex_state = 19, .external_lex_state = 1},
  [95] = {.lex_state = 19, .external_lex_state = 1},
  [96] = {.lex_state = 19, .external_lex_state = 1},
  [97] = {.lex_state = 19, .external_lex_state = 1},
  [98] = {.lex_state = 19, .external_lex_state = 1},
  [99] = {.lex_state = 19, .external_lex_state = 1},
  [100] = {.lex_state = 19, .external_lex_state = 1},
  [101] = {.lex_state = 19, .external_lex_state = 1},
  [102] = {.lex_state = 19, .external_lex_state = 1},
  [103] = {.lex_state = 19, .external_lex_state = 1},
  [104] = {.lex_state = 19, .external_lex_state = 1},
  [105] = {.lex_state = 19, .external_lex_state = 1},
  [106] = {.lex_state = 19, .external_lex_state = 1},
  [107] = {.lex_state = 19, .external_lex_state = 2},
  [108] = {.lex_state = 19, .external_lex_state = 2},
  [109] = {.lex_state = 19, .external_lex_state = 1},
  [110] = {.lex_state = 19, .external_lex_state = 2},
  [111] = {.lex_state = 19, .external_lex_state = 1},
  [112] = {.lex_state = 19, .external_lex_state = 1},
  [113] = {.lex_state = 19, .external_lex_state = 1},
  [114] = {.lex_state = 19, .external_lex_state = 1},
  [115] = {.lex_state = 19, .external_lex_state = 1},
  [116] = {.lex_state = 19, .external_lex_state = 1},
  [117] = {.lex_state = 19, .external_lex_state = 1},
  [118] = {.lex_state = 19, .external_lex_state = 1},
  [119] = {.lex_state = 19, .external_lex_state = 1},
  [120] = {.lex_state = 19, .external_lex_state = 1},
  [121] = {.lex_state = 19, .external_lex_state = 1},
  [122] = {.lex_state = 19, .external_lex_state = 1},
  [123] = {.lex_state = 19, .external_lex_state = 1},
  [124] = {.lex_state = 19, .external_lex_state = 1},
  [125] = {.lex_state = 19, .external_lex_state = 1},
  [126] = {.lex_state = 1, .external_lex_state = 1},
  [127] = {.lex_state = 19, .external_lex_state = 1},
  [128] = {.lex_state = 19, .external_lex_state = 2},
  [129] = {.lex_state = 19, .external_lex_state = 2},
  [130] = {.lex_state = 19, .external_lex_state = 2},
  [131] = {.lex_state = 19, .external_lex_state = 2},
  [132] = {.lex_state = 19, .external_lex_state = 2},
  [133] = {.lex_state = 19, .external_lex_state = 2},
  [134] = {.lex_state = 19, .external_lex_state = 2},
  [135] = {.lex_state = 19, .external_lex_state = 2},
  [136] = {.lex_state = 19, .external_lex_state = 2},
  [137] = {.lex_state = 19, .external_lex_state = 2},
  [138] = {.lex_state = 19, .external_lex_state = 2},
  [139] = {.lex_state = 19, .external_lex_state = 2},
  [140] = {.lex_state = 19, .external_lex_state = 2},
  [141] = {.lex_state = 19, .external_lex_state = 2},
  [142] = {.lex_state = 19, .external_lex_state = 2},
  [143] = {.lex_state = 19, .external_lex_state = 2},
  [144] = {.lex_state = 19, .external_lex_state = 2},
  [145] = {.lex_state = 19, .external_lex_state = 2},
  [146] = {.lex_state = 19, .external_lex_state = 2},
  [147] = {.lex_state = 19, .external_lex_state = 2},
  [148] = {.lex_state = 19, .external_lex_state = 2},
  [149] = {.lex_state = 19, .external_lex_state = 2},
  [150] = {.lex_state = 19, .external_lex_state = 2},
  [151] = {.lex_state = 19, .external_lex_state = 2},
  [152] = {.lex_state = 19, .external_lex_state = 2},
  [153] = {.lex_state = 19, .external_lex_state = 2},
  [154] = {.lex_state = 19, .external_lex_state = 2},
  [155] = {.lex_state = 19, .external_lex_state = 2},
  [156] = {.lex_state = 19, .external_lex_state = 2},
  [157] = {.lex_state = 19, .external_lex_state = 2},
  [158] = {.lex_state = 19, .external_lex_state = 2},
  [159] = {.lex_state = 19, .external_lex_state = 2},
  [160] = {.lex_state = 19, .external_lex_state = 2},
  [161] = {.lex_state = 19, .external_lex_state = 2},
  [162] = {.lex_state = 19, .external_lex_state = 2},
  [163] = {.lex_state = 19, .external_lex_state = 2},
  [164] = {.lex_state = 19, .external_lex_state = 2},
  [165] = {.lex_state = 19, .external_lex_state = 2},
  [166] = {.lex_state = 4, .external_lex_state = 1},
  [167] = {.lex_state = 4, .external_lex_state = 1},
  [168] = {.lex_state = 19, .external_lex_state = 2},
  [169] = {.lex_state = 1, .external_lex_state = 1},
  [170] = {.lex_state = 4, .external_lex_state = 1},
  [171] = {.lex_state = 19, .external_lex_state = 2},
  [172] = {.lex_state = 1, .external_lex_state = 1},
  [173] = {.lex_state = 4, .external_lex_state = 1},
  [174] = {.lex_state = 4, .external_lex_state = 1},
  [175] = {.lex_state = 5, .external_lex_state = 1},
  [176] = {.lex_state = 1, .external_lex_state = 1},
  [177] = {.lex_state = 6, .external_lex_state = 1},
  [178] = {.lex_state = 6, .external_lex_state = 1},
  [179] = {.lex_state = 5, .external_lex_state = 1},
  [180] = {.lex_state = 5, .external_lex_state = 1},
  [181] = {.lex_state = 6, .external_lex_state = 1},
  [182] = {.lex_state = 1, .external_lex_state = 1},
  [183] = {.lex_state = 5, .external_lex_state = 1},
  [184] = {.lex_state = 1, .external_lex_state = 1},
  [185] = {.lex_state = 6, .external_lex_state = 1},
  [186] = {.lex_state = 6, .external_lex_state = 1},
  [187] = {.lex_state = 5, .external_lex_state = 1},
  [188] = {.lex_state = 1, .external_lex_state = 1},
  [189] = {.lex_state = 3, .external_lex_state = 1},
  [190] = {.lex_state = 3, .external_lex_state = 1},
  [191] = {.lex_state = 3, .external_lex_state = 1},
  [192] = {.lex_state = 19, .external_lex_state = 1},
  [193] = {.lex_state = 2, .external_lex_state = 1},
  [194] = {.lex_state = 19, .external_lex_state = 1},
  [195] = {.lex_state = 19, .external_lex_state = 1},
  [196] = {.lex_state = 19, .external_lex_state = 1},
  [197] = {.lex_state = 19, .external_lex_state = 1},
  [198] = {.lex_state = 19, .external_lex_state = 1},
  [199] = {.lex_state = 19, .external_lex_state = 1},
  [200] = {.lex_state = 19, .external_lex_state = 1},
  [201] = {.lex_state = 19, .external_lex_state = 1},
  [202] = {.lex_state = 19, .external_lex_state = 1},
  [203] = {.lex_state = 19, .external_lex_state = 1},
  [204] = {.lex_state = 19, .external_lex_state = 1},
  [205] = {.lex_state = 19, .external_lex_state = 1},
  [206] = {.lex_state = 19, .external_lex_state = 1},
  [207] = {.lex_state = 19, .external_lex_state = 1},
  [208] = {.lex_state = 19, .external_lex_state = 1},
  [209] = {.lex_state = 19, .external_lex_state = 1},
  [210] = {.lex_state = 19, .external_lex_state = 1},
  [211] = {.lex_state = 19, .external_lex_state = 1},
  [212] = {.lex_state = 19, .external_lex_state = 1},
  [213] = {.lex_state = 19, .external_lex_state = 1},
  [214] = {.lex_state = 19, .external_lex_state = 1},
  [215] = {.lex_state = 19, .external_lex_state = 1},
  [216] = {.lex_state = 19, .external_lex_state = 1},
  [217] = {.lex_state = 19, .external_lex_state = 1},
  [218] = {.lex_state = 19, .external_lex_state = 1},
  [219] = {.lex_state = 19, .external_lex_state = 2},
  [220] = {.lex_state = 19, .external_lex_state = 2},
  [221] = {.lex_state = 19, .external_lex_state = 2},
  [222] = {.lex_state = 19, .external_lex_state = 2},
  [223] = {.lex_state = 19, .external_lex_state = 1},
  [224] = {.lex_state = 19, .external_lex_state = 1},
  [225] = {.lex_state = 19, .external_lex_state = 1},
  [226] = {.lex_state = 19, .external_lex_state = 1},
  [227] = {.lex_state = 19, .external_lex_state = 1},
  [228] = {.lex_state = 19, .external_lex_state = 1},
  [229] = {.lex_state = 19, .external_lex_state = 1},
  [230] = {.lex_state = 19, .external_lex_state = 1},
  [231] = {.lex_state = 19, .external_lex_state = 2},
  [232] = {.lex_state = 19, .external_lex_state = 1},
  [233] = {.lex_state = 19, .external_lex_state = 1},
  [234] = {.lex_state = 19, .external_lex_state = 1},
  [235] = {.lex_state = 19, .external_lex_state = 2},
  [236] = {.lex_state = 19, .external_lex_state = 2},
  [237] = {.lex_state = 19, .external_lex_state = 2},
  [238] = {.lex_state = 7, .external_lex_state = 1},
  [239] = {.lex_state = 7, .external_lex_state = 1},
  [240] = {.lex_state = 7, .external_lex_state = 1},
  [241] = {.lex_state = 7, .external_lex_state = 1},
  [242] = {.lex_state = 7, .external_lex_state = 1},
  [243] = {.lex_state = 19, .external_lex_state = 2},
  [244] = {.lex_state = 19, .external_lex_state = 2},
  [245] = {.lex_state = 2, .external_lex_state = 2},
  [246] = {.lex_state = 19, .external_lex_state = 2},
  [247] = {.lex_state = 19, .external_lex_state = 2},
  [248] = {.lex_state = 9, .external_lex_state = 2},
  [249] = {.lex_state = 9, .external_lex_state = 2},
  [250] = {.lex_state = 3, .external_lex_state = 2},
  [251] = {.lex_state = 3, .external_lex_state = 2},
  [252] = {.lex_state = 3, .external_lex_state = 2},
  [253] = {.lex_state = 9, .external_lex_state = 2},
  [254] = {.lex_state = 9, .external_lex_state = 2},
  [255] = {.lex_state = 9, .external_lex_state = 2},
  [256] = {.lex_state = 9, .external_lex_state = 2},
  [257] = {.lex_state = 1, .external_lex_state = 2},
  [258] = {.lex_state = 1, .external_lex_state = 2},
  [259] = {.lex_state = 19, .external_lex_state = 2},
  [260] = {.lex_state = 19, .external_lex_state = 2},
  [261] = {.lex_state = 1, .external_lex_state = 2},
  [262] = {.lex_state = 19, .external_lex_state = 2},
  [263] = {.lex_state = 2, .external_lex_state = 2},
  [264] = {.lex_state = 1, .external_lex_state = 2},
  [265] = {.lex_state = 19, .external_lex_state = 2},
  [266] = {.lex_state = 4, .external_lex_state = 2},
  [267] = {.lex_state = 4, .external_lex_state = 2},
  [268] = {.lex_state = 6, .external_lex_state = 2},
  [269] = {.lex_state = 5, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 19, .external_lex_state = 2},
  [272] = {.lex_state = 19, .external_lex_state = 2},
  [273] = {.lex_state = 19, .external_lex_state = 2},
  [274] = {.lex_state = 19, .external_lex_state = 2},
  [275] = {.lex_state = 5, .external_lex_state = 2},
  [276] = {.lex_state = 41, .external_lex_state = 2},
  [277] = {.lex_state = 37, .external_lex_state = 2},
  [278] = {.lex_state = 19, .external_lex_state = 2},
  [279] = {.lex_state = 19, .external_lex_state = 2},
  [280] = {.lex_state = 6, .external_lex_state = 2},
  [281] = {.lex_state = 19, .external_lex_state = 2},
  [282] = {.lex_state = 19, .external_lex_state = 2},
  [283] = {.lex_state = 19, .external_lex_state = 2},
  [284] = {.lex_state = 37, .external_lex_state = 2},
  [285] = {.lex_state = 41, .external_lex_state = 2},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token_multi_line_comment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_multi_line_comment] = sym_multi_line_comment,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
  },
  [2] = {
    [ts_external_token_multi_line_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__normal_bare_identifier] = ACTIONS(1),
    [anon_sym_SLASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
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
    [anon_sym_date_DASHtime] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_currency] = ACTIONS(1),
    [anon_sym_country_DASH2] = ACTIONS(1),
    [anon_sym_country_DASH3] = ACTIONS(1),
    [anon_sym_country_DASHsubdivision] = ACTIONS(1),
    [anon_sym_email] = ACTIONS(1),
    [anon_sym_idn_DASHemail] = ACTIONS(1),
    [anon_sym_hostname] = ACTIONS(1),
    [anon_sym_idn_DASHhostname] = ACTIONS(1),
    [anon_sym_ipv4] = ACTIONS(1),
    [anon_sym_ipv6] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_url_DASHreference] = ACTIONS(1),
    [anon_sym_irl] = ACTIONS(1),
    [anon_sym_iri_DASHreference] = ACTIONS(1),
    [anon_sym_url_DASHtemplate] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
    [aux_sym__raw_string_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym__raw_string_token3] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [aux_sym__octal_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [aux_sym__newline_token2] = ACTIONS(1),
    [aux_sym__newline_token3] = ACTIONS(1),
    [aux_sym__newline_token4] = ACTIONS(1),
    [aux_sym__newline_token5] = ACTIONS(1),
    [aux_sym__newline_token6] = ACTIONS(1),
    [aux_sym__newline_token7] = ACTIONS(1),
    [sym__bom] = ACTIONS(1),
    [sym__unicode_space] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_single_line_comment_token1] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(270),
    [sym_node] = STATE(27),
    [sym_identifier] = STATE(70),
    [sym__bare_identifier] = STATE(209),
    [sym_type] = STATE(237),
    [sym_string] = STATE(209),
    [sym__escaped_string] = STATE(197),
    [sym__raw_string] = STATE(197),
    [sym__sign] = STATE(193),
    [sym__linespace] = STATE(47),
    [sym__newline] = STATE(47),
    [sym__ws] = STATE(47),
    [sym_single_line_comment] = STATE(47),
    [aux_sym_document_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__normal_bare_identifier] = ACTIONS(7),
    [anon_sym_SLASH_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym__raw_string_token1] = ACTIONS(15),
    [aux_sym__raw_string_token3] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym__newline_token1] = ACTIONS(21),
    [aux_sym__newline_token2] = ACTIONS(21),
    [aux_sym__newline_token3] = ACTIONS(21),
    [aux_sym__newline_token4] = ACTIONS(21),
    [aux_sym__newline_token5] = ACTIONS(21),
    [aux_sym__newline_token6] = ACTIONS(21),
    [aux_sym__newline_token7] = ACTIONS(21),
    [sym__bom] = ACTIONS(21),
    [sym__unicode_space] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [sym_multi_line_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 37,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(75), 1,
      sym_type,
    STATE(113), 1,
      sym_node_children,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(31), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [134] = 37,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(75), 1,
      sym_type,
    STATE(123), 1,
      sym_node_children,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(51), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [268] = 37,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(75), 1,
      sym_type,
    STATE(99), 1,
      sym_node_children,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(154), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(53), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [402] = 37,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(75), 1,
      sym_type,
    STATE(91), 1,
      sym_node_children,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(130), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(55), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [536] = 37,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(75), 1,
      sym_type,
    STATE(96), 1,
      sym_node_children,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(57), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [670] = 37,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(75), 1,
      sym_type,
    STATE(111), 1,
      sym_node_children,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(149), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(59), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [804] = 37,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(27), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(75), 1,
      sym_type,
    STATE(106), 1,
      sym_node_children,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(139), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
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
  [938] = 11,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__raw_string_token1,
    ACTIONS(69), 1,
      aux_sym__raw_string_token3,
    STATE(263), 1,
      sym__sign,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(259), 2,
      sym__bare_identifier,
      sym_string,
    STATE(272), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(274), 2,
      sym__escaped_string,
      sym__raw_string,
    ACTIONS(63), 37,
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
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [1012] = 32,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(73), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(75), 1,
      sym_type,
    STATE(79), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(204), 1,
      sym_node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    STATE(207), 2,
      sym__node_field_comment,
      sym__node_field,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1121] = 31,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_type,
    STATE(79), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(210), 1,
      sym_boolean,
    STATE(217), 1,
      sym__node_field,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1226] = 31,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym_node_repeat1,
    STATE(75), 1,
      sym_type,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(206), 1,
      sym__node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1331] = 30,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      aux_sym_node_repeat1,
    STATE(75), 1,
      sym_type,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(206), 1,
      sym__node_field,
    STATE(210), 1,
      sym_boolean,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1433] = 30,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(33), 1,
      anon_sym_null,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(75), 1,
      sym_type,
    STATE(79), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(172), 1,
      sym__integer,
    STATE(194), 1,
      sym_string,
    STATE(210), 1,
      sym_boolean,
    STATE(217), 1,
      sym__node_field,
    STATE(245), 1,
      sym__sign,
    STATE(259), 1,
      sym__bare_identifier,
    STATE(281), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(201), 2,
      sym_prop,
      sym_value,
    STATE(203), 2,
      sym_keyword,
      sym_number,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1535] = 8,
    ACTIONS(87), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(90), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(83), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 20,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [1587] = 17,
    ACTIONS(95), 1,
      sym__normal_bare_identifier,
    ACTIONS(98), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      aux_sym__raw_string_token1,
    ACTIONS(110), 1,
      aux_sym__raw_string_token3,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(113), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(51), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(116), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1657] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(124), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1726] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(42), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(128), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1795] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(18), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(124), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1864] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(28), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(34), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(132), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1933] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(136), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2002] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(34), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(132), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2071] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(29), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(140), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2140] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(31), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(144), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2209] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(31), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(144), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2278] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(148), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2347] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(40), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(152), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2416] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(140), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2485] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(156), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2554] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(22), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(41), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(160), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2623] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2691] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_node,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(43), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(166), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2759] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2827] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2895] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_node,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(80), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2963] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3031] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3099] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_node,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(44), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(176), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3167] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3235] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3303] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3371] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3439] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_node,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(180), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3507] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_node,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(78), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(182), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3575] = 6,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(49), 1,
      sym__escline,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(191), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(184), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(186), 20,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [3621] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3689] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_node,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(76), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(194), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3757] = 17,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_node,
    STATE(70), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(35), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(196), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3825] = 4,
    STATE(53), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(202), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(198), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 21,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [3866] = 4,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(209), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(205), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 21,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [3907] = 16,
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
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_node,
    STATE(193), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(162), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3972] = 4,
    STATE(54), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(212), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(184), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(186), 21,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4013] = 4,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(219), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(215), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 21,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4054] = 4,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(222), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(198), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 21,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4095] = 2,
    ACTIONS(225), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 24,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4130] = 2,
    ACTIONS(229), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 24,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4165] = 2,
    ACTIONS(233), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(235), 24,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4200] = 2,
    ACTIONS(225), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(227), 24,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4235] = 4,
    STATE(59), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(237), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(205), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 19,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4274] = 2,
    ACTIONS(240), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(242), 24,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4309] = 2,
    ACTIONS(244), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 24,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4344] = 2,
    ACTIONS(233), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(235), 24,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [4379] = 20,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(248), 1,
      anon_sym_null,
    ACTIONS(250), 1,
      aux_sym__raw_string_token1,
    STATE(75), 1,
      sym_type,
    STATE(172), 1,
      sym__integer,
    STATE(199), 1,
      sym_value,
    STATE(210), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(203), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [4448] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(92), 1,
      aux_sym_node_repeat2,
    STATE(113), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(31), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4501] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(74), 1,
      aux_sym_node_repeat2,
    STATE(103), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(153), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(258), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4554] = 5,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(262), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4591] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(68), 1,
      aux_sym_node_repeat2,
    STATE(99), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(154), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(53), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4644] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(92), 1,
      aux_sym_node_repeat2,
    STATE(111), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(149), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(59), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4697] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(92), 1,
      aux_sym_node_repeat2,
    STATE(99), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(154), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(53), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4750] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(64), 1,
      aux_sym_node_repeat2,
    STATE(119), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(270), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4803] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(92), 1,
      aux_sym_node_repeat2,
    STATE(106), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(139), 3,
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
  [4856] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(71), 1,
      aux_sym_node_repeat2,
    STATE(96), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(57), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4909] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(69), 1,
      aux_sym_node_repeat2,
    STATE(113), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(31), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4962] = 13,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(256), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(92), 1,
      aux_sym_node_repeat2,
    STATE(96), 1,
      sym_node_children,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(57), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5015] = 17,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(39), 1,
      anon_sym_0x,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(248), 1,
      anon_sym_null,
    ACTIONS(250), 1,
      aux_sym__raw_string_token1,
    STATE(172), 1,
      sym__integer,
    STATE(210), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    ACTIONS(252), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(216), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [5075] = 6,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(260), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5113] = 6,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(260), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5151] = 6,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(260), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5189] = 8,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    STATE(79), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(284), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(83), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5231] = 6,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(260), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5269] = 17,
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
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_identifier,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(193), 1,
      sym__sign,
    STATE(236), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [5327] = 6,
    ACTIONS(290), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      sym__escline,
    STATE(59), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(293), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(184), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(186), 10,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5363] = 17,
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
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_identifier,
    STATE(79), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(193), 1,
      sym__sign,
    STATE(235), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [5421] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(296), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5462] = 4,
    STATE(110), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(298), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(184), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(186), 11,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5493] = 3,
    STATE(86), 1,
      aux_sym__integer_repeat1,
    ACTIONS(303), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(301), 19,
      sym__eof,
      sym_multi_line_comment,
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
  [5522] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(159), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(306), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5563] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(308), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5604] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(132), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(312), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5645] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(109), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(147), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(296), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5686] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(112), 1,
      aux_sym_node_repeat1,
    STATE(114), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(316), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(314), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5727] = 8,
    ACTIONS(320), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(92), 1,
      aux_sym_node_repeat2,
    STATE(168), 1,
      sym__node_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(323), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(318), 12,
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
  [5766] = 3,
    STATE(126), 1,
      aux_sym__integer_repeat1,
    ACTIONS(328), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(326), 19,
      sym__eof,
      sym_multi_line_comment,
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
  [5795] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(162), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(330), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5836] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(122), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(129), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(332), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5877] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(102), 1,
      aux_sym_node_repeat1,
    STATE(105), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(336), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(131), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(334), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5918] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(128), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(338), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5959] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(121), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(128), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(338), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6000] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(120), 1,
      aux_sym_node_repeat1,
    STATE(115), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(342), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(145), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(340), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6041] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(94), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(344), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6082] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(129), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(332), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6123] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(346), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6164] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(104), 1,
      aux_sym_node_repeat1,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(350), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(151), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(348), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6205] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(344), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6246] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(116), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(346), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6287] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(117), 1,
      aux_sym_node_repeat1,
    STATE(118), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(354), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(352), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6328] = 4,
    STATE(108), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(356), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(198), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 11,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6359] = 4,
    STATE(59), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(359), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(215), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 11,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6390] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(144), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(362), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6431] = 4,
    STATE(59), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(364), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(198), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 11,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6462] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(84), 1,
      aux_sym_node_repeat1,
    STATE(90), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(369), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(141), 3,
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
  [6503] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(371), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6544] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(97), 1,
      aux_sym_node_repeat1,
    STATE(98), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(375), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(373), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6585] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(124), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(371), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6626] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(87), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(150), 3,
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
  [6667] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(379), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6708] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(138), 3,
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
  [6749] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym__node_space,
    STATE(125), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(196), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(310), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(138), 3,
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
  [6790] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(101), 1,
      aux_sym_node_repeat1,
    STATE(95), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(385), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(136), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(383), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6831] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(150), 3,
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
  [6872] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(152), 3,
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
  [6913] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(157), 3,
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
  [6954] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(127), 1,
      aux_sym_node_repeat1,
    STATE(88), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(393), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(137), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(391), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6995] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(135), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(395), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7036] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(397), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7077] = 3,
    STATE(86), 1,
      aux_sym__integer_repeat1,
    ACTIONS(401), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(399), 19,
      sym__eof,
      sym_multi_line_comment,
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
  [7106] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(52), 1,
      sym__escline,
    STATE(61), 1,
      sym__node_space,
    STATE(45), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(49), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(308), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7147] = 2,
    ACTIONS(405), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(403), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7173] = 2,
    ACTIONS(409), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(407), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7199] = 2,
    ACTIONS(413), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(411), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7225] = 2,
    ACTIONS(417), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(415), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7251] = 2,
    ACTIONS(421), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(419), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7277] = 2,
    ACTIONS(425), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(423), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7303] = 2,
    ACTIONS(429), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(427), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7329] = 2,
    ACTIONS(433), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(431), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7355] = 2,
    ACTIONS(437), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(435), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7381] = 2,
    ACTIONS(441), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(439), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7407] = 2,
    ACTIONS(445), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(443), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7433] = 2,
    ACTIONS(449), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(447), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7459] = 2,
    ACTIONS(453), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(451), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7485] = 2,
    ACTIONS(457), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(455), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7511] = 2,
    ACTIONS(459), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(93), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7537] = 2,
    ACTIONS(463), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(461), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7563] = 2,
    ACTIONS(467), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(465), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7589] = 2,
    ACTIONS(471), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(469), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7615] = 2,
    ACTIONS(475), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(473), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7641] = 2,
    ACTIONS(479), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(477), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7667] = 2,
    ACTIONS(483), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(481), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7693] = 2,
    ACTIONS(487), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(485), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7719] = 2,
    ACTIONS(491), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(489), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7745] = 2,
    ACTIONS(495), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(493), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7771] = 2,
    ACTIONS(499), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(497), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7797] = 2,
    ACTIONS(503), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(501), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7823] = 2,
    ACTIONS(507), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(505), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7849] = 2,
    ACTIONS(511), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(509), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7875] = 2,
    ACTIONS(515), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(513), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7901] = 2,
    ACTIONS(519), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(517), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7927] = 2,
    ACTIONS(523), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(521), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7953] = 2,
    ACTIONS(527), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(525), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [7979] = 2,
    ACTIONS(531), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(529), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [8005] = 2,
    ACTIONS(535), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(533), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [8031] = 2,
    ACTIONS(539), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(537), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [8057] = 2,
    ACTIONS(543), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(541), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [8083] = 2,
    ACTIONS(547), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(545), 19,
      sym_multi_line_comment,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
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
  [8109] = 2,
    ACTIONS(229), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 14,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [8134] = 3,
    STATE(166), 1,
      aux_sym__binary_repeat1,
    ACTIONS(551), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(549), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8161] = 3,
    STATE(173), 1,
      aux_sym__binary_repeat1,
    ACTIONS(556), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(554), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8188] = 2,
    ACTIONS(244), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 14,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [8213] = 4,
    ACTIONS(560), 1,
      anon_sym_DOT,
    STATE(208), 1,
      sym__exponent,
    ACTIONS(562), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(558), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8242] = 3,
    STATE(166), 1,
      aux_sym__binary_repeat1,
    ACTIONS(566), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(564), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8269] = 2,
    ACTIONS(240), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(242), 14,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [8294] = 4,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(205), 1,
      sym__exponent,
    ACTIONS(562), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(568), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8323] = 3,
    STATE(166), 1,
      aux_sym__binary_repeat1,
    ACTIONS(566), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(572), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8350] = 3,
    STATE(170), 1,
      aux_sym__binary_repeat1,
    ACTIONS(574), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(572), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8377] = 3,
    STATE(180), 1,
      aux_sym__octal_repeat1,
    ACTIONS(578), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(576), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8403] = 3,
    STATE(200), 1,
      sym__exponent,
    ACTIONS(562), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(580), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8429] = 3,
    STATE(181), 1,
      aux_sym__hex_repeat1,
    ACTIONS(584), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(582), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8455] = 3,
    STATE(177), 1,
      aux_sym__hex_repeat1,
    ACTIONS(588), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(586), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8481] = 3,
    STATE(183), 1,
      aux_sym__octal_repeat1,
    ACTIONS(590), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(576), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8507] = 3,
    STATE(180), 1,
      aux_sym__octal_repeat1,
    ACTIONS(594), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(592), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8533] = 3,
    STATE(181), 1,
      aux_sym__hex_repeat1,
    ACTIONS(599), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(597), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8559] = 3,
    ACTIONS(604), 1,
      anon_sym_POUND,
    STATE(184), 1,
      aux_sym__raw_string_repeat1,
    ACTIONS(602), 17,
      sym__eof,
      sym_multi_line_comment,
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
  [8585] = 3,
    STATE(180), 1,
      aux_sym__octal_repeat1,
    ACTIONS(578), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(606), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8611] = 3,
    ACTIONS(610), 1,
      anon_sym_POUND,
    STATE(184), 1,
      aux_sym__raw_string_repeat1,
    ACTIONS(608), 17,
      sym__eof,
      sym_multi_line_comment,
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
  [8637] = 3,
    STATE(186), 1,
      aux_sym__hex_repeat1,
    ACTIONS(615), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(613), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8663] = 3,
    STATE(181), 1,
      aux_sym__hex_repeat1,
    ACTIONS(584), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(586), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8689] = 3,
    STATE(175), 1,
      aux_sym__octal_repeat1,
    ACTIONS(619), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(617), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8715] = 3,
    STATE(215), 1,
      sym__exponent,
    ACTIONS(562), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(621), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8741] = 3,
    ACTIONS(625), 1,
      sym__identifier_char,
    STATE(191), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(623), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8766] = 3,
    ACTIONS(629), 1,
      sym__identifier_char,
    STATE(189), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(627), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8791] = 3,
    ACTIONS(633), 1,
      sym__identifier_char,
    STATE(191), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(631), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8816] = 1,
    ACTIONS(636), 17,
      sym__eof,
      sym_multi_line_comment,
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
  [8836] = 2,
    ACTIONS(640), 1,
      sym___identifier_char_no_digit,
    ACTIONS(638), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8858] = 2,
    ACTIONS(644), 1,
      anon_sym_EQ,
    ACTIONS(642), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8880] = 1,
    ACTIONS(646), 17,
      sym__eof,
      sym_multi_line_comment,
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
  [8900] = 5,
    ACTIONS(651), 1,
      anon_sym_BSLASH,
    STATE(49), 1,
      sym__escline,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(655), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(648), 10,
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
  [8928] = 1,
    ACTIONS(659), 17,
      sym__eof,
      sym_multi_line_comment,
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
  [8948] = 1,
    ACTIONS(602), 17,
      sym__eof,
      sym_multi_line_comment,
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
  [8968] = 1,
    ACTIONS(661), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [8987] = 1,
    ACTIONS(663), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9006] = 1,
    ACTIONS(665), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9025] = 1,
    ACTIONS(667), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9044] = 1,
    ACTIONS(642), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9063] = 1,
    ACTIONS(318), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9082] = 1,
    ACTIONS(558), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9101] = 1,
    ACTIONS(669), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9120] = 1,
    ACTIONS(671), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9139] = 1,
    ACTIONS(673), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9158] = 1,
    ACTIONS(644), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9177] = 1,
    ACTIONS(675), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9196] = 1,
    ACTIONS(677), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9215] = 3,
    STATE(218), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(682), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(679), 11,
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
  [9238] = 1,
    ACTIONS(686), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9257] = 1,
    ACTIONS(688), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9276] = 1,
    ACTIONS(690), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9295] = 1,
    ACTIONS(692), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9314] = 1,
    ACTIONS(694), 16,
      sym__eof,
      sym_multi_line_comment,
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
  [9333] = 3,
    STATE(50), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(699), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(696), 11,
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
  [9356] = 5,
    ACTIONS(707), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(60), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(705), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(703), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9382] = 5,
    ACTIONS(707), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(219), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(711), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(709), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9408] = 5,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(171), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(705), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(713), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9434] = 5,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(165), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(221), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(717), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(715), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9460] = 1,
    ACTIONS(719), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9477] = 1,
    ACTIONS(721), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9494] = 1,
    ACTIONS(723), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9511] = 1,
    ACTIONS(725), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9528] = 1,
    ACTIONS(727), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9545] = 1,
    ACTIONS(729), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9562] = 1,
    ACTIONS(731), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9579] = 1,
    ACTIONS(733), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9596] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(735), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(737), 7,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [9617] = 1,
    ACTIONS(739), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9634] = 1,
    ACTIONS(741), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9651] = 1,
    ACTIONS(743), 14,
      sym__eof,
      sym_multi_line_comment,
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
  [9668] = 10,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    STATE(72), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
  [9702] = 10,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    STATE(67), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
  [9736] = 10,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    STATE(73), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sign,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(197), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(209), 2,
      sym__bare_identifier,
      sym_string,
  [9770] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(747), 1,
      aux_sym_single_line_comment_token1,
    STATE(62), 1,
      sym__newline,
    STATE(242), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(745), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9793] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(747), 1,
      aux_sym_single_line_comment_token1,
    STATE(57), 1,
      sym__newline,
    STATE(242), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(749), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9816] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(753), 1,
      aux_sym_single_line_comment_token1,
    STATE(55), 1,
      sym__newline,
    STATE(239), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(751), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9839] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(757), 1,
      aux_sym_single_line_comment_token1,
    STATE(58), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(755), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9862] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(761), 1,
      aux_sym_single_line_comment_token1,
    STATE(242), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(759), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9882] = 7,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(244), 1,
      aux_sym_node_repeat1,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [9907] = 7,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym__escline,
    STATE(168), 1,
      sym__node_space,
    STATE(82), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(77), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [9932] = 8,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(638), 1,
      anon_sym_EQ,
    ACTIONS(764), 1,
      sym___identifier_char_no_digit,
    ACTIONS(766), 1,
      anon_sym_0x,
    ACTIONS(768), 1,
      anon_sym_0o,
    ACTIONS(770), 1,
      anon_sym_0b,
    STATE(169), 1,
      sym__integer,
  [9957] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(772), 1,
      sym__digit,
    STATE(213), 1,
      sym__integer,
    STATE(262), 1,
      sym__sign,
    ACTIONS(774), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9974] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(35), 1,
      sym__digit,
    ACTIONS(766), 1,
      anon_sym_0x,
    ACTIONS(768), 1,
      anon_sym_0o,
    ACTIONS(770), 1,
      anon_sym_0b,
    STATE(169), 1,
      sym__integer,
  [9993] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(776), 1,
      anon_sym_DQUOTE,
    ACTIONS(778), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(780), 1,
      sym_escape,
    STATE(249), 1,
      aux_sym__escaped_string_repeat1,
  [10009] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(787), 1,
      sym_escape,
    STATE(249), 1,
      aux_sym__escaped_string_repeat1,
  [10025] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(790), 1,
      sym__identifier_char,
    STATE(252), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(623), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10039] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(792), 1,
      sym__identifier_char,
    STATE(250), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(627), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10053] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(794), 1,
      sym__identifier_char,
    STATE(252), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(631), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10067] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(778), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(780), 1,
      sym_escape,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    STATE(254), 1,
      aux_sym__escaped_string_repeat1,
  [10083] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(778), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(780), 1,
      sym_escape,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym__escaped_string_repeat1,
  [10099] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(778), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(780), 1,
      sym_escape,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      aux_sym__escaped_string_repeat1,
  [10115] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(805), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(803), 2,
      anon_sym_DQUOTE,
      sym_escape,
  [10126] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_POUND,
    STATE(258), 1,
      aux_sym__raw_string_repeat1,
  [10139] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(809), 1,
      anon_sym_POUND,
    STATE(258), 1,
      aux_sym__raw_string_repeat1,
  [10152] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(644), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10160] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(772), 1,
      sym__digit,
    STATE(188), 1,
      sym__integer,
  [10170] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(812), 1,
      anon_sym_POUND,
    STATE(257), 1,
      aux_sym__raw_string_repeat1,
  [10180] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(772), 1,
      sym__digit,
    STATE(211), 1,
      sym__integer,
  [10190] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      sym___identifier_char_no_digit,
  [10200] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(814), 1,
      anon_sym_POUND,
    STATE(182), 1,
      aux_sym__raw_string_repeat1,
  [10210] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(772), 1,
      sym__digit,
    STATE(176), 1,
      sym__integer,
  [10220] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(816), 2,
      anon_sym_0,
      anon_sym_1,
  [10228] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(818), 2,
      anon_sym_0,
      anon_sym_1,
  [10236] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(820), 1,
      sym__hex_digit,
  [10243] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(822), 1,
      aux_sym__octal_token1,
  [10250] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
  [10257] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
  [10264] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
  [10271] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [10278] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [10285] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(828), 1,
      aux_sym__octal_token1,
  [10292] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(830), 1,
      aux_sym__raw_string_token4,
  [10299] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(832), 1,
      aux_sym__raw_string_token2,
  [10306] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [10313] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
  [10320] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(838), 1,
      sym__hex_digit,
  [10327] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(840), 1,
      anon_sym_EQ,
  [10334] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [10341] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
  [10348] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(844), 1,
      aux_sym__raw_string_token2,
  [10355] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(846), 1,
      aux_sym__raw_string_token4,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 134,
  [SMALL_STATE(4)] = 268,
  [SMALL_STATE(5)] = 402,
  [SMALL_STATE(6)] = 536,
  [SMALL_STATE(7)] = 670,
  [SMALL_STATE(8)] = 804,
  [SMALL_STATE(9)] = 938,
  [SMALL_STATE(10)] = 1012,
  [SMALL_STATE(11)] = 1121,
  [SMALL_STATE(12)] = 1226,
  [SMALL_STATE(13)] = 1331,
  [SMALL_STATE(14)] = 1433,
  [SMALL_STATE(15)] = 1535,
  [SMALL_STATE(16)] = 1587,
  [SMALL_STATE(17)] = 1657,
  [SMALL_STATE(18)] = 1726,
  [SMALL_STATE(19)] = 1795,
  [SMALL_STATE(20)] = 1864,
  [SMALL_STATE(21)] = 1933,
  [SMALL_STATE(22)] = 2002,
  [SMALL_STATE(23)] = 2071,
  [SMALL_STATE(24)] = 2140,
  [SMALL_STATE(25)] = 2209,
  [SMALL_STATE(26)] = 2278,
  [SMALL_STATE(27)] = 2347,
  [SMALL_STATE(28)] = 2416,
  [SMALL_STATE(29)] = 2485,
  [SMALL_STATE(30)] = 2554,
  [SMALL_STATE(31)] = 2623,
  [SMALL_STATE(32)] = 2691,
  [SMALL_STATE(33)] = 2759,
  [SMALL_STATE(34)] = 2827,
  [SMALL_STATE(35)] = 2895,
  [SMALL_STATE(36)] = 2963,
  [SMALL_STATE(37)] = 3031,
  [SMALL_STATE(38)] = 3099,
  [SMALL_STATE(39)] = 3167,
  [SMALL_STATE(40)] = 3235,
  [SMALL_STATE(41)] = 3303,
  [SMALL_STATE(42)] = 3371,
  [SMALL_STATE(43)] = 3439,
  [SMALL_STATE(44)] = 3507,
  [SMALL_STATE(45)] = 3575,
  [SMALL_STATE(46)] = 3621,
  [SMALL_STATE(47)] = 3689,
  [SMALL_STATE(48)] = 3757,
  [SMALL_STATE(49)] = 3825,
  [SMALL_STATE(50)] = 3866,
  [SMALL_STATE(51)] = 3907,
  [SMALL_STATE(52)] = 3972,
  [SMALL_STATE(53)] = 4013,
  [SMALL_STATE(54)] = 4054,
  [SMALL_STATE(55)] = 4095,
  [SMALL_STATE(56)] = 4130,
  [SMALL_STATE(57)] = 4165,
  [SMALL_STATE(58)] = 4200,
  [SMALL_STATE(59)] = 4235,
  [SMALL_STATE(60)] = 4274,
  [SMALL_STATE(61)] = 4309,
  [SMALL_STATE(62)] = 4344,
  [SMALL_STATE(63)] = 4379,
  [SMALL_STATE(64)] = 4448,
  [SMALL_STATE(65)] = 4501,
  [SMALL_STATE(66)] = 4554,
  [SMALL_STATE(67)] = 4591,
  [SMALL_STATE(68)] = 4644,
  [SMALL_STATE(69)] = 4697,
  [SMALL_STATE(70)] = 4750,
  [SMALL_STATE(71)] = 4803,
  [SMALL_STATE(72)] = 4856,
  [SMALL_STATE(73)] = 4909,
  [SMALL_STATE(74)] = 4962,
  [SMALL_STATE(75)] = 5015,
  [SMALL_STATE(76)] = 5075,
  [SMALL_STATE(77)] = 5113,
  [SMALL_STATE(78)] = 5151,
  [SMALL_STATE(79)] = 5189,
  [SMALL_STATE(80)] = 5231,
  [SMALL_STATE(81)] = 5269,
  [SMALL_STATE(82)] = 5327,
  [SMALL_STATE(83)] = 5363,
  [SMALL_STATE(84)] = 5421,
  [SMALL_STATE(85)] = 5462,
  [SMALL_STATE(86)] = 5493,
  [SMALL_STATE(87)] = 5522,
  [SMALL_STATE(88)] = 5563,
  [SMALL_STATE(89)] = 5604,
  [SMALL_STATE(90)] = 5645,
  [SMALL_STATE(91)] = 5686,
  [SMALL_STATE(92)] = 5727,
  [SMALL_STATE(93)] = 5766,
  [SMALL_STATE(94)] = 5795,
  [SMALL_STATE(95)] = 5836,
  [SMALL_STATE(96)] = 5877,
  [SMALL_STATE(97)] = 5918,
  [SMALL_STATE(98)] = 5959,
  [SMALL_STATE(99)] = 6000,
  [SMALL_STATE(100)] = 6041,
  [SMALL_STATE(101)] = 6082,
  [SMALL_STATE(102)] = 6123,
  [SMALL_STATE(103)] = 6164,
  [SMALL_STATE(104)] = 6205,
  [SMALL_STATE(105)] = 6246,
  [SMALL_STATE(106)] = 6287,
  [SMALL_STATE(107)] = 6328,
  [SMALL_STATE(108)] = 6359,
  [SMALL_STATE(109)] = 6390,
  [SMALL_STATE(110)] = 6431,
  [SMALL_STATE(111)] = 6462,
  [SMALL_STATE(112)] = 6503,
  [SMALL_STATE(113)] = 6544,
  [SMALL_STATE(114)] = 6585,
  [SMALL_STATE(115)] = 6626,
  [SMALL_STATE(116)] = 6667,
  [SMALL_STATE(117)] = 6708,
  [SMALL_STATE(118)] = 6749,
  [SMALL_STATE(119)] = 6790,
  [SMALL_STATE(120)] = 6831,
  [SMALL_STATE(121)] = 6872,
  [SMALL_STATE(122)] = 6913,
  [SMALL_STATE(123)] = 6954,
  [SMALL_STATE(124)] = 6995,
  [SMALL_STATE(125)] = 7036,
  [SMALL_STATE(126)] = 7077,
  [SMALL_STATE(127)] = 7106,
  [SMALL_STATE(128)] = 7147,
  [SMALL_STATE(129)] = 7173,
  [SMALL_STATE(130)] = 7199,
  [SMALL_STATE(131)] = 7225,
  [SMALL_STATE(132)] = 7251,
  [SMALL_STATE(133)] = 7277,
  [SMALL_STATE(134)] = 7303,
  [SMALL_STATE(135)] = 7329,
  [SMALL_STATE(136)] = 7355,
  [SMALL_STATE(137)] = 7381,
  [SMALL_STATE(138)] = 7407,
  [SMALL_STATE(139)] = 7433,
  [SMALL_STATE(140)] = 7459,
  [SMALL_STATE(141)] = 7485,
  [SMALL_STATE(142)] = 7511,
  [SMALL_STATE(143)] = 7537,
  [SMALL_STATE(144)] = 7563,
  [SMALL_STATE(145)] = 7589,
  [SMALL_STATE(146)] = 7615,
  [SMALL_STATE(147)] = 7641,
  [SMALL_STATE(148)] = 7667,
  [SMALL_STATE(149)] = 7693,
  [SMALL_STATE(150)] = 7719,
  [SMALL_STATE(151)] = 7745,
  [SMALL_STATE(152)] = 7771,
  [SMALL_STATE(153)] = 7797,
  [SMALL_STATE(154)] = 7823,
  [SMALL_STATE(155)] = 7849,
  [SMALL_STATE(156)] = 7875,
  [SMALL_STATE(157)] = 7901,
  [SMALL_STATE(158)] = 7927,
  [SMALL_STATE(159)] = 7953,
  [SMALL_STATE(160)] = 7979,
  [SMALL_STATE(161)] = 8005,
  [SMALL_STATE(162)] = 8031,
  [SMALL_STATE(163)] = 8057,
  [SMALL_STATE(164)] = 8083,
  [SMALL_STATE(165)] = 8109,
  [SMALL_STATE(166)] = 8134,
  [SMALL_STATE(167)] = 8161,
  [SMALL_STATE(168)] = 8188,
  [SMALL_STATE(169)] = 8213,
  [SMALL_STATE(170)] = 8242,
  [SMALL_STATE(171)] = 8269,
  [SMALL_STATE(172)] = 8294,
  [SMALL_STATE(173)] = 8323,
  [SMALL_STATE(174)] = 8350,
  [SMALL_STATE(175)] = 8377,
  [SMALL_STATE(176)] = 8403,
  [SMALL_STATE(177)] = 8429,
  [SMALL_STATE(178)] = 8455,
  [SMALL_STATE(179)] = 8481,
  [SMALL_STATE(180)] = 8507,
  [SMALL_STATE(181)] = 8533,
  [SMALL_STATE(182)] = 8559,
  [SMALL_STATE(183)] = 8585,
  [SMALL_STATE(184)] = 8611,
  [SMALL_STATE(185)] = 8637,
  [SMALL_STATE(186)] = 8663,
  [SMALL_STATE(187)] = 8689,
  [SMALL_STATE(188)] = 8715,
  [SMALL_STATE(189)] = 8741,
  [SMALL_STATE(190)] = 8766,
  [SMALL_STATE(191)] = 8791,
  [SMALL_STATE(192)] = 8816,
  [SMALL_STATE(193)] = 8836,
  [SMALL_STATE(194)] = 8858,
  [SMALL_STATE(195)] = 8880,
  [SMALL_STATE(196)] = 8900,
  [SMALL_STATE(197)] = 8928,
  [SMALL_STATE(198)] = 8948,
  [SMALL_STATE(199)] = 8968,
  [SMALL_STATE(200)] = 8987,
  [SMALL_STATE(201)] = 9006,
  [SMALL_STATE(202)] = 9025,
  [SMALL_STATE(203)] = 9044,
  [SMALL_STATE(204)] = 9063,
  [SMALL_STATE(205)] = 9082,
  [SMALL_STATE(206)] = 9101,
  [SMALL_STATE(207)] = 9120,
  [SMALL_STATE(208)] = 9139,
  [SMALL_STATE(209)] = 9158,
  [SMALL_STATE(210)] = 9177,
  [SMALL_STATE(211)] = 9196,
  [SMALL_STATE(212)] = 9215,
  [SMALL_STATE(213)] = 9238,
  [SMALL_STATE(214)] = 9257,
  [SMALL_STATE(215)] = 9276,
  [SMALL_STATE(216)] = 9295,
  [SMALL_STATE(217)] = 9314,
  [SMALL_STATE(218)] = 9333,
  [SMALL_STATE(219)] = 9356,
  [SMALL_STATE(220)] = 9382,
  [SMALL_STATE(221)] = 9408,
  [SMALL_STATE(222)] = 9434,
  [SMALL_STATE(223)] = 9460,
  [SMALL_STATE(224)] = 9477,
  [SMALL_STATE(225)] = 9494,
  [SMALL_STATE(226)] = 9511,
  [SMALL_STATE(227)] = 9528,
  [SMALL_STATE(228)] = 9545,
  [SMALL_STATE(229)] = 9562,
  [SMALL_STATE(230)] = 9579,
  [SMALL_STATE(231)] = 9596,
  [SMALL_STATE(232)] = 9617,
  [SMALL_STATE(233)] = 9634,
  [SMALL_STATE(234)] = 9651,
  [SMALL_STATE(235)] = 9668,
  [SMALL_STATE(236)] = 9702,
  [SMALL_STATE(237)] = 9736,
  [SMALL_STATE(238)] = 9770,
  [SMALL_STATE(239)] = 9793,
  [SMALL_STATE(240)] = 9816,
  [SMALL_STATE(241)] = 9839,
  [SMALL_STATE(242)] = 9862,
  [SMALL_STATE(243)] = 9882,
  [SMALL_STATE(244)] = 9907,
  [SMALL_STATE(245)] = 9932,
  [SMALL_STATE(246)] = 9957,
  [SMALL_STATE(247)] = 9974,
  [SMALL_STATE(248)] = 9993,
  [SMALL_STATE(249)] = 10009,
  [SMALL_STATE(250)] = 10025,
  [SMALL_STATE(251)] = 10039,
  [SMALL_STATE(252)] = 10053,
  [SMALL_STATE(253)] = 10067,
  [SMALL_STATE(254)] = 10083,
  [SMALL_STATE(255)] = 10099,
  [SMALL_STATE(256)] = 10115,
  [SMALL_STATE(257)] = 10126,
  [SMALL_STATE(258)] = 10139,
  [SMALL_STATE(259)] = 10152,
  [SMALL_STATE(260)] = 10160,
  [SMALL_STATE(261)] = 10170,
  [SMALL_STATE(262)] = 10180,
  [SMALL_STATE(263)] = 10190,
  [SMALL_STATE(264)] = 10200,
  [SMALL_STATE(265)] = 10210,
  [SMALL_STATE(266)] = 10220,
  [SMALL_STATE(267)] = 10228,
  [SMALL_STATE(268)] = 10236,
  [SMALL_STATE(269)] = 10243,
  [SMALL_STATE(270)] = 10250,
  [SMALL_STATE(271)] = 10257,
  [SMALL_STATE(272)] = 10264,
  [SMALL_STATE(273)] = 10271,
  [SMALL_STATE(274)] = 10278,
  [SMALL_STATE(275)] = 10285,
  [SMALL_STATE(276)] = 10292,
  [SMALL_STATE(277)] = 10299,
  [SMALL_STATE(278)] = 10306,
  [SMALL_STATE(279)] = 10313,
  [SMALL_STATE(280)] = 10320,
  [SMALL_STATE(281)] = 10327,
  [SMALL_STATE(282)] = 10334,
  [SMALL_STATE(283)] = 10341,
  [SMALL_STATE(284)] = 10348,
  [SMALL_STATE(285)] = 10355,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(220),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(45),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(209),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(81),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(255),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(277),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(276),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(193),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(51),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(241),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(220),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(50),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(53),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(50),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(50),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(50),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(59),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(241),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(225),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(233),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(222),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(82),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(229),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(222),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(59),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(110),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(86),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(222),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(82),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(108),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(59),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(59),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 16),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 16),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 16),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 16),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 15),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 14),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 16),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 16),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 12),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 12),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 7),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 8),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 8),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 8),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 8),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 7),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 15),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 15),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 12),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 8),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 8),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 14),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(166),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(180),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(181),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(184),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(191),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [651] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(220),
  [655] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(50),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 2, .production_id = 6),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_field, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [682] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(218),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 13),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 3, .production_id = 9),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [699] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(50),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 5),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 5),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(242),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(256),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(256),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(252),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(258),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [824] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
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
