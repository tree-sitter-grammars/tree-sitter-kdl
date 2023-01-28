#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 310
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 4
#define TOKEN_COUNT 89
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
  anon_sym_SLASH_STAR = 85,
  aux_sym_multi_line_comment_token1 = 86,
  anon_sym_STAR_SLASH = 87,
  sym__eof = 88,
  sym_document = 89,
  sym_node = 90,
  sym_node_field = 91,
  sym__node_field_comment = 92,
  sym__node_field = 93,
  sym_node_children = 94,
  sym__node_space = 95,
  sym__node_terminator = 96,
  sym_identifier = 97,
  sym__bare_identifier = 98,
  sym_keyword = 99,
  sym_annotation_type = 100,
  sym_prop = 101,
  sym_value = 102,
  sym_type = 103,
  sym_string = 104,
  sym__escaped_string = 105,
  sym__raw_string = 106,
  sym_number = 107,
  sym__decimal = 108,
  sym__exponent = 109,
  sym__integer = 110,
  sym__sign = 111,
  sym__hex = 112,
  sym__octal = 113,
  sym__binary = 114,
  sym_boolean = 115,
  sym__escline = 116,
  sym__linespace = 117,
  sym__newline = 118,
  sym__ws = 119,
  sym_single_line_comment = 120,
  sym_multi_line_comment = 121,
  sym_commented_block = 122,
  aux_sym_document_repeat1 = 123,
  aux_sym_document_repeat2 = 124,
  aux_sym_node_repeat1 = 125,
  aux_sym_node_repeat2 = 126,
  aux_sym_node_repeat3 = 127,
  aux_sym__bare_identifier_repeat1 = 128,
  aux_sym__escaped_string_repeat1 = 129,
  aux_sym__raw_string_repeat1 = 130,
  aux_sym__integer_repeat1 = 131,
  aux_sym__hex_repeat1 = 132,
  aux_sym__octal_repeat1 = 133,
  aux_sym__binary_repeat1 = 134,
  aux_sym_single_line_comment_repeat1 = 135,
  aux_sym_multi_line_comment_repeat1 = 136,
  aux_sym_commented_block_repeat1 = 137,
  alias_sym_decimal = 138,
  alias_sym_node_children_comment = 139,
  alias_sym_node_field_comment = 140,
  alias_sym_string_fragment = 141,
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
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_multi_line_comment_token1] = "multi_line_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
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
  [aux_sym_multi_line_comment_repeat1] = "multi_line_comment_repeat1",
  [aux_sym_commented_block_repeat1] = "commented_block_repeat1",
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
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_multi_line_comment_token1] = aux_sym_multi_line_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
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
  [aux_sym_multi_line_comment_repeat1] = aux_sym_multi_line_comment_repeat1,
  [aux_sym_commented_block_repeat1] = aux_sym_commented_block_repeat1,
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multi_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
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
  [aux_sym_multi_line_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commented_block_repeat1] = {
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
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 49,
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
  [77] = 16,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 47,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 50,
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
  [109] = 109,
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
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 52,
  [126] = 51,
  [127] = 53,
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
  [169] = 169,
  [170] = 63,
  [171] = 171,
  [172] = 172,
  [173] = 62,
  [174] = 174,
  [175] = 175,
  [176] = 56,
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
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 223,
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
  [239] = 239,
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
  [250] = 250,
  [251] = 250,
  [252] = 252,
  [253] = 253,
  [254] = 192,
  [255] = 255,
  [256] = 193,
  [257] = 253,
  [258] = 258,
  [259] = 259,
  [260] = 258,
  [261] = 258,
  [262] = 250,
  [263] = 258,
  [264] = 191,
  [265] = 259,
  [266] = 250,
  [267] = 178,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 177,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 205,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 59,
  [286] = 55,
  [287] = 198,
  [288] = 288,
  [289] = 283,
  [290] = 195,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 200,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 199,
  [300] = 196,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 303,
  [306] = 293,
  [307] = 294,
  [308] = 59,
  [309] = 55,
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
                    ? (c >= '!' && c <= '\'')
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
  return (c < 8484
    ? (c < 3260
      ? (c < 2561
        ? (c < 1479
          ? (c < 748
            ? (c < 174
              ? (c < '^'
                ? (c < '*'
                  ? (c < '#'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '?'
                    ? (c >= '-' && c <= ':')
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

static inline bool sym__normal_bare_identifier_character_set_5(int32_t c) {
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
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(41);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\f') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 133) ADVANCE(74);
      if (lookahead == 8232) ADVANCE(76);
      if (lookahead == 8233) ADVANCE(77);
      if (lookahead == 65279) ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(79);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '"') ADVANCE(47);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '/') ADVANCE(89);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '*') ADVANCE(84);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__raw_string_token2);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(30);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__raw_string_token3);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__raw_string_token4);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__raw_string_token4);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__raw_string_token4);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(30);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(30);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_E);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(30);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym__);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(30);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__newline_token2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__newline_token3);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__newline_token4);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__newline_token5);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__newline_token6);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__newline_token7);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__unicode_space);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(44);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(71);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
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
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22, .external_lex_state = 1},
  [3] = {.lex_state = 22, .external_lex_state = 1},
  [4] = {.lex_state = 22, .external_lex_state = 1},
  [5] = {.lex_state = 22, .external_lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 22, .external_lex_state = 1},
  [8] = {.lex_state = 22, .external_lex_state = 1},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22, .external_lex_state = 1},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22, .external_lex_state = 1},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22, .external_lex_state = 1},
  [50] = {.lex_state = 22, .external_lex_state = 1},
  [51] = {.lex_state = 22, .external_lex_state = 1},
  [52] = {.lex_state = 22, .external_lex_state = 1},
  [53] = {.lex_state = 22, .external_lex_state = 1},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 22, .external_lex_state = 1},
  [57] = {.lex_state = 22, .external_lex_state = 1},
  [58] = {.lex_state = 22, .external_lex_state = 1},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 22, .external_lex_state = 1},
  [62] = {.lex_state = 22, .external_lex_state = 1},
  [63] = {.lex_state = 22, .external_lex_state = 1},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 22, .external_lex_state = 1},
  [67] = {.lex_state = 22, .external_lex_state = 1},
  [68] = {.lex_state = 22, .external_lex_state = 1},
  [69] = {.lex_state = 22, .external_lex_state = 1},
  [70] = {.lex_state = 22, .external_lex_state = 1},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 22, .external_lex_state = 1},
  [73] = {.lex_state = 22, .external_lex_state = 1},
  [74] = {.lex_state = 22, .external_lex_state = 1},
  [75] = {.lex_state = 22, .external_lex_state = 1},
  [76] = {.lex_state = 22, .external_lex_state = 1},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 22},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 22, .external_lex_state = 1},
  [87] = {.lex_state = 22, .external_lex_state = 1},
  [88] = {.lex_state = 22, .external_lex_state = 1},
  [89] = {.lex_state = 22, .external_lex_state = 1},
  [90] = {.lex_state = 22, .external_lex_state = 1},
  [91] = {.lex_state = 22, .external_lex_state = 1},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 22, .external_lex_state = 1},
  [94] = {.lex_state = 22, .external_lex_state = 1},
  [95] = {.lex_state = 22, .external_lex_state = 1},
  [96] = {.lex_state = 22, .external_lex_state = 1},
  [97] = {.lex_state = 22, .external_lex_state = 1},
  [98] = {.lex_state = 22, .external_lex_state = 1},
  [99] = {.lex_state = 22, .external_lex_state = 1},
  [100] = {.lex_state = 1, .external_lex_state = 1},
  [101] = {.lex_state = 22, .external_lex_state = 1},
  [102] = {.lex_state = 22, .external_lex_state = 1},
  [103] = {.lex_state = 22, .external_lex_state = 1},
  [104] = {.lex_state = 22, .external_lex_state = 1},
  [105] = {.lex_state = 22, .external_lex_state = 1},
  [106] = {.lex_state = 22, .external_lex_state = 1},
  [107] = {.lex_state = 22, .external_lex_state = 1},
  [108] = {.lex_state = 22, .external_lex_state = 1},
  [109] = {.lex_state = 22, .external_lex_state = 1},
  [110] = {.lex_state = 1, .external_lex_state = 1},
  [111] = {.lex_state = 22, .external_lex_state = 1},
  [112] = {.lex_state = 22, .external_lex_state = 1},
  [113] = {.lex_state = 22, .external_lex_state = 1},
  [114] = {.lex_state = 22, .external_lex_state = 1},
  [115] = {.lex_state = 22, .external_lex_state = 1},
  [116] = {.lex_state = 22, .external_lex_state = 1},
  [117] = {.lex_state = 22, .external_lex_state = 1},
  [118] = {.lex_state = 22, .external_lex_state = 1},
  [119] = {.lex_state = 22, .external_lex_state = 1},
  [120] = {.lex_state = 22, .external_lex_state = 1},
  [121] = {.lex_state = 22, .external_lex_state = 1},
  [122] = {.lex_state = 22, .external_lex_state = 1},
  [123] = {.lex_state = 22, .external_lex_state = 1},
  [124] = {.lex_state = 22, .external_lex_state = 1},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 1, .external_lex_state = 1},
  [129] = {.lex_state = 22, .external_lex_state = 1},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 22},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 22},
  [147] = {.lex_state = 22},
  [148] = {.lex_state = 22},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 22},
  [151] = {.lex_state = 22},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 22},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 22},
  [157] = {.lex_state = 22},
  [158] = {.lex_state = 22},
  [159] = {.lex_state = 22},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 22},
  [162] = {.lex_state = 22},
  [163] = {.lex_state = 22},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 22},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 1, .external_lex_state = 1},
  [168] = {.lex_state = 4, .external_lex_state = 1},
  [169] = {.lex_state = 1, .external_lex_state = 1},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 4, .external_lex_state = 1},
  [172] = {.lex_state = 4, .external_lex_state = 1},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 4, .external_lex_state = 1},
  [175] = {.lex_state = 4, .external_lex_state = 1},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 1, .external_lex_state = 1},
  [178] = {.lex_state = 1, .external_lex_state = 1},
  [179] = {.lex_state = 6, .external_lex_state = 1},
  [180] = {.lex_state = 6, .external_lex_state = 1},
  [181] = {.lex_state = 6, .external_lex_state = 1},
  [182] = {.lex_state = 5, .external_lex_state = 1},
  [183] = {.lex_state = 5, .external_lex_state = 1},
  [184] = {.lex_state = 1, .external_lex_state = 1},
  [185] = {.lex_state = 1, .external_lex_state = 1},
  [186] = {.lex_state = 5, .external_lex_state = 1},
  [187] = {.lex_state = 6, .external_lex_state = 1},
  [188] = {.lex_state = 5, .external_lex_state = 1},
  [189] = {.lex_state = 5, .external_lex_state = 1},
  [190] = {.lex_state = 6, .external_lex_state = 1},
  [191] = {.lex_state = 3, .external_lex_state = 1},
  [192] = {.lex_state = 3, .external_lex_state = 1},
  [193] = {.lex_state = 3, .external_lex_state = 1},
  [194] = {.lex_state = 22, .external_lex_state = 1},
  [195] = {.lex_state = 22, .external_lex_state = 1},
  [196] = {.lex_state = 22, .external_lex_state = 1},
  [197] = {.lex_state = 22, .external_lex_state = 1},
  [198] = {.lex_state = 2, .external_lex_state = 1},
  [199] = {.lex_state = 22, .external_lex_state = 1},
  [200] = {.lex_state = 22, .external_lex_state = 1},
  [201] = {.lex_state = 22, .external_lex_state = 1},
  [202] = {.lex_state = 22, .external_lex_state = 1},
  [203] = {.lex_state = 22, .external_lex_state = 1},
  [204] = {.lex_state = 22, .external_lex_state = 1},
  [205] = {.lex_state = 22, .external_lex_state = 1},
  [206] = {.lex_state = 22, .external_lex_state = 1},
  [207] = {.lex_state = 22, .external_lex_state = 1},
  [208] = {.lex_state = 22, .external_lex_state = 1},
  [209] = {.lex_state = 22, .external_lex_state = 1},
  [210] = {.lex_state = 22, .external_lex_state = 1},
  [211] = {.lex_state = 22, .external_lex_state = 1},
  [212] = {.lex_state = 22, .external_lex_state = 1},
  [213] = {.lex_state = 22, .external_lex_state = 1},
  [214] = {.lex_state = 22, .external_lex_state = 1},
  [215] = {.lex_state = 22, .external_lex_state = 1},
  [216] = {.lex_state = 22, .external_lex_state = 1},
  [217] = {.lex_state = 22, .external_lex_state = 1},
  [218] = {.lex_state = 22, .external_lex_state = 1},
  [219] = {.lex_state = 22, .external_lex_state = 1},
  [220] = {.lex_state = 22, .external_lex_state = 1},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 22},
  [225] = {.lex_state = 22, .external_lex_state = 1},
  [226] = {.lex_state = 22, .external_lex_state = 1},
  [227] = {.lex_state = 22, .external_lex_state = 1},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 22, .external_lex_state = 1},
  [230] = {.lex_state = 22, .external_lex_state = 1},
  [231] = {.lex_state = 22, .external_lex_state = 1},
  [232] = {.lex_state = 22, .external_lex_state = 1},
  [233] = {.lex_state = 22, .external_lex_state = 1},
  [234] = {.lex_state = 22, .external_lex_state = 1},
  [235] = {.lex_state = 22, .external_lex_state = 1},
  [236] = {.lex_state = 22, .external_lex_state = 1},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 22},
  [239] = {.lex_state = 22},
  [240] = {.lex_state = 7, .external_lex_state = 1},
  [241] = {.lex_state = 7, .external_lex_state = 1},
  [242] = {.lex_state = 7, .external_lex_state = 1},
  [243] = {.lex_state = 22},
  [244] = {.lex_state = 7, .external_lex_state = 1},
  [245] = {.lex_state = 22},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 22},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 12},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 22},
  [275] = {.lex_state = 22},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 22},
  [280] = {.lex_state = 22},
  [281] = {.lex_state = 12},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 12},
  [286] = {.lex_state = 12},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 22},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 22},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 22},
  [293] = {.lex_state = 43},
  [294] = {.lex_state = 49},
  [295] = {.lex_state = 22},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 22},
  [300] = {.lex_state = 22},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 22},
  [303] = {.lex_state = 22},
  [304] = {.lex_state = 22},
  [305] = {.lex_state = 22},
  [306] = {.lex_state = 43},
  [307] = {.lex_state = 49},
  [308] = {(TSStateId)(-1)},
  [309] = {(TSStateId)(-1)},
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
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [aux_sym_multi_line_comment_token1] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(296),
    [sym_node] = STATE(27),
    [sym_identifier] = STATE(69),
    [sym__bare_identifier] = STATE(205),
    [sym_type] = STATE(238),
    [sym_string] = STATE(205),
    [sym__escaped_string] = STATE(200),
    [sym__raw_string] = STATE(200),
    [sym__sign] = STATE(198),
    [sym__linespace] = STATE(36),
    [sym__newline] = STATE(36),
    [sym__ws] = STATE(36),
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
    [anon_sym_SLASH_STAR] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
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
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(29), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(2), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      sym_type,
    STATE(113), 1,
      sym_node_children,
    STATE(169), 1,
      sym__integer,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(33), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [139] = 39,
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
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(29), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      sym_type,
    STATE(117), 1,
      sym_node_children,
    STATE(169), 1,
      sym__integer,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(208), 4,
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
  [278] = 39,
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
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(29), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      sym_type,
    STATE(112), 1,
      sym_node_children,
    STATE(169), 1,
      sym__integer,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(159), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(208), 4,
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
  [417] = 39,
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
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(29), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      sym_type,
    STATE(93), 1,
      sym_node_children,
    STATE(169), 1,
      sym__integer,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(165), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(208), 4,
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
  [556] = 39,
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
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(29), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      sym_type,
    STATE(102), 1,
      sym_node_children,
    STATE(169), 1,
      sym__integer,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(208), 4,
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
  [695] = 39,
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
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(29), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      sym_type,
    STATE(121), 1,
      sym_node_children,
    STATE(169), 1,
      sym__integer,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(208), 4,
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
  [834] = 39,
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
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(29), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_multi_line_comment,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(80), 1,
      sym_type,
    STATE(106), 1,
      sym_node_children,
    STATE(169), 1,
      sym__integer,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(132), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(208), 4,
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
  [973] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym__raw_string_token1,
    ACTIONS(73), 1,
      aux_sym__raw_string_token3,
    STATE(9), 1,
      sym_multi_line_comment,
    STATE(287), 1,
      sym__sign,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(279), 2,
      sym__bare_identifier,
      sym_string,
    STATE(295), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(304), 2,
      sym_identifier,
      sym_annotation_type,
    ACTIONS(67), 37,
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
  [1050] = 34,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_multi_line_comment,
    STATE(77), 1,
      aux_sym_node_repeat1,
    STATE(80), 1,
      sym_type,
    STATE(92), 1,
      sym__escline,
    STATE(169), 1,
      sym__integer,
    STATE(176), 1,
      sym__node_space,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(215), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1164] = 33,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_multi_line_comment,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(80), 1,
      sym_type,
    STATE(92), 1,
      sym__escline,
    STATE(169), 1,
      sym__integer,
    STATE(176), 1,
      sym__node_space,
    STATE(197), 1,
      sym_string,
    STATE(207), 1,
      sym__node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1274] = 33,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_multi_line_comment,
    STATE(77), 1,
      aux_sym_node_repeat1,
    STATE(80), 1,
      sym_type,
    STATE(92), 1,
      sym__escline,
    STATE(169), 1,
      sym__integer,
    STATE(176), 1,
      sym__node_space,
    STATE(197), 1,
      sym_string,
    STATE(209), 1,
      sym_boolean,
    STATE(211), 1,
      sym__node_field,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1384] = 32,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      sym_multi_line_comment,
    STATE(77), 1,
      aux_sym_node_repeat1,
    STATE(80), 1,
      sym_type,
    STATE(92), 1,
      sym__escline,
    STATE(169), 1,
      sym__integer,
    STATE(176), 1,
      sym__node_space,
    STATE(197), 1,
      sym_string,
    STATE(209), 1,
      sym_boolean,
    STATE(211), 1,
      sym__node_field,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1491] = 32,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym__raw_string_token1,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_null,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      aux_sym_node_repeat1,
    STATE(14), 1,
      sym_multi_line_comment,
    STATE(80), 1,
      sym_type,
    STATE(92), 1,
      sym__escline,
    STATE(169), 1,
      sym__integer,
    STATE(176), 1,
      sym__node_space,
    STATE(197), 1,
      sym_string,
    STATE(207), 1,
      sym__node_field,
    STATE(209), 1,
      sym_boolean,
    STATE(247), 1,
      sym__sign,
    STATE(279), 1,
      sym__bare_identifier,
    STATE(302), 1,
      sym_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(217), 2,
      sym_keyword,
      sym_number,
    STATE(218), 2,
      sym_prop,
      sym_value,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1598] = 18,
    ACTIONS(87), 1,
      sym__normal_bare_identifier,
    ACTIONS(90), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym__raw_string_token1,
    ACTIONS(102), 1,
      aux_sym__raw_string_token3,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(114), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(105), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(15), 3,
      sym_node,
      sym_multi_line_comment,
      aux_sym_document_repeat2,
    STATE(54), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(108), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1671] = 9,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(127), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    ACTIONS(124), 2,
      sym__bom,
      sym__unicode_space,
    STATE(16), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(117), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 20,
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
  [1726] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(132), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1800] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(26), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(33), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(136), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1874] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(140), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1948] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(23), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(39), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(140), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2022] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(17), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(32), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(144), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2096] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(34), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(148), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2170] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(34), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(148), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2244] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(42), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(152), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2318] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(156), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2392] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(31), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(160), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2466] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(30), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(40), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(164), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2540] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(25), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(31), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(160), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2614] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(48), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(168), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2688] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(32), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(144), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2762] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2835] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2908] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2981] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3054] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_node,
    STATE(35), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(43), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(172), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3127] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_node,
    STATE(36), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(78), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(174), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3200] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3273] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_node,
    STATE(38), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(82), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(178), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3346] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3419] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3492] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_node,
    STATE(41), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(38), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(182), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3565] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3638] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_node,
    STATE(43), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(81), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(186), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3711] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_node,
    STATE(44), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(79), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(188), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3784] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_node,
    STATE(45), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(44), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(192), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3857] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3930] = 8,
    ACTIONS(200), 1,
      anon_sym_BSLASH,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_multi_line_comment,
    STATE(53), 1,
      sym__escline,
    ACTIONS(203), 2,
      sym__bom,
      sym__unicode_space,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(196), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 20,
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
  [3981] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4054] = 5,
    ACTIONS(216), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(213), 2,
      sym__bom,
      sym__unicode_space,
    STATE(49), 3,
      sym__ws,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(209), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(211), 21,
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
  [4098] = 6,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_multi_line_comment,
    ACTIONS(219), 2,
      sym__bom,
      sym__unicode_space,
    STATE(51), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(196), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 21,
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
  [4144] = 6,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_multi_line_comment,
    ACTIONS(226), 2,
      sym__bom,
      sym__unicode_space,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(222), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 21,
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
  [4190] = 6,
    ACTIONS(239), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_multi_line_comment,
    ACTIONS(236), 2,
      sym__bom,
      sym__unicode_space,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 21,
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
  [4236] = 6,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_multi_line_comment,
    ACTIONS(242), 2,
      sym__bom,
      sym__unicode_space,
    STATE(52), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(222), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 21,
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
  [4282] = 18,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_multi_line_comment,
    STATE(69), 1,
      sym_identifier,
    STATE(148), 1,
      sym_node,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(170), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4352] = 3,
    STATE(55), 1,
      sym_multi_line_comment,
    ACTIONS(247), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(245), 24,
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
      anon_sym_SLASH_STAR,
  [4390] = 3,
    STATE(56), 1,
      sym_multi_line_comment,
    ACTIONS(249), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 24,
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
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4428] = 3,
    STATE(57), 1,
      sym_multi_line_comment,
    ACTIONS(247), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(245), 24,
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
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4466] = 3,
    STATE(58), 1,
      sym_multi_line_comment,
    ACTIONS(253), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(255), 24,
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
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4504] = 3,
    STATE(59), 1,
      sym_multi_line_comment,
    ACTIONS(259), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(257), 24,
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
      anon_sym_SLASH_STAR,
  [4542] = 3,
    STATE(60), 1,
      sym_multi_line_comment,
    ACTIONS(253), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(255), 24,
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
      anon_sym_SLASH_STAR,
  [4580] = 3,
    STATE(61), 1,
      sym_multi_line_comment,
    ACTIONS(259), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(257), 24,
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
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4618] = 3,
    STATE(62), 1,
      sym_multi_line_comment,
    ACTIONS(261), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(263), 24,
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
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4656] = 3,
    STATE(63), 1,
      sym_multi_line_comment,
    ACTIONS(265), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(267), 24,
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
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4694] = 5,
    ACTIONS(272), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 2,
      sym__bom,
      sym__unicode_space,
    STATE(64), 3,
      sym__ws,
      sym_multi_line_comment,
      aux_sym_node_repeat3,
    ACTIONS(209), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(211), 19,
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
  [4736] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(275), 1,
      anon_sym_null,
    ACTIONS(277), 1,
      aux_sym__raw_string_token1,
    STATE(65), 1,
      sym_multi_line_comment,
    STATE(80), 1,
      sym_type,
    STATE(169), 1,
      sym__integer,
    STATE(202), 1,
      sym_value,
    STATE(209), 1,
      sym_boolean,
    STATE(248), 1,
      sym__sign,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(217), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [4808] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(66), 1,
      sym_multi_line_comment,
    STATE(76), 1,
      aux_sym_node_repeat2,
    STATE(121), 1,
      sym_node_children,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [4866] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(67), 1,
      sym_multi_line_comment,
    STATE(75), 1,
      aux_sym_node_repeat2,
    STATE(123), 1,
      sym_node_children,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(153), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(283), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4924] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(68), 1,
      sym_multi_line_comment,
    STATE(73), 1,
      aux_sym_node_repeat2,
    STATE(113), 1,
      sym_node_children,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(33), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4982] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(69), 1,
      sym_multi_line_comment,
    STATE(74), 1,
      aux_sym_node_repeat2,
    STATE(111), 1,
      sym_node_children,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(157), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(285), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5040] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(70), 1,
      sym_multi_line_comment,
    STATE(72), 1,
      aux_sym_node_repeat2,
    STATE(112), 1,
      sym_node_children,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(159), 3,
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
  [5098] = 6,
    ACTIONS(294), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(71), 6,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      sym_multi_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(287), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(291), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5138] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(72), 1,
      sym_multi_line_comment,
    STATE(114), 1,
      aux_sym_node_repeat2,
    STATE(121), 1,
      sym_node_children,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [5196] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(73), 1,
      sym_multi_line_comment,
    STATE(102), 1,
      sym_node_children,
    STATE(114), 1,
      aux_sym_node_repeat2,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(134), 3,
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
  [5254] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(74), 1,
      sym_multi_line_comment,
    STATE(112), 1,
      sym_node_children,
    STATE(114), 1,
      aux_sym_node_repeat2,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(159), 3,
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
  [5312] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(75), 1,
      sym_multi_line_comment,
    STATE(113), 1,
      sym_node_children,
    STATE(114), 1,
      aux_sym_node_repeat2,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(33), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5370] = 15,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(76), 1,
      sym_multi_line_comment,
    STATE(114), 1,
      aux_sym_node_repeat2,
    STATE(117), 1,
      sym_node_children,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
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
  [5428] = 9,
    ACTIONS(300), 1,
      anon_sym_BSLASH,
    ACTIONS(306), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym__escline,
    STATE(176), 1,
      sym__node_space,
    ACTIONS(303), 2,
      sym__bom,
      sym__unicode_space,
    STATE(77), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat1,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(117), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 10,
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
  [5473] = 8,
    ACTIONS(294), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_multi_line_comment,
    ACTIONS(289), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(287), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(291), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5516] = 8,
    ACTIONS(294), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_multi_line_comment,
    ACTIONS(289), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(287), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(291), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5559] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__raw_string_token3,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(275), 1,
      anon_sym_null,
    ACTIONS(277), 1,
      aux_sym__raw_string_token1,
    STATE(80), 1,
      sym_multi_line_comment,
    STATE(169), 1,
      sym__integer,
    STATE(209), 1,
      sym_boolean,
    STATE(248), 1,
      sym__sign,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(213), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(208), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [5622] = 8,
    ACTIONS(294), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_multi_line_comment,
    ACTIONS(289), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(287), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(291), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5665] = 8,
    ACTIONS(294), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_multi_line_comment,
    ACTIONS(289), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(287), 6,
      anon_sym_SLASH_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(291), 9,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [5708] = 8,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(327), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_multi_line_comment,
    STATE(127), 1,
      sym__escline,
    ACTIONS(324), 2,
      sym__bom,
      sym__unicode_space,
    STATE(64), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(196), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 10,
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
  [5749] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(67), 1,
      sym_identifier,
    STATE(77), 1,
      aux_sym_node_repeat1,
    STATE(84), 1,
      sym_multi_line_comment,
    STATE(92), 1,
      sym__escline,
    STATE(176), 1,
      sym__node_space,
    STATE(198), 1,
      sym__sign,
    STATE(239), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
  [5812] = 19,
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
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_node_repeat1,
    STATE(85), 1,
      sym_multi_line_comment,
    STATE(92), 1,
      sym__escline,
    STATE(176), 1,
      sym__node_space,
    STATE(198), 1,
      sym__sign,
    STATE(237), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
  [5875] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(86), 1,
      sym_multi_line_comment,
    STATE(91), 1,
      aux_sym_node_repeat1,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(163), 3,
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
  [5921] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(87), 1,
      sym_multi_line_comment,
    STATE(88), 1,
      aux_sym_node_repeat1,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(142), 3,
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
  [5967] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(88), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(336), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6013] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(89), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(142), 3,
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
  [6059] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(90), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(131), 3,
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
  [6105] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(91), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(144), 3,
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
  [6151] = 6,
    ACTIONS(327), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_multi_line_comment,
    ACTIONS(342), 2,
      sym__bom,
      sym__unicode_space,
    STATE(126), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(196), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 11,
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
  [6187] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat1,
    STATE(93), 1,
      sym_multi_line_comment,
    ACTIONS(347), 2,
      sym__bom,
      sym__unicode_space,
    STATE(87), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(145), 3,
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
  [6233] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(90), 1,
      aux_sym_node_repeat1,
    STATE(94), 1,
      sym_multi_line_comment,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(147), 3,
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
  [6279] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(95), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(147), 3,
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
  [6325] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(96), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(143), 3,
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
  [6371] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(97), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(149), 3,
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
  [6417] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(98), 1,
      sym_multi_line_comment,
    STATE(129), 1,
      aux_sym_node_repeat1,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(149), 3,
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
  [6463] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(99), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(163), 3,
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
  [6509] = 4,
    STATE(100), 1,
      sym_multi_line_comment,
    STATE(128), 1,
      aux_sym__integer_repeat1,
    ACTIONS(357), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(355), 19,
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
  [6541] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(101), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(166), 3,
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
  [6587] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(95), 1,
      aux_sym_node_repeat1,
    STATE(102), 1,
      sym_multi_line_comment,
    ACTIONS(363), 2,
      sym__bom,
      sym__unicode_space,
    STATE(94), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(162), 3,
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
  [6633] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(96), 1,
      aux_sym_node_repeat1,
    STATE(103), 1,
      sym_multi_line_comment,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(150), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(365), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6679] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(104), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(150), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(365), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6725] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(105), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(151), 3,
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
  [6771] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(99), 1,
      aux_sym_node_repeat1,
    STATE(106), 1,
      sym_multi_line_comment,
    ACTIONS(371), 2,
      sym__bom,
      sym__unicode_space,
    STATE(86), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(369), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6817] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(101), 1,
      aux_sym_node_repeat1,
    STATE(107), 1,
      sym_multi_line_comment,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(141), 3,
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
  [6863] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(108), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(141), 3,
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
  [6909] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(109), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(138), 3,
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
  [6955] = 3,
    ACTIONS(379), 2,
      anon_sym__,
      sym__digit,
    STATE(110), 2,
      sym_multi_line_comment,
      aux_sym__integer_repeat1,
    ACTIONS(377), 19,
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
  [6985] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(97), 1,
      aux_sym_node_repeat1,
    STATE(111), 1,
      sym_multi_line_comment,
    ACTIONS(384), 2,
      sym__bom,
      sym__unicode_space,
    STATE(98), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(382), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7031] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(112), 1,
      sym_multi_line_comment,
    STATE(119), 1,
      aux_sym_node_repeat1,
    ACTIONS(388), 2,
      sym__bom,
      sym__unicode_space,
    STATE(120), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(386), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7077] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(104), 1,
      aux_sym_node_repeat1,
    STATE(113), 1,
      sym_multi_line_comment,
    ACTIONS(392), 2,
      sym__bom,
      sym__unicode_space,
    STATE(103), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(390), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7123] = 9,
    ACTIONS(396), 1,
      anon_sym_BSLASH,
    ACTIONS(402), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      aux_sym_node_repeat1,
    STATE(92), 1,
      sym__escline,
    STATE(176), 1,
      sym__node_space,
    ACTIONS(399), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(114), 2,
      sym_multi_line_comment,
      aux_sym_node_repeat2,
    ACTIONS(394), 12,
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
  [7165] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(105), 1,
      aux_sym_node_repeat1,
    STATE(115), 1,
      sym_multi_line_comment,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(130), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(405), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7211] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(116), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(130), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(405), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7257] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(108), 1,
      aux_sym_node_repeat1,
    STATE(117), 1,
      sym_multi_line_comment,
    ACTIONS(409), 2,
      sym__bom,
      sym__unicode_space,
    STATE(107), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(135), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(407), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7303] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(109), 1,
      aux_sym_node_repeat1,
    STATE(118), 1,
      sym_multi_line_comment,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(136), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(411), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7349] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(119), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(413), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7395] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym__node_space,
    STATE(120), 1,
      sym_multi_line_comment,
    STATE(124), 1,
      aux_sym_node_repeat1,
    STATE(219), 1,
      sym__escline,
    ACTIONS(332), 2,
      sym__bom,
      sym__unicode_space,
    STATE(194), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(413), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7441] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(121), 1,
      sym_multi_line_comment,
    STATE(122), 1,
      aux_sym_node_repeat1,
    ACTIONS(417), 2,
      sym__bom,
      sym__unicode_space,
    STATE(118), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(154), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(415), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7487] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(122), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(136), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(411), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7533] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(116), 1,
      aux_sym_node_repeat1,
    STATE(123), 1,
      sym_multi_line_comment,
    ACTIONS(421), 2,
      sym__bom,
      sym__unicode_space,
    STATE(115), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(419), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7579] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(124), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(137), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(423), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [7625] = 6,
    ACTIONS(428), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_multi_line_comment,
    ACTIONS(425), 2,
      sym__bom,
      sym__unicode_space,
    STATE(64), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(232), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 11,
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
  [7661] = 6,
    ACTIONS(434), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_multi_line_comment,
    ACTIONS(431), 2,
      sym__bom,
      sym__unicode_space,
    STATE(64), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(222), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 11,
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
  [7697] = 6,
    ACTIONS(434), 1,
      anon_sym_SLASH_STAR,
    STATE(127), 1,
      sym_multi_line_comment,
    ACTIONS(437), 2,
      sym__bom,
      sym__unicode_space,
    STATE(125), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(222), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 11,
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
  [7733] = 4,
    STATE(110), 1,
      aux_sym__integer_repeat1,
    STATE(128), 1,
      sym_multi_line_comment,
    ACTIONS(442), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(440), 19,
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
  [7765] = 11,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(50), 1,
      sym__escline,
    STATE(56), 1,
      sym__node_space,
    STATE(129), 1,
      sym_multi_line_comment,
    ACTIONS(51), 2,
      sym__bom,
      sym__unicode_space,
    STATE(47), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(139), 3,
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
  [7811] = 3,
    STATE(130), 1,
      sym_multi_line_comment,
    ACTIONS(448), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(446), 19,
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
      anon_sym_SLASH_STAR,
  [7840] = 3,
    STATE(131), 1,
      sym_multi_line_comment,
    ACTIONS(452), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(450), 19,
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
      anon_sym_SLASH_STAR,
  [7869] = 3,
    STATE(132), 1,
      sym_multi_line_comment,
    ACTIONS(456), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(454), 19,
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
      anon_sym_SLASH_STAR,
  [7898] = 3,
    STATE(133), 1,
      sym_multi_line_comment,
    ACTIONS(460), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(458), 19,
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
      anon_sym_SLASH_STAR,
  [7927] = 3,
    STATE(134), 1,
      sym_multi_line_comment,
    ACTIONS(464), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(462), 19,
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
      anon_sym_SLASH_STAR,
  [7956] = 3,
    STATE(135), 1,
      sym_multi_line_comment,
    ACTIONS(468), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(466), 19,
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
      anon_sym_SLASH_STAR,
  [7985] = 3,
    STATE(136), 1,
      sym_multi_line_comment,
    ACTIONS(472), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(470), 19,
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
      anon_sym_SLASH_STAR,
  [8014] = 3,
    STATE(137), 1,
      sym_multi_line_comment,
    ACTIONS(476), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(474), 19,
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
      anon_sym_SLASH_STAR,
  [8043] = 3,
    STATE(138), 1,
      sym_multi_line_comment,
    ACTIONS(480), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(478), 19,
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
      anon_sym_SLASH_STAR,
  [8072] = 3,
    STATE(139), 1,
      sym_multi_line_comment,
    ACTIONS(484), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(482), 19,
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
      anon_sym_SLASH_STAR,
  [8101] = 3,
    STATE(140), 1,
      sym_multi_line_comment,
    ACTIONS(488), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(486), 19,
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
      anon_sym_SLASH_STAR,
  [8130] = 3,
    STATE(141), 1,
      sym_multi_line_comment,
    ACTIONS(492), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(490), 19,
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
      anon_sym_SLASH_STAR,
  [8159] = 3,
    STATE(142), 1,
      sym_multi_line_comment,
    ACTIONS(496), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(494), 19,
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
      anon_sym_SLASH_STAR,
  [8188] = 3,
    STATE(143), 1,
      sym_multi_line_comment,
    ACTIONS(500), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(498), 19,
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
      anon_sym_SLASH_STAR,
  [8217] = 3,
    STATE(144), 1,
      sym_multi_line_comment,
    ACTIONS(504), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(502), 19,
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
      anon_sym_SLASH_STAR,
  [8246] = 3,
    STATE(145), 1,
      sym_multi_line_comment,
    ACTIONS(508), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(506), 19,
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
      anon_sym_SLASH_STAR,
  [8275] = 3,
    STATE(146), 1,
      sym_multi_line_comment,
    ACTIONS(512), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(510), 19,
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
      anon_sym_SLASH_STAR,
  [8304] = 3,
    STATE(147), 1,
      sym_multi_line_comment,
    ACTIONS(516), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(514), 19,
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
      anon_sym_SLASH_STAR,
  [8333] = 3,
    STATE(148), 1,
      sym_multi_line_comment,
    ACTIONS(518), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(85), 19,
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
      anon_sym_SLASH_STAR,
  [8362] = 3,
    STATE(149), 1,
      sym_multi_line_comment,
    ACTIONS(522), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(520), 19,
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
      anon_sym_SLASH_STAR,
  [8391] = 3,
    STATE(150), 1,
      sym_multi_line_comment,
    ACTIONS(526), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(524), 19,
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
      anon_sym_SLASH_STAR,
  [8420] = 3,
    STATE(151), 1,
      sym_multi_line_comment,
    ACTIONS(530), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(528), 19,
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
      anon_sym_SLASH_STAR,
  [8449] = 3,
    STATE(152), 1,
      sym_multi_line_comment,
    ACTIONS(534), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(532), 19,
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
      anon_sym_SLASH_STAR,
  [8478] = 3,
    STATE(153), 1,
      sym_multi_line_comment,
    ACTIONS(538), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(536), 19,
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
      anon_sym_SLASH_STAR,
  [8507] = 3,
    STATE(154), 1,
      sym_multi_line_comment,
    ACTIONS(542), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(540), 19,
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
      anon_sym_SLASH_STAR,
  [8536] = 3,
    STATE(155), 1,
      sym_multi_line_comment,
    ACTIONS(546), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(544), 19,
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
      anon_sym_SLASH_STAR,
  [8565] = 3,
    STATE(156), 1,
      sym_multi_line_comment,
    ACTIONS(550), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(548), 19,
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
      anon_sym_SLASH_STAR,
  [8594] = 3,
    STATE(157), 1,
      sym_multi_line_comment,
    ACTIONS(554), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(552), 19,
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
      anon_sym_SLASH_STAR,
  [8623] = 3,
    STATE(158), 1,
      sym_multi_line_comment,
    ACTIONS(558), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(556), 19,
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
      anon_sym_SLASH_STAR,
  [8652] = 3,
    STATE(159), 1,
      sym_multi_line_comment,
    ACTIONS(562), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(560), 19,
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
      anon_sym_SLASH_STAR,
  [8681] = 3,
    STATE(160), 1,
      sym_multi_line_comment,
    ACTIONS(566), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(564), 19,
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
      anon_sym_SLASH_STAR,
  [8710] = 3,
    STATE(161), 1,
      sym_multi_line_comment,
    ACTIONS(570), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(568), 19,
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
      anon_sym_SLASH_STAR,
  [8739] = 3,
    STATE(162), 1,
      sym_multi_line_comment,
    ACTIONS(574), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(572), 19,
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
      anon_sym_SLASH_STAR,
  [8768] = 3,
    STATE(163), 1,
      sym_multi_line_comment,
    ACTIONS(578), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(576), 19,
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
      anon_sym_SLASH_STAR,
  [8797] = 3,
    STATE(164), 1,
      sym_multi_line_comment,
    ACTIONS(582), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(580), 19,
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
      anon_sym_SLASH_STAR,
  [8826] = 3,
    STATE(165), 1,
      sym_multi_line_comment,
    ACTIONS(586), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(584), 19,
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
      anon_sym_SLASH_STAR,
  [8855] = 3,
    STATE(166), 1,
      sym_multi_line_comment,
    ACTIONS(590), 2,
      sym__normal_bare_identifier,
      aux_sym__raw_string_token1,
    ACTIONS(588), 19,
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
      anon_sym_SLASH_STAR,
  [8884] = 5,
    ACTIONS(594), 1,
      anon_sym_DOT,
    STATE(167), 1,
      sym_multi_line_comment,
    STATE(214), 1,
      sym__exponent,
    ACTIONS(596), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(592), 16,
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
  [8916] = 4,
    STATE(168), 1,
      sym_multi_line_comment,
    STATE(172), 1,
      aux_sym__binary_repeat1,
    ACTIONS(600), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(598), 16,
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
  [8946] = 5,
    ACTIONS(604), 1,
      anon_sym_DOT,
    STATE(169), 1,
      sym_multi_line_comment,
    STATE(216), 1,
      sym__exponent,
    ACTIONS(596), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(602), 16,
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
  [8978] = 3,
    STATE(170), 1,
      sym_multi_line_comment,
    ACTIONS(265), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(267), 14,
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
      anon_sym_SLASH_STAR,
  [9006] = 4,
    STATE(168), 1,
      aux_sym__binary_repeat1,
    STATE(171), 1,
      sym_multi_line_comment,
    ACTIONS(608), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(606), 16,
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
  [9036] = 3,
    STATE(172), 2,
      sym_multi_line_comment,
      aux_sym__binary_repeat1,
    ACTIONS(612), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(610), 16,
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
  [9064] = 3,
    STATE(173), 1,
      sym_multi_line_comment,
    ACTIONS(261), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(263), 14,
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
      anon_sym_SLASH_STAR,
  [9092] = 4,
    STATE(174), 1,
      sym_multi_line_comment,
    STATE(175), 1,
      aux_sym__binary_repeat1,
    ACTIONS(615), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(598), 16,
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
  [9122] = 4,
    STATE(172), 1,
      aux_sym__binary_repeat1,
    STATE(175), 1,
      sym_multi_line_comment,
    ACTIONS(600), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(617), 16,
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
  [9152] = 3,
    STATE(176), 1,
      sym_multi_line_comment,
    ACTIONS(249), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 14,
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
      anon_sym_SLASH_STAR,
  [9180] = 4,
    ACTIONS(621), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_multi_line_comment,
    STATE(178), 1,
      aux_sym__raw_string_repeat1,
    ACTIONS(619), 17,
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
  [9209] = 3,
    ACTIONS(625), 1,
      anon_sym_POUND,
    STATE(178), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
    ACTIONS(623), 17,
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
  [9236] = 3,
    ACTIONS(630), 2,
      sym__hex_digit,
      anon_sym__,
    STATE(179), 2,
      sym_multi_line_comment,
      aux_sym__hex_repeat1,
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
  [9263] = 4,
    STATE(180), 1,
      sym_multi_line_comment,
    STATE(181), 1,
      aux_sym__hex_repeat1,
    ACTIONS(635), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(633), 16,
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
  [9292] = 4,
    STATE(179), 1,
      aux_sym__hex_repeat1,
    STATE(181), 1,
      sym_multi_line_comment,
    ACTIONS(639), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(637), 16,
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
  [9321] = 4,
    STATE(182), 1,
      sym_multi_line_comment,
    STATE(183), 1,
      aux_sym__octal_repeat1,
    ACTIONS(643), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(641), 16,
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
  [9350] = 3,
    ACTIONS(647), 2,
      anon_sym__,
      aux_sym__octal_token1,
    STATE(183), 2,
      sym_multi_line_comment,
      aux_sym__octal_repeat1,
    ACTIONS(645), 16,
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
  [9377] = 4,
    STATE(184), 1,
      sym_multi_line_comment,
    STATE(201), 1,
      sym__exponent,
    ACTIONS(596), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(650), 16,
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
  [9406] = 4,
    STATE(185), 1,
      sym_multi_line_comment,
    STATE(206), 1,
      sym__exponent,
    ACTIONS(596), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(652), 16,
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
  [9435] = 4,
    STATE(182), 1,
      aux_sym__octal_repeat1,
    STATE(186), 1,
      sym_multi_line_comment,
    ACTIONS(656), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(654), 16,
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
  [9464] = 4,
    STATE(187), 1,
      sym_multi_line_comment,
    STATE(190), 1,
      aux_sym__hex_repeat1,
    ACTIONS(658), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(637), 16,
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
  [9493] = 4,
    STATE(188), 1,
      sym_multi_line_comment,
    STATE(189), 1,
      aux_sym__octal_repeat1,
    ACTIONS(660), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(641), 16,
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
  [9522] = 4,
    STATE(183), 1,
      aux_sym__octal_repeat1,
    STATE(189), 1,
      sym_multi_line_comment,
    ACTIONS(643), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(662), 16,
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
  [9551] = 4,
    STATE(179), 1,
      aux_sym__hex_repeat1,
    STATE(190), 1,
      sym_multi_line_comment,
    ACTIONS(639), 2,
      sym__hex_digit,
      anon_sym__,
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
  [9580] = 4,
    ACTIONS(668), 1,
      sym__identifier_char,
    STATE(191), 1,
      sym_multi_line_comment,
    STATE(193), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(666), 16,
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
  [9608] = 3,
    ACTIONS(672), 1,
      sym__identifier_char,
    STATE(192), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(670), 16,
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
  [9634] = 4,
    ACTIONS(677), 1,
      sym__identifier_char,
    STATE(192), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(193), 1,
      sym_multi_line_comment,
    ACTIONS(675), 16,
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
  [9662] = 7,
    ACTIONS(682), 1,
      anon_sym_BSLASH,
    ACTIONS(690), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym__escline,
    STATE(194), 1,
      sym_multi_line_comment,
    ACTIONS(686), 2,
      sym__bom,
      sym__unicode_space,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(679), 10,
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
  [9695] = 2,
    STATE(195), 1,
      sym_multi_line_comment,
    ACTIONS(694), 17,
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
  [9718] = 2,
    STATE(196), 1,
      sym_multi_line_comment,
    ACTIONS(696), 17,
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
  [9741] = 3,
    ACTIONS(700), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym_multi_line_comment,
    ACTIONS(698), 16,
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
  [9766] = 3,
    ACTIONS(704), 1,
      sym___identifier_char_no_digit,
    STATE(198), 1,
      sym_multi_line_comment,
    ACTIONS(702), 16,
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
  [9791] = 2,
    STATE(199), 1,
      sym_multi_line_comment,
    ACTIONS(619), 17,
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
  [9814] = 2,
    STATE(200), 1,
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
  [9837] = 2,
    STATE(201), 1,
      sym_multi_line_comment,
    ACTIONS(708), 16,
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
  [9859] = 2,
    STATE(202), 1,
      sym_multi_line_comment,
    ACTIONS(710), 16,
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
  [9881] = 2,
    STATE(203), 1,
      sym_multi_line_comment,
    ACTIONS(394), 16,
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
  [9903] = 2,
    STATE(204), 1,
      sym_multi_line_comment,
    ACTIONS(712), 16,
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
  [9925] = 2,
    STATE(205), 1,
      sym_multi_line_comment,
    ACTIONS(700), 16,
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
  [9947] = 2,
    STATE(206), 1,
      sym_multi_line_comment,
    ACTIONS(714), 16,
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
  [9969] = 2,
    STATE(207), 1,
      sym_multi_line_comment,
    ACTIONS(716), 16,
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
  [9991] = 2,
    STATE(208), 1,
      sym_multi_line_comment,
    ACTIONS(718), 16,
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
  [10013] = 2,
    STATE(209), 1,
      sym_multi_line_comment,
    ACTIONS(720), 16,
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
  [10035] = 5,
    ACTIONS(729), 1,
      anon_sym_SLASH_STAR,
    STATE(210), 1,
      sym_multi_line_comment,
    ACTIONS(725), 2,
      sym__bom,
      sym__unicode_space,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(722), 11,
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
  [10063] = 2,
    STATE(211), 1,
      sym_multi_line_comment,
    ACTIONS(733), 16,
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
  [10085] = 2,
    STATE(212), 1,
      sym_multi_line_comment,
    ACTIONS(735), 16,
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
  [10107] = 2,
    STATE(213), 1,
      sym_multi_line_comment,
    ACTIONS(737), 16,
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
  [10129] = 2,
    STATE(214), 1,
      sym_multi_line_comment,
    ACTIONS(739), 16,
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
  [10151] = 2,
    STATE(215), 1,
      sym_multi_line_comment,
    ACTIONS(741), 16,
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
  [10173] = 2,
    STATE(216), 1,
      sym_multi_line_comment,
    ACTIONS(592), 16,
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
  [10195] = 2,
    STATE(217), 1,
      sym_multi_line_comment,
    ACTIONS(698), 16,
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
  [10217] = 2,
    STATE(218), 1,
      sym_multi_line_comment,
    ACTIONS(743), 16,
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
  [10239] = 5,
    ACTIONS(752), 1,
      anon_sym_SLASH_STAR,
    STATE(219), 1,
      sym_multi_line_comment,
    ACTIONS(748), 2,
      sym__bom,
      sym__unicode_space,
    STATE(210), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(745), 11,
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
  [10267] = 2,
    STATE(220), 1,
      sym_multi_line_comment,
    ACTIONS(756), 16,
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
  [10289] = 7,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(762), 1,
      anon_sym_SLASH_SLASH,
    STATE(221), 1,
      sym_multi_line_comment,
    ACTIONS(760), 2,
      sym__bom,
      sym__unicode_space,
    STATE(63), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(224), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(758), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10320] = 7,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    STATE(222), 1,
      sym_multi_line_comment,
    ACTIONS(766), 2,
      sym__bom,
      sym__unicode_space,
    STATE(170), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(223), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(764), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10351] = 7,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    STATE(223), 1,
      sym_multi_line_comment,
    ACTIONS(770), 2,
      sym__bom,
      sym__unicode_space,
    STATE(64), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(173), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(768), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10382] = 7,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(762), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 1,
      sym_multi_line_comment,
    ACTIONS(770), 2,
      sym__bom,
      sym__unicode_space,
    STATE(62), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(64), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(772), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10413] = 2,
    STATE(225), 1,
      sym_multi_line_comment,
    ACTIONS(774), 14,
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
  [10433] = 2,
    STATE(226), 1,
      sym_multi_line_comment,
    ACTIONS(776), 14,
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
  [10453] = 2,
    STATE(227), 1,
      sym_multi_line_comment,
    ACTIONS(778), 14,
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
  [10473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(228), 1,
      sym_multi_line_comment,
    ACTIONS(780), 6,
      sym__normal_bare_identifier,
      anon_sym_null,
      aux_sym__raw_string_token1,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(782), 7,
      anon_sym_DQUOTE,
      aux_sym__raw_string_token3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [10497] = 2,
    STATE(229), 1,
      sym_multi_line_comment,
    ACTIONS(784), 14,
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
  [10517] = 2,
    STATE(230), 1,
      sym_multi_line_comment,
    ACTIONS(786), 14,
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
  [10537] = 2,
    STATE(231), 1,
      sym_multi_line_comment,
    ACTIONS(788), 14,
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
  [10557] = 2,
    STATE(232), 1,
      sym_multi_line_comment,
    ACTIONS(790), 14,
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
  [10577] = 2,
    STATE(233), 1,
      sym_multi_line_comment,
    ACTIONS(792), 14,
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
  [10597] = 2,
    STATE(234), 1,
      sym_multi_line_comment,
    ACTIONS(794), 14,
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
  [10617] = 2,
    STATE(235), 1,
      sym_multi_line_comment,
    ACTIONS(796), 14,
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
  [10637] = 2,
    STATE(236), 1,
      sym_multi_line_comment,
    ACTIONS(798), 14,
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
  [10657] = 11,
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
    STATE(66), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(237), 1,
      sym_multi_line_comment,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
  [10694] = 11,
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
    STATE(70), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(238), 1,
      sym_multi_line_comment,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
  [10731] = 11,
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
    STATE(68), 1,
      sym_identifier,
    STATE(198), 1,
      sym__sign,
    STATE(239), 1,
      sym_multi_line_comment,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(200), 2,
      sym__escaped_string,
      sym__raw_string,
    STATE(205), 2,
      sym__bare_identifier,
      sym_string,
  [10768] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(802), 1,
      aux_sym_single_line_comment_token1,
    STATE(58), 1,
      sym__newline,
    STATE(240), 1,
      sym_multi_line_comment,
    STATE(242), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(800), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10794] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(802), 1,
      aux_sym_single_line_comment_token1,
    STATE(60), 1,
      sym__newline,
    STATE(241), 1,
      sym_multi_line_comment,
    STATE(242), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(804), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(808), 1,
      aux_sym_single_line_comment_token1,
    STATE(242), 2,
      sym_multi_line_comment,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(806), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10841] = 9,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      aux_sym_node_repeat1,
    STATE(92), 1,
      sym__escline,
    STATE(176), 1,
      sym__node_space,
    STATE(243), 1,
      sym_multi_line_comment,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
  [10871] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(813), 1,
      aux_sym_single_line_comment_token1,
    STATE(244), 1,
      sym_multi_line_comment,
    ACTIONS(811), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [10891] = 9,
    ACTIONS(25), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym__escline,
    STATE(176), 1,
      sym__node_space,
    STATE(243), 1,
      aux_sym_node_repeat1,
    STATE(245), 1,
      sym_multi_line_comment,
    ACTIONS(79), 2,
      sym__bom,
      sym__unicode_space,
    STATE(83), 2,
      sym__ws,
      aux_sym_node_repeat3,
  [10921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(817), 1,
      sym__digit,
    STATE(246), 1,
      sym_multi_line_comment,
    ACTIONS(815), 6,
      sym___identifier_char_no_digit,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [10939] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(702), 1,
      anon_sym_EQ,
    ACTIONS(819), 1,
      sym___identifier_char_no_digit,
    ACTIONS(821), 1,
      anon_sym_0x,
    ACTIONS(823), 1,
      anon_sym_0o,
    ACTIONS(825), 1,
      anon_sym_0b,
    STATE(167), 1,
      sym__integer,
    STATE(247), 1,
      sym_multi_line_comment,
  [10967] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(821), 1,
      anon_sym_0x,
    ACTIONS(823), 1,
      anon_sym_0o,
    ACTIONS(825), 1,
      anon_sym_0b,
    STATE(167), 1,
      sym__integer,
    STATE(248), 1,
      sym_multi_line_comment,
  [10989] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      sym__digit,
    STATE(212), 1,
      sym__integer,
    STATE(249), 1,
      sym_multi_line_comment,
    STATE(288), 1,
      sym__sign,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11009] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(831), 1,
      anon_sym_STAR_SLASH,
    STATE(250), 1,
      sym_multi_line_comment,
    STATE(261), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(281), 1,
      sym_commented_block,
  [11028] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(833), 1,
      anon_sym_STAR_SLASH,
    STATE(251), 1,
      sym_multi_line_comment,
    STATE(258), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(281), 1,
      sym_commented_block,
  [11047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(840), 1,
      sym_escape,
    STATE(252), 2,
      sym_multi_line_comment,
      aux_sym__escaped_string_repeat1,
  [11064] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(843), 1,
      anon_sym_DQUOTE,
    ACTIONS(845), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(847), 1,
      sym_escape,
    STATE(253), 1,
      sym_multi_line_comment,
    STATE(265), 1,
      aux_sym__escaped_string_repeat1,
  [11083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(849), 1,
      sym__identifier_char,
    ACTIONS(670), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
    STATE(254), 2,
      sym_multi_line_comment,
      aux_sym__bare_identifier_repeat1,
  [11098] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(852), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(855), 1,
      anon_sym_STAR_SLASH,
    STATE(281), 1,
      sym_commented_block,
    STATE(255), 2,
      sym_multi_line_comment,
      aux_sym_multi_line_comment_repeat1,
  [11115] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(857), 1,
      sym__identifier_char,
    STATE(254), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(256), 1,
      sym_multi_line_comment,
    ACTIONS(675), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [11132] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(845), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(847), 1,
      sym_escape,
    ACTIONS(859), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      sym_multi_line_comment,
    STATE(259), 1,
      aux_sym__escaped_string_repeat1,
  [11151] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(861), 1,
      anon_sym_STAR_SLASH,
    STATE(255), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(258), 1,
      sym_multi_line_comment,
    STATE(281), 1,
      sym_commented_block,
  [11170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(845), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(847), 1,
      sym_escape,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      aux_sym__escaped_string_repeat1,
    STATE(259), 1,
      sym_multi_line_comment,
  [11189] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(865), 1,
      anon_sym_STAR_SLASH,
    STATE(255), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(260), 1,
      sym_multi_line_comment,
    STATE(281), 1,
      sym_commented_block,
  [11208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(867), 1,
      anon_sym_STAR_SLASH,
    STATE(255), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(261), 1,
      sym_multi_line_comment,
    STATE(281), 1,
      sym_commented_block,
  [11227] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(869), 1,
      anon_sym_STAR_SLASH,
    STATE(262), 1,
      sym_multi_line_comment,
    STATE(263), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(281), 1,
      sym_commented_block,
  [11246] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(871), 1,
      anon_sym_STAR_SLASH,
    STATE(255), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(263), 1,
      sym_multi_line_comment,
    STATE(281), 1,
      sym_commented_block,
  [11265] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(857), 1,
      sym__identifier_char,
    STATE(256), 1,
      aux_sym__bare_identifier_repeat1,
    STATE(264), 1,
      sym_multi_line_comment,
    ACTIONS(666), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [11282] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(845), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(847), 1,
      sym_escape,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      aux_sym__escaped_string_repeat1,
    STATE(265), 1,
      sym_multi_line_comment,
  [11301] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(875), 1,
      anon_sym_STAR_SLASH,
    STATE(260), 1,
      aux_sym_multi_line_comment_repeat1,
    STATE(266), 1,
      sym_multi_line_comment,
    STATE(281), 1,
      sym_commented_block,
  [11320] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(877), 1,
      anon_sym_POUND,
    STATE(267), 2,
      sym_multi_line_comment,
      aux_sym__raw_string_repeat1,
  [11334] = 4,
    ACTIONS(880), 1,
      anon_sym_SLASH_STAR,
    STATE(268), 1,
      sym_multi_line_comment,
    STATE(269), 1,
      aux_sym_commented_block_repeat1,
    ACTIONS(882), 2,
      aux_sym_multi_line_comment_token1,
      anon_sym_STAR_SLASH,
  [11348] = 4,
    ACTIONS(880), 1,
      anon_sym_SLASH_STAR,
    STATE(269), 1,
      sym_multi_line_comment,
    STATE(271), 1,
      aux_sym_commented_block_repeat1,
    ACTIONS(884), 2,
      aux_sym_multi_line_comment_token1,
      anon_sym_STAR_SLASH,
  [11362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(888), 1,
      aux_sym__escaped_string_token1,
    STATE(270), 1,
      sym_multi_line_comment,
    ACTIONS(886), 2,
      anon_sym_DQUOTE,
      sym_escape,
  [11376] = 4,
    ACTIONS(890), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(893), 1,
      aux_sym_multi_line_comment_token1,
    ACTIONS(896), 1,
      anon_sym_STAR_SLASH,
    STATE(271), 2,
      sym_multi_line_comment,
      aux_sym_commented_block_repeat1,
  [11390] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(272), 1,
      sym_multi_line_comment,
    ACTIONS(898), 3,
      sym__identifier_char,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [11402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(900), 1,
      anon_sym_POUND,
    STATE(267), 1,
      aux_sym__raw_string_repeat1,
    STATE(273), 1,
      sym_multi_line_comment,
  [11418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      sym__digit,
    STATE(184), 1,
      sym__integer,
    STATE(274), 1,
      sym_multi_line_comment,
  [11431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      sym__digit,
    STATE(185), 1,
      sym__integer,
    STATE(275), 1,
      sym_multi_line_comment,
  [11444] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(276), 1,
      sym_multi_line_comment,
    ACTIONS(902), 2,
      anon_sym_0,
      anon_sym_1,
  [11455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(904), 1,
      anon_sym_POUND,
    STATE(177), 1,
      aux_sym__raw_string_repeat1,
    STATE(277), 1,
      sym_multi_line_comment,
  [11468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(900), 1,
      anon_sym_POUND,
    STATE(273), 1,
      aux_sym__raw_string_repeat1,
    STATE(278), 1,
      sym_multi_line_comment,
  [11481] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(279), 1,
      sym_multi_line_comment,
    ACTIONS(700), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [11492] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(280), 1,
      sym_multi_line_comment,
    ACTIONS(702), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [11503] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(281), 1,
      sym_multi_line_comment,
    ACTIONS(882), 2,
      aux_sym_multi_line_comment_token1,
      anon_sym_STAR_SLASH,
  [11514] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(282), 1,
      sym_multi_line_comment,
    ACTIONS(906), 2,
      anon_sym_0,
      anon_sym_1,
  [11525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(802), 1,
      aux_sym_single_line_comment_token1,
    STATE(240), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(283), 1,
      sym_multi_line_comment,
  [11538] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(284), 1,
      sym_multi_line_comment,
    ACTIONS(908), 2,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [11549] = 2,
    STATE(285), 1,
      sym_multi_line_comment,
    ACTIONS(257), 3,
      anon_sym_SLASH_STAR,
      aux_sym_multi_line_comment_token1,
      anon_sym_STAR_SLASH,
  [11558] = 2,
    STATE(286), 1,
      sym_multi_line_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH_STAR,
      aux_sym_multi_line_comment_token1,
      anon_sym_STAR_SLASH,
  [11567] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(819), 1,
      sym___identifier_char_no_digit,
    STATE(287), 1,
      sym_multi_line_comment,
  [11580] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(827), 1,
      sym__digit,
    STATE(220), 1,
      sym__integer,
    STATE(288), 1,
      sym_multi_line_comment,
  [11593] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(802), 1,
      aux_sym_single_line_comment_token1,
    STATE(241), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(289), 1,
      sym_multi_line_comment,
  [11606] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_multi_line_comment,
  [11616] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(910), 1,
      sym__hex_digit,
    STATE(291), 1,
      sym_multi_line_comment,
  [11626] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_multi_line_comment,
  [11636] = 3,
    ACTIONS(914), 1,
      aux_sym__raw_string_token2,
    ACTIONS(916), 1,
      anon_sym_SLASH_STAR,
    STATE(293), 1,
      sym_multi_line_comment,
  [11646] = 3,
    ACTIONS(916), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(918), 1,
      aux_sym__raw_string_token4,
    STATE(294), 1,
      sym_multi_line_comment,
  [11656] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_multi_line_comment,
  [11666] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(296), 1,
      sym_multi_line_comment,
  [11676] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(922), 1,
      sym__hex_digit,
    STATE(297), 1,
      sym_multi_line_comment,
  [11686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(924), 1,
      aux_sym__octal_token1,
    STATE(298), 1,
      sym_multi_line_comment,
  [11696] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_multi_line_comment,
  [11706] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym_multi_line_comment,
  [11716] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(926), 1,
      aux_sym__octal_token1,
    STATE(301), 1,
      sym_multi_line_comment,
  [11726] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(928), 1,
      anon_sym_EQ,
    STATE(302), 1,
      sym_multi_line_comment,
  [11736] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(303), 1,
      sym_multi_line_comment,
  [11746] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_multi_line_comment,
  [11756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    STATE(305), 1,
      sym_multi_line_comment,
  [11766] = 3,
    ACTIONS(916), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(936), 1,
      aux_sym__raw_string_token2,
    STATE(306), 1,
      sym_multi_line_comment,
  [11776] = 3,
    ACTIONS(916), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      aux_sym__raw_string_token4,
    STATE(307), 1,
      sym_multi_line_comment,
  [11786] = 1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
  [11790] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 139,
  [SMALL_STATE(4)] = 278,
  [SMALL_STATE(5)] = 417,
  [SMALL_STATE(6)] = 556,
  [SMALL_STATE(7)] = 695,
  [SMALL_STATE(8)] = 834,
  [SMALL_STATE(9)] = 973,
  [SMALL_STATE(10)] = 1050,
  [SMALL_STATE(11)] = 1164,
  [SMALL_STATE(12)] = 1274,
  [SMALL_STATE(13)] = 1384,
  [SMALL_STATE(14)] = 1491,
  [SMALL_STATE(15)] = 1598,
  [SMALL_STATE(16)] = 1671,
  [SMALL_STATE(17)] = 1726,
  [SMALL_STATE(18)] = 1800,
  [SMALL_STATE(19)] = 1874,
  [SMALL_STATE(20)] = 1948,
  [SMALL_STATE(21)] = 2022,
  [SMALL_STATE(22)] = 2096,
  [SMALL_STATE(23)] = 2170,
  [SMALL_STATE(24)] = 2244,
  [SMALL_STATE(25)] = 2318,
  [SMALL_STATE(26)] = 2392,
  [SMALL_STATE(27)] = 2466,
  [SMALL_STATE(28)] = 2540,
  [SMALL_STATE(29)] = 2614,
  [SMALL_STATE(30)] = 2688,
  [SMALL_STATE(31)] = 2762,
  [SMALL_STATE(32)] = 2835,
  [SMALL_STATE(33)] = 2908,
  [SMALL_STATE(34)] = 2981,
  [SMALL_STATE(35)] = 3054,
  [SMALL_STATE(36)] = 3127,
  [SMALL_STATE(37)] = 3200,
  [SMALL_STATE(38)] = 3273,
  [SMALL_STATE(39)] = 3346,
  [SMALL_STATE(40)] = 3419,
  [SMALL_STATE(41)] = 3492,
  [SMALL_STATE(42)] = 3565,
  [SMALL_STATE(43)] = 3638,
  [SMALL_STATE(44)] = 3711,
  [SMALL_STATE(45)] = 3784,
  [SMALL_STATE(46)] = 3857,
  [SMALL_STATE(47)] = 3930,
  [SMALL_STATE(48)] = 3981,
  [SMALL_STATE(49)] = 4054,
  [SMALL_STATE(50)] = 4098,
  [SMALL_STATE(51)] = 4144,
  [SMALL_STATE(52)] = 4190,
  [SMALL_STATE(53)] = 4236,
  [SMALL_STATE(54)] = 4282,
  [SMALL_STATE(55)] = 4352,
  [SMALL_STATE(56)] = 4390,
  [SMALL_STATE(57)] = 4428,
  [SMALL_STATE(58)] = 4466,
  [SMALL_STATE(59)] = 4504,
  [SMALL_STATE(60)] = 4542,
  [SMALL_STATE(61)] = 4580,
  [SMALL_STATE(62)] = 4618,
  [SMALL_STATE(63)] = 4656,
  [SMALL_STATE(64)] = 4694,
  [SMALL_STATE(65)] = 4736,
  [SMALL_STATE(66)] = 4808,
  [SMALL_STATE(67)] = 4866,
  [SMALL_STATE(68)] = 4924,
  [SMALL_STATE(69)] = 4982,
  [SMALL_STATE(70)] = 5040,
  [SMALL_STATE(71)] = 5098,
  [SMALL_STATE(72)] = 5138,
  [SMALL_STATE(73)] = 5196,
  [SMALL_STATE(74)] = 5254,
  [SMALL_STATE(75)] = 5312,
  [SMALL_STATE(76)] = 5370,
  [SMALL_STATE(77)] = 5428,
  [SMALL_STATE(78)] = 5473,
  [SMALL_STATE(79)] = 5516,
  [SMALL_STATE(80)] = 5559,
  [SMALL_STATE(81)] = 5622,
  [SMALL_STATE(82)] = 5665,
  [SMALL_STATE(83)] = 5708,
  [SMALL_STATE(84)] = 5749,
  [SMALL_STATE(85)] = 5812,
  [SMALL_STATE(86)] = 5875,
  [SMALL_STATE(87)] = 5921,
  [SMALL_STATE(88)] = 5967,
  [SMALL_STATE(89)] = 6013,
  [SMALL_STATE(90)] = 6059,
  [SMALL_STATE(91)] = 6105,
  [SMALL_STATE(92)] = 6151,
  [SMALL_STATE(93)] = 6187,
  [SMALL_STATE(94)] = 6233,
  [SMALL_STATE(95)] = 6279,
  [SMALL_STATE(96)] = 6325,
  [SMALL_STATE(97)] = 6371,
  [SMALL_STATE(98)] = 6417,
  [SMALL_STATE(99)] = 6463,
  [SMALL_STATE(100)] = 6509,
  [SMALL_STATE(101)] = 6541,
  [SMALL_STATE(102)] = 6587,
  [SMALL_STATE(103)] = 6633,
  [SMALL_STATE(104)] = 6679,
  [SMALL_STATE(105)] = 6725,
  [SMALL_STATE(106)] = 6771,
  [SMALL_STATE(107)] = 6817,
  [SMALL_STATE(108)] = 6863,
  [SMALL_STATE(109)] = 6909,
  [SMALL_STATE(110)] = 6955,
  [SMALL_STATE(111)] = 6985,
  [SMALL_STATE(112)] = 7031,
  [SMALL_STATE(113)] = 7077,
  [SMALL_STATE(114)] = 7123,
  [SMALL_STATE(115)] = 7165,
  [SMALL_STATE(116)] = 7211,
  [SMALL_STATE(117)] = 7257,
  [SMALL_STATE(118)] = 7303,
  [SMALL_STATE(119)] = 7349,
  [SMALL_STATE(120)] = 7395,
  [SMALL_STATE(121)] = 7441,
  [SMALL_STATE(122)] = 7487,
  [SMALL_STATE(123)] = 7533,
  [SMALL_STATE(124)] = 7579,
  [SMALL_STATE(125)] = 7625,
  [SMALL_STATE(126)] = 7661,
  [SMALL_STATE(127)] = 7697,
  [SMALL_STATE(128)] = 7733,
  [SMALL_STATE(129)] = 7765,
  [SMALL_STATE(130)] = 7811,
  [SMALL_STATE(131)] = 7840,
  [SMALL_STATE(132)] = 7869,
  [SMALL_STATE(133)] = 7898,
  [SMALL_STATE(134)] = 7927,
  [SMALL_STATE(135)] = 7956,
  [SMALL_STATE(136)] = 7985,
  [SMALL_STATE(137)] = 8014,
  [SMALL_STATE(138)] = 8043,
  [SMALL_STATE(139)] = 8072,
  [SMALL_STATE(140)] = 8101,
  [SMALL_STATE(141)] = 8130,
  [SMALL_STATE(142)] = 8159,
  [SMALL_STATE(143)] = 8188,
  [SMALL_STATE(144)] = 8217,
  [SMALL_STATE(145)] = 8246,
  [SMALL_STATE(146)] = 8275,
  [SMALL_STATE(147)] = 8304,
  [SMALL_STATE(148)] = 8333,
  [SMALL_STATE(149)] = 8362,
  [SMALL_STATE(150)] = 8391,
  [SMALL_STATE(151)] = 8420,
  [SMALL_STATE(152)] = 8449,
  [SMALL_STATE(153)] = 8478,
  [SMALL_STATE(154)] = 8507,
  [SMALL_STATE(155)] = 8536,
  [SMALL_STATE(156)] = 8565,
  [SMALL_STATE(157)] = 8594,
  [SMALL_STATE(158)] = 8623,
  [SMALL_STATE(159)] = 8652,
  [SMALL_STATE(160)] = 8681,
  [SMALL_STATE(161)] = 8710,
  [SMALL_STATE(162)] = 8739,
  [SMALL_STATE(163)] = 8768,
  [SMALL_STATE(164)] = 8797,
  [SMALL_STATE(165)] = 8826,
  [SMALL_STATE(166)] = 8855,
  [SMALL_STATE(167)] = 8884,
  [SMALL_STATE(168)] = 8916,
  [SMALL_STATE(169)] = 8946,
  [SMALL_STATE(170)] = 8978,
  [SMALL_STATE(171)] = 9006,
  [SMALL_STATE(172)] = 9036,
  [SMALL_STATE(173)] = 9064,
  [SMALL_STATE(174)] = 9092,
  [SMALL_STATE(175)] = 9122,
  [SMALL_STATE(176)] = 9152,
  [SMALL_STATE(177)] = 9180,
  [SMALL_STATE(178)] = 9209,
  [SMALL_STATE(179)] = 9236,
  [SMALL_STATE(180)] = 9263,
  [SMALL_STATE(181)] = 9292,
  [SMALL_STATE(182)] = 9321,
  [SMALL_STATE(183)] = 9350,
  [SMALL_STATE(184)] = 9377,
  [SMALL_STATE(185)] = 9406,
  [SMALL_STATE(186)] = 9435,
  [SMALL_STATE(187)] = 9464,
  [SMALL_STATE(188)] = 9493,
  [SMALL_STATE(189)] = 9522,
  [SMALL_STATE(190)] = 9551,
  [SMALL_STATE(191)] = 9580,
  [SMALL_STATE(192)] = 9608,
  [SMALL_STATE(193)] = 9634,
  [SMALL_STATE(194)] = 9662,
  [SMALL_STATE(195)] = 9695,
  [SMALL_STATE(196)] = 9718,
  [SMALL_STATE(197)] = 9741,
  [SMALL_STATE(198)] = 9766,
  [SMALL_STATE(199)] = 9791,
  [SMALL_STATE(200)] = 9814,
  [SMALL_STATE(201)] = 9837,
  [SMALL_STATE(202)] = 9859,
  [SMALL_STATE(203)] = 9881,
  [SMALL_STATE(204)] = 9903,
  [SMALL_STATE(205)] = 9925,
  [SMALL_STATE(206)] = 9947,
  [SMALL_STATE(207)] = 9969,
  [SMALL_STATE(208)] = 9991,
  [SMALL_STATE(209)] = 10013,
  [SMALL_STATE(210)] = 10035,
  [SMALL_STATE(211)] = 10063,
  [SMALL_STATE(212)] = 10085,
  [SMALL_STATE(213)] = 10107,
  [SMALL_STATE(214)] = 10129,
  [SMALL_STATE(215)] = 10151,
  [SMALL_STATE(216)] = 10173,
  [SMALL_STATE(217)] = 10195,
  [SMALL_STATE(218)] = 10217,
  [SMALL_STATE(219)] = 10239,
  [SMALL_STATE(220)] = 10267,
  [SMALL_STATE(221)] = 10289,
  [SMALL_STATE(222)] = 10320,
  [SMALL_STATE(223)] = 10351,
  [SMALL_STATE(224)] = 10382,
  [SMALL_STATE(225)] = 10413,
  [SMALL_STATE(226)] = 10433,
  [SMALL_STATE(227)] = 10453,
  [SMALL_STATE(228)] = 10473,
  [SMALL_STATE(229)] = 10497,
  [SMALL_STATE(230)] = 10517,
  [SMALL_STATE(231)] = 10537,
  [SMALL_STATE(232)] = 10557,
  [SMALL_STATE(233)] = 10577,
  [SMALL_STATE(234)] = 10597,
  [SMALL_STATE(235)] = 10617,
  [SMALL_STATE(236)] = 10637,
  [SMALL_STATE(237)] = 10657,
  [SMALL_STATE(238)] = 10694,
  [SMALL_STATE(239)] = 10731,
  [SMALL_STATE(240)] = 10768,
  [SMALL_STATE(241)] = 10794,
  [SMALL_STATE(242)] = 10820,
  [SMALL_STATE(243)] = 10841,
  [SMALL_STATE(244)] = 10871,
  [SMALL_STATE(245)] = 10891,
  [SMALL_STATE(246)] = 10921,
  [SMALL_STATE(247)] = 10939,
  [SMALL_STATE(248)] = 10967,
  [SMALL_STATE(249)] = 10989,
  [SMALL_STATE(250)] = 11009,
  [SMALL_STATE(251)] = 11028,
  [SMALL_STATE(252)] = 11047,
  [SMALL_STATE(253)] = 11064,
  [SMALL_STATE(254)] = 11083,
  [SMALL_STATE(255)] = 11098,
  [SMALL_STATE(256)] = 11115,
  [SMALL_STATE(257)] = 11132,
  [SMALL_STATE(258)] = 11151,
  [SMALL_STATE(259)] = 11170,
  [SMALL_STATE(260)] = 11189,
  [SMALL_STATE(261)] = 11208,
  [SMALL_STATE(262)] = 11227,
  [SMALL_STATE(263)] = 11246,
  [SMALL_STATE(264)] = 11265,
  [SMALL_STATE(265)] = 11282,
  [SMALL_STATE(266)] = 11301,
  [SMALL_STATE(267)] = 11320,
  [SMALL_STATE(268)] = 11334,
  [SMALL_STATE(269)] = 11348,
  [SMALL_STATE(270)] = 11362,
  [SMALL_STATE(271)] = 11376,
  [SMALL_STATE(272)] = 11390,
  [SMALL_STATE(273)] = 11402,
  [SMALL_STATE(274)] = 11418,
  [SMALL_STATE(275)] = 11431,
  [SMALL_STATE(276)] = 11444,
  [SMALL_STATE(277)] = 11455,
  [SMALL_STATE(278)] = 11468,
  [SMALL_STATE(279)] = 11481,
  [SMALL_STATE(280)] = 11492,
  [SMALL_STATE(281)] = 11503,
  [SMALL_STATE(282)] = 11514,
  [SMALL_STATE(283)] = 11525,
  [SMALL_STATE(284)] = 11538,
  [SMALL_STATE(285)] = 11549,
  [SMALL_STATE(286)] = 11558,
  [SMALL_STATE(287)] = 11567,
  [SMALL_STATE(288)] = 11580,
  [SMALL_STATE(289)] = 11593,
  [SMALL_STATE(290)] = 11606,
  [SMALL_STATE(291)] = 11616,
  [SMALL_STATE(292)] = 11626,
  [SMALL_STATE(293)] = 11636,
  [SMALL_STATE(294)] = 11646,
  [SMALL_STATE(295)] = 11656,
  [SMALL_STATE(296)] = 11666,
  [SMALL_STATE(297)] = 11676,
  [SMALL_STATE(298)] = 11686,
  [SMALL_STATE(299)] = 11696,
  [SMALL_STATE(300)] = 11706,
  [SMALL_STATE(301)] = 11716,
  [SMALL_STATE(302)] = 11726,
  [SMALL_STATE(303)] = 11736,
  [SMALL_STATE(304)] = 11746,
  [SMALL_STATE(305)] = 11756,
  [SMALL_STATE(306)] = 11766,
  [SMALL_STATE(307)] = 11776,
  [SMALL_STATE(308)] = 11786,
  [SMALL_STATE(309)] = 11790,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(205),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(85),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(253),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(293),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(294),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(198),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(54),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(289),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(251),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(221),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(47),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(250),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(221),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(49),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(250),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(49),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(250),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(51),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(49),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(250),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(49),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(250),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(52),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_comment, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(64),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(251),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(289),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(251),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(222),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(83),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(251),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(230),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(229),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(233),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(222),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(64),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(251),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(126),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(110),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(222),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(83),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(251),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(64),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(251),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(64),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(251),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(125),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 8),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 8),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 15),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 12),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 4),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 7),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 7),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 16),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 16),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 16),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 16),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 12),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 12),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 14),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 16),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 16),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 14),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 12),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 8),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 8),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 8),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 8),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 15),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 15),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 4),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(172),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(178),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(179),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(183),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(192),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [682] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(221),
  [686] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(49),
  [690] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(250),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 13),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 2, .production_id = 6),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [725] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(49),
  [729] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(250),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 3, .production_id = 9),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_field, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field, 1),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [748] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(210),
  [752] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(250),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 5),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 5),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 5),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 5),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(244),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sign, 1),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sign, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(270),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(270),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(272),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_line_comment_repeat1, 2), SHIFT_REPEAT(268),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_line_comment_repeat1, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 2), SHIFT_REPEAT(284),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_line_comment_repeat1, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commented_block, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commented_block_repeat1, 2), SHIFT_REPEAT(262),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commented_block_repeat1, 2), SHIFT_REPEAT(271),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commented_block_repeat1, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_repeat1, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [920] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
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
