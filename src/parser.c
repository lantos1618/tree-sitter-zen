#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 33
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_DOT = 2,
  anon_sym_QMARK = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_integer_literal = 8,
  sym_float_literal = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_char_literal_token1 = 13,
  anon_sym_BSLASH = 14,
  aux_sym_char_literal_token2 = 15,
  sym_octal_literal = 16,
  sym_hex_literal = 17,
  sym_binary_literal = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_string_content_token1 = 20,
  sym_escape_sequence = 21,
  sym_identifier = 22,
  anon_sym_BANG = 23,
  anon_sym_DOT_DOT_DOT = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_AMP_AMP = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_PERCENT = 37,
  anon_sym_AMP = 38,
  anon_sym_PIPE = 39,
  anon_sym_CARET = 40,
  anon_sym_TILDE = 41,
  anon_sym_LT_LT = 42,
  anon_sym_GT_GT = 43,
  sym_source_file = 44,
  sym__expression = 45,
  sym_atom = 46,
  sym_unary = 47,
  sym_binary = 48,
  sym_binary_assignment = 49,
  sym_binary_access = 50,
  sym_binary_symbolic = 51,
  sym_ternary = 52,
  sym_ternary_functional_stmt = 53,
  sym_ternary_functional_def = 54,
  sym_ternary_if = 55,
  sym_group = 56,
  sym_group_paren = 57,
  sym_group_brace_def = 58,
  sym_group_brace_stmt = 59,
  sym_literal = 60,
  sym_bool_literal = 61,
  sym_char_literal = 62,
  sym_string_literal = 63,
  sym_string_content = 64,
  sym_unary_op = 65,
  sym_binary_op = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_string_content_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_char_literal_token2] = "char_literal_token2",
  [sym_octal_literal] = "octal_literal",
  [sym_hex_literal] = "hex_literal",
  [sym_binary_literal] = "binary_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_atom] = "atom",
  [sym_unary] = "unary",
  [sym_binary] = "binary",
  [sym_binary_assignment] = "binary_assignment",
  [sym_binary_access] = "binary_access",
  [sym_binary_symbolic] = "binary_symbolic",
  [sym_ternary] = "ternary",
  [sym_ternary_functional_stmt] = "ternary_functional_stmt",
  [sym_ternary_functional_def] = "ternary_functional_def",
  [sym_ternary_if] = "ternary_if",
  [sym_group] = "group",
  [sym_group_paren] = "group_paren",
  [sym_group_brace_def] = "group_brace_def",
  [sym_group_brace_stmt] = "group_brace_stmt",
  [sym_literal] = "literal",
  [sym_bool_literal] = "bool_literal",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_content] = "string_content",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_char_literal_token2] = aux_sym_char_literal_token2,
  [sym_octal_literal] = sym_octal_literal,
  [sym_hex_literal] = sym_hex_literal,
  [sym_binary_literal] = sym_binary_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_atom] = sym_atom,
  [sym_unary] = sym_unary,
  [sym_binary] = sym_binary,
  [sym_binary_assignment] = sym_binary_assignment,
  [sym_binary_access] = sym_binary_access,
  [sym_binary_symbolic] = sym_binary_symbolic,
  [sym_ternary] = sym_ternary,
  [sym_ternary_functional_stmt] = sym_ternary_functional_stmt,
  [sym_ternary_functional_def] = sym_ternary_functional_def,
  [sym_ternary_if] = sym_ternary_if,
  [sym_group] = sym_group,
  [sym_group_paren] = sym_group_paren,
  [sym_group_brace_def] = sym_group_brace_def,
  [sym_group_brace_stmt] = sym_group_brace_stmt,
  [sym_literal] = sym_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_content] = sym_string_content,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_access] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_symbolic] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_functional_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_functional_def] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_if] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_group_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_group_brace_def] = {
    .visible = true,
    .named = true,
  },
  [sym_group_brace_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [3] = 2,
  [4] = 2,
  [5] = 2,
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
  [35] = 34,
  [36] = 34,
  [37] = 34,
  [38] = 38,
  [39] = 33,
  [40] = 34,
  [41] = 34,
  [42] = 38,
  [43] = 33,
  [44] = 33,
  [45] = 34,
  [46] = 38,
  [47] = 38,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 50,
  [53] = 50,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 56,
  [59] = 59,
  [60] = 59,
  [61] = 56,
  [62] = 59,
  [63] = 59,
  [64] = 56,
  [65] = 55,
  [66] = 48,
  [67] = 49,
  [68] = 50,
  [69] = 55,
  [70] = 48,
  [71] = 49,
  [72] = 6,
  [73] = 6,
  [74] = 6,
  [75] = 75,
  [76] = 18,
  [77] = 8,
  [78] = 10,
  [79] = 9,
  [80] = 11,
  [81] = 75,
  [82] = 11,
  [83] = 13,
  [84] = 9,
  [85] = 8,
  [86] = 13,
  [87] = 75,
  [88] = 7,
  [89] = 89,
  [90] = 75,
  [91] = 7,
  [92] = 89,
  [93] = 75,
  [94] = 10,
  [95] = 89,
  [96] = 18,
  [97] = 75,
  [98] = 75,
  [99] = 89,
  [100] = 100,
  [101] = 19,
  [102] = 100,
  [103] = 16,
  [104] = 7,
  [105] = 17,
  [106] = 30,
  [107] = 29,
  [108] = 100,
  [109] = 24,
  [110] = 110,
  [111] = 15,
  [112] = 9,
  [113] = 11,
  [114] = 18,
  [115] = 115,
  [116] = 20,
  [117] = 8,
  [118] = 16,
  [119] = 17,
  [120] = 30,
  [121] = 29,
  [122] = 24,
  [123] = 15,
  [124] = 20,
  [125] = 25,
  [126] = 100,
  [127] = 110,
  [128] = 110,
  [129] = 25,
  [130] = 13,
  [131] = 26,
  [132] = 26,
  [133] = 14,
  [134] = 23,
  [135] = 21,
  [136] = 19,
  [137] = 10,
  [138] = 110,
  [139] = 22,
  [140] = 28,
  [141] = 27,
  [142] = 27,
  [143] = 22,
  [144] = 28,
  [145] = 18,
  [146] = 13,
  [147] = 18,
  [148] = 13,
  [149] = 14,
  [150] = 21,
  [151] = 23,
  [152] = 13,
  [153] = 19,
  [154] = 18,
  [155] = 16,
  [156] = 28,
  [157] = 20,
  [158] = 25,
  [159] = 26,
  [160] = 17,
  [161] = 30,
  [162] = 14,
  [163] = 23,
  [164] = 21,
  [165] = 15,
  [166] = 24,
  [167] = 29,
  [168] = 27,
  [169] = 22,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 172,
  [174] = 172,
  [175] = 172,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 178,
  [180] = 178,
  [181] = 178,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 182,
  [187] = 185,
  [188] = 188,
  [189] = 188,
  [190] = 188,
  [191] = 183,
  [192] = 185,
  [193] = 188,
  [194] = 183,
  [195] = 182,
  [196] = 182,
  [197] = 183,
  [198] = 185,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '~') ADVANCE(210);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(1)
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') SKIP(1)
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(1)
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') SKIP(1)
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(1)
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') SKIP(1)
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) SKIP(1)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(6)
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') SKIP(6)
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) SKIP(6)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(6)
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '/') SKIP(6)
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(6)
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') SKIP(6)
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(9)
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '/') SKIP(9)
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(9)
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') SKIP(9)
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(9)
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') SKIP(9)
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(140);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(11)
      if (lookahead == '/') SKIP(11)
      if (lookahead != 0) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(12)
      if (lookahead == '/') SKIP(12)
      if (lookahead != 0) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(118);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(14)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '~') ADVANCE(210);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(15)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '~') ADVANCE(210);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(16)
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') SKIP(30)
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(17)
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') SKIP(33)
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(18)
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') SKIP(29)
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(19)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(20)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(21)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(22)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(23)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(24)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '~') ADVANCE(210);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(25)
      if (lookahead == '/') SKIP(31)
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(26)
      if (lookahead == '/') SKIP(32)
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 29:
      if (lookahead == '/') SKIP(6)
      END_STATE();
    case 30:
      if (lookahead == '/') SKIP(9)
      END_STATE();
    case 31:
      if (lookahead == '/') SKIP(11)
      END_STATE();
    case 32:
      if (lookahead == '/') SKIP(12)
      END_STATE();
    case 33:
      if (lookahead == '/') SKIP(1)
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(109);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 42:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(42)
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') SKIP(42)
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) SKIP(42)
      END_STATE();
    case 43:
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(43)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '~') ADVANCE(210);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(104);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(44)
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') SKIP(45)
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '/') SKIP(42)
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '{') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '{') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == '{') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(176);
      if (lookahead == '{') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '%') ADVANCE(206);
      if (lookahead == '&') ADVANCE(207);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(196);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(208);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '~') ADVANCE(210);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_char_literal_token2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_literal_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(118);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_octal_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_hex_literal);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(140);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(141);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(122);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(130);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '{') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '!') ADVANCE(187);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '>') ADVANCE(212);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(200);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(201);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 44},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 44},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 44},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 22},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 20},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 24},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 24},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 24},
  [166] = {.lex_state = 24},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 24},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 44},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 37},
  [179] = {.lex_state = 37},
  [180] = {.lex_state = 37},
  [181] = {.lex_state = 37},
  [182] = {.lex_state = 26},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 26},
  [186] = {.lex_state = 26},
  [187] = {.lex_state = 26},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 25},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 26},
  [193] = {.lex_state = 25},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 26},
  [196] = {.lex_state = 26},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_char_literal_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_char_literal_token2] = ACTIONS(1),
    [sym_octal_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
    [sym_binary_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(184),
    [sym__expression] = STATE(12),
    [sym_atom] = STATE(12),
    [sym_unary] = STATE(12),
    [sym_binary] = STATE(12),
    [sym_binary_assignment] = STATE(30),
    [sym_binary_access] = STATE(30),
    [sym_binary_symbolic] = STATE(30),
    [sym_ternary] = STATE(12),
    [sym_ternary_functional_stmt] = STATE(29),
    [sym_ternary_functional_def] = STATE(29),
    [sym_ternary_if] = STATE(29),
    [sym_group] = STATE(12),
    [sym_group_paren] = STATE(24),
    [sym_group_brace_def] = STATE(24),
    [sym_literal] = STATE(15),
    [sym_bool_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [sym_unary_op] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_integer_literal] = ACTIONS(9),
    [sym_float_literal] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_octal_literal] = ACTIONS(9),
    [sym_hex_literal] = ACTIONS(9),
    [sym_binary_literal] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
  },
  [2] = {
    [sym__expression] = STATE(88),
    [sym_atom] = STATE(88),
    [sym_unary] = STATE(88),
    [sym_binary] = STATE(88),
    [sym_binary_assignment] = STATE(106),
    [sym_binary_access] = STATE(106),
    [sym_binary_symbolic] = STATE(106),
    [sym_ternary] = STATE(88),
    [sym_ternary_functional_stmt] = STATE(107),
    [sym_ternary_functional_def] = STATE(107),
    [sym_ternary_if] = STATE(107),
    [sym_group] = STATE(88),
    [sym_group_paren] = STATE(72),
    [sym_group_brace_def] = STATE(109),
    [sym_literal] = STATE(111),
    [sym_bool_literal] = STATE(103),
    [sym_char_literal] = STATE(103),
    [sym_string_literal] = STATE(103),
    [sym_unary_op] = STATE(63),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_integer_literal] = ACTIONS(27),
    [sym_float_literal] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_octal_literal] = ACTIONS(27),
    [sym_hex_literal] = ACTIONS(27),
    [sym_binary_literal] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
  },
  [3] = {
    [sym__expression] = STATE(7),
    [sym_atom] = STATE(7),
    [sym_unary] = STATE(7),
    [sym_binary] = STATE(7),
    [sym_binary_assignment] = STATE(30),
    [sym_binary_access] = STATE(30),
    [sym_binary_symbolic] = STATE(30),
    [sym_ternary] = STATE(7),
    [sym_ternary_functional_stmt] = STATE(29),
    [sym_ternary_functional_def] = STATE(29),
    [sym_ternary_if] = STATE(29),
    [sym_group] = STATE(7),
    [sym_group_paren] = STATE(6),
    [sym_group_brace_def] = STATE(24),
    [sym_literal] = STATE(15),
    [sym_bool_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [sym_unary_op] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_integer_literal] = ACTIONS(9),
    [sym_float_literal] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_octal_literal] = ACTIONS(9),
    [sym_hex_literal] = ACTIONS(9),
    [sym_binary_literal] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
  },
  [4] = {
    [sym__expression] = STATE(91),
    [sym_atom] = STATE(91),
    [sym_unary] = STATE(91),
    [sym_binary] = STATE(91),
    [sym_binary_assignment] = STATE(120),
    [sym_binary_access] = STATE(120),
    [sym_binary_symbolic] = STATE(120),
    [sym_ternary] = STATE(91),
    [sym_ternary_functional_stmt] = STATE(121),
    [sym_ternary_functional_def] = STATE(121),
    [sym_ternary_if] = STATE(121),
    [sym_group] = STATE(91),
    [sym_group_paren] = STATE(73),
    [sym_group_brace_def] = STATE(122),
    [sym_literal] = STATE(123),
    [sym_bool_literal] = STATE(118),
    [sym_char_literal] = STATE(118),
    [sym_string_literal] = STATE(118),
    [sym_unary_op] = STATE(59),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(43),
    [sym_float_literal] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_octal_literal] = ACTIONS(43),
    [sym_hex_literal] = ACTIONS(43),
    [sym_binary_literal] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
  },
  [5] = {
    [sym__expression] = STATE(104),
    [sym_atom] = STATE(104),
    [sym_unary] = STATE(104),
    [sym_binary] = STATE(104),
    [sym_binary_assignment] = STATE(161),
    [sym_binary_access] = STATE(161),
    [sym_binary_symbolic] = STATE(161),
    [sym_ternary] = STATE(104),
    [sym_ternary_functional_stmt] = STATE(167),
    [sym_ternary_functional_def] = STATE(167),
    [sym_ternary_if] = STATE(167),
    [sym_group] = STATE(104),
    [sym_group_paren] = STATE(74),
    [sym_group_brace_def] = STATE(166),
    [sym_literal] = STATE(165),
    [sym_bool_literal] = STATE(155),
    [sym_char_literal] = STATE(155),
    [sym_string_literal] = STATE(155),
    [sym_unary_op] = STATE(62),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(57),
    [sym_float_literal] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_octal_literal] = ACTIONS(57),
    [sym_hex_literal] = ACTIONS(57),
    [sym_binary_literal] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
  },
  [6] = {
    [sym_group_brace_def] = STATE(21),
    [sym_group_brace_stmt] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [sym_integer_literal] = ACTIONS(69),
    [sym_float_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_octal_literal] = ACTIONS(69),
    [sym_hex_literal] = ACTIONS(69),
    [sym_binary_literal] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
  },
  [7] = {
    [sym_binary_op] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_integer_literal] = ACTIONS(75),
    [sym_float_literal] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [sym_octal_literal] = ACTIONS(75),
    [sym_hex_literal] = ACTIONS(75),
    [sym_binary_literal] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(75),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(75),
  },
  [8] = {
    [sym_binary_op] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_integer_literal] = ACTIONS(81),
    [sym_float_literal] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_octal_literal] = ACTIONS(81),
    [sym_hex_literal] = ACTIONS(81),
    [sym_binary_literal] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(81),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
  },
  [9] = {
    [sym_binary_op] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_integer_literal] = ACTIONS(87),
    [sym_float_literal] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_octal_literal] = ACTIONS(87),
    [sym_hex_literal] = ACTIONS(87),
    [sym_binary_literal] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
  },
  [10] = {
    [sym_binary_op] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_integer_literal] = ACTIONS(79),
    [sym_float_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym_octal_literal] = ACTIONS(79),
    [sym_hex_literal] = ACTIONS(79),
    [sym_binary_literal] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
  },
  [11] = {
    [sym_binary_op] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [sym_integer_literal] = ACTIONS(95),
    [sym_float_literal] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [sym_octal_literal] = ACTIONS(95),
    [sym_hex_literal] = ACTIONS(95),
    [sym_binary_literal] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(95),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_AMP_AMP] = ACTIONS(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_AMP] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_LT_LT] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
  },
  [12] = {
    [sym_binary_op] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_integer_literal] = ACTIONS(101),
    [sym_float_literal] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_octal_literal] = ACTIONS(101),
    [sym_hex_literal] = ACTIONS(101),
    [sym_binary_literal] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_integer_literal] = ACTIONS(107),
    [sym_float_literal] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_octal_literal] = ACTIONS(107),
    [sym_hex_literal] = ACTIONS(107),
    [sym_binary_literal] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(111),
    [anon_sym_QMARK] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_integer_literal] = ACTIONS(111),
    [sym_float_literal] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [sym_octal_literal] = ACTIONS(111),
    [sym_hex_literal] = ACTIONS(111),
    [sym_binary_literal] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(111),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_AMP_AMP] = ACTIONS(111),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_integer_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_octal_literal] = ACTIONS(21),
    [sym_hex_literal] = ACTIONS(21),
    [sym_binary_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_QMARK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_integer_literal] = ACTIONS(115),
    [sym_float_literal] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [sym_octal_literal] = ACTIONS(115),
    [sym_hex_literal] = ACTIONS(115),
    [sym_binary_literal] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_QMARK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [sym_integer_literal] = ACTIONS(119),
    [sym_float_literal] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [sym_octal_literal] = ACTIONS(119),
    [sym_hex_literal] = ACTIONS(119),
    [sym_binary_literal] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(119),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_LT_LT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_QMARK] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_integer_literal] = ACTIONS(123),
    [sym_float_literal] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [sym_octal_literal] = ACTIONS(123),
    [sym_hex_literal] = ACTIONS(123),
    [sym_binary_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [anon_sym_PERCENT] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(123),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_QMARK] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [sym_integer_literal] = ACTIONS(127),
    [sym_float_literal] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [sym_octal_literal] = ACTIONS(127),
    [sym_hex_literal] = ACTIONS(127),
    [sym_binary_literal] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_identifier] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(127),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_integer_literal] = ACTIONS(131),
    [sym_float_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_octal_literal] = ACTIONS(131),
    [sym_hex_literal] = ACTIONS(131),
    [sym_binary_literal] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_QMARK] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [sym_integer_literal] = ACTIONS(135),
    [sym_float_literal] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [sym_octal_literal] = ACTIONS(135),
    [sym_hex_literal] = ACTIONS(135),
    [sym_binary_literal] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_BANG_EQ] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_GT_EQ] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_CARET] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [sym_integer_literal] = ACTIONS(139),
    [sym_float_literal] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [sym_octal_literal] = ACTIONS(139),
    [sym_hex_literal] = ACTIONS(139),
    [sym_binary_literal] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_BANG_EQ] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_GT_GT] = ACTIONS(139),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_QMARK] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [sym_integer_literal] = ACTIONS(143),
    [sym_float_literal] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_octal_literal] = ACTIONS(143),
    [sym_hex_literal] = ACTIONS(143),
    [sym_binary_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(143),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(143),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_BANG_EQ] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_integer_literal] = ACTIONS(69),
    [sym_float_literal] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_octal_literal] = ACTIONS(69),
    [sym_hex_literal] = ACTIONS(69),
    [sym_binary_literal] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_QMARK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [sym_integer_literal] = ACTIONS(147),
    [sym_float_literal] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_octal_literal] = ACTIONS(147),
    [sym_hex_literal] = ACTIONS(147),
    [sym_binary_literal] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(147),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_BANG_EQ] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(147),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [sym_integer_literal] = ACTIONS(151),
    [sym_float_literal] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_octal_literal] = ACTIONS(151),
    [sym_hex_literal] = ACTIONS(151),
    [sym_binary_literal] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_BANG_EQ] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(151),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_CARET] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [sym_integer_literal] = ACTIONS(131),
    [sym_float_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_octal_literal] = ACTIONS(131),
    [sym_hex_literal] = ACTIONS(131),
    [sym_binary_literal] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_QMARK] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [sym_integer_literal] = ACTIONS(155),
    [sym_float_literal] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_octal_literal] = ACTIONS(155),
    [sym_hex_literal] = ACTIONS(155),
    [sym_binary_literal] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(155),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_AMP] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_LT_LT] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_QMARK] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [sym_integer_literal] = ACTIONS(159),
    [sym_float_literal] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [sym_octal_literal] = ACTIONS(159),
    [sym_hex_literal] = ACTIONS(159),
    [sym_binary_literal] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_BANG] = ACTIONS(159),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(159),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_GT_GT] = ACTIONS(159),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [sym_integer_literal] = ACTIONS(163),
    [sym_float_literal] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_octal_literal] = ACTIONS(163),
    [sym_hex_literal] = ACTIONS(163),
    [sym_binary_literal] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_BANG] = ACTIONS(163),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_BANG_EQ] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_LT_EQ] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_PERCENT] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
  },
  [31] = {
    [sym__expression] = STATE(12),
    [sym_atom] = STATE(12),
    [sym_unary] = STATE(12),
    [sym_binary] = STATE(12),
    [sym_binary_assignment] = STATE(30),
    [sym_binary_access] = STATE(30),
    [sym_binary_symbolic] = STATE(30),
    [sym_ternary] = STATE(12),
    [sym_ternary_functional_stmt] = STATE(29),
    [sym_ternary_functional_def] = STATE(29),
    [sym_ternary_if] = STATE(29),
    [sym_group] = STATE(12),
    [sym_group_paren] = STATE(24),
    [sym_group_brace_def] = STATE(24),
    [sym_literal] = STATE(15),
    [sym_bool_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [sym_unary_op] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_integer_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(176),
    [anon_sym_false] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [sym_octal_literal] = ACTIONS(173),
    [sym_hex_literal] = ACTIONS(173),
    [sym_binary_literal] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(188),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
  },
  [32] = {
    [sym__expression] = STATE(12),
    [sym_atom] = STATE(12),
    [sym_unary] = STATE(12),
    [sym_binary] = STATE(12),
    [sym_binary_assignment] = STATE(30),
    [sym_binary_access] = STATE(30),
    [sym_binary_symbolic] = STATE(30),
    [sym_ternary] = STATE(12),
    [sym_ternary_functional_stmt] = STATE(29),
    [sym_ternary_functional_def] = STATE(29),
    [sym_ternary_if] = STATE(29),
    [sym_group] = STATE(12),
    [sym_group_paren] = STATE(24),
    [sym_group_brace_def] = STATE(24),
    [sym_literal] = STATE(15),
    [sym_bool_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_string_literal] = STATE(16),
    [sym_unary_op] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_integer_literal] = ACTIONS(9),
    [sym_float_literal] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_octal_literal] = ACTIONS(9),
    [sym_hex_literal] = ACTIONS(9),
    [sym_binary_literal] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_unary_op,
    STATE(110), 1,
      sym_binary_assignment,
    STATE(123), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(95), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [69] = 16,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(93), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [136] = 16,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(87), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [203] = 16,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(97), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [270] = 16,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(98), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [337] = 17,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_unary_op,
    STATE(138), 1,
      sym_binary_assignment,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(161), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(115), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [406] = 17,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    STATE(138), 1,
      sym_binary_assignment,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(89), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [475] = 16,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(81), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [542] = 16,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(90), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [609] = 17,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_unary_op,
    STATE(128), 1,
      sym_binary_assignment,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(161), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(115), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [678] = 17,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    STATE(127), 1,
      sym_binary_assignment,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(99), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [747] = 17,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    STATE(128), 1,
      sym_binary_assignment,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(120), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(92), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [816] = 16,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(75), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [883] = 17,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_unary_op,
    STATE(110), 1,
      sym_binary_assignment,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(161), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(115), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [952] = 17,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_unary_op,
    STATE(127), 1,
      sym_binary_assignment,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(161), 2,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(115), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1021] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(112), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1085] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(113), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1149] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(108), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1213] = 15,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_literal,
    STATE(60), 1,
      sym_unary_op,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    STATE(24), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(16), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(29), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    STATE(30), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    ACTIONS(9), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(11), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1277] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(126), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1341] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(100), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1405] = 15,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_literal,
    STATE(60), 1,
      sym_unary_op,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    STATE(24), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(16), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(29), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    STATE(30), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    ACTIONS(9), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(9), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1469] = 15,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(120), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(94), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1533] = 15,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_literal,
    STATE(60), 1,
      sym_unary_op,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    STATE(24), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(16), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(29), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    STATE(30), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    ACTIONS(9), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(8), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1597] = 15,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_literal,
    STATE(60), 1,
      sym_unary_op,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    STATE(24), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(16), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(29), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    STATE(30), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    ACTIONS(9), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(10), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1661] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(117), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1725] = 15,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(120), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(91), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1789] = 15,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(15), 1,
      sym_literal,
    STATE(60), 1,
      sym_unary_op,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    STATE(24), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(16), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(29), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    STATE(30), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    ACTIONS(9), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(7), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1853] = 15,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(120), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(77), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1917] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(104), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [1981] = 15,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(88), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2045] = 15,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(85), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2109] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(137), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2173] = 15,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(120), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(84), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2237] = 15,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym_unary_op,
    STATE(123), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(118), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(120), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(121), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(43), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(82), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2301] = 15,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_unary_op,
    STATE(165), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(166), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(155), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(161), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(167), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(57), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(102), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2365] = 15,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(78), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2429] = 15,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(79), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2493] = 15,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_unary_op,
    STATE(111), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym_group_paren,
      sym_group_brace_def,
    STATE(103), 3,
      sym_bool_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(106), 3,
      sym_binary_assignment,
      sym_binary_access,
      sym_binary_symbolic,
    STATE(107), 3,
      sym_ternary_functional_stmt,
      sym_ternary_functional_def,
      sym_ternary_if,
    ACTIONS(27), 5,
      sym_integer_literal,
      sym_float_literal,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
    STATE(80), 6,
      sym__expression,
      sym_atom,
      sym_unary,
      sym_binary,
      sym_ternary,
      sym_group,
  [2557] = 4,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_group_brace_stmt,
    STATE(150), 1,
      sym_group_brace_def,
    ACTIONS(69), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2592] = 4,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_group_brace_def,
    STATE(136), 1,
      sym_group_brace_stmt,
    ACTIONS(69), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2627] = 4,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_group_brace_stmt,
    STATE(164), 1,
      sym_group_brace_def,
    ACTIONS(69), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2661] = 6,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2698] = 1,
    ACTIONS(123), 24,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2725] = 3,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(79), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2756] = 2,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(79), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2785] = 4,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(87), 21,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2818] = 4,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(95), 21,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2851] = 6,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2888] = 4,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_QMARK,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(95), 21,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2921] = 1,
    ACTIONS(107), 24,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2948] = 4,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_QMARK,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(87), 21,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2981] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(79), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3012] = 1,
    ACTIONS(107), 24,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3039] = 6,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3076] = 2,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(75), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3105] = 6,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_QMARK,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3142] = 6,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3179] = 2,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(75), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3208] = 6,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_QMARK,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3245] = 6,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3282] = 2,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(79), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3311] = 6,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_QMARK,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3348] = 1,
    ACTIONS(123), 24,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3375] = 6,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3412] = 6,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(239), 1,
      anon_sym_QMARK,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3449] = 6,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_QMARK,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3486] = 5,
    ACTIONS(269), 1,
      anon_sym_COLON,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_QMARK,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3520] = 1,
    ACTIONS(127), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3546] = 5,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_QMARK,
    ACTIONS(275), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3580] = 1,
    ACTIONS(115), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3606] = 2,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(75), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3634] = 1,
    ACTIONS(119), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3660] = 1,
    ACTIONS(163), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3686] = 1,
    ACTIONS(159), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3712] = 5,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_QMARK,
    ACTIONS(277), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3746] = 1,
    ACTIONS(69), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3772] = 2,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3800] = 1,
    ACTIONS(21), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3826] = 4,
    ACTIONS(273), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(87), 20,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3858] = 4,
    ACTIONS(273), 1,
      anon_sym_QMARK,
    ACTIONS(281), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(95), 20,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3890] = 1,
    ACTIONS(123), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3916] = 5,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_QMARK,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3950] = 1,
    ACTIONS(131), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [3976] = 2,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(79), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4004] = 1,
    ACTIONS(115), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4030] = 1,
    ACTIONS(119), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4056] = 1,
    ACTIONS(163), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4082] = 1,
    ACTIONS(159), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4108] = 1,
    ACTIONS(69), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4134] = 1,
    ACTIONS(21), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4160] = 1,
    ACTIONS(131), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4186] = 1,
    ACTIONS(147), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4212] = 5,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_QMARK,
    ACTIONS(283), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(103), 19,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4246] = 2,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4274] = 2,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4302] = 1,
    ACTIONS(147), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4328] = 1,
    ACTIONS(107), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4354] = 1,
    ACTIONS(151), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4380] = 1,
    ACTIONS(151), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4406] = 1,
    ACTIONS(111), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4432] = 1,
    ACTIONS(143), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4458] = 1,
    ACTIONS(135), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4484] = 1,
    ACTIONS(127), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4510] = 2,
    STATE(49), 1,
      sym_binary_op,
    ACTIONS(79), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4538] = 2,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4566] = 1,
    ACTIONS(139), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4592] = 1,
    ACTIONS(155), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4618] = 1,
    ACTIONS(131), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4644] = 1,
    ACTIONS(131), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4670] = 1,
    ACTIONS(139), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4696] = 1,
    ACTIONS(155), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4722] = 1,
    ACTIONS(123), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4748] = 1,
    ACTIONS(107), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4774] = 1,
    ACTIONS(123), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4800] = 1,
    ACTIONS(107), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4826] = 1,
    ACTIONS(111), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4852] = 1,
    ACTIONS(135), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4878] = 1,
    ACTIONS(143), 23,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4904] = 1,
    ACTIONS(107), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4929] = 1,
    ACTIONS(127), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4954] = 1,
    ACTIONS(123), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [4979] = 1,
    ACTIONS(115), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5004] = 1,
    ACTIONS(155), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5029] = 1,
    ACTIONS(131), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5054] = 1,
    ACTIONS(147), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5079] = 1,
    ACTIONS(151), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5104] = 1,
    ACTIONS(119), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5129] = 1,
    ACTIONS(163), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5154] = 1,
    ACTIONS(111), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5179] = 1,
    ACTIONS(143), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5204] = 1,
    ACTIONS(135), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5229] = 1,
    ACTIONS(21), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5254] = 1,
    ACTIONS(69), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5279] = 1,
    ACTIONS(159), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5304] = 1,
    ACTIONS(131), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5329] = 1,
    ACTIONS(139), 22,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5354] = 1,
    ACTIONS(291), 14,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_integer_literal,
      sym_float_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SQUOTE,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
  [5371] = 1,
    ACTIONS(293), 14,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_integer_literal,
      sym_float_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SQUOTE,
      sym_octal_literal,
      sym_hex_literal,
      sym_binary_literal,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_BANG,
      anon_sym_DOT_DOT_DOT,
  [5388] = 4,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_content_repeat1,
    STATE(188), 1,
      sym_string_content,
    ACTIONS(297), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5402] = 4,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_content_repeat1,
    STATE(189), 1,
      sym_string_content,
    ACTIONS(297), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5416] = 4,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_content_repeat1,
    STATE(193), 1,
      sym_string_content,
    ACTIONS(297), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5430] = 4,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_content_repeat1,
    STATE(190), 1,
      sym_string_content,
    ACTIONS(297), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5444] = 3,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(307), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5455] = 3,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(311), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [5466] = 2,
    ACTIONS(314), 1,
      aux_sym_char_literal_token1,
    ACTIONS(316), 1,
      anon_sym_BSLASH,
  [5473] = 2,
    ACTIONS(318), 1,
      aux_sym_char_literal_token1,
    ACTIONS(320), 1,
      anon_sym_BSLASH,
  [5480] = 2,
    ACTIONS(322), 1,
      aux_sym_char_literal_token1,
    ACTIONS(324), 1,
      anon_sym_BSLASH,
  [5487] = 2,
    ACTIONS(326), 1,
      aux_sym_char_literal_token1,
    ACTIONS(328), 1,
      anon_sym_BSLASH,
  [5494] = 1,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
  [5498] = 1,
    ACTIONS(332), 1,
      aux_sym_char_literal_token2,
  [5502] = 1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [5506] = 1,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
  [5510] = 1,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
  [5514] = 1,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
  [5518] = 1,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
  [5522] = 1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
  [5526] = 1,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
  [5530] = 1,
    ACTIONS(348), 1,
      aux_sym_char_literal_token2,
  [5534] = 1,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
  [5538] = 1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [5542] = 1,
    ACTIONS(354), 1,
      aux_sym_char_literal_token2,
  [5546] = 1,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
  [5550] = 1,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
  [5554] = 1,
    ACTIONS(360), 1,
      aux_sym_char_literal_token2,
  [5558] = 1,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(33)] = 0,
  [SMALL_STATE(34)] = 69,
  [SMALL_STATE(35)] = 136,
  [SMALL_STATE(36)] = 203,
  [SMALL_STATE(37)] = 270,
  [SMALL_STATE(38)] = 337,
  [SMALL_STATE(39)] = 406,
  [SMALL_STATE(40)] = 475,
  [SMALL_STATE(41)] = 542,
  [SMALL_STATE(42)] = 609,
  [SMALL_STATE(43)] = 678,
  [SMALL_STATE(44)] = 747,
  [SMALL_STATE(45)] = 816,
  [SMALL_STATE(46)] = 883,
  [SMALL_STATE(47)] = 952,
  [SMALL_STATE(48)] = 1021,
  [SMALL_STATE(49)] = 1085,
  [SMALL_STATE(50)] = 1149,
  [SMALL_STATE(51)] = 1213,
  [SMALL_STATE(52)] = 1277,
  [SMALL_STATE(53)] = 1341,
  [SMALL_STATE(54)] = 1405,
  [SMALL_STATE(55)] = 1469,
  [SMALL_STATE(56)] = 1533,
  [SMALL_STATE(57)] = 1597,
  [SMALL_STATE(58)] = 1661,
  [SMALL_STATE(59)] = 1725,
  [SMALL_STATE(60)] = 1789,
  [SMALL_STATE(61)] = 1853,
  [SMALL_STATE(62)] = 1917,
  [SMALL_STATE(63)] = 1981,
  [SMALL_STATE(64)] = 2045,
  [SMALL_STATE(65)] = 2109,
  [SMALL_STATE(66)] = 2173,
  [SMALL_STATE(67)] = 2237,
  [SMALL_STATE(68)] = 2301,
  [SMALL_STATE(69)] = 2365,
  [SMALL_STATE(70)] = 2429,
  [SMALL_STATE(71)] = 2493,
  [SMALL_STATE(72)] = 2557,
  [SMALL_STATE(73)] = 2592,
  [SMALL_STATE(74)] = 2627,
  [SMALL_STATE(75)] = 2661,
  [SMALL_STATE(76)] = 2698,
  [SMALL_STATE(77)] = 2725,
  [SMALL_STATE(78)] = 2756,
  [SMALL_STATE(79)] = 2785,
  [SMALL_STATE(80)] = 2818,
  [SMALL_STATE(81)] = 2851,
  [SMALL_STATE(82)] = 2888,
  [SMALL_STATE(83)] = 2921,
  [SMALL_STATE(84)] = 2948,
  [SMALL_STATE(85)] = 2981,
  [SMALL_STATE(86)] = 3012,
  [SMALL_STATE(87)] = 3039,
  [SMALL_STATE(88)] = 3076,
  [SMALL_STATE(89)] = 3105,
  [SMALL_STATE(90)] = 3142,
  [SMALL_STATE(91)] = 3179,
  [SMALL_STATE(92)] = 3208,
  [SMALL_STATE(93)] = 3245,
  [SMALL_STATE(94)] = 3282,
  [SMALL_STATE(95)] = 3311,
  [SMALL_STATE(96)] = 3348,
  [SMALL_STATE(97)] = 3375,
  [SMALL_STATE(98)] = 3412,
  [SMALL_STATE(99)] = 3449,
  [SMALL_STATE(100)] = 3486,
  [SMALL_STATE(101)] = 3520,
  [SMALL_STATE(102)] = 3546,
  [SMALL_STATE(103)] = 3580,
  [SMALL_STATE(104)] = 3606,
  [SMALL_STATE(105)] = 3634,
  [SMALL_STATE(106)] = 3660,
  [SMALL_STATE(107)] = 3686,
  [SMALL_STATE(108)] = 3712,
  [SMALL_STATE(109)] = 3746,
  [SMALL_STATE(110)] = 3772,
  [SMALL_STATE(111)] = 3800,
  [SMALL_STATE(112)] = 3826,
  [SMALL_STATE(113)] = 3858,
  [SMALL_STATE(114)] = 3890,
  [SMALL_STATE(115)] = 3916,
  [SMALL_STATE(116)] = 3950,
  [SMALL_STATE(117)] = 3976,
  [SMALL_STATE(118)] = 4004,
  [SMALL_STATE(119)] = 4030,
  [SMALL_STATE(120)] = 4056,
  [SMALL_STATE(121)] = 4082,
  [SMALL_STATE(122)] = 4108,
  [SMALL_STATE(123)] = 4134,
  [SMALL_STATE(124)] = 4160,
  [SMALL_STATE(125)] = 4186,
  [SMALL_STATE(126)] = 4212,
  [SMALL_STATE(127)] = 4246,
  [SMALL_STATE(128)] = 4274,
  [SMALL_STATE(129)] = 4302,
  [SMALL_STATE(130)] = 4328,
  [SMALL_STATE(131)] = 4354,
  [SMALL_STATE(132)] = 4380,
  [SMALL_STATE(133)] = 4406,
  [SMALL_STATE(134)] = 4432,
  [SMALL_STATE(135)] = 4458,
  [SMALL_STATE(136)] = 4484,
  [SMALL_STATE(137)] = 4510,
  [SMALL_STATE(138)] = 4538,
  [SMALL_STATE(139)] = 4566,
  [SMALL_STATE(140)] = 4592,
  [SMALL_STATE(141)] = 4618,
  [SMALL_STATE(142)] = 4644,
  [SMALL_STATE(143)] = 4670,
  [SMALL_STATE(144)] = 4696,
  [SMALL_STATE(145)] = 4722,
  [SMALL_STATE(146)] = 4748,
  [SMALL_STATE(147)] = 4774,
  [SMALL_STATE(148)] = 4800,
  [SMALL_STATE(149)] = 4826,
  [SMALL_STATE(150)] = 4852,
  [SMALL_STATE(151)] = 4878,
  [SMALL_STATE(152)] = 4904,
  [SMALL_STATE(153)] = 4929,
  [SMALL_STATE(154)] = 4954,
  [SMALL_STATE(155)] = 4979,
  [SMALL_STATE(156)] = 5004,
  [SMALL_STATE(157)] = 5029,
  [SMALL_STATE(158)] = 5054,
  [SMALL_STATE(159)] = 5079,
  [SMALL_STATE(160)] = 5104,
  [SMALL_STATE(161)] = 5129,
  [SMALL_STATE(162)] = 5154,
  [SMALL_STATE(163)] = 5179,
  [SMALL_STATE(164)] = 5204,
  [SMALL_STATE(165)] = 5229,
  [SMALL_STATE(166)] = 5254,
  [SMALL_STATE(167)] = 5279,
  [SMALL_STATE(168)] = 5304,
  [SMALL_STATE(169)] = 5329,
  [SMALL_STATE(170)] = 5354,
  [SMALL_STATE(171)] = 5371,
  [SMALL_STATE(172)] = 5388,
  [SMALL_STATE(173)] = 5402,
  [SMALL_STATE(174)] = 5416,
  [SMALL_STATE(175)] = 5430,
  [SMALL_STATE(176)] = 5444,
  [SMALL_STATE(177)] = 5455,
  [SMALL_STATE(178)] = 5466,
  [SMALL_STATE(179)] = 5473,
  [SMALL_STATE(180)] = 5480,
  [SMALL_STATE(181)] = 5487,
  [SMALL_STATE(182)] = 5494,
  [SMALL_STATE(183)] = 5498,
  [SMALL_STATE(184)] = 5502,
  [SMALL_STATE(185)] = 5506,
  [SMALL_STATE(186)] = 5510,
  [SMALL_STATE(187)] = 5514,
  [SMALL_STATE(188)] = 5518,
  [SMALL_STATE(189)] = 5522,
  [SMALL_STATE(190)] = 5526,
  [SMALL_STATE(191)] = 5530,
  [SMALL_STATE(192)] = 5534,
  [SMALL_STATE(193)] = 5538,
  [SMALL_STATE(194)] = 5542,
  [SMALL_STATE(195)] = 5546,
  [SMALL_STATE(196)] = 5550,
  [SMALL_STATE(197)] = 5554,
  [SMALL_STATE(198)] = 5558,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_if, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_assignment, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_if, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_access, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_access, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_assignment, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_symbolic, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_symbolic, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_paren, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_paren, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_paren, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_paren, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_functional_stmt, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_functional_stmt, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_brace_def, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_brace_def, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_functional_def, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_functional_def, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_brace_stmt, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_brace_stmt, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_brace_def, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_brace_def, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(177),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Zen(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
