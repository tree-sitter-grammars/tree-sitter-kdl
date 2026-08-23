#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 388
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 3
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 22

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
  anon_sym_POUNDnull = 10,
  anon_sym_i8 = 11,
  anon_sym_i16 = 12,
  anon_sym_i32 = 13,
  anon_sym_i64 = 14,
  anon_sym_u8 = 15,
  anon_sym_u16 = 16,
  anon_sym_u32 = 17,
  anon_sym_u64 = 18,
  anon_sym_isize = 19,
  anon_sym_usize = 20,
  anon_sym_f32 = 21,
  anon_sym_f64 = 22,
  anon_sym_decimal64 = 23,
  anon_sym_decimal128 = 24,
  anon_sym_date_DASHtime = 25,
  anon_sym_time = 26,
  anon_sym_date = 27,
  anon_sym_duration = 28,
  anon_sym_decimal = 29,
  anon_sym_currency = 30,
  anon_sym_country_DASH2 = 31,
  anon_sym_country_DASH3 = 32,
  anon_sym_country_DASHsubdivision = 33,
  anon_sym_email = 34,
  anon_sym_idn_DASHemail = 35,
  anon_sym_hostname = 36,
  anon_sym_idn_DASHhostname = 37,
  anon_sym_ipv4 = 38,
  anon_sym_ipv6 = 39,
  anon_sym_url = 40,
  anon_sym_url_DASHreference = 41,
  anon_sym_irl = 42,
  anon_sym_iri_DASHreference = 43,
  anon_sym_url_DASHtemplate = 44,
  anon_sym_uuid = 45,
  anon_sym_regex = 46,
  anon_sym_base64 = 47,
  anon_sym_EQ = 48,
  anon_sym_LPAREN = 49,
  anon_sym_RPAREN = 50,
  anon_sym_DQUOTE = 51,
  aux_sym__escaped_string_token1 = 52,
  sym_escape = 53,
  sym_escaped_whitespace = 54,
  sym__hex_digit = 55,
  anon_sym_DOT = 56,
  anon_sym_e = 57,
  anon_sym_E = 58,
  anon_sym__ = 59,
  sym__digit = 60,
  anon_sym_PLUS = 61,
  anon_sym_DASH = 62,
  anon_sym_0x = 63,
  anon_sym_0o = 64,
  aux_sym__octal_token1 = 65,
  anon_sym_0b = 66,
  anon_sym_0 = 67,
  anon_sym_1 = 68,
  anon_sym_POUNDinf = 69,
  anon_sym_POUND_DASHinf = 70,
  anon_sym_POUNDnan = 71,
  anon_sym_true = 72,
  anon_sym_false = 73,
  anon_sym_POUNDtrue = 74,
  anon_sym_POUNDfalse = 75,
  anon_sym_BSLASH = 76,
  aux_sym__newline_token1 = 77,
  aux_sym__newline_token2 = 78,
  aux_sym__newline_token3 = 79,
  aux_sym__newline_token4 = 80,
  aux_sym__newline_token5 = 81,
  aux_sym__newline_token6 = 82,
  aux_sym__newline_token7 = 83,
  aux_sym__newline_token8 = 84,
  sym__bom = 85,
  sym__unicode_space = 86,
  anon_sym_SLASH_SLASH = 87,
  aux_sym_single_line_comment_token1 = 88,
  sym__eof = 89,
  sym_multi_line_comment = 90,
  sym__multiline_escaped_start = 91,
  sym__multiline_raw_start = 92,
  sym__multiline_escape = 93,
  sym__multiline_escaped_whitespace = 94,
  sym__multiline_fragment = 95,
  sym__multiline_end = 96,
  sym__raw_string = 97,
  sym_document = 98,
  sym_node = 99,
  sym_node_field = 100,
  sym__node_field_comment = 101,
  sym__node_field = 102,
  sym_node_children = 103,
  sym__node_space = 104,
  sym__node_terminator = 105,
  sym_identifier = 106,
  sym__bare_identifier = 107,
  sym_keyword = 108,
  sym_annotation_type = 109,
  sym_prop = 110,
  sym_value = 111,
  sym_type = 112,
  sym_string = 113,
  sym_multi_line_string = 114,
  sym__escaped_string = 115,
  sym_number = 116,
  sym__decimal = 117,
  sym__exponent = 118,
  sym__integer = 119,
  sym__sign = 120,
  sym__hex = 121,
  sym__octal = 122,
  sym__binary = 123,
  sym_keyword_number = 124,
  sym_boolean = 125,
  sym__escline = 126,
  sym__linespace = 127,
  sym__newline = 128,
  sym__ws = 129,
  sym_single_line_comment = 130,
  aux_sym_document_repeat1 = 131,
  aux_sym_document_repeat2 = 132,
  aux_sym_node_repeat1 = 133,
  aux_sym_node_repeat2 = 134,
  aux_sym_node_repeat3 = 135,
  aux_sym__bare_identifier_repeat1 = 136,
  aux_sym_multi_line_string_repeat1 = 137,
  aux_sym_multi_line_string_repeat2 = 138,
  aux_sym__escaped_string_repeat1 = 139,
  aux_sym__integer_repeat1 = 140,
  aux_sym__hex_repeat1 = 141,
  aux_sym__octal_repeat1 = 142,
  aux_sym__binary_repeat1 = 143,
  aux_sym_single_line_comment_repeat1 = 144,
  alias_sym_decimal = 145,
  alias_sym_node_children_comment = 146,
  alias_sym_node_field_comment = 147,
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
  [anon_sym_POUNDnull] = "#null",
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
  [sym_escaped_whitespace] = "escaped_whitespace",
  [sym__hex_digit] = "_hex_digit",
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
  [anon_sym_POUNDinf] = "#inf",
  [anon_sym_POUND_DASHinf] = "#-inf",
  [anon_sym_POUNDnan] = "#nan",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_POUNDtrue] = "#true",
  [anon_sym_POUNDfalse] = "#false",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__newline_token1] = "_newline_token1",
  [aux_sym__newline_token2] = "_newline_token2",
  [aux_sym__newline_token3] = "_newline_token3",
  [aux_sym__newline_token4] = "_newline_token4",
  [aux_sym__newline_token5] = "_newline_token5",
  [aux_sym__newline_token6] = "_newline_token6",
  [aux_sym__newline_token7] = "_newline_token7",
  [aux_sym__newline_token8] = "_newline_token8",
  [sym__bom] = "_bom",
  [sym__unicode_space] = "_unicode_space",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [sym__eof] = "_eof",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym__multiline_escaped_start] = "_multiline_escaped_start",
  [sym__multiline_raw_start] = "_multiline_raw_start",
  [sym__multiline_escape] = "escape",
  [sym__multiline_escaped_whitespace] = "escaped_whitespace",
  [sym__multiline_fragment] = "string_fragment",
  [sym__multiline_end] = "_multiline_end",
  [sym__raw_string] = "_raw_string",
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
  [sym_multi_line_string] = "multi_line_string",
  [sym__escaped_string] = "_escaped_string",
  [sym_number] = "number",
  [sym__decimal] = "_decimal",
  [sym__exponent] = "exponent",
  [sym__integer] = "_integer",
  [sym__sign] = "_sign",
  [sym__hex] = "_hex",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
  [sym_keyword_number] = "keyword_number",
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
  [aux_sym_multi_line_string_repeat1] = "multi_line_string_repeat1",
  [aux_sym_multi_line_string_repeat2] = "multi_line_string_repeat2",
  [aux_sym__escaped_string_repeat1] = "_escaped_string_repeat1",
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
  [anon_sym_POUNDnull] = anon_sym_POUNDnull,
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
  [sym_escaped_whitespace] = sym_escaped_whitespace,
  [sym__hex_digit] = sym__hex_digit,
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
  [anon_sym_POUNDinf] = anon_sym_POUNDinf,
  [anon_sym_POUND_DASHinf] = anon_sym_POUND_DASHinf,
  [anon_sym_POUNDnan] = anon_sym_POUNDnan,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_POUNDtrue] = anon_sym_POUNDtrue,
  [anon_sym_POUNDfalse] = anon_sym_POUNDfalse,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [aux_sym__newline_token2] = aux_sym__newline_token2,
  [aux_sym__newline_token3] = aux_sym__newline_token3,
  [aux_sym__newline_token4] = aux_sym__newline_token4,
  [aux_sym__newline_token5] = aux_sym__newline_token5,
  [aux_sym__newline_token6] = aux_sym__newline_token6,
  [aux_sym__newline_token7] = aux_sym__newline_token7,
  [aux_sym__newline_token8] = aux_sym__newline_token8,
  [sym__bom] = sym__bom,
  [sym__unicode_space] = sym__unicode_space,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [sym__eof] = sym__eof,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym__multiline_escaped_start] = sym__multiline_escaped_start,
  [sym__multiline_raw_start] = sym__multiline_raw_start,
  [sym__multiline_escape] = sym_escape,
  [sym__multiline_escaped_whitespace] = sym_escaped_whitespace,
  [sym__multiline_fragment] = sym__multiline_fragment,
  [sym__multiline_end] = sym__multiline_end,
  [sym__raw_string] = sym__raw_string,
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
  [sym_multi_line_string] = sym_multi_line_string,
  [sym__escaped_string] = sym__escaped_string,
  [sym_number] = sym_number,
  [sym__decimal] = sym__decimal,
  [sym__exponent] = sym__exponent,
  [sym__integer] = sym__integer,
  [sym__sign] = sym__sign,
  [sym__hex] = sym__hex,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
  [sym_keyword_number] = sym_keyword_number,
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
  [aux_sym_multi_line_string_repeat1] = aux_sym_multi_line_string_repeat1,
  [aux_sym_multi_line_string_repeat2] = aux_sym_multi_line_string_repeat2,
  [aux_sym__escaped_string_repeat1] = aux_sym__escaped_string_repeat1,
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
  [anon_sym_POUNDnull] = {
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
  [sym_escaped_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
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
  [anon_sym_POUNDinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDnan] = {
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
  [anon_sym_POUNDtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfalse] = {
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
  [aux_sym__newline_token8] = {
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
  [sym__multiline_escaped_start] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_raw_start] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_escaped_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_end] = {
    .visible = false,
    .named = true,
  },
  [sym__raw_string] = {
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
  [sym_multi_line_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escaped_string] = {
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
  [sym_keyword_number] = {
    .visible = true,
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
  [aux_sym_multi_line_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_line_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escaped_string_repeat1] = {
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
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [9] = {.index = 2, .length = 1},
  [10] = {.index = 2, .length = 1},
  [14] = {.index = 3, .length = 1},
  [15] = {.index = 3, .length = 1},
  [17] = {.index = 4, .length = 1},
  [18] = {.index = 4, .length = 1},
  [19] = {.index = 5, .length = 1},
  [20] = {.index = 5, .length = 1},
  [21] = {.index = 6, .length = 1},
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
  [6] =
    {field_children, 7},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym__multiline_fragment,
  },
  [3] = {
    [0] = sym_string,
  },
  [5] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [6] = {
    [0] = alias_sym_node_children_comment,
  },
  [7] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
  },
  [8] = {
    [1] = sym_string,
  },
  [10] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [11] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
    [2] = alias_sym_node_field_comment,
  },
  [12] = {
    [2] = sym_string,
  },
  [13] = {
    [2] = alias_sym_decimal,
  },
  [15] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [16] = {
    [3] = alias_sym_decimal,
  },
  [18] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [20] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [21] = {
    [1] = anon_sym_SLASH_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__node_field, 2,
    sym__node_field,
    alias_sym_node_field_comment,
  sym__bare_identifier, 2,
    sym__bare_identifier,
    sym_string,
  sym__integer, 2,
    sym__integer,
    alias_sym_decimal,
  aux_sym_node_repeat1, 3,
    aux_sym_node_repeat1,
    alias_sym_node_field_comment,
    anon_sym_SLASH_DASH,
  aux_sym__escaped_string_repeat1, 2,
    aux_sym__escaped_string_repeat1,
    sym__multiline_fragment,
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
  [16] = 15,
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
  [36] = 17,
  [37] = 37,
  [38] = 38,
  [39] = 19,
  [40] = 23,
  [41] = 20,
  [42] = 22,
  [43] = 21,
  [44] = 24,
  [45] = 27,
  [46] = 31,
  [47] = 11,
  [48] = 29,
  [49] = 12,
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
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 17,
  [84] = 19,
  [85] = 21,
  [86] = 24,
  [87] = 20,
  [88] = 23,
  [89] = 22,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 31,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 11,
  [99] = 29,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 12,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 27,
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
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 17,
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
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 19,
  [253] = 20,
  [254] = 21,
  [255] = 255,
  [256] = 256,
  [257] = 22,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 24,
  [265] = 23,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 20,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 288,
  [290] = 286,
  [291] = 288,
  [292] = 286,
  [293] = 286,
  [294] = 288,
  [295] = 288,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 29,
  [300] = 11,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 27,
  [306] = 306,
  [307] = 307,
  [308] = 12,
  [309] = 309,
  [310] = 310,
  [311] = 31,
  [312] = 312,
  [313] = 312,
  [314] = 314,
  [315] = 312,
  [316] = 314,
  [317] = 314,
  [318] = 312,
  [319] = 314,
  [320] = 312,
  [321] = 314,
  [322] = 322,
  [323] = 17,
  [324] = 115,
  [325] = 114,
  [326] = 118,
  [327] = 327,
  [328] = 19,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 329,
  [334] = 334,
  [335] = 335,
  [336] = 332,
  [337] = 334,
  [338] = 338,
  [339] = 338,
  [340] = 23,
  [341] = 22,
  [342] = 21,
  [343] = 24,
  [344] = 12,
  [345] = 31,
  [346] = 238,
  [347] = 27,
  [348] = 29,
  [349] = 226,
  [350] = 231,
  [351] = 11,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 355,
  [357] = 357,
  [358] = 358,
  [359] = 352,
  [360] = 358,
  [361] = 242,
  [362] = 362,
  [363] = 357,
  [364] = 245,
  [365] = 244,
  [366] = 243,
  [367] = 249,
  [368] = 248,
  [369] = 276,
  [370] = 370,
  [371] = 247,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 373,
  [376] = 376,
  [377] = 374,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
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
  return (c < 6016
    ? (c < 2962
      ? (c < 2451
        ? (c < 1376
          ? (c < 748
            ? (c < 181
              ? (c < '^'
                ? (c < ':'
                  ? (c >= '!' && c <= '*')
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
          : (c <= 4685 || (c < 4957
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
                  : c <= 4954)))))
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
    : (c <= 6099 || (c < 42775
      ? (c < 8455
        ? (c < 7245
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
                  : c <= 7241)))))))
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
          : (c <= 11734 || (c < 12784
            ? (c < 12441
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12344
                  ? (c >= 12321 && c <= 12341)
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
    : (c <= 8488 || (c < 43744
      ? (c < 10175
        ? (c < 9854
          ? (c < 9728
            ? (c < 9167
              ? (c < 8528
                ? (c < 8508
                  ? (c < 8495
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))
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
          : (c <= 12895 || (c < 42994
            ? (c < 42512
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 42192
                  ? (c < 19968
                    ? c == 19903
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
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))
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
          : (c <= 12895 || (c < 42994
            ? (c < 42512
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 42192
                  ? (c < 19968
                    ? c == 19903
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
    : (c <= 8484 || (c < 43739
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
        : (c <= 10145 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)))
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
                    ? (c >= '-' && c <= '.')
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
    : (c <= 8484 || (c < 43739
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
        : (c <= 10145 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)))
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
    : (c <= 8484 || (c < 43739
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
        : (c <= 10145 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)))
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
                  : c <= 67883)))))))))))))));
}

static inline bool sym___identifier_char_no_digit_character_set_1(int32_t c) {
  return (c < 6002
    ? (c < 2949
      ? (c < 2437
        ? (c < 1329
          ? (c < 248
            ? (c < '~'
              ? (c < '-'
                ? (c < '$'
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
                  : c <= 67883)))))))))))))));
}

static inline bool sym_escaped_whitespace_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == 11) ADVANCE(50);
      if (lookahead == '\f') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(50);
      if (lookahead == 8232) ADVANCE(50);
      if (lookahead == 8233) ADVANCE(50);
      if (lookahead == 65279) ADVANCE(50);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(43);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(50);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(42);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(42);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      if (sym__identifier_char_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(52);
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
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 11) ADVANCE(84);
      if (lookahead == '\f') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(83);
      if (lookahead == 8232) ADVANCE(86);
      if (lookahead == 8233) ADVANCE(87);
      if (lookahead == 65279) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(89);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(42);
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
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(39);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(33);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(35);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'f') ADVANCE(74);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'f') ADVANCE(75);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'i') ADVANCE(38);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(34);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(31);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 's') ADVANCE(29);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(28);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUNDnull);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(52);
      if (lookahead == 'u') ADVANCE(11);
      if (sym_escaped_whitespace_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escaped_whitespace);
      if (lookahead == '\r') ADVANCE(54);
      if (sym_escaped_whitespace_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escaped_whitespace);
      if (sym_escaped_whitespace_character_set_1(lookahead)) ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_E);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym__);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_POUNDinf);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND_DASHinf);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUNDnan);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POUNDtrue);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_POUNDfalse);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(42);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__newline_token2);
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__newline_token3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__newline_token4);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__newline_token5);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__newline_token6);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__newline_token7);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__newline_token8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__unicode_space);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
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
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(55);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == '6') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(81);
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_irl);
      END_STATE();
    case 60:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'z') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == '6') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 92:
      if (lookahead == '4') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '6') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '3') ADVANCE(145);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_currency);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == '4') ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_hostname);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 148:
      if (lookahead == '8') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_decimal64);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_decimal128);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 171:
      if (lookahead == 'v') ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 19, .external_lex_state = 2},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 19, .external_lex_state = 2},
  [15] = {.lex_state = 19, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 19, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 1, .external_lex_state = 3},
  [44] = {.lex_state = 1, .external_lex_state = 3},
  [45] = {.lex_state = 1, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 1, .external_lex_state = 3},
  [48] = {.lex_state = 1, .external_lex_state = 3},
  [49] = {.lex_state = 1, .external_lex_state = 3},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 19, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 19, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 2},
  [61] = {.lex_state = 19, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 19, .external_lex_state = 2},
  [64] = {.lex_state = 19, .external_lex_state = 2},
  [65] = {.lex_state = 19, .external_lex_state = 2},
  [66] = {.lex_state = 19, .external_lex_state = 2},
  [67] = {.lex_state = 19, .external_lex_state = 2},
  [68] = {.lex_state = 19, .external_lex_state = 2},
  [69] = {.lex_state = 19, .external_lex_state = 2},
  [70] = {.lex_state = 19, .external_lex_state = 2},
  [71] = {.lex_state = 19, .external_lex_state = 2},
  [72] = {.lex_state = 19, .external_lex_state = 2},
  [73] = {.lex_state = 19, .external_lex_state = 2},
  [74] = {.lex_state = 19, .external_lex_state = 2},
  [75] = {.lex_state = 19, .external_lex_state = 2},
  [76] = {.lex_state = 19, .external_lex_state = 2},
  [77] = {.lex_state = 19, .external_lex_state = 2},
  [78] = {.lex_state = 19, .external_lex_state = 2},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 19, .external_lex_state = 2},
  [81] = {.lex_state = 19, .external_lex_state = 2},
  [82] = {.lex_state = 19, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 19, .external_lex_state = 2},
  [91] = {.lex_state = 19, .external_lex_state = 4},
  [92] = {.lex_state = 19, .external_lex_state = 2},
  [93] = {.lex_state = 19, .external_lex_state = 4},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 19, .external_lex_state = 4},
  [96] = {.lex_state = 19, .external_lex_state = 2},
  [97] = {.lex_state = 19, .external_lex_state = 4},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 19, .external_lex_state = 4},
  [101] = {.lex_state = 19, .external_lex_state = 2},
  [102] = {.lex_state = 19, .external_lex_state = 4},
  [103] = {.lex_state = 19, .external_lex_state = 4},
  [104] = {.lex_state = 19, .external_lex_state = 2},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 19, .external_lex_state = 4},
  [107] = {.lex_state = 19, .external_lex_state = 4},
  [108] = {.lex_state = 19, .external_lex_state = 4},
  [109] = {.lex_state = 19, .external_lex_state = 4},
  [110] = {.lex_state = 19, .external_lex_state = 4},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 19, .external_lex_state = 4},
  [113] = {.lex_state = 19, .external_lex_state = 4},
  [114] = {.lex_state = 1, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 19, .external_lex_state = 2},
  [117] = {.lex_state = 19, .external_lex_state = 2},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 2, .external_lex_state = 4},
  [120] = {.lex_state = 19, .external_lex_state = 4},
  [121] = {.lex_state = 19, .external_lex_state = 2},
  [122] = {.lex_state = 19, .external_lex_state = 2},
  [123] = {.lex_state = 19, .external_lex_state = 4},
  [124] = {.lex_state = 19, .external_lex_state = 2},
  [125] = {.lex_state = 19, .external_lex_state = 4},
  [126] = {.lex_state = 19, .external_lex_state = 2},
  [127] = {.lex_state = 19, .external_lex_state = 2},
  [128] = {.lex_state = 19, .external_lex_state = 4},
  [129] = {.lex_state = 19, .external_lex_state = 2},
  [130] = {.lex_state = 19, .external_lex_state = 4},
  [131] = {.lex_state = 19, .external_lex_state = 4},
  [132] = {.lex_state = 19, .external_lex_state = 2},
  [133] = {.lex_state = 19, .external_lex_state = 2},
  [134] = {.lex_state = 19, .external_lex_state = 2},
  [135] = {.lex_state = 19, .external_lex_state = 4},
  [136] = {.lex_state = 19, .external_lex_state = 4},
  [137] = {.lex_state = 19, .external_lex_state = 4},
  [138] = {.lex_state = 19, .external_lex_state = 2},
  [139] = {.lex_state = 4, .external_lex_state = 4},
  [140] = {.lex_state = 19, .external_lex_state = 2},
  [141] = {.lex_state = 19, .external_lex_state = 4},
  [142] = {.lex_state = 19, .external_lex_state = 2},
  [143] = {.lex_state = 19, .external_lex_state = 2},
  [144] = {.lex_state = 19, .external_lex_state = 4},
  [145] = {.lex_state = 19, .external_lex_state = 2},
  [146] = {.lex_state = 19, .external_lex_state = 2},
  [147] = {.lex_state = 19, .external_lex_state = 4},
  [148] = {.lex_state = 19, .external_lex_state = 2},
  [149] = {.lex_state = 19, .external_lex_state = 2},
  [150] = {.lex_state = 19, .external_lex_state = 4},
  [151] = {.lex_state = 19, .external_lex_state = 4},
  [152] = {.lex_state = 19, .external_lex_state = 4},
  [153] = {.lex_state = 19, .external_lex_state = 2},
  [154] = {.lex_state = 19, .external_lex_state = 4},
  [155] = {.lex_state = 19, .external_lex_state = 2},
  [156] = {.lex_state = 19, .external_lex_state = 2},
  [157] = {.lex_state = 19, .external_lex_state = 4},
  [158] = {.lex_state = 19, .external_lex_state = 2},
  [159] = {.lex_state = 19, .external_lex_state = 4},
  [160] = {.lex_state = 19, .external_lex_state = 2},
  [161] = {.lex_state = 19, .external_lex_state = 4},
  [162] = {.lex_state = 19, .external_lex_state = 4},
  [163] = {.lex_state = 19, .external_lex_state = 4},
  [164] = {.lex_state = 19, .external_lex_state = 2},
  [165] = {.lex_state = 19, .external_lex_state = 4},
  [166] = {.lex_state = 19, .external_lex_state = 2},
  [167] = {.lex_state = 19, .external_lex_state = 2},
  [168] = {.lex_state = 19, .external_lex_state = 4},
  [169] = {.lex_state = 19, .external_lex_state = 4},
  [170] = {.lex_state = 19, .external_lex_state = 4},
  [171] = {.lex_state = 19, .external_lex_state = 2},
  [172] = {.lex_state = 19, .external_lex_state = 4},
  [173] = {.lex_state = 19, .external_lex_state = 2},
  [174] = {.lex_state = 19, .external_lex_state = 2},
  [175] = {.lex_state = 19, .external_lex_state = 2},
  [176] = {.lex_state = 19, .external_lex_state = 4},
  [177] = {.lex_state = 19, .external_lex_state = 4},
  [178] = {.lex_state = 19, .external_lex_state = 4},
  [179] = {.lex_state = 19, .external_lex_state = 2},
  [180] = {.lex_state = 19, .external_lex_state = 4},
  [181] = {.lex_state = 19, .external_lex_state = 4},
  [182] = {.lex_state = 19, .external_lex_state = 2},
  [183] = {.lex_state = 19, .external_lex_state = 2},
  [184] = {.lex_state = 19, .external_lex_state = 4},
  [185] = {.lex_state = 19, .external_lex_state = 4},
  [186] = {.lex_state = 19, .external_lex_state = 2},
  [187] = {.lex_state = 19, .external_lex_state = 4},
  [188] = {.lex_state = 4, .external_lex_state = 4},
  [189] = {.lex_state = 19, .external_lex_state = 2},
  [190] = {.lex_state = 19, .external_lex_state = 4},
  [191] = {.lex_state = 19, .external_lex_state = 2},
  [192] = {.lex_state = 19, .external_lex_state = 2},
  [193] = {.lex_state = 19, .external_lex_state = 2},
  [194] = {.lex_state = 4, .external_lex_state = 4},
  [195] = {.lex_state = 19, .external_lex_state = 2},
  [196] = {.lex_state = 19, .external_lex_state = 2},
  [197] = {.lex_state = 19, .external_lex_state = 4},
  [198] = {.lex_state = 19, .external_lex_state = 4},
  [199] = {.lex_state = 19, .external_lex_state = 4},
  [200] = {.lex_state = 19, .external_lex_state = 2},
  [201] = {.lex_state = 19, .external_lex_state = 4},
  [202] = {.lex_state = 19, .external_lex_state = 2},
  [203] = {.lex_state = 19, .external_lex_state = 4},
  [204] = {.lex_state = 19, .external_lex_state = 2},
  [205] = {.lex_state = 19, .external_lex_state = 4},
  [206] = {.lex_state = 19, .external_lex_state = 4},
  [207] = {.lex_state = 19, .external_lex_state = 2},
  [208] = {.lex_state = 19, .external_lex_state = 2},
  [209] = {.lex_state = 19, .external_lex_state = 4},
  [210] = {.lex_state = 19, .external_lex_state = 2},
  [211] = {.lex_state = 19, .external_lex_state = 4},
  [212] = {.lex_state = 19, .external_lex_state = 4},
  [213] = {.lex_state = 19, .external_lex_state = 2},
  [214] = {.lex_state = 19, .external_lex_state = 2},
  [215] = {.lex_state = 19, .external_lex_state = 2},
  [216] = {.lex_state = 19, .external_lex_state = 2},
  [217] = {.lex_state = 19, .external_lex_state = 2},
  [218] = {.lex_state = 19, .external_lex_state = 2},
  [219] = {.lex_state = 5, .external_lex_state = 4},
  [220] = {.lex_state = 4, .external_lex_state = 4},
  [221] = {.lex_state = 5, .external_lex_state = 4},
  [222] = {.lex_state = 4, .external_lex_state = 4},
  [223] = {.lex_state = 5, .external_lex_state = 4},
  [224] = {.lex_state = 5, .external_lex_state = 4},
  [225] = {.lex_state = 5, .external_lex_state = 4},
  [226] = {.lex_state = 3, .external_lex_state = 4},
  [227] = {.lex_state = 4, .external_lex_state = 4},
  [228] = {.lex_state = 19, .external_lex_state = 4},
  [229] = {.lex_state = 7, .external_lex_state = 4},
  [230] = {.lex_state = 6, .external_lex_state = 4},
  [231] = {.lex_state = 3, .external_lex_state = 4},
  [232] = {.lex_state = 7, .external_lex_state = 4},
  [233] = {.lex_state = 6, .external_lex_state = 4},
  [234] = {.lex_state = 4, .external_lex_state = 4},
  [235] = {.lex_state = 6, .external_lex_state = 4},
  [236] = {.lex_state = 7, .external_lex_state = 4},
  [237] = {.lex_state = 6, .external_lex_state = 4},
  [238] = {.lex_state = 3, .external_lex_state = 4},
  [239] = {.lex_state = 7, .external_lex_state = 4},
  [240] = {.lex_state = 6, .external_lex_state = 4},
  [241] = {.lex_state = 7, .external_lex_state = 4},
  [242] = {.lex_state = 2, .external_lex_state = 4},
  [243] = {.lex_state = 19, .external_lex_state = 4},
  [244] = {.lex_state = 19, .external_lex_state = 4},
  [245] = {.lex_state = 19, .external_lex_state = 4},
  [246] = {.lex_state = 19, .external_lex_state = 4},
  [247] = {.lex_state = 19, .external_lex_state = 4},
  [248] = {.lex_state = 19, .external_lex_state = 4},
  [249] = {.lex_state = 19, .external_lex_state = 4},
  [250] = {.lex_state = 19, .external_lex_state = 4},
  [251] = {.lex_state = 19, .external_lex_state = 4},
  [252] = {.lex_state = 19, .external_lex_state = 4},
  [253] = {.lex_state = 19, .external_lex_state = 5},
  [254] = {.lex_state = 19, .external_lex_state = 4},
  [255] = {.lex_state = 19, .external_lex_state = 4},
  [256] = {.lex_state = 19, .external_lex_state = 4},
  [257] = {.lex_state = 19, .external_lex_state = 4},
  [258] = {.lex_state = 19, .external_lex_state = 4},
  [259] = {.lex_state = 19, .external_lex_state = 4},
  [260] = {.lex_state = 19, .external_lex_state = 4},
  [261] = {.lex_state = 19, .external_lex_state = 4},
  [262] = {.lex_state = 19, .external_lex_state = 4},
  [263] = {.lex_state = 19, .external_lex_state = 4},
  [264] = {.lex_state = 19, .external_lex_state = 4},
  [265] = {.lex_state = 19, .external_lex_state = 4},
  [266] = {.lex_state = 19, .external_lex_state = 4},
  [267] = {.lex_state = 19, .external_lex_state = 4},
  [268] = {.lex_state = 19, .external_lex_state = 4},
  [269] = {.lex_state = 19, .external_lex_state = 4},
  [270] = {.lex_state = 19, .external_lex_state = 4},
  [271] = {.lex_state = 19, .external_lex_state = 4},
  [272] = {.lex_state = 19, .external_lex_state = 4},
  [273] = {.lex_state = 19, .external_lex_state = 4},
  [274] = {.lex_state = 19, .external_lex_state = 4},
  [275] = {.lex_state = 19, .external_lex_state = 4},
  [276] = {.lex_state = 19, .external_lex_state = 4},
  [277] = {.lex_state = 19, .external_lex_state = 4},
  [278] = {.lex_state = 19, .external_lex_state = 4},
  [279] = {.lex_state = 19, .external_lex_state = 4},
  [280] = {.lex_state = 19, .external_lex_state = 4},
  [281] = {.lex_state = 19, .external_lex_state = 4},
  [282] = {.lex_state = 19, .external_lex_state = 4},
  [283] = {.lex_state = 19, .external_lex_state = 4},
  [284] = {.lex_state = 19, .external_lex_state = 4},
  [285] = {.lex_state = 19, .external_lex_state = 4},
  [286] = {.lex_state = 19, .external_lex_state = 5},
  [287] = {.lex_state = 19, .external_lex_state = 5},
  [288] = {.lex_state = 19, .external_lex_state = 5},
  [289] = {.lex_state = 19, .external_lex_state = 5},
  [290] = {.lex_state = 19, .external_lex_state = 5},
  [291] = {.lex_state = 19, .external_lex_state = 5},
  [292] = {.lex_state = 19, .external_lex_state = 5},
  [293] = {.lex_state = 19, .external_lex_state = 5},
  [294] = {.lex_state = 19, .external_lex_state = 5},
  [295] = {.lex_state = 19, .external_lex_state = 5},
  [296] = {.lex_state = 19, .external_lex_state = 4},
  [297] = {.lex_state = 19, .external_lex_state = 4},
  [298] = {.lex_state = 19, .external_lex_state = 4},
  [299] = {.lex_state = 19, .external_lex_state = 4},
  [300] = {.lex_state = 19, .external_lex_state = 4},
  [301] = {.lex_state = 19, .external_lex_state = 4},
  [302] = {.lex_state = 19, .external_lex_state = 4},
  [303] = {.lex_state = 19, .external_lex_state = 4},
  [304] = {.lex_state = 19, .external_lex_state = 4},
  [305] = {.lex_state = 19, .external_lex_state = 4},
  [306] = {.lex_state = 19, .external_lex_state = 4},
  [307] = {.lex_state = 19, .external_lex_state = 4},
  [308] = {.lex_state = 19, .external_lex_state = 4},
  [309] = {.lex_state = 19, .external_lex_state = 4},
  [310] = {.lex_state = 19, .external_lex_state = 4},
  [311] = {.lex_state = 19, .external_lex_state = 4},
  [312] = {.lex_state = 8, .external_lex_state = 4},
  [313] = {.lex_state = 8, .external_lex_state = 4},
  [314] = {.lex_state = 8, .external_lex_state = 4},
  [315] = {.lex_state = 8, .external_lex_state = 4},
  [316] = {.lex_state = 8, .external_lex_state = 4},
  [317] = {.lex_state = 8, .external_lex_state = 4},
  [318] = {.lex_state = 8, .external_lex_state = 4},
  [319] = {.lex_state = 8, .external_lex_state = 4},
  [320] = {.lex_state = 8, .external_lex_state = 4},
  [321] = {.lex_state = 8, .external_lex_state = 4},
  [322] = {.lex_state = 8, .external_lex_state = 4},
  [323] = {.lex_state = 19, .external_lex_state = 5},
  [324] = {.lex_state = 19, .external_lex_state = 2},
  [325] = {.lex_state = 19, .external_lex_state = 2},
  [326] = {.lex_state = 19, .external_lex_state = 2},
  [327] = {.lex_state = 19, .external_lex_state = 5},
  [328] = {.lex_state = 19, .external_lex_state = 5},
  [329] = {.lex_state = 19, .external_lex_state = 5},
  [330] = {.lex_state = 19, .external_lex_state = 5},
  [331] = {.lex_state = 19, .external_lex_state = 5},
  [332] = {.lex_state = 19, .external_lex_state = 5},
  [333] = {.lex_state = 19, .external_lex_state = 5},
  [334] = {.lex_state = 19, .external_lex_state = 5},
  [335] = {.lex_state = 19, .external_lex_state = 5},
  [336] = {.lex_state = 19, .external_lex_state = 5},
  [337] = {.lex_state = 19, .external_lex_state = 5},
  [338] = {.lex_state = 19, .external_lex_state = 5},
  [339] = {.lex_state = 19, .external_lex_state = 5},
  [340] = {.lex_state = 19, .external_lex_state = 5},
  [341] = {.lex_state = 19, .external_lex_state = 5},
  [342] = {.lex_state = 19, .external_lex_state = 5},
  [343] = {.lex_state = 19, .external_lex_state = 5},
  [344] = {.lex_state = 19, .external_lex_state = 5},
  [345] = {.lex_state = 19, .external_lex_state = 5},
  [346] = {.lex_state = 3, .external_lex_state = 5},
  [347] = {.lex_state = 19, .external_lex_state = 5},
  [348] = {.lex_state = 19, .external_lex_state = 5},
  [349] = {.lex_state = 3, .external_lex_state = 5},
  [350] = {.lex_state = 3, .external_lex_state = 5},
  [351] = {.lex_state = 19, .external_lex_state = 5},
  [352] = {.lex_state = 0, .external_lex_state = 6},
  [353] = {.lex_state = 19, .external_lex_state = 5},
  [354] = {.lex_state = 9, .external_lex_state = 5},
  [355] = {.lex_state = 9, .external_lex_state = 5},
  [356] = {.lex_state = 9, .external_lex_state = 5},
  [357] = {.lex_state = 0, .external_lex_state = 6},
  [358] = {.lex_state = 9, .external_lex_state = 5},
  [359] = {.lex_state = 0, .external_lex_state = 6},
  [360] = {.lex_state = 9, .external_lex_state = 5},
  [361] = {.lex_state = 2, .external_lex_state = 5},
  [362] = {.lex_state = 0, .external_lex_state = 6},
  [363] = {.lex_state = 0, .external_lex_state = 6},
  [364] = {.lex_state = 19, .external_lex_state = 5},
  [365] = {.lex_state = 19, .external_lex_state = 5},
  [366] = {.lex_state = 19, .external_lex_state = 5},
  [367] = {.lex_state = 19, .external_lex_state = 5},
  [368] = {.lex_state = 19, .external_lex_state = 5},
  [369] = {.lex_state = 19, .external_lex_state = 5},
  [370] = {.lex_state = 19, .external_lex_state = 5},
  [371] = {.lex_state = 19, .external_lex_state = 5},
  [372] = {.lex_state = 9, .external_lex_state = 5},
  [373] = {.lex_state = 0, .external_lex_state = 7},
  [374] = {.lex_state = 0, .external_lex_state = 7},
  [375] = {.lex_state = 0, .external_lex_state = 7},
  [376] = {.lex_state = 0, .external_lex_state = 7},
  [377] = {.lex_state = 0, .external_lex_state = 7},
  [378] = {.lex_state = 5, .external_lex_state = 5},
  [379] = {.lex_state = 19, .external_lex_state = 5},
  [380] = {.lex_state = 19, .external_lex_state = 5},
  [381] = {.lex_state = 5, .external_lex_state = 5},
  [382] = {.lex_state = 19, .external_lex_state = 5},
  [383] = {.lex_state = 7, .external_lex_state = 5},
  [384] = {.lex_state = 0, .external_lex_state = 5},
  [385] = {.lex_state = 6, .external_lex_state = 5},
  [386] = {.lex_state = 6, .external_lex_state = 5},
  [387] = {.lex_state = 7, .external_lex_state = 5},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token_multi_line_comment = 1,
  ts_external_token__multiline_escaped_start = 2,
  ts_external_token__multiline_raw_start = 3,
  ts_external_token__multiline_escape = 4,
  ts_external_token__multiline_escaped_whitespace = 5,
  ts_external_token__multiline_fragment = 6,
  ts_external_token__multiline_end = 7,
  ts_external_token__raw_string = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_multi_line_comment] = sym_multi_line_comment,
  [ts_external_token__multiline_escaped_start] = sym__multiline_escaped_start,
  [ts_external_token__multiline_raw_start] = sym__multiline_raw_start,
  [ts_external_token__multiline_escape] = sym__multiline_escape,
  [ts_external_token__multiline_escaped_whitespace] = sym__multiline_escaped_whitespace,
  [ts_external_token__multiline_fragment] = sym__multiline_fragment,
  [ts_external_token__multiline_end] = sym__multiline_end,
  [ts_external_token__raw_string] = sym__raw_string,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token__multiline_escaped_start] = true,
    [ts_external_token__multiline_raw_start] = true,
    [ts_external_token__multiline_escape] = true,
    [ts_external_token__multiline_escaped_whitespace] = true,
    [ts_external_token__multiline_fragment] = true,
    [ts_external_token__multiline_end] = true,
    [ts_external_token__raw_string] = true,
  },
  [2] = {
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token__multiline_escaped_start] = true,
    [ts_external_token__multiline_raw_start] = true,
    [ts_external_token__raw_string] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token__multiline_escaped_start] = true,
    [ts_external_token__multiline_raw_start] = true,
    [ts_external_token__raw_string] = true,
  },
  [4] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
  },
  [5] = {
    [ts_external_token_multi_line_comment] = true,
  },
  [6] = {
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token__multiline_escape] = true,
    [ts_external_token__multiline_escaped_whitespace] = true,
    [ts_external_token__multiline_fragment] = true,
    [ts_external_token__multiline_end] = true,
  },
  [7] = {
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token__multiline_fragment] = true,
    [ts_external_token__multiline_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__normal_bare_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__identifier_char] = ACTIONS(1),
    [sym___identifier_char_no_digit] = ACTIONS(1),
    [sym___identifier_char_no_digit_sign] = ACTIONS(1),
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
    [aux_sym__escaped_string_token1] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__newline_token2] = ACTIONS(1),
    [aux_sym__newline_token3] = ACTIONS(1),
    [aux_sym__newline_token4] = ACTIONS(1),
    [aux_sym__newline_token5] = ACTIONS(1),
    [aux_sym__newline_token6] = ACTIONS(1),
    [aux_sym__newline_token7] = ACTIONS(1),
    [aux_sym__newline_token8] = ACTIONS(1),
    [sym__bom] = ACTIONS(1),
    [sym__unicode_space] = ACTIONS(1),
    [aux_sym_single_line_comment_token1] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym__multiline_escaped_start] = ACTIONS(1),
    [sym__multiline_raw_start] = ACTIONS(1),
    [sym__multiline_escape] = ACTIONS(1),
    [sym__multiline_escaped_whitespace] = ACTIONS(1),
    [sym__multiline_fragment] = ACTIONS(1),
    [sym__multiline_end] = ACTIONS(1),
    [sym__raw_string] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(384),
    [sym_node] = STATE(60),
    [sym_identifier] = STATE(91),
    [sym__bare_identifier] = STATE(276),
    [sym_type] = STATE(216),
    [sym_string] = STATE(276),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym__sign] = STATE(242),
    [sym__linespace] = STATE(81),
    [sym__newline] = STATE(81),
    [sym__ws] = STATE(81),
    [sym_single_line_comment] = STATE(81),
    [aux_sym_document_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__normal_bare_identifier] = ACTIONS(7),
    [anon_sym_SLASH_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [aux_sym__newline_token1] = ACTIONS(17),
    [aux_sym__newline_token2] = ACTIONS(19),
    [aux_sym__newline_token3] = ACTIONS(17),
    [aux_sym__newline_token4] = ACTIONS(17),
    [aux_sym__newline_token5] = ACTIONS(17),
    [aux_sym__newline_token6] = ACTIONS(17),
    [aux_sym__newline_token7] = ACTIONS(17),
    [aux_sym__newline_token8] = ACTIONS(17),
    [sym__bom] = ACTIONS(17),
    [sym__unicode_space] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym_multi_line_comment] = ACTIONS(17),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [2] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(184),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(183),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(183),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(183),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(35),
    [aux_sym__newline_token2] = ACTIONS(57),
    [aux_sym__newline_token3] = ACTIONS(35),
    [aux_sym__newline_token4] = ACTIONS(35),
    [aux_sym__newline_token5] = ACTIONS(35),
    [aux_sym__newline_token6] = ACTIONS(35),
    [aux_sym__newline_token7] = ACTIONS(35),
    [aux_sym__newline_token8] = ACTIONS(35),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(35),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [3] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(136),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(148),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(148),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(148),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(61),
    [aux_sym__newline_token2] = ACTIONS(63),
    [aux_sym__newline_token3] = ACTIONS(61),
    [aux_sym__newline_token4] = ACTIONS(61),
    [aux_sym__newline_token5] = ACTIONS(61),
    [aux_sym__newline_token6] = ACTIONS(61),
    [aux_sym__newline_token7] = ACTIONS(61),
    [aux_sym__newline_token8] = ACTIONS(61),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(61),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [4] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(181),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(122),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(122),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(122),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(65),
    [aux_sym__newline_token2] = ACTIONS(67),
    [aux_sym__newline_token3] = ACTIONS(65),
    [aux_sym__newline_token4] = ACTIONS(65),
    [aux_sym__newline_token5] = ACTIONS(65),
    [aux_sym__newline_token6] = ACTIONS(65),
    [aux_sym__newline_token7] = ACTIONS(65),
    [aux_sym__newline_token8] = ACTIONS(65),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(65),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [5] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(170),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(171),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(171),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(171),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(69),
    [aux_sym__newline_token2] = ACTIONS(71),
    [aux_sym__newline_token3] = ACTIONS(69),
    [aux_sym__newline_token4] = ACTIONS(69),
    [aux_sym__newline_token5] = ACTIONS(69),
    [aux_sym__newline_token6] = ACTIONS(69),
    [aux_sym__newline_token7] = ACTIONS(69),
    [aux_sym__newline_token8] = ACTIONS(69),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(69),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [6] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(163),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(164),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(164),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(164),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(73),
    [aux_sym__newline_token2] = ACTIONS(75),
    [aux_sym__newline_token3] = ACTIONS(73),
    [aux_sym__newline_token4] = ACTIONS(73),
    [aux_sym__newline_token5] = ACTIONS(73),
    [aux_sym__newline_token6] = ACTIONS(73),
    [aux_sym__newline_token7] = ACTIONS(73),
    [aux_sym__newline_token8] = ACTIONS(73),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(73),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [7] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(150),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(149),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(149),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(149),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(77),
    [aux_sym__newline_token2] = ACTIONS(79),
    [aux_sym__newline_token3] = ACTIONS(77),
    [aux_sym__newline_token4] = ACTIONS(77),
    [aux_sym__newline_token5] = ACTIONS(77),
    [aux_sym__newline_token6] = ACTIONS(77),
    [aux_sym__newline_token7] = ACTIONS(77),
    [aux_sym__newline_token8] = ACTIONS(77),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(77),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [8] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(176),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(175),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(175),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(175),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(81),
    [aux_sym__newline_token2] = ACTIONS(83),
    [aux_sym__newline_token3] = ACTIONS(81),
    [aux_sym__newline_token4] = ACTIONS(81),
    [aux_sym__newline_token5] = ACTIONS(81),
    [aux_sym__newline_token6] = ACTIONS(81),
    [aux_sym__newline_token7] = ACTIONS(81),
    [aux_sym__newline_token8] = ACTIONS(81),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(81),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [9] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(205),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(204),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(204),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(204),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(85),
    [aux_sym__newline_token2] = ACTIONS(87),
    [aux_sym__newline_token3] = ACTIONS(85),
    [aux_sym__newline_token4] = ACTIONS(85),
    [aux_sym__newline_token5] = ACTIONS(85),
    [aux_sym__newline_token6] = ACTIONS(85),
    [aux_sym__newline_token7] = ACTIONS(85),
    [aux_sym__newline_token8] = ACTIONS(85),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(85),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
  [10] = {
    [sym_node_field] = STATE(262),
    [sym__node_field_comment] = STATE(263),
    [sym__node_field] = STATE(263),
    [sym_node_children] = STATE(197),
    [sym__node_space] = STATE(48),
    [sym__node_terminator] = STATE(196),
    [sym_identifier] = STATE(327),
    [sym__bare_identifier] = STATE(251),
    [sym_keyword] = STATE(271),
    [sym_prop] = STATE(272),
    [sym_value] = STATE(272),
    [sym_type] = STATE(37),
    [sym_string] = STATE(250),
    [sym_multi_line_string] = STATE(249),
    [sym__escaped_string] = STATE(249),
    [sym_number] = STATE(271),
    [sym__decimal] = STATE(274),
    [sym__integer] = STATE(222),
    [sym__sign] = STATE(119),
    [sym__hex] = STATE(274),
    [sym__octal] = STATE(274),
    [sym__binary] = STATE(274),
    [sym_keyword_number] = STATE(274),
    [sym_boolean] = STATE(270),
    [sym__escline] = STATE(44),
    [sym__newline] = STATE(196),
    [sym__ws] = STATE(39),
    [sym_single_line_comment] = STATE(196),
    [aux_sym_node_repeat1] = STATE(36),
    [aux_sym_node_repeat3] = STATE(39),
    [sym__normal_bare_identifier] = ACTIONS(29),
    [anon_sym_SLASH_DASH] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_null] = ACTIONS(37),
    [anon_sym_POUNDnull] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(45),
    [anon_sym_0o] = ACTIONS(47),
    [anon_sym_0b] = ACTIONS(49),
    [anon_sym_POUNDinf] = ACTIONS(51),
    [anon_sym_POUND_DASHinf] = ACTIONS(51),
    [anon_sym_POUNDnan] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_POUNDtrue] = ACTIONS(53),
    [anon_sym_POUNDfalse] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(55),
    [aux_sym__newline_token1] = ACTIONS(89),
    [aux_sym__newline_token2] = ACTIONS(91),
    [aux_sym__newline_token3] = ACTIONS(89),
    [aux_sym__newline_token4] = ACTIONS(89),
    [aux_sym__newline_token5] = ACTIONS(89),
    [aux_sym__newline_token6] = ACTIONS(89),
    [aux_sym__newline_token7] = ACTIONS(89),
    [aux_sym__newline_token8] = ACTIONS(89),
    [sym__bom] = ACTIONS(59),
    [sym__unicode_space] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(89),
    [sym_multi_line_comment] = ACTIONS(59),
    [sym__multiline_escaped_start] = ACTIONS(23),
    [sym__multiline_raw_start] = ACTIONS(25),
    [sym__raw_string] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(93), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 39,
      sym__normal_bare_identifier,
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
      aux_sym__newline_token2,
  [66] = 2,
    ACTIONS(97), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 39,
      sym__normal_bare_identifier,
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
      aux_sym__newline_token2,
  [132] = 17,
    ACTIONS(101), 1,
      sym__normal_bare_identifier,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__multiline_escaped_start,
    ACTIONS(115), 1,
      sym__multiline_raw_start,
    ACTIONS(117), 1,
      sym__raw_string,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(361), 1,
      sym__sign,
    ACTIONS(107), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(333), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(367), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(369), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(103), 37,
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
  [227] = 17,
    ACTIONS(101), 1,
      sym__normal_bare_identifier,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__multiline_escaped_start,
    ACTIONS(115), 1,
      sym__multiline_raw_start,
    ACTIONS(117), 1,
      sym__raw_string,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(361), 1,
      sym__sign,
    ACTIONS(107), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(329), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(367), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(369), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(103), 37,
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
  [322] = 17,
    ACTIONS(101), 1,
      sym__normal_bare_identifier,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__multiline_escaped_start,
    ACTIONS(115), 1,
      sym__multiline_raw_start,
    ACTIONS(117), 1,
      sym__raw_string,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(361), 1,
      sym__sign,
    ACTIONS(107), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(338), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(367), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(369), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(103), 37,
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
  [417] = 17,
    ACTIONS(101), 1,
      sym__normal_bare_identifier,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      sym__multiline_escaped_start,
    ACTIONS(115), 1,
      sym__multiline_raw_start,
    ACTIONS(117), 1,
      sym__raw_string,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(361), 1,
      sym__sign,
    ACTIONS(107), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(339), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(367), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(369), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(103), 37,
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
  [512] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(126), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(121), 7,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(119), 38,
      sym__normal_bare_identifier,
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
  [583] = 34,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(129), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(250), 1,
      sym_string,
    STATE(251), 1,
      sym__bare_identifier,
    STATE(262), 1,
      sym_node_field,
    STATE(270), 1,
      sym_boolean,
    STATE(327), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(263), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(271), 2,
      sym_keyword,
      sym_number,
    STATE(272), 2,
      sym_prop,
      sym_value,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [704] = 6,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    STATE(22), 1,
      sym__escline,
    STATE(20), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(142), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(137), 7,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(135), 38,
      sym__normal_bare_identifier,
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
  [769] = 4,
    STATE(20), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(149), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(147), 8,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(145), 38,
      sym__normal_bare_identifier,
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
  [829] = 4,
    STATE(20), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(156), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 8,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(152), 38,
      sym__normal_bare_identifier,
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
  [889] = 4,
    STATE(23), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(159), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 8,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(152), 38,
      sym__normal_bare_identifier,
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
  [949] = 4,
    STATE(20), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(166), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(164), 8,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(162), 38,
      sym__normal_bare_identifier,
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
  [1009] = 4,
    STATE(21), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(169), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(137), 8,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(135), 38,
      sym__normal_bare_identifier,
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
  [1069] = 33,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(250), 1,
      sym_string,
    STATE(251), 1,
      sym__bare_identifier,
    STATE(270), 1,
      sym_boolean,
    STATE(285), 1,
      sym__node_field,
    STATE(327), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(271), 2,
      sym_keyword,
      sym_number,
    STATE(272), 2,
      sym_prop,
      sym_value,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1186] = 33,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      aux_sym_node_repeat1,
    STATE(37), 1,
      sym_type,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(250), 1,
      sym_string,
    STATE(251), 1,
      sym__bare_identifier,
    STATE(269), 1,
      sym__node_field,
    STATE(270), 1,
      sym_boolean,
    STATE(327), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(271), 2,
      sym_keyword,
      sym_number,
    STATE(272), 2,
      sym_prop,
      sym_value,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1303] = 2,
    ACTIONS(178), 11,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(176), 38,
      sym__normal_bare_identifier,
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
  [1357] = 32,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(250), 1,
      sym_string,
    STATE(251), 1,
      sym__bare_identifier,
    STATE(270), 1,
      sym_boolean,
    STATE(285), 1,
      sym__node_field,
    STATE(327), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(271), 2,
      sym_keyword,
      sym_number,
    STATE(272), 2,
      sym_prop,
      sym_value,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1471] = 2,
    ACTIONS(182), 11,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(180), 38,
      sym__normal_bare_identifier,
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
  [1525] = 32,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      aux_sym_node_repeat1,
    STATE(37), 1,
      sym_type,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(250), 1,
      sym_string,
    STATE(251), 1,
      sym__bare_identifier,
    STATE(269), 1,
      sym__node_field,
    STATE(270), 1,
      sym_boolean,
    STATE(327), 1,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(271), 2,
      sym_keyword,
      sym_number,
    STATE(272), 2,
      sym_prop,
      sym_value,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1639] = 2,
    ACTIONS(186), 11,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(184), 38,
      sym__normal_bare_identifier,
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
  [1693] = 29,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      aux_sym_node_repeat1,
    STATE(37), 1,
      sym_type,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(270), 1,
      sym_boolean,
    STATE(273), 1,
      sym__bare_identifier,
    STATE(278), 1,
      sym_value,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(271), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1798] = 29,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(267), 1,
      sym_value,
    STATE(270), 1,
      sym_boolean,
    STATE(273), 1,
      sym__bare_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(271), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1903] = 29,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(33), 1,
      aux_sym_node_repeat1,
    STATE(37), 1,
      sym_type,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(259), 1,
      sym_value,
    STATE(270), 1,
      sym_boolean,
    STATE(273), 1,
      sym__bare_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(271), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [2008] = 29,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(259), 1,
      sym_value,
    STATE(270), 1,
      sym_boolean,
    STATE(273), 1,
      sym__bare_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(271), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [2113] = 8,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(36), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(191), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(119), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(121), 22,
      sym__eof,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2173] = 26,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(38), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(270), 1,
      sym_boolean,
    STATE(284), 1,
      sym__bare_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(283), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [2269] = 26,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(29), 1,
      sym__normal_bare_identifier,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(45), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(49), 1,
      anon_sym_0b,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(119), 1,
      sym__sign,
    STATE(222), 1,
      sym__integer,
    STATE(270), 1,
      sym_boolean,
    STATE(277), 1,
      sym__bare_identifier,
    ACTIONS(37), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    ACTIONS(51), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(280), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(53), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(274), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [2365] = 6,
    ACTIONS(194), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
      sym__escline,
    STATE(41), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(197), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(135), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(137), 22,
      sym__eof,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2419] = 4,
    STATE(41), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(200), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(162), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(164), 23,
      sym__eof,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2468] = 4,
    STATE(41), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(203), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(145), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(147), 23,
      sym__eof,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2517] = 4,
    STATE(40), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(206), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(152), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(154), 23,
      sym__eof,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2566] = 4,
    STATE(41), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(209), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(152), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(154), 23,
      sym__eof,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2615] = 4,
    STATE(43), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(212), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(135), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(137), 23,
      sym__eof,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2664] = 2,
    ACTIONS(176), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(178), 26,
      sym__eof,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2707] = 2,
    ACTIONS(184), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(186), 26,
      sym__eof,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2750] = 2,
    ACTIONS(95), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(93), 26,
      sym__eof,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2793] = 2,
    ACTIONS(180), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(182), 26,
      sym__eof,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2836] = 2,
    ACTIONS(99), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(97), 26,
      sym__eof,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2879] = 19,
    ACTIONS(217), 1,
      sym__normal_bare_identifier,
    ACTIONS(220), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym__newline_token2,
    ACTIONS(238), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(241), 1,
      sym__multiline_escaped_start,
    ACTIONS(244), 1,
      sym__multiline_raw_start,
    ACTIONS(247), 1,
      sym__raw_string,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(229), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(82), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(232), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [2955] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(80), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(252), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3030] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(258), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3105] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(52), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(67), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(264), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3180] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(51), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(270), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3255] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(61), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(258), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3330] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(78), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(276), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3405] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(282), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3480] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(63), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(69), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(288), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3555] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(270), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3630] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(59), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(70), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(294), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3705] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(300), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3780] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(57), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(300), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3855] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(306), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3930] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(56), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(306), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4005] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 1,
      aux_sym__newline_token2,
    STATE(55), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(74), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(310), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4079] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4153] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4227] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      aux_sym__newline_token2,
    STATE(58), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(79), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(320), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4301] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4375] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4449] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4523] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4597] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4671] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      aux_sym__newline_token2,
    STATE(62), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(104), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(326), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4745] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 1,
      aux_sym__newline_token2,
    STATE(53), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(76), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(332), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4819] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      aux_sym__newline_token2,
    STATE(55), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(96), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(336), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4893] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4967] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5041] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(344), 1,
      aux_sym__newline_token2,
    STATE(64), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(92), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(342), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5115] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5189] = 19,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 1,
      aux_sym__newline_token2,
    STATE(54), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(101), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(348), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5263] = 18,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(193), 1,
      sym_node,
    STATE(216), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5334] = 8,
    ACTIONS(352), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(355), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(119), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(121), 12,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5383] = 6,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    STATE(89), 1,
      sym__escline,
    STATE(87), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(361), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(135), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(137), 12,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5426] = 4,
    STATE(87), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(364), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(152), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(154), 13,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5464] = 4,
    STATE(85), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(367), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(135), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(137), 13,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5502] = 4,
    STATE(87), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(370), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(145), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(147), 13,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5540] = 4,
    STATE(87), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(373), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(162), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(164), 13,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5578] = 4,
    STATE(88), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(376), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(152), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(154), 13,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5616] = 5,
    ACTIONS(384), 1,
      aux_sym__newline_token2,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(381), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
    ACTIONS(379), 11,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5655] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(394), 1,
      aux_sym__newline_token2,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(97), 1,
      aux_sym_node_repeat2,
    STATE(125), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(126), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(392), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5711] = 6,
    ACTIONS(384), 1,
      aux_sym__newline_token2,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(379), 9,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(381), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5751] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(197), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(196), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(89), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5807] = 2,
    ACTIONS(184), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(186), 16,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [5839] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(205), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(204), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(85), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5895] = 6,
    ACTIONS(384), 1,
      aux_sym__newline_token2,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(379), 9,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(381), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5935] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(136), 1,
      sym_node_children,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(61), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5991] = 2,
    ACTIONS(95), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(93), 16,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6023] = 2,
    ACTIONS(180), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(182), 16,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6055] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(108), 1,
      aux_sym_node_repeat2,
    STATE(136), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(61), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6111] = 6,
    ACTIONS(384), 1,
      aux_sym__newline_token2,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(379), 9,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(381), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [6151] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(176), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(175), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(81), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6207] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(10), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(93), 1,
      aux_sym_node_repeat2,
    STATE(170), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(171), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(69), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6263] = 6,
    ACTIONS(384), 1,
      aux_sym__newline_token2,
    ACTIONS(387), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(90), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(379), 9,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(381), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [6303] = 2,
    ACTIONS(99), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(97), 16,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6335] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(102), 1,
      aux_sym_node_repeat2,
    STATE(197), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(196), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(89), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6391] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(10), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(170), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(171), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(69), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6447] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(181), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(122), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(65), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6503] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(112), 1,
      aux_sym_node_repeat2,
    STATE(181), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(122), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(65), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6559] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(410), 1,
      aux_sym__newline_token2,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(107), 1,
      aux_sym_node_repeat2,
    STATE(123), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(124), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(408), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6615] = 2,
    ACTIONS(176), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(178), 16,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6647] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(163), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(73), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6703] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      aux_sym__newline_token2,
    ACTIONS(390), 1,
      anon_sym_SLASH_DASH,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(44), 1,
      sym__escline,
    STATE(48), 1,
      sym__node_space,
    STATE(95), 1,
      aux_sym_node_repeat2,
    STATE(163), 1,
      sym_node_children,
    STATE(39), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(59), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(73), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6759] = 2,
    ACTIONS(412), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(414), 13,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6788] = 2,
    ACTIONS(416), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(418), 13,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6817] = 18,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(100), 1,
      sym_identifier,
    STATE(117), 1,
      aux_sym_node_repeat1,
    STATE(217), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [6878] = 18,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(110), 1,
      sym_identifier,
    STATE(215), 1,
      sym_type,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [6939] = 2,
    ACTIONS(420), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(422), 13,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6968] = 8,
    ACTIONS(41), 1,
      sym__digit,
    ACTIONS(426), 1,
      sym___identifier_char_no_digit,
    ACTIONS(428), 1,
      anon_sym_0x,
    ACTIONS(430), 1,
      anon_sym_0o,
    ACTIONS(432), 1,
      anon_sym_0b,
    ACTIONS(434), 1,
      aux_sym__newline_token2,
    STATE(220), 1,
      sym__integer,
    ACTIONS(424), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7009] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym__newline_token2,
    STATE(128), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(129), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(436), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7053] = 2,
    ACTIONS(446), 1,
      aux_sym__newline_token2,
    ACTIONS(444), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7081] = 2,
    ACTIONS(450), 1,
      aux_sym__newline_token2,
    ACTIONS(448), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7109] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(454), 1,
      aux_sym__newline_token2,
    STATE(168), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(169), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(456), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(167), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(452), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7153] = 2,
    ACTIONS(460), 1,
      aux_sym__newline_token2,
    ACTIONS(458), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7181] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(464), 1,
      aux_sym__newline_token2,
    STATE(203), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(206), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(466), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(195), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(462), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7225] = 2,
    ACTIONS(470), 1,
      aux_sym__newline_token2,
    ACTIONS(468), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7253] = 2,
    ACTIONS(474), 1,
      aux_sym__newline_token2,
    ACTIONS(472), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7281] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(478), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(127), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(476), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7325] = 2,
    ACTIONS(484), 1,
      aux_sym__newline_token2,
    ACTIONS(482), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7353] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(488), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(486), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7397] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(488), 1,
      aux_sym__newline_token2,
    STATE(159), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(486), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7441] = 2,
    ACTIONS(492), 1,
      aux_sym__newline_token2,
    ACTIONS(490), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7469] = 2,
    ACTIONS(496), 1,
      aux_sym__newline_token2,
    ACTIONS(494), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7497] = 2,
    ACTIONS(500), 1,
      aux_sym__newline_token2,
    ACTIONS(498), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7525] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(186), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(502), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7569] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      aux_sym__newline_token2,
    STATE(130), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(131), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(510), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(138), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(506), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7613] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(129), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(436), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7657] = 2,
    ACTIONS(514), 1,
      aux_sym__newline_token2,
    ACTIONS(512), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7685] = 4,
    ACTIONS(520), 1,
      aux_sym__newline_token2,
    STATE(188), 1,
      aux_sym__integer_repeat1,
    ACTIONS(518), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(516), 19,
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
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7717] = 2,
    ACTIONS(524), 1,
      aux_sym__newline_token2,
    ACTIONS(522), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7745] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(528), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(132), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(526), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7789] = 2,
    ACTIONS(532), 1,
      aux_sym__newline_token2,
    ACTIONS(530), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7817] = 2,
    ACTIONS(536), 1,
      aux_sym__newline_token2,
    ACTIONS(534), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7845] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(540), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(538), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7889] = 2,
    ACTIONS(544), 1,
      aux_sym__newline_token2,
    ACTIONS(542), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7917] = 2,
    ACTIONS(548), 1,
      aux_sym__newline_token2,
    ACTIONS(546), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7945] = 9,
    ACTIONS(552), 1,
      anon_sym_BSLASH,
    ACTIONS(555), 1,
      aux_sym__newline_token2,
    STATE(18), 1,
      aux_sym_node_repeat1,
    STATE(86), 1,
      sym__escline,
    STATE(99), 1,
      sym__node_space,
    STATE(147), 1,
      aux_sym_node_repeat2,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(557), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(550), 12,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [7987] = 2,
    ACTIONS(562), 1,
      aux_sym__newline_token2,
    ACTIONS(560), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8015] = 2,
    ACTIONS(566), 1,
      aux_sym__newline_token2,
    ACTIONS(564), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8043] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(570), 1,
      aux_sym__newline_token2,
    STATE(137), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(120), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(572), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(568), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8087] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(576), 1,
      aux_sym__newline_token2,
    STATE(141), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(142), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(574), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8131] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(576), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(142), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(574), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8175] = 2,
    ACTIONS(580), 1,
      aux_sym__newline_token2,
    ACTIONS(578), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8203] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(584), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(582), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8247] = 2,
    ACTIONS(588), 1,
      aux_sym__newline_token2,
    ACTIONS(586), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8275] = 2,
    ACTIONS(592), 1,
      aux_sym__newline_token2,
    ACTIONS(590), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8303] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(596), 1,
      aux_sym__newline_token2,
    STATE(144), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(145), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(594), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8347] = 2,
    ACTIONS(600), 1,
      aux_sym__newline_token2,
    ACTIONS(598), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8375] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(604), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(207), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(602), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8419] = 2,
    ACTIONS(608), 1,
      aux_sym__newline_token2,
    ACTIONS(606), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8447] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(612), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(208), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(610), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8491] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(612), 1,
      aux_sym__newline_token2,
    STATE(209), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(208), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(610), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8535] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(616), 1,
      aux_sym__newline_token2,
    STATE(211), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(212), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(618), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(210), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(614), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8579] = 2,
    ACTIONS(622), 1,
      aux_sym__newline_token2,
    ACTIONS(620), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8607] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(596), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(145), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(594), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8651] = 2,
    ACTIONS(626), 1,
      aux_sym__newline_token2,
    ACTIONS(624), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8679] = 2,
    ACTIONS(630), 1,
      aux_sym__newline_token2,
    ACTIONS(628), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8707] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(634), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(202), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(632), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8751] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(634), 1,
      aux_sym__newline_token2,
    STATE(201), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(202), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(632), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8795] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(638), 1,
      aux_sym__newline_token2,
    STATE(199), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(198), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(640), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(200), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(636), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8839] = 2,
    ACTIONS(644), 1,
      aux_sym__newline_token2,
    ACTIONS(642), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8867] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(648), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(646), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8911] = 2,
    ACTIONS(652), 1,
      aux_sym__newline_token2,
    ACTIONS(650), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8939] = 2,
    ACTIONS(656), 1,
      aux_sym__newline_token2,
    ACTIONS(654), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8967] = 2,
    ACTIONS(660), 1,
      aux_sym__newline_token2,
    ACTIONS(658), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8995] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(664), 1,
      aux_sym__newline_token2,
    STATE(152), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(151), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(666), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(153), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(662), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9039] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym__newline_token2,
    STATE(154), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(668), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9083] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(670), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(668), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9127] = 2,
    ACTIONS(674), 1,
      aux_sym__newline_token2,
    ACTIONS(672), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9155] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(678), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(676), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9199] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(682), 1,
      aux_sym__newline_token2,
    STATE(161), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(162), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(684), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(680), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9243] = 2,
    ACTIONS(688), 1,
      aux_sym__newline_token2,
    ACTIONS(686), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9271] = 2,
    ACTIONS(692), 1,
      aux_sym__newline_token2,
    ACTIONS(690), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9299] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(696), 1,
      aux_sym__newline_token2,
    STATE(165), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(157), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(698), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(166), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(694), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9343] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(702), 1,
      aux_sym__newline_token2,
    STATE(172), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(173), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(700), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9387] = 2,
    ACTIONS(706), 1,
      aux_sym__newline_token2,
    ACTIONS(704), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9415] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(702), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(173), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(700), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9459] = 4,
    ACTIONS(713), 1,
      aux_sym__newline_token2,
    STATE(188), 1,
      aux_sym__integer_repeat1,
    ACTIONS(710), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(708), 19,
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
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9491] = 2,
    ACTIONS(717), 1,
      aux_sym__newline_token2,
    ACTIONS(715), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9519] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(721), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(174), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(719), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9563] = 2,
    ACTIONS(725), 1,
      aux_sym__newline_token2,
    ACTIONS(723), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9591] = 2,
    ACTIONS(729), 1,
      aux_sym__newline_token2,
    ACTIONS(727), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9619] = 2,
    ACTIONS(731), 1,
      aux_sym__newline_token2,
    ACTIONS(215), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9647] = 4,
    ACTIONS(737), 1,
      aux_sym__newline_token2,
    STATE(139), 1,
      aux_sym__integer_repeat1,
    ACTIONS(735), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(733), 19,
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
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9679] = 2,
    ACTIONS(741), 1,
      aux_sym__newline_token2,
    ACTIONS(739), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9707] = 2,
    ACTIONS(745), 1,
      aux_sym__newline_token2,
    ACTIONS(743), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9735] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(749), 1,
      aux_sym__newline_token2,
    STATE(178), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(177), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(751), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(179), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(747), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9779] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(755), 1,
      aux_sym__newline_token2,
    STATE(180), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(121), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(753), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9823] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(755), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(121), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(753), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9867] = 2,
    ACTIONS(759), 1,
      aux_sym__newline_token2,
    ACTIONS(757), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9895] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(763), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(182), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(761), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [9939] = 2,
    ACTIONS(767), 1,
      aux_sym__newline_token2,
    ACTIONS(765), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9967] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(771), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(769), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [10011] = 2,
    ACTIONS(775), 1,
      aux_sym__newline_token2,
    ACTIONS(773), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10039] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(779), 1,
      aux_sym__newline_token2,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(185), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(781), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(189), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(777), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [10083] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(771), 1,
      aux_sym__newline_token2,
    STATE(135), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(769), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [10127] = 2,
    ACTIONS(785), 1,
      aux_sym__newline_token2,
    ACTIONS(783), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10155] = 2,
    ACTIONS(789), 1,
      aux_sym__newline_token2,
    ACTIONS(787), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10183] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(793), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(192), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(791), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [10227] = 2,
    ACTIONS(797), 1,
      aux_sym__newline_token2,
    ACTIONS(795), 22,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10255] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(801), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(480), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(191), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(799), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [10299] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(801), 1,
      aux_sym__newline_token2,
    STATE(190), 1,
      aux_sym_node_repeat1,
    STATE(258), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(442), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(191), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(799), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [10343] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(109), 1,
      sym_identifier,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10398] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(113), 1,
      sym_identifier,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10453] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(103), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_node_repeat1,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10508] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(100), 1,
      sym_identifier,
    STATE(213), 1,
      aux_sym_node_repeat1,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10563] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(109), 1,
      sym_identifier,
    STATE(214), 1,
      aux_sym_node_repeat1,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10618] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym__multiline_escaped_start,
    ACTIONS(25), 1,
      sym__multiline_raw_start,
    ACTIONS(27), 1,
      sym__raw_string,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(24), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(106), 1,
      sym_identifier,
    STATE(242), 1,
      sym__sign,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(249), 2,
      sym_multi_line_string,
      sym__escaped_string,
    STATE(276), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(111), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10673] = 4,
    ACTIONS(808), 1,
      aux_sym__newline_token2,
    STATE(219), 1,
      aux_sym__binary_repeat1,
    ACTIONS(805), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(803), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10703] = 5,
    ACTIONS(812), 1,
      anon_sym_DOT,
    ACTIONS(816), 1,
      aux_sym__newline_token2,
    STATE(266), 1,
      sym__exponent,
    ACTIONS(814), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(810), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10735] = 4,
    ACTIONS(822), 1,
      aux_sym__newline_token2,
    STATE(219), 1,
      aux_sym__binary_repeat1,
    ACTIONS(820), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(818), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10765] = 5,
    ACTIONS(826), 1,
      anon_sym_DOT,
    ACTIONS(828), 1,
      aux_sym__newline_token2,
    STATE(279), 1,
      sym__exponent,
    ACTIONS(814), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(824), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10797] = 4,
    ACTIONS(832), 1,
      aux_sym__newline_token2,
    STATE(219), 1,
      aux_sym__binary_repeat1,
    ACTIONS(820), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(830), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10827] = 4,
    ACTIONS(838), 1,
      aux_sym__newline_token2,
    STATE(223), 1,
      aux_sym__binary_repeat1,
    ACTIONS(836), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(834), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10857] = 4,
    ACTIONS(832), 1,
      aux_sym__newline_token2,
    STATE(221), 1,
      aux_sym__binary_repeat1,
    ACTIONS(840), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(830), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10887] = 4,
    ACTIONS(844), 1,
      sym__identifier_char,
    ACTIONS(846), 1,
      aux_sym__newline_token2,
    STATE(238), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(842), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10916] = 4,
    ACTIONS(850), 1,
      aux_sym__newline_token2,
    STATE(282), 1,
      sym__exponent,
    ACTIONS(814), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(848), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10945] = 8,
    ACTIONS(119), 1,
      aux_sym__newline_token2,
    ACTIONS(852), 1,
      anon_sym_BSLASH,
    STATE(228), 1,
      aux_sym_node_repeat1,
    STATE(264), 1,
      sym__escline,
    STATE(299), 1,
      sym__node_space,
    STATE(252), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(855), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(121), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [10982] = 4,
    ACTIONS(862), 1,
      aux_sym__newline_token2,
    STATE(239), 1,
      aux_sym__hex_repeat1,
    ACTIONS(860), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(858), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11011] = 4,
    ACTIONS(868), 1,
      aux_sym__newline_token2,
    STATE(240), 1,
      aux_sym__octal_repeat1,
    ACTIONS(866), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(864), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11040] = 4,
    ACTIONS(872), 1,
      sym__identifier_char,
    ACTIONS(874), 1,
      aux_sym__newline_token2,
    STATE(226), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(870), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11069] = 4,
    ACTIONS(881), 1,
      aux_sym__newline_token2,
    STATE(232), 1,
      aux_sym__hex_repeat1,
    ACTIONS(878), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(876), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11098] = 4,
    ACTIONS(888), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym__octal_repeat1,
    ACTIONS(885), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(883), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11127] = 4,
    ACTIONS(892), 1,
      aux_sym__newline_token2,
    STATE(268), 1,
      sym__exponent,
    ACTIONS(814), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(890), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11156] = 4,
    ACTIONS(868), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym__octal_repeat1,
    ACTIONS(894), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(864), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11185] = 4,
    ACTIONS(862), 1,
      aux_sym__newline_token2,
    STATE(232), 1,
      aux_sym__hex_repeat1,
    ACTIONS(896), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(858), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11214] = 4,
    ACTIONS(902), 1,
      aux_sym__newline_token2,
    STATE(235), 1,
      aux_sym__octal_repeat1,
    ACTIONS(900), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(898), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11243] = 4,
    ACTIONS(906), 1,
      sym__identifier_char,
    ACTIONS(909), 1,
      aux_sym__newline_token2,
    STATE(238), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(904), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11272] = 4,
    ACTIONS(913), 1,
      aux_sym__newline_token2,
    STATE(232), 1,
      aux_sym__hex_repeat1,
    ACTIONS(896), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(911), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11301] = 4,
    ACTIONS(917), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym__octal_repeat1,
    ACTIONS(894), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(915), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11330] = 4,
    ACTIONS(923), 1,
      aux_sym__newline_token2,
    STATE(236), 1,
      aux_sym__hex_repeat1,
    ACTIONS(921), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(919), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11359] = 3,
    ACTIONS(426), 1,
      sym___identifier_char_no_digit,
    ACTIONS(434), 1,
      aux_sym__newline_token2,
    ACTIONS(424), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11384] = 2,
    ACTIONS(434), 1,
      aux_sym__newline_token2,
    ACTIONS(424), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11407] = 2,
    ACTIONS(927), 1,
      aux_sym__newline_token2,
    ACTIONS(925), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11430] = 2,
    ACTIONS(931), 1,
      aux_sym__newline_token2,
    ACTIONS(929), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11453] = 6,
    ACTIONS(936), 1,
      anon_sym_BSLASH,
    ACTIONS(940), 1,
      aux_sym__newline_token2,
    STATE(257), 1,
      sym__escline,
    STATE(275), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(943), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(933), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11484] = 2,
    ACTIONS(949), 1,
      aux_sym__newline_token2,
    ACTIONS(947), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11507] = 2,
    ACTIONS(953), 1,
      aux_sym__newline_token2,
    ACTIONS(951), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11530] = 2,
    ACTIONS(957), 1,
      aux_sym__newline_token2,
    ACTIONS(955), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11553] = 4,
    ACTIONS(961), 1,
      anon_sym_EQ,
    ACTIONS(966), 1,
      aux_sym__newline_token2,
    ACTIONS(963), 4,
      sym_multi_line_comment,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(959), 12,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11580] = 4,
    ACTIONS(961), 1,
      anon_sym_EQ,
    ACTIONS(973), 1,
      aux_sym__newline_token2,
    ACTIONS(970), 4,
      sym_multi_line_comment,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(968), 12,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11607] = 6,
    ACTIONS(135), 1,
      aux_sym__newline_token2,
    ACTIONS(975), 1,
      anon_sym_BSLASH,
    STATE(257), 1,
      sym__escline,
    STATE(275), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(978), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(137), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11638] = 4,
    ACTIONS(145), 1,
      aux_sym__newline_token2,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(981), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(147), 12,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11665] = 4,
    ACTIONS(152), 1,
      aux_sym__newline_token2,
    STATE(275), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(984), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11691] = 2,
    ACTIONS(989), 1,
      aux_sym__newline_token2,
    ACTIONS(987), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11713] = 4,
    ACTIONS(994), 1,
      aux_sym__newline_token2,
    STATE(275), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(997), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(991), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11739] = 4,
    ACTIONS(152), 1,
      aux_sym__newline_token2,
    STATE(265), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1001), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11765] = 4,
    ACTIONS(1007), 1,
      aux_sym__newline_token2,
    STATE(256), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1010), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1004), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11791] = 2,
    ACTIONS(1016), 1,
      aux_sym__newline_token2,
    ACTIONS(1014), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11813] = 2,
    ACTIONS(1020), 1,
      aux_sym__newline_token2,
    ACTIONS(1018), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11835] = 2,
    ACTIONS(1024), 1,
      aux_sym__newline_token2,
    ACTIONS(1022), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11857] = 2,
    ACTIONS(555), 1,
      aux_sym__newline_token2,
    ACTIONS(550), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11879] = 2,
    ACTIONS(1028), 1,
      aux_sym__newline_token2,
    ACTIONS(1026), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11901] = 4,
    ACTIONS(135), 1,
      aux_sym__newline_token2,
    STATE(254), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1030), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(137), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11927] = 4,
    ACTIONS(162), 1,
      aux_sym__newline_token2,
    STATE(275), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1033), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(164), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11953] = 2,
    ACTIONS(1038), 1,
      aux_sym__newline_token2,
    ACTIONS(1036), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11975] = 2,
    ACTIONS(1042), 1,
      aux_sym__newline_token2,
    ACTIONS(1040), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11997] = 2,
    ACTIONS(1046), 1,
      aux_sym__newline_token2,
    ACTIONS(1044), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12019] = 2,
    ACTIONS(1050), 1,
      aux_sym__newline_token2,
    ACTIONS(1048), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12041] = 2,
    ACTIONS(1054), 1,
      aux_sym__newline_token2,
    ACTIONS(1052), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12063] = 2,
    ACTIONS(966), 1,
      aux_sym__newline_token2,
    ACTIONS(959), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12085] = 2,
    ACTIONS(1058), 1,
      aux_sym__newline_token2,
    ACTIONS(1056), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12107] = 2,
    ACTIONS(973), 1,
      aux_sym__newline_token2,
    ACTIONS(968), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12129] = 2,
    ACTIONS(1062), 1,
      aux_sym__newline_token2,
    ACTIONS(1060), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12151] = 4,
    ACTIONS(145), 1,
      aux_sym__newline_token2,
    STATE(275), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1064), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(147), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [12177] = 2,
    ACTIONS(1067), 1,
      aux_sym__newline_token2,
    ACTIONS(961), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12199] = 2,
    ACTIONS(1071), 1,
      aux_sym__newline_token2,
    ACTIONS(1069), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12221] = 2,
    ACTIONS(1075), 1,
      aux_sym__newline_token2,
    ACTIONS(1073), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12243] = 2,
    ACTIONS(816), 1,
      aux_sym__newline_token2,
    ACTIONS(810), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12265] = 2,
    ACTIONS(1079), 1,
      aux_sym__newline_token2,
    ACTIONS(1077), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12287] = 2,
    ACTIONS(1083), 1,
      aux_sym__newline_token2,
    ACTIONS(1081), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12309] = 2,
    ACTIONS(1087), 1,
      aux_sym__newline_token2,
    ACTIONS(1085), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12331] = 2,
    ACTIONS(1091), 1,
      aux_sym__newline_token2,
    ACTIONS(1089), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12353] = 2,
    ACTIONS(1095), 1,
      aux_sym__newline_token2,
    ACTIONS(1093), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12375] = 2,
    ACTIONS(1099), 1,
      aux_sym__newline_token2,
    ACTIONS(1097), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12397] = 6,
    ACTIONS(1103), 1,
      aux_sym__newline_token2,
    ACTIONS(1107), 1,
      anon_sym_SLASH_SLASH,
    STATE(111), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1101), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12426] = 6,
    ACTIONS(1111), 1,
      aux_sym__newline_token2,
    ACTIONS(1113), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1109), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12455] = 6,
    ACTIONS(1117), 1,
      aux_sym__newline_token2,
    ACTIONS(1121), 1,
      anon_sym_SLASH_SLASH,
    STATE(290), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(345), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1119), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1115), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12484] = 6,
    ACTIONS(1107), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1125), 1,
      aux_sym__newline_token2,
    STATE(94), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(286), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1127), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1123), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12513] = 6,
    ACTIONS(1121), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1131), 1,
      aux_sym__newline_token2,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(347), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1129), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12542] = 6,
    ACTIONS(1135), 1,
      aux_sym__newline_token2,
    ACTIONS(1139), 1,
      anon_sym_SLASH_SLASH,
    STATE(292), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(311), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1137), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1133), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12571] = 6,
    ACTIONS(1139), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1143), 1,
      aux_sym__newline_token2,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(305), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1141), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12600] = 6,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1147), 1,
      aux_sym__newline_token2,
    STATE(27), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1145), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12629] = 6,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1151), 1,
      aux_sym__newline_token2,
    STATE(31), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(293), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1153), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1149), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12658] = 6,
    ACTIONS(1113), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1157), 1,
      aux_sym__newline_token2,
    STATE(46), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(287), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1159), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1155), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12687] = 2,
    ACTIONS(1163), 1,
      aux_sym__newline_token2,
    ACTIONS(1161), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12707] = 2,
    ACTIONS(1167), 1,
      aux_sym__newline_token2,
    ACTIONS(1165), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12727] = 2,
    ACTIONS(1171), 1,
      aux_sym__newline_token2,
    ACTIONS(1169), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12747] = 2,
    ACTIONS(180), 1,
      aux_sym__newline_token2,
    ACTIONS(182), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12767] = 2,
    ACTIONS(95), 1,
      aux_sym__newline_token2,
    ACTIONS(93), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12787] = 2,
    ACTIONS(1175), 1,
      aux_sym__newline_token2,
    ACTIONS(1173), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12807] = 2,
    ACTIONS(1179), 1,
      aux_sym__newline_token2,
    ACTIONS(1177), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12827] = 2,
    ACTIONS(1183), 1,
      aux_sym__newline_token2,
    ACTIONS(1181), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12847] = 2,
    ACTIONS(1187), 1,
      aux_sym__newline_token2,
    ACTIONS(1185), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12867] = 2,
    ACTIONS(176), 1,
      aux_sym__newline_token2,
    ACTIONS(178), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12887] = 2,
    ACTIONS(1191), 1,
      aux_sym__newline_token2,
    ACTIONS(1189), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12907] = 2,
    ACTIONS(1195), 1,
      aux_sym__newline_token2,
    ACTIONS(1193), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12927] = 2,
    ACTIONS(99), 1,
      aux_sym__newline_token2,
    ACTIONS(97), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12947] = 2,
    ACTIONS(1199), 1,
      aux_sym__newline_token2,
    ACTIONS(1197), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12967] = 2,
    ACTIONS(1203), 1,
      aux_sym__newline_token2,
    ACTIONS(1201), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12987] = 2,
    ACTIONS(184), 1,
      aux_sym__newline_token2,
    ACTIONS(186), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [13007] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1207), 1,
      aux_sym__newline_token2,
    ACTIONS(1209), 1,
      aux_sym_single_line_comment_token1,
    STATE(12), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1205), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13033] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1209), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1213), 1,
      aux_sym__newline_token2,
    STATE(308), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1211), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13059] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1217), 1,
      aux_sym__newline_token2,
    ACTIONS(1219), 1,
      aux_sym_single_line_comment_token1,
    STATE(318), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(351), 1,
      sym__newline,
    ACTIONS(1215), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13085] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1209), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1223), 1,
      aux_sym__newline_token2,
    STATE(49), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1221), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13111] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1227), 1,
      aux_sym__newline_token2,
    ACTIONS(1229), 1,
      aux_sym_single_line_comment_token1,
    STATE(47), 1,
      sym__newline,
    STATE(315), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1225), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13137] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1233), 1,
      aux_sym__newline_token2,
    ACTIONS(1235), 1,
      aux_sym_single_line_comment_token1,
    STATE(11), 1,
      sym__newline,
    STATE(312), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1231), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13163] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1209), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1239), 1,
      aux_sym__newline_token2,
    STATE(322), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(344), 1,
      sym__newline,
    ACTIONS(1237), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13189] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1243), 1,
      aux_sym__newline_token2,
    ACTIONS(1245), 1,
      aux_sym_single_line_comment_token1,
    STATE(98), 1,
      sym__newline,
    STATE(320), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1241), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13215] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1209), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1249), 1,
      aux_sym__newline_token2,
    STATE(105), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1247), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13241] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1253), 1,
      aux_sym__newline_token2,
    ACTIONS(1255), 1,
      aux_sym_single_line_comment_token1,
    STATE(300), 1,
      sym__newline,
    STATE(313), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1251), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13267] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1259), 1,
      aux_sym__newline_token2,
    ACTIONS(1261), 1,
      aux_sym_single_line_comment_token1,
    STATE(322), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1257), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [13290] = 7,
    ACTIONS(1264), 1,
      anon_sym_BSLASH,
    STATE(323), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(121), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
    ACTIONS(1267), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13317] = 1,
    ACTIONS(418), 11,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      sym__normal_bare_identifier,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13331] = 1,
    ACTIONS(414), 11,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      sym__normal_bare_identifier,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13345] = 1,
    ACTIONS(422), 11,
      sym_multi_line_comment,
      sym__multiline_escaped_start,
      sym__multiline_raw_start,
      sym__raw_string,
      sym__normal_bare_identifier,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13359] = 7,
    ACTIONS(1270), 1,
      anon_sym_EQ,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    STATE(330), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13384] = 5,
    ACTIONS(1276), 1,
      anon_sym_BSLASH,
    STATE(341), 1,
      sym__escline,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(137), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
    ACTIONS(1279), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13405] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13430] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1284), 1,
      anon_sym_EQ,
    STATE(323), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13455] = 7,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    STATE(335), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13480] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13505] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13530] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13555] = 7,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    STATE(323), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13580] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13605] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13630] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13655] = 7,
    ACTIONS(1272), 1,
      anon_sym_BSLASH,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      aux_sym_node_repeat1,
    STATE(343), 1,
      sym__escline,
    STATE(348), 1,
      sym__node_space,
    STATE(328), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1274), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13680] = 3,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1296), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(164), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13696] = 3,
    STATE(340), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1299), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13712] = 3,
    STATE(253), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1302), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13728] = 3,
    STATE(342), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1305), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(137), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13744] = 1,
    ACTIONS(97), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13754] = 1,
    ACTIONS(186), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13764] = 3,
    ACTIONS(1308), 1,
      sym__identifier_char,
    STATE(346), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(904), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13778] = 1,
    ACTIONS(178), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13788] = 1,
    ACTIONS(182), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13798] = 3,
    ACTIONS(1311), 1,
      sym__identifier_char,
    STATE(346), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(842), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13812] = 3,
    ACTIONS(1313), 1,
      sym__identifier_char,
    STATE(349), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(870), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13826] = 1,
    ACTIONS(93), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13836] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1317), 1,
      sym__multiline_end,
    STATE(363), 1,
      aux_sym_multi_line_string_repeat1,
    ACTIONS(1315), 3,
      sym__multiline_escape,
      sym__multiline_escaped_whitespace,
      sym__multiline_fragment,
  [13851] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1319), 1,
      sym__digit,
    STATE(255), 1,
      sym__integer,
    STATE(382), 1,
      sym__sign,
    ACTIONS(1321), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [13868] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1323), 1,
      anon_sym_DQUOTE,
    ACTIONS(1325), 1,
      aux_sym__escaped_string_token1,
    STATE(354), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1328), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13885] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1331), 1,
      anon_sym_DQUOTE,
    ACTIONS(1333), 1,
      aux_sym__escaped_string_token1,
    STATE(354), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1335), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13902] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1333), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1337), 1,
      anon_sym_DQUOTE,
    STATE(354), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1335), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13919] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1341), 1,
      sym__multiline_end,
    STATE(362), 1,
      aux_sym_multi_line_string_repeat1,
    ACTIONS(1339), 3,
      sym__multiline_escape,
      sym__multiline_escaped_whitespace,
      sym__multiline_fragment,
  [13934] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1333), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1343), 1,
      anon_sym_DQUOTE,
    STATE(355), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1335), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13951] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1347), 1,
      sym__multiline_end,
    STATE(357), 1,
      aux_sym_multi_line_string_repeat1,
    ACTIONS(1345), 3,
      sym__multiline_escape,
      sym__multiline_escaped_whitespace,
      sym__multiline_fragment,
  [13966] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1333), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1349), 1,
      anon_sym_DQUOTE,
    STATE(356), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1335), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13983] = 2,
    ACTIONS(1351), 1,
      sym___identifier_char_no_digit,
    ACTIONS(424), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13994] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1356), 1,
      sym__multiline_end,
    STATE(362), 1,
      aux_sym_multi_line_string_repeat1,
    ACTIONS(1353), 3,
      sym__multiline_escape,
      sym__multiline_escaped_whitespace,
      sym__multiline_fragment,
  [14009] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1358), 1,
      sym__multiline_end,
    STATE(362), 1,
      aux_sym_multi_line_string_repeat1,
    ACTIONS(1339), 3,
      sym__multiline_escape,
      sym__multiline_escaped_whitespace,
      sym__multiline_fragment,
  [14024] = 1,
    ACTIONS(929), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14032] = 1,
    ACTIONS(925), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14040] = 1,
    ACTIONS(424), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14048] = 1,
    ACTIONS(955), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14056] = 1,
    ACTIONS(951), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14064] = 1,
    ACTIONS(961), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14072] = 1,
    ACTIONS(1360), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14080] = 1,
    ACTIONS(947), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [14088] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1364), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1362), 3,
      anon_sym_DQUOTE,
      sym_escape,
      sym_escaped_whitespace,
  [14100] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1341), 1,
      sym__multiline_end,
    ACTIONS(1366), 1,
      sym__multiline_fragment,
    STATE(376), 1,
      aux_sym_multi_line_string_repeat2,
  [14113] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1347), 1,
      sym__multiline_end,
    ACTIONS(1368), 1,
      sym__multiline_fragment,
    STATE(373), 1,
      aux_sym_multi_line_string_repeat2,
  [14126] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1358), 1,
      sym__multiline_end,
    ACTIONS(1366), 1,
      sym__multiline_fragment,
    STATE(376), 1,
      aux_sym_multi_line_string_repeat2,
  [14139] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1370), 1,
      sym__multiline_fragment,
    ACTIONS(1373), 1,
      sym__multiline_end,
    STATE(376), 1,
      aux_sym_multi_line_string_repeat2,
  [14152] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1317), 1,
      sym__multiline_end,
    ACTIONS(1375), 1,
      sym__multiline_fragment,
    STATE(375), 1,
      aux_sym_multi_line_string_repeat2,
  [14165] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1377), 2,
      anon_sym_0,
      anon_sym_1,
  [14173] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1319), 1,
      sym__digit,
    STATE(234), 1,
      sym__integer,
  [14183] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1319), 1,
      sym__digit,
    STATE(227), 1,
      sym__integer,
  [14193] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1379), 2,
      anon_sym_0,
      anon_sym_1,
  [14201] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1319), 1,
      sym__digit,
    STATE(281), 1,
      sym__integer,
  [14211] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1381), 1,
      sym__hex_digit,
  [14218] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1383), 1,
      ts_builtin_sym_end,
  [14225] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1385), 1,
      aux_sym__octal_token1,
  [14232] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1387), 1,
      aux_sym__octal_token1,
  [14239] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1389), 1,
      sym__hex_digit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 322,
  [SMALL_STATE(16)] = 417,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 583,
  [SMALL_STATE(19)] = 704,
  [SMALL_STATE(20)] = 769,
  [SMALL_STATE(21)] = 829,
  [SMALL_STATE(22)] = 889,
  [SMALL_STATE(23)] = 949,
  [SMALL_STATE(24)] = 1009,
  [SMALL_STATE(25)] = 1069,
  [SMALL_STATE(26)] = 1186,
  [SMALL_STATE(27)] = 1303,
  [SMALL_STATE(28)] = 1357,
  [SMALL_STATE(29)] = 1471,
  [SMALL_STATE(30)] = 1525,
  [SMALL_STATE(31)] = 1639,
  [SMALL_STATE(32)] = 1693,
  [SMALL_STATE(33)] = 1798,
  [SMALL_STATE(34)] = 1903,
  [SMALL_STATE(35)] = 2008,
  [SMALL_STATE(36)] = 2113,
  [SMALL_STATE(37)] = 2173,
  [SMALL_STATE(38)] = 2269,
  [SMALL_STATE(39)] = 2365,
  [SMALL_STATE(40)] = 2419,
  [SMALL_STATE(41)] = 2468,
  [SMALL_STATE(42)] = 2517,
  [SMALL_STATE(43)] = 2566,
  [SMALL_STATE(44)] = 2615,
  [SMALL_STATE(45)] = 2664,
  [SMALL_STATE(46)] = 2707,
  [SMALL_STATE(47)] = 2750,
  [SMALL_STATE(48)] = 2793,
  [SMALL_STATE(49)] = 2836,
  [SMALL_STATE(50)] = 2879,
  [SMALL_STATE(51)] = 2955,
  [SMALL_STATE(52)] = 3030,
  [SMALL_STATE(53)] = 3105,
  [SMALL_STATE(54)] = 3180,
  [SMALL_STATE(55)] = 3255,
  [SMALL_STATE(56)] = 3330,
  [SMALL_STATE(57)] = 3405,
  [SMALL_STATE(58)] = 3480,
  [SMALL_STATE(59)] = 3555,
  [SMALL_STATE(60)] = 3630,
  [SMALL_STATE(61)] = 3705,
  [SMALL_STATE(62)] = 3780,
  [SMALL_STATE(63)] = 3855,
  [SMALL_STATE(64)] = 3930,
  [SMALL_STATE(65)] = 4005,
  [SMALL_STATE(66)] = 4079,
  [SMALL_STATE(67)] = 4153,
  [SMALL_STATE(68)] = 4227,
  [SMALL_STATE(69)] = 4301,
  [SMALL_STATE(70)] = 4375,
  [SMALL_STATE(71)] = 4449,
  [SMALL_STATE(72)] = 4523,
  [SMALL_STATE(73)] = 4597,
  [SMALL_STATE(74)] = 4671,
  [SMALL_STATE(75)] = 4745,
  [SMALL_STATE(76)] = 4819,
  [SMALL_STATE(77)] = 4893,
  [SMALL_STATE(78)] = 4967,
  [SMALL_STATE(79)] = 5041,
  [SMALL_STATE(80)] = 5115,
  [SMALL_STATE(81)] = 5189,
  [SMALL_STATE(82)] = 5263,
  [SMALL_STATE(83)] = 5334,
  [SMALL_STATE(84)] = 5383,
  [SMALL_STATE(85)] = 5426,
  [SMALL_STATE(86)] = 5464,
  [SMALL_STATE(87)] = 5502,
  [SMALL_STATE(88)] = 5540,
  [SMALL_STATE(89)] = 5578,
  [SMALL_STATE(90)] = 5616,
  [SMALL_STATE(91)] = 5655,
  [SMALL_STATE(92)] = 5711,
  [SMALL_STATE(93)] = 5751,
  [SMALL_STATE(94)] = 5807,
  [SMALL_STATE(95)] = 5839,
  [SMALL_STATE(96)] = 5895,
  [SMALL_STATE(97)] = 5935,
  [SMALL_STATE(98)] = 5991,
  [SMALL_STATE(99)] = 6023,
  [SMALL_STATE(100)] = 6055,
  [SMALL_STATE(101)] = 6111,
  [SMALL_STATE(102)] = 6151,
  [SMALL_STATE(103)] = 6207,
  [SMALL_STATE(104)] = 6263,
  [SMALL_STATE(105)] = 6303,
  [SMALL_STATE(106)] = 6335,
  [SMALL_STATE(107)] = 6391,
  [SMALL_STATE(108)] = 6447,
  [SMALL_STATE(109)] = 6503,
  [SMALL_STATE(110)] = 6559,
  [SMALL_STATE(111)] = 6615,
  [SMALL_STATE(112)] = 6647,
  [SMALL_STATE(113)] = 6703,
  [SMALL_STATE(114)] = 6759,
  [SMALL_STATE(115)] = 6788,
  [SMALL_STATE(116)] = 6817,
  [SMALL_STATE(117)] = 6878,
  [SMALL_STATE(118)] = 6939,
  [SMALL_STATE(119)] = 6968,
  [SMALL_STATE(120)] = 7009,
  [SMALL_STATE(121)] = 7053,
  [SMALL_STATE(122)] = 7081,
  [SMALL_STATE(123)] = 7109,
  [SMALL_STATE(124)] = 7153,
  [SMALL_STATE(125)] = 7181,
  [SMALL_STATE(126)] = 7225,
  [SMALL_STATE(127)] = 7253,
  [SMALL_STATE(128)] = 7281,
  [SMALL_STATE(129)] = 7325,
  [SMALL_STATE(130)] = 7353,
  [SMALL_STATE(131)] = 7397,
  [SMALL_STATE(132)] = 7441,
  [SMALL_STATE(133)] = 7469,
  [SMALL_STATE(134)] = 7497,
  [SMALL_STATE(135)] = 7525,
  [SMALL_STATE(136)] = 7569,
  [SMALL_STATE(137)] = 7613,
  [SMALL_STATE(138)] = 7657,
  [SMALL_STATE(139)] = 7685,
  [SMALL_STATE(140)] = 7717,
  [SMALL_STATE(141)] = 7745,
  [SMALL_STATE(142)] = 7789,
  [SMALL_STATE(143)] = 7817,
  [SMALL_STATE(144)] = 7845,
  [SMALL_STATE(145)] = 7889,
  [SMALL_STATE(146)] = 7917,
  [SMALL_STATE(147)] = 7945,
  [SMALL_STATE(148)] = 7987,
  [SMALL_STATE(149)] = 8015,
  [SMALL_STATE(150)] = 8043,
  [SMALL_STATE(151)] = 8087,
  [SMALL_STATE(152)] = 8131,
  [SMALL_STATE(153)] = 8175,
  [SMALL_STATE(154)] = 8203,
  [SMALL_STATE(155)] = 8247,
  [SMALL_STATE(156)] = 8275,
  [SMALL_STATE(157)] = 8303,
  [SMALL_STATE(158)] = 8347,
  [SMALL_STATE(159)] = 8375,
  [SMALL_STATE(160)] = 8419,
  [SMALL_STATE(161)] = 8447,
  [SMALL_STATE(162)] = 8491,
  [SMALL_STATE(163)] = 8535,
  [SMALL_STATE(164)] = 8579,
  [SMALL_STATE(165)] = 8607,
  [SMALL_STATE(166)] = 8651,
  [SMALL_STATE(167)] = 8679,
  [SMALL_STATE(168)] = 8707,
  [SMALL_STATE(169)] = 8751,
  [SMALL_STATE(170)] = 8795,
  [SMALL_STATE(171)] = 8839,
  [SMALL_STATE(172)] = 8867,
  [SMALL_STATE(173)] = 8911,
  [SMALL_STATE(174)] = 8939,
  [SMALL_STATE(175)] = 8967,
  [SMALL_STATE(176)] = 8995,
  [SMALL_STATE(177)] = 9039,
  [SMALL_STATE(178)] = 9083,
  [SMALL_STATE(179)] = 9127,
  [SMALL_STATE(180)] = 9155,
  [SMALL_STATE(181)] = 9199,
  [SMALL_STATE(182)] = 9243,
  [SMALL_STATE(183)] = 9271,
  [SMALL_STATE(184)] = 9299,
  [SMALL_STATE(185)] = 9343,
  [SMALL_STATE(186)] = 9387,
  [SMALL_STATE(187)] = 9415,
  [SMALL_STATE(188)] = 9459,
  [SMALL_STATE(189)] = 9491,
  [SMALL_STATE(190)] = 9519,
  [SMALL_STATE(191)] = 9563,
  [SMALL_STATE(192)] = 9591,
  [SMALL_STATE(193)] = 9619,
  [SMALL_STATE(194)] = 9647,
  [SMALL_STATE(195)] = 9679,
  [SMALL_STATE(196)] = 9707,
  [SMALL_STATE(197)] = 9735,
  [SMALL_STATE(198)] = 9779,
  [SMALL_STATE(199)] = 9823,
  [SMALL_STATE(200)] = 9867,
  [SMALL_STATE(201)] = 9895,
  [SMALL_STATE(202)] = 9939,
  [SMALL_STATE(203)] = 9967,
  [SMALL_STATE(204)] = 10011,
  [SMALL_STATE(205)] = 10039,
  [SMALL_STATE(206)] = 10083,
  [SMALL_STATE(207)] = 10127,
  [SMALL_STATE(208)] = 10155,
  [SMALL_STATE(209)] = 10183,
  [SMALL_STATE(210)] = 10227,
  [SMALL_STATE(211)] = 10255,
  [SMALL_STATE(212)] = 10299,
  [SMALL_STATE(213)] = 10343,
  [SMALL_STATE(214)] = 10398,
  [SMALL_STATE(215)] = 10453,
  [SMALL_STATE(216)] = 10508,
  [SMALL_STATE(217)] = 10563,
  [SMALL_STATE(218)] = 10618,
  [SMALL_STATE(219)] = 10673,
  [SMALL_STATE(220)] = 10703,
  [SMALL_STATE(221)] = 10735,
  [SMALL_STATE(222)] = 10765,
  [SMALL_STATE(223)] = 10797,
  [SMALL_STATE(224)] = 10827,
  [SMALL_STATE(225)] = 10857,
  [SMALL_STATE(226)] = 10887,
  [SMALL_STATE(227)] = 10916,
  [SMALL_STATE(228)] = 10945,
  [SMALL_STATE(229)] = 10982,
  [SMALL_STATE(230)] = 11011,
  [SMALL_STATE(231)] = 11040,
  [SMALL_STATE(232)] = 11069,
  [SMALL_STATE(233)] = 11098,
  [SMALL_STATE(234)] = 11127,
  [SMALL_STATE(235)] = 11156,
  [SMALL_STATE(236)] = 11185,
  [SMALL_STATE(237)] = 11214,
  [SMALL_STATE(238)] = 11243,
  [SMALL_STATE(239)] = 11272,
  [SMALL_STATE(240)] = 11301,
  [SMALL_STATE(241)] = 11330,
  [SMALL_STATE(242)] = 11359,
  [SMALL_STATE(243)] = 11384,
  [SMALL_STATE(244)] = 11407,
  [SMALL_STATE(245)] = 11430,
  [SMALL_STATE(246)] = 11453,
  [SMALL_STATE(247)] = 11484,
  [SMALL_STATE(248)] = 11507,
  [SMALL_STATE(249)] = 11530,
  [SMALL_STATE(250)] = 11553,
  [SMALL_STATE(251)] = 11580,
  [SMALL_STATE(252)] = 11607,
  [SMALL_STATE(253)] = 11638,
  [SMALL_STATE(254)] = 11665,
  [SMALL_STATE(255)] = 11691,
  [SMALL_STATE(256)] = 11713,
  [SMALL_STATE(257)] = 11739,
  [SMALL_STATE(258)] = 11765,
  [SMALL_STATE(259)] = 11791,
  [SMALL_STATE(260)] = 11813,
  [SMALL_STATE(261)] = 11835,
  [SMALL_STATE(262)] = 11857,
  [SMALL_STATE(263)] = 11879,
  [SMALL_STATE(264)] = 11901,
  [SMALL_STATE(265)] = 11927,
  [SMALL_STATE(266)] = 11953,
  [SMALL_STATE(267)] = 11975,
  [SMALL_STATE(268)] = 11997,
  [SMALL_STATE(269)] = 12019,
  [SMALL_STATE(270)] = 12041,
  [SMALL_STATE(271)] = 12063,
  [SMALL_STATE(272)] = 12085,
  [SMALL_STATE(273)] = 12107,
  [SMALL_STATE(274)] = 12129,
  [SMALL_STATE(275)] = 12151,
  [SMALL_STATE(276)] = 12177,
  [SMALL_STATE(277)] = 12199,
  [SMALL_STATE(278)] = 12221,
  [SMALL_STATE(279)] = 12243,
  [SMALL_STATE(280)] = 12265,
  [SMALL_STATE(281)] = 12287,
  [SMALL_STATE(282)] = 12309,
  [SMALL_STATE(283)] = 12331,
  [SMALL_STATE(284)] = 12353,
  [SMALL_STATE(285)] = 12375,
  [SMALL_STATE(286)] = 12397,
  [SMALL_STATE(287)] = 12426,
  [SMALL_STATE(288)] = 12455,
  [SMALL_STATE(289)] = 12484,
  [SMALL_STATE(290)] = 12513,
  [SMALL_STATE(291)] = 12542,
  [SMALL_STATE(292)] = 12571,
  [SMALL_STATE(293)] = 12600,
  [SMALL_STATE(294)] = 12629,
  [SMALL_STATE(295)] = 12658,
  [SMALL_STATE(296)] = 12687,
  [SMALL_STATE(297)] = 12707,
  [SMALL_STATE(298)] = 12727,
  [SMALL_STATE(299)] = 12747,
  [SMALL_STATE(300)] = 12767,
  [SMALL_STATE(301)] = 12787,
  [SMALL_STATE(302)] = 12807,
  [SMALL_STATE(303)] = 12827,
  [SMALL_STATE(304)] = 12847,
  [SMALL_STATE(305)] = 12867,
  [SMALL_STATE(306)] = 12887,
  [SMALL_STATE(307)] = 12907,
  [SMALL_STATE(308)] = 12927,
  [SMALL_STATE(309)] = 12947,
  [SMALL_STATE(310)] = 12967,
  [SMALL_STATE(311)] = 12987,
  [SMALL_STATE(312)] = 13007,
  [SMALL_STATE(313)] = 13033,
  [SMALL_STATE(314)] = 13059,
  [SMALL_STATE(315)] = 13085,
  [SMALL_STATE(316)] = 13111,
  [SMALL_STATE(317)] = 13137,
  [SMALL_STATE(318)] = 13163,
  [SMALL_STATE(319)] = 13189,
  [SMALL_STATE(320)] = 13215,
  [SMALL_STATE(321)] = 13241,
  [SMALL_STATE(322)] = 13267,
  [SMALL_STATE(323)] = 13290,
  [SMALL_STATE(324)] = 13317,
  [SMALL_STATE(325)] = 13331,
  [SMALL_STATE(326)] = 13345,
  [SMALL_STATE(327)] = 13359,
  [SMALL_STATE(328)] = 13384,
  [SMALL_STATE(329)] = 13405,
  [SMALL_STATE(330)] = 13430,
  [SMALL_STATE(331)] = 13455,
  [SMALL_STATE(332)] = 13480,
  [SMALL_STATE(333)] = 13505,
  [SMALL_STATE(334)] = 13530,
  [SMALL_STATE(335)] = 13555,
  [SMALL_STATE(336)] = 13580,
  [SMALL_STATE(337)] = 13605,
  [SMALL_STATE(338)] = 13630,
  [SMALL_STATE(339)] = 13655,
  [SMALL_STATE(340)] = 13680,
  [SMALL_STATE(341)] = 13696,
  [SMALL_STATE(342)] = 13712,
  [SMALL_STATE(343)] = 13728,
  [SMALL_STATE(344)] = 13744,
  [SMALL_STATE(345)] = 13754,
  [SMALL_STATE(346)] = 13764,
  [SMALL_STATE(347)] = 13778,
  [SMALL_STATE(348)] = 13788,
  [SMALL_STATE(349)] = 13798,
  [SMALL_STATE(350)] = 13812,
  [SMALL_STATE(351)] = 13826,
  [SMALL_STATE(352)] = 13836,
  [SMALL_STATE(353)] = 13851,
  [SMALL_STATE(354)] = 13868,
  [SMALL_STATE(355)] = 13885,
  [SMALL_STATE(356)] = 13902,
  [SMALL_STATE(357)] = 13919,
  [SMALL_STATE(358)] = 13934,
  [SMALL_STATE(359)] = 13951,
  [SMALL_STATE(360)] = 13966,
  [SMALL_STATE(361)] = 13983,
  [SMALL_STATE(362)] = 13994,
  [SMALL_STATE(363)] = 14009,
  [SMALL_STATE(364)] = 14024,
  [SMALL_STATE(365)] = 14032,
  [SMALL_STATE(366)] = 14040,
  [SMALL_STATE(367)] = 14048,
  [SMALL_STATE(368)] = 14056,
  [SMALL_STATE(369)] = 14064,
  [SMALL_STATE(370)] = 14072,
  [SMALL_STATE(371)] = 14080,
  [SMALL_STATE(372)] = 14088,
  [SMALL_STATE(373)] = 14100,
  [SMALL_STATE(374)] = 14113,
  [SMALL_STATE(375)] = 14126,
  [SMALL_STATE(376)] = 14139,
  [SMALL_STATE(377)] = 14152,
  [SMALL_STATE(378)] = 14165,
  [SMALL_STATE(379)] = 14173,
  [SMALL_STATE(380)] = 14183,
  [SMALL_STATE(381)] = 14193,
  [SMALL_STATE(382)] = 14201,
  [SMALL_STATE(383)] = 14211,
  [SMALL_STATE(384)] = 14218,
  [SMALL_STATE(385)] = 14225,
  [SMALL_STATE(386)] = 14232,
  [SMALL_STATE(387)] = 14239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(294),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(294),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(20),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(20),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(23),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(20),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(295),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(39),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(295),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(41),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(41),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(41),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(40),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(41),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(43),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(243),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(116),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(14),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(360),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(242),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(82),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(82),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(317),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(352),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(377),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(249),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(289),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(84),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(289),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(87),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(87),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(85),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(87),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(87),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(88),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(317),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(297),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(307),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(309),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 15),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 15),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 5),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 11, .production_id = 21),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 11, .production_id = 21),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 21),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 21),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 20),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 20),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 19),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 19),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 21),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 21),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 20),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 20),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 18),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 18),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 19),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 19),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 17),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 17),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(289),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(84),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 5),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 20),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 20),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 18),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 18),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 9),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 9),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 19),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 19),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 10),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 10),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 5),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 5),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 17),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 17),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 5),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 18),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 18),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 10),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 10),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(188),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 17),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 17),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 14),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 9),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 9),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 5),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 5),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 15),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 15),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 10),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 10),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 4),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 9),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 9),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 14),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 14),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(219),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__binary_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 3),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 13),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3, .production_id = 13),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(291),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(252),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(232),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hex_repeat1, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(233),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octal_repeat1, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 16),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 16),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(238),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 4),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_string, 3),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_string, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [936] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(291),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [943] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(275),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_string, 2),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_line_string, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 2),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), REDUCE(sym_value, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 3),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), REDUCE(sym_value, 1, .production_id = 3),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 3),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(291),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(275),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(253),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(275),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 2),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [997] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(275),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(265),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [1010] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(256),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 4),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 4),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_number, 1),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_number, 1),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_field, 1),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_field, 1),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(254),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(275),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 5),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 5),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 16),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 5, .production_id = 16),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 2, .production_id = 7),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field_comment, 2, .production_id = 7),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field, 1),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field, 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(275),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 12),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, .production_id = 12),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, .production_id = 8),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, .production_id = 8),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 3, .production_id = 11),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field_comment, 3, .production_id = 11),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 6),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 8, .production_id = 6),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 6),
  [1179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3, .production_id = 6),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 6),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 7, .production_id = 6),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 6),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5, .production_id = 6),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 6),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6, .production_id = 6),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 6),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4, .production_id = 6),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(322),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(288),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(328),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(288),
  [1279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(253),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(253),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(340),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(253),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(342),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(346),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [1325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(372),
  [1328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(372),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_line_string_repeat1, 2), SHIFT_REPEAT(362),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_line_string_repeat1, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_line_string_repeat2, 2), SHIFT_REPEAT(376),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_line_string_repeat2, 2),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
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
