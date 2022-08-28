#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_variable = 1,
  anon_sym_2variable = 2,
  anon_sym_create = 3,
  anon_sym_constant = 4,
  anon_sym_2constant = 5,
  anon_sym_COLON = 6,
  anon_sym_SEMI = 7,
  anon_sym_include = 8,
  anon_sym_if = 9,
  anon_sym_endif = 10,
  anon_sym_to = 11,
  anon_sym_else = 12,
  anon_sym_then = 13,
  anon_sym_case = 14,
  anon_sym_endcase = 15,
  anon_sym_of = 16,
  anon_sym_endof = 17,
  anon_sym_begin = 18,
  anon_sym_while = 19,
  anon_sym_repeat = 20,
  anon_sym_until = 21,
  anon_sym_again = 22,
  anon_sym_do = 23,
  anon_sym_QMARKdo = 24,
  anon_sym_loop = 25,
  anon_sym_leave = 26,
  anon_sym_unloop = 27,
  anon_sym_PLUSdo = 28,
  anon_sym_PLUSloop = 29,
  anon_sym_DASHdo = 30,
  anon_sym_DASHloop = 31,
  anon_sym_for = 32,
  anon_sym_next = 33,
  anon_sym_next_DASHcase = 34,
  anon_sym_QMARKof = 35,
  anon_sym_contof = 36,
  anon_sym_ahead = 37,
  anon_sym_cs_DASHpick = 38,
  anon_sym_cs_DASHroll = 39,
  anon_sym_cs_DASHdrop = 40,
  anon_sym_QMARKdup_DASHif = 41,
  anon_sym_QMARKdup_DASH0_EQ_DASHif = 42,
  anon_sym_u_PLUSdo = 43,
  anon_sym_u_DASHdo = 44,
  anon_sym_QMARKleave = 45,
  anon_sym_defer = 46,
  anon_sym_is = 47,
  anon_sym_recursive = 48,
  anon_sym_recurse = 49,
  anon_sym_throw = 50,
  anon_sym_exception = 51,
  anon_sym_catch = 52,
  anon_sym_executes = 53,
  anon_sym_nothrow = 54,
  anon_sym_try = 55,
  anon_sym_endtry = 56,
  anon_sym_iferror = 57,
  anon_sym_restore = 58,
  anon_sym_endtry_DASHiferror = 59,
  anon_sym_recover = 60,
  anon_sym_abort_DQUOTE = 61,
  anon_sym_abort = 62,
  anon_sym_warning_DQUOTE = 63,
  anon_sym_warnings = 64,
  aux_sym_comment_token1 = 65,
  aux_sym_comment_token2 = 66,
  sym_identifier = 67,
  sym_string = 68,
  sym_source_file = 69,
  sym__expression = 70,
  sym_variable_definition = 71,
  sym_constant_definition = 72,
  sym_function_definition = 73,
  sym_include_statement = 74,
  sym__word = 75,
  sym_keyword = 76,
  sym_comment = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_function_definition_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_variable] = "variable",
  [anon_sym_2variable] = "2variable",
  [anon_sym_create] = "create",
  [anon_sym_constant] = "constant",
  [anon_sym_2constant] = "2constant",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_include] = "include",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_to] = "to",
  [anon_sym_else] = "else",
  [anon_sym_then] = "then",
  [anon_sym_case] = "case",
  [anon_sym_endcase] = "endcase",
  [anon_sym_of] = "of",
  [anon_sym_endof] = "endof",
  [anon_sym_begin] = "begin",
  [anon_sym_while] = "while",
  [anon_sym_repeat] = "repeat",
  [anon_sym_until] = "until",
  [anon_sym_again] = "again",
  [anon_sym_do] = "do",
  [anon_sym_QMARKdo] = "\?do",
  [anon_sym_loop] = "loop",
  [anon_sym_leave] = "leave",
  [anon_sym_unloop] = "unloop",
  [anon_sym_PLUSdo] = "+do",
  [anon_sym_PLUSloop] = "+loop",
  [anon_sym_DASHdo] = "-do",
  [anon_sym_DASHloop] = "-loop",
  [anon_sym_for] = "for",
  [anon_sym_next] = "next",
  [anon_sym_next_DASHcase] = "next-case",
  [anon_sym_QMARKof] = "\?of",
  [anon_sym_contof] = "contof",
  [anon_sym_ahead] = "ahead",
  [anon_sym_cs_DASHpick] = "cs-pick",
  [anon_sym_cs_DASHroll] = "cs-roll",
  [anon_sym_cs_DASHdrop] = "cs-drop",
  [anon_sym_QMARKdup_DASHif] = "\?dup-if",
  [anon_sym_QMARKdup_DASH0_EQ_DASHif] = "\?dup-0=-if",
  [anon_sym_u_PLUSdo] = "u+do",
  [anon_sym_u_DASHdo] = "u-do",
  [anon_sym_QMARKleave] = "\?leave",
  [anon_sym_defer] = "defer",
  [anon_sym_is] = "is",
  [anon_sym_recursive] = "recursive",
  [anon_sym_recurse] = "recurse",
  [anon_sym_throw] = "throw",
  [anon_sym_exception] = "exception",
  [anon_sym_catch] = "catch",
  [anon_sym_executes] = "executes",
  [anon_sym_nothrow] = "nothrow",
  [anon_sym_try] = "try",
  [anon_sym_endtry] = "endtry",
  [anon_sym_iferror] = "iferror",
  [anon_sym_restore] = "restore",
  [anon_sym_endtry_DASHiferror] = "endtry-iferror",
  [anon_sym_recover] = "recover",
  [anon_sym_abort_DQUOTE] = "abort\"",
  [anon_sym_abort] = "abort",
  [anon_sym_warning_DQUOTE] = "warning\"",
  [anon_sym_warnings] = "warnings",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_variable_definition] = "variable_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_function_definition] = "function_definition",
  [sym_include_statement] = "include_statement",
  [sym__word] = "_word",
  [sym_keyword] = "keyword",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_2variable] = anon_sym_2variable,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_2constant] = anon_sym_2constant,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_endcase] = anon_sym_endcase,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_endof] = anon_sym_endof,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_again] = anon_sym_again,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_QMARKdo] = anon_sym_QMARKdo,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_leave] = anon_sym_leave,
  [anon_sym_unloop] = anon_sym_unloop,
  [anon_sym_PLUSdo] = anon_sym_PLUSdo,
  [anon_sym_PLUSloop] = anon_sym_PLUSloop,
  [anon_sym_DASHdo] = anon_sym_DASHdo,
  [anon_sym_DASHloop] = anon_sym_DASHloop,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_next_DASHcase] = anon_sym_next_DASHcase,
  [anon_sym_QMARKof] = anon_sym_QMARKof,
  [anon_sym_contof] = anon_sym_contof,
  [anon_sym_ahead] = anon_sym_ahead,
  [anon_sym_cs_DASHpick] = anon_sym_cs_DASHpick,
  [anon_sym_cs_DASHroll] = anon_sym_cs_DASHroll,
  [anon_sym_cs_DASHdrop] = anon_sym_cs_DASHdrop,
  [anon_sym_QMARKdup_DASHif] = anon_sym_QMARKdup_DASHif,
  [anon_sym_QMARKdup_DASH0_EQ_DASHif] = anon_sym_QMARKdup_DASH0_EQ_DASHif,
  [anon_sym_u_PLUSdo] = anon_sym_u_PLUSdo,
  [anon_sym_u_DASHdo] = anon_sym_u_DASHdo,
  [anon_sym_QMARKleave] = anon_sym_QMARKleave,
  [anon_sym_defer] = anon_sym_defer,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_recursive] = anon_sym_recursive,
  [anon_sym_recurse] = anon_sym_recurse,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_exception] = anon_sym_exception,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_executes] = anon_sym_executes,
  [anon_sym_nothrow] = anon_sym_nothrow,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_endtry] = anon_sym_endtry,
  [anon_sym_iferror] = anon_sym_iferror,
  [anon_sym_restore] = anon_sym_restore,
  [anon_sym_endtry_DASHiferror] = anon_sym_endtry_DASHiferror,
  [anon_sym_recover] = anon_sym_recover,
  [anon_sym_abort_DQUOTE] = anon_sym_abort_DQUOTE,
  [anon_sym_abort] = anon_sym_abort,
  [anon_sym_warning_DQUOTE] = anon_sym_warning_DQUOTE,
  [anon_sym_warnings] = anon_sym_warnings,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_variable_definition] = sym_variable_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_include_statement] = sym_include_statement,
  [sym__word] = sym__word,
  [sym_keyword] = sym_keyword,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_again] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unloop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUSdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUSloop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHloop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next_DASHcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ahead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cs_DASHpick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cs_DASHroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cs_DASHdrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKdup_DASHif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKdup_DASH0_EQ_DASHif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_PLUSdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKleave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recursive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recurse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exception] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nothrow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iferror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtry_DASHiferror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abort_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warnings] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_file = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file] = "file",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_file, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '2') ADVANCE(110);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead == '.' ||
          lookahead == 's') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead == '.' ||
          lookahead == 's') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '2') ADVANCE(110);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead == '.' ||
          lookahead == 's') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_variable);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_2variable);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_constant);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_2constant);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_endif);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_endcase);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_endof);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_begin);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_until);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_again);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARKdo);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_loop);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_leave);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_unloop);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUSdo);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUSloop);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASHdo);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASHloop);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_next);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_next_DASHcase);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_QMARKof);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_contof);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ahead);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_cs_DASHpick);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_cs_DASHroll);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_cs_DASHdrop);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_QMARKdup_DASHif);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_QMARKdup_DASH0_EQ_DASHif);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_u_PLUSdo);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_u_DASHdo);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARKleave);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_recursive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_recurse);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_throw);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_exception);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_executes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_nothrow);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_try);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_endtry);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_iferror);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_restore);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_endtry_DASHiferror);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_recover);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_abort_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_warning_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_warnings);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(282);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(282);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(282);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [anon_sym_2variable] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_2constant] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_endcase] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_endof] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_again] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_QMARKdo] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_leave] = ACTIONS(1),
    [anon_sym_unloop] = ACTIONS(1),
    [anon_sym_PLUSdo] = ACTIONS(1),
    [anon_sym_PLUSloop] = ACTIONS(1),
    [anon_sym_DASHdo] = ACTIONS(1),
    [anon_sym_DASHloop] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_next_DASHcase] = ACTIONS(1),
    [anon_sym_QMARKof] = ACTIONS(1),
    [anon_sym_contof] = ACTIONS(1),
    [anon_sym_ahead] = ACTIONS(1),
    [anon_sym_cs_DASHpick] = ACTIONS(1),
    [anon_sym_cs_DASHroll] = ACTIONS(1),
    [anon_sym_cs_DASHdrop] = ACTIONS(1),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(1),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(1),
    [anon_sym_u_PLUSdo] = ACTIONS(1),
    [anon_sym_u_DASHdo] = ACTIONS(1),
    [anon_sym_QMARKleave] = ACTIONS(1),
    [anon_sym_defer] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_recursive] = ACTIONS(1),
    [anon_sym_recurse] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_exception] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_executes] = ACTIONS(1),
    [anon_sym_nothrow] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_endtry] = ACTIONS(1),
    [anon_sym_iferror] = ACTIONS(1),
    [anon_sym_restore] = ACTIONS(1),
    [anon_sym_endtry_DASHiferror] = ACTIONS(1),
    [anon_sym_recover] = ACTIONS(1),
    [anon_sym_abort_DQUOTE] = ACTIONS(1),
    [anon_sym_abort] = ACTIONS(1),
    [anon_sym_warning_DQUOTE] = ACTIONS(1),
    [anon_sym_warnings] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym__expression] = STATE(4),
    [sym_variable_definition] = STATE(4),
    [sym_constant_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_include_statement] = STATE(4),
    [sym__word] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_variable] = ACTIONS(5),
    [anon_sym_2variable] = ACTIONS(5),
    [anon_sym_create] = ACTIONS(5),
    [anon_sym_constant] = ACTIONS(7),
    [anon_sym_2constant] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_endif] = ACTIONS(13),
    [anon_sym_to] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_then] = ACTIONS(13),
    [anon_sym_case] = ACTIONS(13),
    [anon_sym_endcase] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_endof] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_until] = ACTIONS(13),
    [anon_sym_again] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(13),
    [anon_sym_QMARKdo] = ACTIONS(13),
    [anon_sym_loop] = ACTIONS(13),
    [anon_sym_leave] = ACTIONS(13),
    [anon_sym_unloop] = ACTIONS(13),
    [anon_sym_PLUSdo] = ACTIONS(13),
    [anon_sym_PLUSloop] = ACTIONS(13),
    [anon_sym_DASHdo] = ACTIONS(13),
    [anon_sym_DASHloop] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_next] = ACTIONS(13),
    [anon_sym_next_DASHcase] = ACTIONS(13),
    [anon_sym_QMARKof] = ACTIONS(13),
    [anon_sym_contof] = ACTIONS(13),
    [anon_sym_ahead] = ACTIONS(13),
    [anon_sym_cs_DASHpick] = ACTIONS(13),
    [anon_sym_cs_DASHroll] = ACTIONS(13),
    [anon_sym_cs_DASHdrop] = ACTIONS(13),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(13),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(13),
    [anon_sym_u_PLUSdo] = ACTIONS(13),
    [anon_sym_u_DASHdo] = ACTIONS(13),
    [anon_sym_QMARKleave] = ACTIONS(13),
    [anon_sym_defer] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_recursive] = ACTIONS(13),
    [anon_sym_recurse] = ACTIONS(13),
    [anon_sym_throw] = ACTIONS(13),
    [anon_sym_exception] = ACTIONS(13),
    [anon_sym_catch] = ACTIONS(13),
    [anon_sym_executes] = ACTIONS(13),
    [anon_sym_nothrow] = ACTIONS(13),
    [anon_sym_try] = ACTIONS(13),
    [anon_sym_endtry] = ACTIONS(13),
    [anon_sym_iferror] = ACTIONS(13),
    [anon_sym_restore] = ACTIONS(13),
    [anon_sym_endtry_DASHiferror] = ACTIONS(13),
    [anon_sym_recover] = ACTIONS(13),
    [anon_sym_abort_DQUOTE] = ACTIONS(13),
    [anon_sym_abort] = ACTIONS(13),
    [anon_sym_warning_DQUOTE] = ACTIONS(13),
    [anon_sym_warnings] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(15),
    [aux_sym_comment_token2] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
  },
  [2] = {
    [sym__expression] = STATE(4),
    [sym_variable_definition] = STATE(4),
    [sym_constant_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_include_statement] = STATE(4),
    [sym__word] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_variable] = ACTIONS(23),
    [anon_sym_2variable] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_constant] = ACTIONS(26),
    [anon_sym_2constant] = ACTIONS(26),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_endif] = ACTIONS(35),
    [anon_sym_to] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_then] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_endcase] = ACTIONS(35),
    [anon_sym_of] = ACTIONS(35),
    [anon_sym_endof] = ACTIONS(35),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_repeat] = ACTIONS(35),
    [anon_sym_until] = ACTIONS(35),
    [anon_sym_again] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(35),
    [anon_sym_QMARKdo] = ACTIONS(35),
    [anon_sym_loop] = ACTIONS(35),
    [anon_sym_leave] = ACTIONS(35),
    [anon_sym_unloop] = ACTIONS(35),
    [anon_sym_PLUSdo] = ACTIONS(35),
    [anon_sym_PLUSloop] = ACTIONS(35),
    [anon_sym_DASHdo] = ACTIONS(35),
    [anon_sym_DASHloop] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_next] = ACTIONS(35),
    [anon_sym_next_DASHcase] = ACTIONS(35),
    [anon_sym_QMARKof] = ACTIONS(35),
    [anon_sym_contof] = ACTIONS(35),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_cs_DASHpick] = ACTIONS(35),
    [anon_sym_cs_DASHroll] = ACTIONS(35),
    [anon_sym_cs_DASHdrop] = ACTIONS(35),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(35),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(35),
    [anon_sym_u_PLUSdo] = ACTIONS(35),
    [anon_sym_u_DASHdo] = ACTIONS(35),
    [anon_sym_QMARKleave] = ACTIONS(35),
    [anon_sym_defer] = ACTIONS(35),
    [anon_sym_is] = ACTIONS(35),
    [anon_sym_recursive] = ACTIONS(35),
    [anon_sym_recurse] = ACTIONS(35),
    [anon_sym_throw] = ACTIONS(35),
    [anon_sym_exception] = ACTIONS(35),
    [anon_sym_catch] = ACTIONS(35),
    [anon_sym_executes] = ACTIONS(35),
    [anon_sym_nothrow] = ACTIONS(35),
    [anon_sym_try] = ACTIONS(35),
    [anon_sym_endtry] = ACTIONS(35),
    [anon_sym_iferror] = ACTIONS(35),
    [anon_sym_restore] = ACTIONS(35),
    [anon_sym_endtry_DASHiferror] = ACTIONS(35),
    [anon_sym_recover] = ACTIONS(35),
    [anon_sym_abort_DQUOTE] = ACTIONS(35),
    [anon_sym_abort] = ACTIONS(35),
    [anon_sym_warning_DQUOTE] = ACTIONS(35),
    [anon_sym_warnings] = ACTIONS(35),
    [aux_sym_comment_token1] = ACTIONS(38),
    [aux_sym_comment_token2] = ACTIONS(38),
    [sym_identifier] = ACTIONS(41),
    [sym_string] = ACTIONS(44),
  },
  [3] = {
    [sym__expression] = STATE(4),
    [sym_variable_definition] = STATE(4),
    [sym_constant_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_include_statement] = STATE(4),
    [sym__word] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_variable] = ACTIONS(5),
    [anon_sym_2variable] = ACTIONS(5),
    [anon_sym_create] = ACTIONS(5),
    [anon_sym_constant] = ACTIONS(7),
    [anon_sym_2constant] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_endif] = ACTIONS(13),
    [anon_sym_to] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_then] = ACTIONS(13),
    [anon_sym_case] = ACTIONS(13),
    [anon_sym_endcase] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_endof] = ACTIONS(13),
    [anon_sym_begin] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_repeat] = ACTIONS(13),
    [anon_sym_until] = ACTIONS(13),
    [anon_sym_again] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(13),
    [anon_sym_QMARKdo] = ACTIONS(13),
    [anon_sym_loop] = ACTIONS(13),
    [anon_sym_leave] = ACTIONS(13),
    [anon_sym_unloop] = ACTIONS(13),
    [anon_sym_PLUSdo] = ACTIONS(13),
    [anon_sym_PLUSloop] = ACTIONS(13),
    [anon_sym_DASHdo] = ACTIONS(13),
    [anon_sym_DASHloop] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_next] = ACTIONS(13),
    [anon_sym_next_DASHcase] = ACTIONS(13),
    [anon_sym_QMARKof] = ACTIONS(13),
    [anon_sym_contof] = ACTIONS(13),
    [anon_sym_ahead] = ACTIONS(13),
    [anon_sym_cs_DASHpick] = ACTIONS(13),
    [anon_sym_cs_DASHroll] = ACTIONS(13),
    [anon_sym_cs_DASHdrop] = ACTIONS(13),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(13),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(13),
    [anon_sym_u_PLUSdo] = ACTIONS(13),
    [anon_sym_u_DASHdo] = ACTIONS(13),
    [anon_sym_QMARKleave] = ACTIONS(13),
    [anon_sym_defer] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_recursive] = ACTIONS(13),
    [anon_sym_recurse] = ACTIONS(13),
    [anon_sym_throw] = ACTIONS(13),
    [anon_sym_exception] = ACTIONS(13),
    [anon_sym_catch] = ACTIONS(13),
    [anon_sym_executes] = ACTIONS(13),
    [anon_sym_nothrow] = ACTIONS(13),
    [anon_sym_try] = ACTIONS(13),
    [anon_sym_endtry] = ACTIONS(13),
    [anon_sym_iferror] = ACTIONS(13),
    [anon_sym_restore] = ACTIONS(13),
    [anon_sym_endtry_DASHiferror] = ACTIONS(13),
    [anon_sym_recover] = ACTIONS(13),
    [anon_sym_abort_DQUOTE] = ACTIONS(13),
    [anon_sym_abort] = ACTIONS(13),
    [anon_sym_warning_DQUOTE] = ACTIONS(13),
    [anon_sym_warnings] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(15),
    [aux_sym_comment_token2] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
  },
  [4] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_variable] = ACTIONS(51),
    [anon_sym_2variable] = ACTIONS(51),
    [anon_sym_create] = ACTIONS(51),
    [anon_sym_constant] = ACTIONS(51),
    [anon_sym_2constant] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_include] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_endif] = ACTIONS(51),
    [anon_sym_to] = ACTIONS(51),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_then] = ACTIONS(51),
    [anon_sym_case] = ACTIONS(51),
    [anon_sym_endcase] = ACTIONS(51),
    [anon_sym_of] = ACTIONS(51),
    [anon_sym_endof] = ACTIONS(51),
    [anon_sym_begin] = ACTIONS(51),
    [anon_sym_while] = ACTIONS(51),
    [anon_sym_repeat] = ACTIONS(51),
    [anon_sym_until] = ACTIONS(51),
    [anon_sym_again] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_QMARKdo] = ACTIONS(51),
    [anon_sym_loop] = ACTIONS(51),
    [anon_sym_leave] = ACTIONS(51),
    [anon_sym_unloop] = ACTIONS(51),
    [anon_sym_PLUSdo] = ACTIONS(51),
    [anon_sym_PLUSloop] = ACTIONS(51),
    [anon_sym_DASHdo] = ACTIONS(51),
    [anon_sym_DASHloop] = ACTIONS(51),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_next] = ACTIONS(51),
    [anon_sym_next_DASHcase] = ACTIONS(51),
    [anon_sym_QMARKof] = ACTIONS(51),
    [anon_sym_contof] = ACTIONS(51),
    [anon_sym_ahead] = ACTIONS(51),
    [anon_sym_cs_DASHpick] = ACTIONS(51),
    [anon_sym_cs_DASHroll] = ACTIONS(51),
    [anon_sym_cs_DASHdrop] = ACTIONS(51),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(51),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(51),
    [anon_sym_u_PLUSdo] = ACTIONS(51),
    [anon_sym_u_DASHdo] = ACTIONS(51),
    [anon_sym_QMARKleave] = ACTIONS(51),
    [anon_sym_defer] = ACTIONS(51),
    [anon_sym_is] = ACTIONS(51),
    [anon_sym_recursive] = ACTIONS(51),
    [anon_sym_recurse] = ACTIONS(51),
    [anon_sym_throw] = ACTIONS(51),
    [anon_sym_exception] = ACTIONS(51),
    [anon_sym_catch] = ACTIONS(51),
    [anon_sym_executes] = ACTIONS(51),
    [anon_sym_nothrow] = ACTIONS(51),
    [anon_sym_try] = ACTIONS(51),
    [anon_sym_endtry] = ACTIONS(51),
    [anon_sym_iferror] = ACTIONS(51),
    [anon_sym_restore] = ACTIONS(51),
    [anon_sym_endtry_DASHiferror] = ACTIONS(51),
    [anon_sym_recover] = ACTIONS(51),
    [anon_sym_abort_DQUOTE] = ACTIONS(51),
    [anon_sym_abort] = ACTIONS(51),
    [anon_sym_warning_DQUOTE] = ACTIONS(51),
    [anon_sym_warnings] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(53),
    [aux_sym_comment_token2] = ACTIONS(53),
    [sym_identifier] = ACTIONS(51),
    [sym_string] = ACTIONS(49),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_variable] = ACTIONS(56),
    [anon_sym_2variable] = ACTIONS(56),
    [anon_sym_create] = ACTIONS(56),
    [anon_sym_constant] = ACTIONS(56),
    [anon_sym_2constant] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(56),
    [anon_sym_include] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_endif] = ACTIONS(56),
    [anon_sym_to] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_endcase] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_endof] = ACTIONS(56),
    [anon_sym_begin] = ACTIONS(56),
    [anon_sym_while] = ACTIONS(56),
    [anon_sym_repeat] = ACTIONS(56),
    [anon_sym_until] = ACTIONS(56),
    [anon_sym_again] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_QMARKdo] = ACTIONS(56),
    [anon_sym_loop] = ACTIONS(56),
    [anon_sym_leave] = ACTIONS(56),
    [anon_sym_unloop] = ACTIONS(56),
    [anon_sym_PLUSdo] = ACTIONS(56),
    [anon_sym_PLUSloop] = ACTIONS(56),
    [anon_sym_DASHdo] = ACTIONS(56),
    [anon_sym_DASHloop] = ACTIONS(56),
    [anon_sym_for] = ACTIONS(56),
    [anon_sym_next] = ACTIONS(56),
    [anon_sym_next_DASHcase] = ACTIONS(56),
    [anon_sym_QMARKof] = ACTIONS(56),
    [anon_sym_contof] = ACTIONS(56),
    [anon_sym_ahead] = ACTIONS(56),
    [anon_sym_cs_DASHpick] = ACTIONS(56),
    [anon_sym_cs_DASHroll] = ACTIONS(56),
    [anon_sym_cs_DASHdrop] = ACTIONS(56),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(56),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(56),
    [anon_sym_u_PLUSdo] = ACTIONS(56),
    [anon_sym_u_DASHdo] = ACTIONS(56),
    [anon_sym_QMARKleave] = ACTIONS(56),
    [anon_sym_defer] = ACTIONS(56),
    [anon_sym_is] = ACTIONS(56),
    [anon_sym_recursive] = ACTIONS(56),
    [anon_sym_recurse] = ACTIONS(56),
    [anon_sym_throw] = ACTIONS(56),
    [anon_sym_exception] = ACTIONS(56),
    [anon_sym_catch] = ACTIONS(56),
    [anon_sym_executes] = ACTIONS(56),
    [anon_sym_nothrow] = ACTIONS(56),
    [anon_sym_try] = ACTIONS(56),
    [anon_sym_endtry] = ACTIONS(56),
    [anon_sym_iferror] = ACTIONS(56),
    [anon_sym_restore] = ACTIONS(56),
    [anon_sym_endtry_DASHiferror] = ACTIONS(56),
    [anon_sym_recover] = ACTIONS(56),
    [anon_sym_abort_DQUOTE] = ACTIONS(56),
    [anon_sym_abort] = ACTIONS(56),
    [anon_sym_warning_DQUOTE] = ACTIONS(56),
    [anon_sym_warnings] = ACTIONS(56),
    [aux_sym_comment_token1] = ACTIONS(21),
    [aux_sym_comment_token2] = ACTIONS(21),
    [sym_identifier] = ACTIONS(56),
    [sym_string] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_variable] = ACTIONS(60),
    [anon_sym_2variable] = ACTIONS(60),
    [anon_sym_create] = ACTIONS(60),
    [anon_sym_constant] = ACTIONS(60),
    [anon_sym_2constant] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_include] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_endif] = ACTIONS(60),
    [anon_sym_to] = ACTIONS(60),
    [anon_sym_else] = ACTIONS(60),
    [anon_sym_then] = ACTIONS(60),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_endcase] = ACTIONS(60),
    [anon_sym_of] = ACTIONS(60),
    [anon_sym_endof] = ACTIONS(60),
    [anon_sym_begin] = ACTIONS(60),
    [anon_sym_while] = ACTIONS(60),
    [anon_sym_repeat] = ACTIONS(60),
    [anon_sym_until] = ACTIONS(60),
    [anon_sym_again] = ACTIONS(60),
    [anon_sym_do] = ACTIONS(60),
    [anon_sym_QMARKdo] = ACTIONS(60),
    [anon_sym_loop] = ACTIONS(60),
    [anon_sym_leave] = ACTIONS(60),
    [anon_sym_unloop] = ACTIONS(60),
    [anon_sym_PLUSdo] = ACTIONS(60),
    [anon_sym_PLUSloop] = ACTIONS(60),
    [anon_sym_DASHdo] = ACTIONS(60),
    [anon_sym_DASHloop] = ACTIONS(60),
    [anon_sym_for] = ACTIONS(60),
    [anon_sym_next] = ACTIONS(60),
    [anon_sym_next_DASHcase] = ACTIONS(60),
    [anon_sym_QMARKof] = ACTIONS(60),
    [anon_sym_contof] = ACTIONS(60),
    [anon_sym_ahead] = ACTIONS(60),
    [anon_sym_cs_DASHpick] = ACTIONS(60),
    [anon_sym_cs_DASHroll] = ACTIONS(60),
    [anon_sym_cs_DASHdrop] = ACTIONS(60),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(60),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(60),
    [anon_sym_u_PLUSdo] = ACTIONS(60),
    [anon_sym_u_DASHdo] = ACTIONS(60),
    [anon_sym_QMARKleave] = ACTIONS(60),
    [anon_sym_defer] = ACTIONS(60),
    [anon_sym_is] = ACTIONS(60),
    [anon_sym_recursive] = ACTIONS(60),
    [anon_sym_recurse] = ACTIONS(60),
    [anon_sym_throw] = ACTIONS(60),
    [anon_sym_exception] = ACTIONS(60),
    [anon_sym_catch] = ACTIONS(60),
    [anon_sym_executes] = ACTIONS(60),
    [anon_sym_nothrow] = ACTIONS(60),
    [anon_sym_try] = ACTIONS(60),
    [anon_sym_endtry] = ACTIONS(60),
    [anon_sym_iferror] = ACTIONS(60),
    [anon_sym_restore] = ACTIONS(60),
    [anon_sym_endtry_DASHiferror] = ACTIONS(60),
    [anon_sym_recover] = ACTIONS(60),
    [anon_sym_abort_DQUOTE] = ACTIONS(60),
    [anon_sym_abort] = ACTIONS(60),
    [anon_sym_warning_DQUOTE] = ACTIONS(60),
    [anon_sym_warnings] = ACTIONS(60),
    [aux_sym_comment_token1] = ACTIONS(58),
    [aux_sym_comment_token2] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_string] = ACTIONS(58),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_variable] = ACTIONS(64),
    [anon_sym_2variable] = ACTIONS(64),
    [anon_sym_create] = ACTIONS(64),
    [anon_sym_constant] = ACTIONS(64),
    [anon_sym_2constant] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_include] = ACTIONS(64),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_endif] = ACTIONS(64),
    [anon_sym_to] = ACTIONS(64),
    [anon_sym_else] = ACTIONS(64),
    [anon_sym_then] = ACTIONS(64),
    [anon_sym_case] = ACTIONS(64),
    [anon_sym_endcase] = ACTIONS(64),
    [anon_sym_of] = ACTIONS(64),
    [anon_sym_endof] = ACTIONS(64),
    [anon_sym_begin] = ACTIONS(64),
    [anon_sym_while] = ACTIONS(64),
    [anon_sym_repeat] = ACTIONS(64),
    [anon_sym_until] = ACTIONS(64),
    [anon_sym_again] = ACTIONS(64),
    [anon_sym_do] = ACTIONS(64),
    [anon_sym_QMARKdo] = ACTIONS(64),
    [anon_sym_loop] = ACTIONS(64),
    [anon_sym_leave] = ACTIONS(64),
    [anon_sym_unloop] = ACTIONS(64),
    [anon_sym_PLUSdo] = ACTIONS(64),
    [anon_sym_PLUSloop] = ACTIONS(64),
    [anon_sym_DASHdo] = ACTIONS(64),
    [anon_sym_DASHloop] = ACTIONS(64),
    [anon_sym_for] = ACTIONS(64),
    [anon_sym_next] = ACTIONS(64),
    [anon_sym_next_DASHcase] = ACTIONS(64),
    [anon_sym_QMARKof] = ACTIONS(64),
    [anon_sym_contof] = ACTIONS(64),
    [anon_sym_ahead] = ACTIONS(64),
    [anon_sym_cs_DASHpick] = ACTIONS(64),
    [anon_sym_cs_DASHroll] = ACTIONS(64),
    [anon_sym_cs_DASHdrop] = ACTIONS(64),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(64),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(64),
    [anon_sym_u_PLUSdo] = ACTIONS(64),
    [anon_sym_u_DASHdo] = ACTIONS(64),
    [anon_sym_QMARKleave] = ACTIONS(64),
    [anon_sym_defer] = ACTIONS(64),
    [anon_sym_is] = ACTIONS(64),
    [anon_sym_recursive] = ACTIONS(64),
    [anon_sym_recurse] = ACTIONS(64),
    [anon_sym_throw] = ACTIONS(64),
    [anon_sym_exception] = ACTIONS(64),
    [anon_sym_catch] = ACTIONS(64),
    [anon_sym_executes] = ACTIONS(64),
    [anon_sym_nothrow] = ACTIONS(64),
    [anon_sym_try] = ACTIONS(64),
    [anon_sym_endtry] = ACTIONS(64),
    [anon_sym_iferror] = ACTIONS(64),
    [anon_sym_restore] = ACTIONS(64),
    [anon_sym_endtry_DASHiferror] = ACTIONS(64),
    [anon_sym_recover] = ACTIONS(64),
    [anon_sym_abort_DQUOTE] = ACTIONS(64),
    [anon_sym_abort] = ACTIONS(64),
    [anon_sym_warning_DQUOTE] = ACTIONS(64),
    [anon_sym_warnings] = ACTIONS(64),
    [aux_sym_comment_token1] = ACTIONS(62),
    [aux_sym_comment_token2] = ACTIONS(62),
    [sym_identifier] = ACTIONS(64),
    [sym_string] = ACTIONS(62),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_variable] = ACTIONS(68),
    [anon_sym_2variable] = ACTIONS(68),
    [anon_sym_create] = ACTIONS(68),
    [anon_sym_constant] = ACTIONS(68),
    [anon_sym_2constant] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_include] = ACTIONS(68),
    [anon_sym_if] = ACTIONS(68),
    [anon_sym_endif] = ACTIONS(68),
    [anon_sym_to] = ACTIONS(68),
    [anon_sym_else] = ACTIONS(68),
    [anon_sym_then] = ACTIONS(68),
    [anon_sym_case] = ACTIONS(68),
    [anon_sym_endcase] = ACTIONS(68),
    [anon_sym_of] = ACTIONS(68),
    [anon_sym_endof] = ACTIONS(68),
    [anon_sym_begin] = ACTIONS(68),
    [anon_sym_while] = ACTIONS(68),
    [anon_sym_repeat] = ACTIONS(68),
    [anon_sym_until] = ACTIONS(68),
    [anon_sym_again] = ACTIONS(68),
    [anon_sym_do] = ACTIONS(68),
    [anon_sym_QMARKdo] = ACTIONS(68),
    [anon_sym_loop] = ACTIONS(68),
    [anon_sym_leave] = ACTIONS(68),
    [anon_sym_unloop] = ACTIONS(68),
    [anon_sym_PLUSdo] = ACTIONS(68),
    [anon_sym_PLUSloop] = ACTIONS(68),
    [anon_sym_DASHdo] = ACTIONS(68),
    [anon_sym_DASHloop] = ACTIONS(68),
    [anon_sym_for] = ACTIONS(68),
    [anon_sym_next] = ACTIONS(68),
    [anon_sym_next_DASHcase] = ACTIONS(68),
    [anon_sym_QMARKof] = ACTIONS(68),
    [anon_sym_contof] = ACTIONS(68),
    [anon_sym_ahead] = ACTIONS(68),
    [anon_sym_cs_DASHpick] = ACTIONS(68),
    [anon_sym_cs_DASHroll] = ACTIONS(68),
    [anon_sym_cs_DASHdrop] = ACTIONS(68),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(68),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(68),
    [anon_sym_u_PLUSdo] = ACTIONS(68),
    [anon_sym_u_DASHdo] = ACTIONS(68),
    [anon_sym_QMARKleave] = ACTIONS(68),
    [anon_sym_defer] = ACTIONS(68),
    [anon_sym_is] = ACTIONS(68),
    [anon_sym_recursive] = ACTIONS(68),
    [anon_sym_recurse] = ACTIONS(68),
    [anon_sym_throw] = ACTIONS(68),
    [anon_sym_exception] = ACTIONS(68),
    [anon_sym_catch] = ACTIONS(68),
    [anon_sym_executes] = ACTIONS(68),
    [anon_sym_nothrow] = ACTIONS(68),
    [anon_sym_try] = ACTIONS(68),
    [anon_sym_endtry] = ACTIONS(68),
    [anon_sym_iferror] = ACTIONS(68),
    [anon_sym_restore] = ACTIONS(68),
    [anon_sym_endtry_DASHiferror] = ACTIONS(68),
    [anon_sym_recover] = ACTIONS(68),
    [anon_sym_abort_DQUOTE] = ACTIONS(68),
    [anon_sym_abort] = ACTIONS(68),
    [anon_sym_warning_DQUOTE] = ACTIONS(68),
    [anon_sym_warnings] = ACTIONS(68),
    [aux_sym_comment_token1] = ACTIONS(66),
    [aux_sym_comment_token2] = ACTIONS(66),
    [sym_identifier] = ACTIONS(68),
    [sym_string] = ACTIONS(66),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_variable] = ACTIONS(72),
    [anon_sym_2variable] = ACTIONS(72),
    [anon_sym_create] = ACTIONS(72),
    [anon_sym_constant] = ACTIONS(72),
    [anon_sym_2constant] = ACTIONS(72),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_include] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(72),
    [anon_sym_endif] = ACTIONS(72),
    [anon_sym_to] = ACTIONS(72),
    [anon_sym_else] = ACTIONS(72),
    [anon_sym_then] = ACTIONS(72),
    [anon_sym_case] = ACTIONS(72),
    [anon_sym_endcase] = ACTIONS(72),
    [anon_sym_of] = ACTIONS(72),
    [anon_sym_endof] = ACTIONS(72),
    [anon_sym_begin] = ACTIONS(72),
    [anon_sym_while] = ACTIONS(72),
    [anon_sym_repeat] = ACTIONS(72),
    [anon_sym_until] = ACTIONS(72),
    [anon_sym_again] = ACTIONS(72),
    [anon_sym_do] = ACTIONS(72),
    [anon_sym_QMARKdo] = ACTIONS(72),
    [anon_sym_loop] = ACTIONS(72),
    [anon_sym_leave] = ACTIONS(72),
    [anon_sym_unloop] = ACTIONS(72),
    [anon_sym_PLUSdo] = ACTIONS(72),
    [anon_sym_PLUSloop] = ACTIONS(72),
    [anon_sym_DASHdo] = ACTIONS(72),
    [anon_sym_DASHloop] = ACTIONS(72),
    [anon_sym_for] = ACTIONS(72),
    [anon_sym_next] = ACTIONS(72),
    [anon_sym_next_DASHcase] = ACTIONS(72),
    [anon_sym_QMARKof] = ACTIONS(72),
    [anon_sym_contof] = ACTIONS(72),
    [anon_sym_ahead] = ACTIONS(72),
    [anon_sym_cs_DASHpick] = ACTIONS(72),
    [anon_sym_cs_DASHroll] = ACTIONS(72),
    [anon_sym_cs_DASHdrop] = ACTIONS(72),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(72),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(72),
    [anon_sym_u_PLUSdo] = ACTIONS(72),
    [anon_sym_u_DASHdo] = ACTIONS(72),
    [anon_sym_QMARKleave] = ACTIONS(72),
    [anon_sym_defer] = ACTIONS(72),
    [anon_sym_is] = ACTIONS(72),
    [anon_sym_recursive] = ACTIONS(72),
    [anon_sym_recurse] = ACTIONS(72),
    [anon_sym_throw] = ACTIONS(72),
    [anon_sym_exception] = ACTIONS(72),
    [anon_sym_catch] = ACTIONS(72),
    [anon_sym_executes] = ACTIONS(72),
    [anon_sym_nothrow] = ACTIONS(72),
    [anon_sym_try] = ACTIONS(72),
    [anon_sym_endtry] = ACTIONS(72),
    [anon_sym_iferror] = ACTIONS(72),
    [anon_sym_restore] = ACTIONS(72),
    [anon_sym_endtry_DASHiferror] = ACTIONS(72),
    [anon_sym_recover] = ACTIONS(72),
    [anon_sym_abort_DQUOTE] = ACTIONS(72),
    [anon_sym_abort] = ACTIONS(72),
    [anon_sym_warning_DQUOTE] = ACTIONS(72),
    [anon_sym_warnings] = ACTIONS(72),
    [aux_sym_comment_token1] = ACTIONS(70),
    [aux_sym_comment_token2] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_string] = ACTIONS(70),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_variable] = ACTIONS(76),
    [anon_sym_2variable] = ACTIONS(76),
    [anon_sym_create] = ACTIONS(76),
    [anon_sym_constant] = ACTIONS(76),
    [anon_sym_2constant] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_include] = ACTIONS(76),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_endif] = ACTIONS(76),
    [anon_sym_to] = ACTIONS(76),
    [anon_sym_else] = ACTIONS(76),
    [anon_sym_then] = ACTIONS(76),
    [anon_sym_case] = ACTIONS(76),
    [anon_sym_endcase] = ACTIONS(76),
    [anon_sym_of] = ACTIONS(76),
    [anon_sym_endof] = ACTIONS(76),
    [anon_sym_begin] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(76),
    [anon_sym_repeat] = ACTIONS(76),
    [anon_sym_until] = ACTIONS(76),
    [anon_sym_again] = ACTIONS(76),
    [anon_sym_do] = ACTIONS(76),
    [anon_sym_QMARKdo] = ACTIONS(76),
    [anon_sym_loop] = ACTIONS(76),
    [anon_sym_leave] = ACTIONS(76),
    [anon_sym_unloop] = ACTIONS(76),
    [anon_sym_PLUSdo] = ACTIONS(76),
    [anon_sym_PLUSloop] = ACTIONS(76),
    [anon_sym_DASHdo] = ACTIONS(76),
    [anon_sym_DASHloop] = ACTIONS(76),
    [anon_sym_for] = ACTIONS(76),
    [anon_sym_next] = ACTIONS(76),
    [anon_sym_next_DASHcase] = ACTIONS(76),
    [anon_sym_QMARKof] = ACTIONS(76),
    [anon_sym_contof] = ACTIONS(76),
    [anon_sym_ahead] = ACTIONS(76),
    [anon_sym_cs_DASHpick] = ACTIONS(76),
    [anon_sym_cs_DASHroll] = ACTIONS(76),
    [anon_sym_cs_DASHdrop] = ACTIONS(76),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(76),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(76),
    [anon_sym_u_PLUSdo] = ACTIONS(76),
    [anon_sym_u_DASHdo] = ACTIONS(76),
    [anon_sym_QMARKleave] = ACTIONS(76),
    [anon_sym_defer] = ACTIONS(76),
    [anon_sym_is] = ACTIONS(76),
    [anon_sym_recursive] = ACTIONS(76),
    [anon_sym_recurse] = ACTIONS(76),
    [anon_sym_throw] = ACTIONS(76),
    [anon_sym_exception] = ACTIONS(76),
    [anon_sym_catch] = ACTIONS(76),
    [anon_sym_executes] = ACTIONS(76),
    [anon_sym_nothrow] = ACTIONS(76),
    [anon_sym_try] = ACTIONS(76),
    [anon_sym_endtry] = ACTIONS(76),
    [anon_sym_iferror] = ACTIONS(76),
    [anon_sym_restore] = ACTIONS(76),
    [anon_sym_endtry_DASHiferror] = ACTIONS(76),
    [anon_sym_recover] = ACTIONS(76),
    [anon_sym_abort_DQUOTE] = ACTIONS(76),
    [anon_sym_abort] = ACTIONS(76),
    [anon_sym_warning_DQUOTE] = ACTIONS(76),
    [anon_sym_warnings] = ACTIONS(76),
    [aux_sym_comment_token1] = ACTIONS(74),
    [aux_sym_comment_token2] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_string] = ACTIONS(74),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_variable] = ACTIONS(80),
    [anon_sym_2variable] = ACTIONS(80),
    [anon_sym_create] = ACTIONS(80),
    [anon_sym_constant] = ACTIONS(80),
    [anon_sym_2constant] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_endif] = ACTIONS(80),
    [anon_sym_to] = ACTIONS(80),
    [anon_sym_else] = ACTIONS(80),
    [anon_sym_then] = ACTIONS(80),
    [anon_sym_case] = ACTIONS(80),
    [anon_sym_endcase] = ACTIONS(80),
    [anon_sym_of] = ACTIONS(80),
    [anon_sym_endof] = ACTIONS(80),
    [anon_sym_begin] = ACTIONS(80),
    [anon_sym_while] = ACTIONS(80),
    [anon_sym_repeat] = ACTIONS(80),
    [anon_sym_until] = ACTIONS(80),
    [anon_sym_again] = ACTIONS(80),
    [anon_sym_do] = ACTIONS(80),
    [anon_sym_QMARKdo] = ACTIONS(80),
    [anon_sym_loop] = ACTIONS(80),
    [anon_sym_leave] = ACTIONS(80),
    [anon_sym_unloop] = ACTIONS(80),
    [anon_sym_PLUSdo] = ACTIONS(80),
    [anon_sym_PLUSloop] = ACTIONS(80),
    [anon_sym_DASHdo] = ACTIONS(80),
    [anon_sym_DASHloop] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(80),
    [anon_sym_next] = ACTIONS(80),
    [anon_sym_next_DASHcase] = ACTIONS(80),
    [anon_sym_QMARKof] = ACTIONS(80),
    [anon_sym_contof] = ACTIONS(80),
    [anon_sym_ahead] = ACTIONS(80),
    [anon_sym_cs_DASHpick] = ACTIONS(80),
    [anon_sym_cs_DASHroll] = ACTIONS(80),
    [anon_sym_cs_DASHdrop] = ACTIONS(80),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(80),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(80),
    [anon_sym_u_PLUSdo] = ACTIONS(80),
    [anon_sym_u_DASHdo] = ACTIONS(80),
    [anon_sym_QMARKleave] = ACTIONS(80),
    [anon_sym_defer] = ACTIONS(80),
    [anon_sym_is] = ACTIONS(80),
    [anon_sym_recursive] = ACTIONS(80),
    [anon_sym_recurse] = ACTIONS(80),
    [anon_sym_throw] = ACTIONS(80),
    [anon_sym_exception] = ACTIONS(80),
    [anon_sym_catch] = ACTIONS(80),
    [anon_sym_executes] = ACTIONS(80),
    [anon_sym_nothrow] = ACTIONS(80),
    [anon_sym_try] = ACTIONS(80),
    [anon_sym_endtry] = ACTIONS(80),
    [anon_sym_iferror] = ACTIONS(80),
    [anon_sym_restore] = ACTIONS(80),
    [anon_sym_endtry_DASHiferror] = ACTIONS(80),
    [anon_sym_recover] = ACTIONS(80),
    [anon_sym_abort_DQUOTE] = ACTIONS(80),
    [anon_sym_abort] = ACTIONS(80),
    [anon_sym_warning_DQUOTE] = ACTIONS(80),
    [anon_sym_warnings] = ACTIONS(80),
    [aux_sym_comment_token1] = ACTIONS(78),
    [aux_sym_comment_token2] = ACTIONS(78),
    [sym_identifier] = ACTIONS(80),
    [sym_string] = ACTIONS(78),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_variable] = ACTIONS(84),
    [anon_sym_2variable] = ACTIONS(84),
    [anon_sym_create] = ACTIONS(84),
    [anon_sym_constant] = ACTIONS(84),
    [anon_sym_2constant] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_include] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(84),
    [anon_sym_endif] = ACTIONS(84),
    [anon_sym_to] = ACTIONS(84),
    [anon_sym_else] = ACTIONS(84),
    [anon_sym_then] = ACTIONS(84),
    [anon_sym_case] = ACTIONS(84),
    [anon_sym_endcase] = ACTIONS(84),
    [anon_sym_of] = ACTIONS(84),
    [anon_sym_endof] = ACTIONS(84),
    [anon_sym_begin] = ACTIONS(84),
    [anon_sym_while] = ACTIONS(84),
    [anon_sym_repeat] = ACTIONS(84),
    [anon_sym_until] = ACTIONS(84),
    [anon_sym_again] = ACTIONS(84),
    [anon_sym_do] = ACTIONS(84),
    [anon_sym_QMARKdo] = ACTIONS(84),
    [anon_sym_loop] = ACTIONS(84),
    [anon_sym_leave] = ACTIONS(84),
    [anon_sym_unloop] = ACTIONS(84),
    [anon_sym_PLUSdo] = ACTIONS(84),
    [anon_sym_PLUSloop] = ACTIONS(84),
    [anon_sym_DASHdo] = ACTIONS(84),
    [anon_sym_DASHloop] = ACTIONS(84),
    [anon_sym_for] = ACTIONS(84),
    [anon_sym_next] = ACTIONS(84),
    [anon_sym_next_DASHcase] = ACTIONS(84),
    [anon_sym_QMARKof] = ACTIONS(84),
    [anon_sym_contof] = ACTIONS(84),
    [anon_sym_ahead] = ACTIONS(84),
    [anon_sym_cs_DASHpick] = ACTIONS(84),
    [anon_sym_cs_DASHroll] = ACTIONS(84),
    [anon_sym_cs_DASHdrop] = ACTIONS(84),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(84),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(84),
    [anon_sym_u_PLUSdo] = ACTIONS(84),
    [anon_sym_u_DASHdo] = ACTIONS(84),
    [anon_sym_QMARKleave] = ACTIONS(84),
    [anon_sym_defer] = ACTIONS(84),
    [anon_sym_is] = ACTIONS(84),
    [anon_sym_recursive] = ACTIONS(84),
    [anon_sym_recurse] = ACTIONS(84),
    [anon_sym_throw] = ACTIONS(84),
    [anon_sym_exception] = ACTIONS(84),
    [anon_sym_catch] = ACTIONS(84),
    [anon_sym_executes] = ACTIONS(84),
    [anon_sym_nothrow] = ACTIONS(84),
    [anon_sym_try] = ACTIONS(84),
    [anon_sym_endtry] = ACTIONS(84),
    [anon_sym_iferror] = ACTIONS(84),
    [anon_sym_restore] = ACTIONS(84),
    [anon_sym_endtry_DASHiferror] = ACTIONS(84),
    [anon_sym_recover] = ACTIONS(84),
    [anon_sym_abort_DQUOTE] = ACTIONS(84),
    [anon_sym_abort] = ACTIONS(84),
    [anon_sym_warning_DQUOTE] = ACTIONS(84),
    [anon_sym_warnings] = ACTIONS(84),
    [aux_sym_comment_token1] = ACTIONS(82),
    [aux_sym_comment_token2] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [sym_string] = ACTIONS(82),
  },
  [13] = {
    [sym__word] = STATE(14),
    [sym_keyword] = STATE(14),
    [sym_comment] = STATE(14),
    [aux_sym_function_definition_repeat1] = STATE(14),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_if] = ACTIONS(88),
    [anon_sym_endif] = ACTIONS(88),
    [anon_sym_to] = ACTIONS(88),
    [anon_sym_else] = ACTIONS(88),
    [anon_sym_then] = ACTIONS(88),
    [anon_sym_case] = ACTIONS(88),
    [anon_sym_endcase] = ACTIONS(88),
    [anon_sym_of] = ACTIONS(88),
    [anon_sym_endof] = ACTIONS(88),
    [anon_sym_begin] = ACTIONS(88),
    [anon_sym_while] = ACTIONS(88),
    [anon_sym_repeat] = ACTIONS(88),
    [anon_sym_until] = ACTIONS(88),
    [anon_sym_again] = ACTIONS(88),
    [anon_sym_do] = ACTIONS(88),
    [anon_sym_QMARKdo] = ACTIONS(88),
    [anon_sym_loop] = ACTIONS(88),
    [anon_sym_leave] = ACTIONS(88),
    [anon_sym_unloop] = ACTIONS(88),
    [anon_sym_PLUSdo] = ACTIONS(88),
    [anon_sym_PLUSloop] = ACTIONS(88),
    [anon_sym_DASHdo] = ACTIONS(88),
    [anon_sym_DASHloop] = ACTIONS(88),
    [anon_sym_for] = ACTIONS(88),
    [anon_sym_next] = ACTIONS(88),
    [anon_sym_next_DASHcase] = ACTIONS(88),
    [anon_sym_QMARKof] = ACTIONS(88),
    [anon_sym_contof] = ACTIONS(88),
    [anon_sym_ahead] = ACTIONS(88),
    [anon_sym_cs_DASHpick] = ACTIONS(88),
    [anon_sym_cs_DASHroll] = ACTIONS(88),
    [anon_sym_cs_DASHdrop] = ACTIONS(88),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(88),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(88),
    [anon_sym_u_PLUSdo] = ACTIONS(88),
    [anon_sym_u_DASHdo] = ACTIONS(88),
    [anon_sym_QMARKleave] = ACTIONS(88),
    [anon_sym_defer] = ACTIONS(88),
    [anon_sym_is] = ACTIONS(88),
    [anon_sym_recursive] = ACTIONS(88),
    [anon_sym_recurse] = ACTIONS(88),
    [anon_sym_throw] = ACTIONS(88),
    [anon_sym_exception] = ACTIONS(88),
    [anon_sym_catch] = ACTIONS(88),
    [anon_sym_executes] = ACTIONS(88),
    [anon_sym_nothrow] = ACTIONS(88),
    [anon_sym_try] = ACTIONS(88),
    [anon_sym_endtry] = ACTIONS(88),
    [anon_sym_iferror] = ACTIONS(88),
    [anon_sym_restore] = ACTIONS(88),
    [anon_sym_endtry_DASHiferror] = ACTIONS(88),
    [anon_sym_recover] = ACTIONS(88),
    [anon_sym_abort_DQUOTE] = ACTIONS(88),
    [anon_sym_abort] = ACTIONS(88),
    [anon_sym_warning_DQUOTE] = ACTIONS(88),
    [anon_sym_warnings] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(90),
    [aux_sym_comment_token2] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_string] = ACTIONS(94),
  },
  [14] = {
    [sym__word] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_comment] = STATE(15),
    [aux_sym_function_definition_repeat1] = STATE(15),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(88),
    [anon_sym_endif] = ACTIONS(88),
    [anon_sym_to] = ACTIONS(88),
    [anon_sym_else] = ACTIONS(88),
    [anon_sym_then] = ACTIONS(88),
    [anon_sym_case] = ACTIONS(88),
    [anon_sym_endcase] = ACTIONS(88),
    [anon_sym_of] = ACTIONS(88),
    [anon_sym_endof] = ACTIONS(88),
    [anon_sym_begin] = ACTIONS(88),
    [anon_sym_while] = ACTIONS(88),
    [anon_sym_repeat] = ACTIONS(88),
    [anon_sym_until] = ACTIONS(88),
    [anon_sym_again] = ACTIONS(88),
    [anon_sym_do] = ACTIONS(88),
    [anon_sym_QMARKdo] = ACTIONS(88),
    [anon_sym_loop] = ACTIONS(88),
    [anon_sym_leave] = ACTIONS(88),
    [anon_sym_unloop] = ACTIONS(88),
    [anon_sym_PLUSdo] = ACTIONS(88),
    [anon_sym_PLUSloop] = ACTIONS(88),
    [anon_sym_DASHdo] = ACTIONS(88),
    [anon_sym_DASHloop] = ACTIONS(88),
    [anon_sym_for] = ACTIONS(88),
    [anon_sym_next] = ACTIONS(88),
    [anon_sym_next_DASHcase] = ACTIONS(88),
    [anon_sym_QMARKof] = ACTIONS(88),
    [anon_sym_contof] = ACTIONS(88),
    [anon_sym_ahead] = ACTIONS(88),
    [anon_sym_cs_DASHpick] = ACTIONS(88),
    [anon_sym_cs_DASHroll] = ACTIONS(88),
    [anon_sym_cs_DASHdrop] = ACTIONS(88),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(88),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(88),
    [anon_sym_u_PLUSdo] = ACTIONS(88),
    [anon_sym_u_DASHdo] = ACTIONS(88),
    [anon_sym_QMARKleave] = ACTIONS(88),
    [anon_sym_defer] = ACTIONS(88),
    [anon_sym_is] = ACTIONS(88),
    [anon_sym_recursive] = ACTIONS(88),
    [anon_sym_recurse] = ACTIONS(88),
    [anon_sym_throw] = ACTIONS(88),
    [anon_sym_exception] = ACTIONS(88),
    [anon_sym_catch] = ACTIONS(88),
    [anon_sym_executes] = ACTIONS(88),
    [anon_sym_nothrow] = ACTIONS(88),
    [anon_sym_try] = ACTIONS(88),
    [anon_sym_endtry] = ACTIONS(88),
    [anon_sym_iferror] = ACTIONS(88),
    [anon_sym_restore] = ACTIONS(88),
    [anon_sym_endtry_DASHiferror] = ACTIONS(88),
    [anon_sym_recover] = ACTIONS(88),
    [anon_sym_abort_DQUOTE] = ACTIONS(88),
    [anon_sym_abort] = ACTIONS(88),
    [anon_sym_warning_DQUOTE] = ACTIONS(88),
    [anon_sym_warnings] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(90),
    [aux_sym_comment_token2] = ACTIONS(90),
    [sym_identifier] = ACTIONS(98),
    [sym_string] = ACTIONS(100),
  },
  [15] = {
    [sym__word] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_comment] = STATE(15),
    [aux_sym_function_definition_repeat1] = STATE(15),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_endif] = ACTIONS(104),
    [anon_sym_to] = ACTIONS(104),
    [anon_sym_else] = ACTIONS(104),
    [anon_sym_then] = ACTIONS(104),
    [anon_sym_case] = ACTIONS(104),
    [anon_sym_endcase] = ACTIONS(104),
    [anon_sym_of] = ACTIONS(104),
    [anon_sym_endof] = ACTIONS(104),
    [anon_sym_begin] = ACTIONS(104),
    [anon_sym_while] = ACTIONS(104),
    [anon_sym_repeat] = ACTIONS(104),
    [anon_sym_until] = ACTIONS(104),
    [anon_sym_again] = ACTIONS(104),
    [anon_sym_do] = ACTIONS(104),
    [anon_sym_QMARKdo] = ACTIONS(104),
    [anon_sym_loop] = ACTIONS(104),
    [anon_sym_leave] = ACTIONS(104),
    [anon_sym_unloop] = ACTIONS(104),
    [anon_sym_PLUSdo] = ACTIONS(104),
    [anon_sym_PLUSloop] = ACTIONS(104),
    [anon_sym_DASHdo] = ACTIONS(104),
    [anon_sym_DASHloop] = ACTIONS(104),
    [anon_sym_for] = ACTIONS(104),
    [anon_sym_next] = ACTIONS(104),
    [anon_sym_next_DASHcase] = ACTIONS(104),
    [anon_sym_QMARKof] = ACTIONS(104),
    [anon_sym_contof] = ACTIONS(104),
    [anon_sym_ahead] = ACTIONS(104),
    [anon_sym_cs_DASHpick] = ACTIONS(104),
    [anon_sym_cs_DASHroll] = ACTIONS(104),
    [anon_sym_cs_DASHdrop] = ACTIONS(104),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(104),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(104),
    [anon_sym_u_PLUSdo] = ACTIONS(104),
    [anon_sym_u_DASHdo] = ACTIONS(104),
    [anon_sym_QMARKleave] = ACTIONS(104),
    [anon_sym_defer] = ACTIONS(104),
    [anon_sym_is] = ACTIONS(104),
    [anon_sym_recursive] = ACTIONS(104),
    [anon_sym_recurse] = ACTIONS(104),
    [anon_sym_throw] = ACTIONS(104),
    [anon_sym_exception] = ACTIONS(104),
    [anon_sym_catch] = ACTIONS(104),
    [anon_sym_executes] = ACTIONS(104),
    [anon_sym_nothrow] = ACTIONS(104),
    [anon_sym_try] = ACTIONS(104),
    [anon_sym_endtry] = ACTIONS(104),
    [anon_sym_iferror] = ACTIONS(104),
    [anon_sym_restore] = ACTIONS(104),
    [anon_sym_endtry_DASHiferror] = ACTIONS(104),
    [anon_sym_recover] = ACTIONS(104),
    [anon_sym_abort_DQUOTE] = ACTIONS(104),
    [anon_sym_abort] = ACTIONS(104),
    [anon_sym_warning_DQUOTE] = ACTIONS(104),
    [anon_sym_warnings] = ACTIONS(104),
    [aux_sym_comment_token1] = ACTIONS(107),
    [aux_sym_comment_token2] = ACTIONS(107),
    [sym_identifier] = ACTIONS(110),
    [sym_string] = ACTIONS(113),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_endif] = ACTIONS(60),
    [anon_sym_to] = ACTIONS(60),
    [anon_sym_else] = ACTIONS(60),
    [anon_sym_then] = ACTIONS(60),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_endcase] = ACTIONS(60),
    [anon_sym_of] = ACTIONS(60),
    [anon_sym_endof] = ACTIONS(60),
    [anon_sym_begin] = ACTIONS(60),
    [anon_sym_while] = ACTIONS(60),
    [anon_sym_repeat] = ACTIONS(60),
    [anon_sym_until] = ACTIONS(60),
    [anon_sym_again] = ACTIONS(60),
    [anon_sym_do] = ACTIONS(60),
    [anon_sym_QMARKdo] = ACTIONS(60),
    [anon_sym_loop] = ACTIONS(60),
    [anon_sym_leave] = ACTIONS(60),
    [anon_sym_unloop] = ACTIONS(60),
    [anon_sym_PLUSdo] = ACTIONS(60),
    [anon_sym_PLUSloop] = ACTIONS(60),
    [anon_sym_DASHdo] = ACTIONS(60),
    [anon_sym_DASHloop] = ACTIONS(60),
    [anon_sym_for] = ACTIONS(60),
    [anon_sym_next] = ACTIONS(60),
    [anon_sym_next_DASHcase] = ACTIONS(60),
    [anon_sym_QMARKof] = ACTIONS(60),
    [anon_sym_contof] = ACTIONS(60),
    [anon_sym_ahead] = ACTIONS(60),
    [anon_sym_cs_DASHpick] = ACTIONS(60),
    [anon_sym_cs_DASHroll] = ACTIONS(60),
    [anon_sym_cs_DASHdrop] = ACTIONS(60),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(60),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(60),
    [anon_sym_u_PLUSdo] = ACTIONS(60),
    [anon_sym_u_DASHdo] = ACTIONS(60),
    [anon_sym_QMARKleave] = ACTIONS(60),
    [anon_sym_defer] = ACTIONS(60),
    [anon_sym_is] = ACTIONS(60),
    [anon_sym_recursive] = ACTIONS(60),
    [anon_sym_recurse] = ACTIONS(60),
    [anon_sym_throw] = ACTIONS(60),
    [anon_sym_exception] = ACTIONS(60),
    [anon_sym_catch] = ACTIONS(60),
    [anon_sym_executes] = ACTIONS(60),
    [anon_sym_nothrow] = ACTIONS(60),
    [anon_sym_try] = ACTIONS(60),
    [anon_sym_endtry] = ACTIONS(60),
    [anon_sym_iferror] = ACTIONS(60),
    [anon_sym_restore] = ACTIONS(60),
    [anon_sym_endtry_DASHiferror] = ACTIONS(60),
    [anon_sym_recover] = ACTIONS(60),
    [anon_sym_abort_DQUOTE] = ACTIONS(60),
    [anon_sym_abort] = ACTIONS(60),
    [anon_sym_warning_DQUOTE] = ACTIONS(60),
    [anon_sym_warnings] = ACTIONS(60),
    [aux_sym_comment_token1] = ACTIONS(58),
    [aux_sym_comment_token2] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_string] = ACTIONS(58),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_endif] = ACTIONS(64),
    [anon_sym_to] = ACTIONS(64),
    [anon_sym_else] = ACTIONS(64),
    [anon_sym_then] = ACTIONS(64),
    [anon_sym_case] = ACTIONS(64),
    [anon_sym_endcase] = ACTIONS(64),
    [anon_sym_of] = ACTIONS(64),
    [anon_sym_endof] = ACTIONS(64),
    [anon_sym_begin] = ACTIONS(64),
    [anon_sym_while] = ACTIONS(64),
    [anon_sym_repeat] = ACTIONS(64),
    [anon_sym_until] = ACTIONS(64),
    [anon_sym_again] = ACTIONS(64),
    [anon_sym_do] = ACTIONS(64),
    [anon_sym_QMARKdo] = ACTIONS(64),
    [anon_sym_loop] = ACTIONS(64),
    [anon_sym_leave] = ACTIONS(64),
    [anon_sym_unloop] = ACTIONS(64),
    [anon_sym_PLUSdo] = ACTIONS(64),
    [anon_sym_PLUSloop] = ACTIONS(64),
    [anon_sym_DASHdo] = ACTIONS(64),
    [anon_sym_DASHloop] = ACTIONS(64),
    [anon_sym_for] = ACTIONS(64),
    [anon_sym_next] = ACTIONS(64),
    [anon_sym_next_DASHcase] = ACTIONS(64),
    [anon_sym_QMARKof] = ACTIONS(64),
    [anon_sym_contof] = ACTIONS(64),
    [anon_sym_ahead] = ACTIONS(64),
    [anon_sym_cs_DASHpick] = ACTIONS(64),
    [anon_sym_cs_DASHroll] = ACTIONS(64),
    [anon_sym_cs_DASHdrop] = ACTIONS(64),
    [anon_sym_QMARKdup_DASHif] = ACTIONS(64),
    [anon_sym_QMARKdup_DASH0_EQ_DASHif] = ACTIONS(64),
    [anon_sym_u_PLUSdo] = ACTIONS(64),
    [anon_sym_u_DASHdo] = ACTIONS(64),
    [anon_sym_QMARKleave] = ACTIONS(64),
    [anon_sym_defer] = ACTIONS(64),
    [anon_sym_is] = ACTIONS(64),
    [anon_sym_recursive] = ACTIONS(64),
    [anon_sym_recurse] = ACTIONS(64),
    [anon_sym_throw] = ACTIONS(64),
    [anon_sym_exception] = ACTIONS(64),
    [anon_sym_catch] = ACTIONS(64),
    [anon_sym_executes] = ACTIONS(64),
    [anon_sym_nothrow] = ACTIONS(64),
    [anon_sym_try] = ACTIONS(64),
    [anon_sym_endtry] = ACTIONS(64),
    [anon_sym_iferror] = ACTIONS(64),
    [anon_sym_restore] = ACTIONS(64),
    [anon_sym_endtry_DASHiferror] = ACTIONS(64),
    [anon_sym_recover] = ACTIONS(64),
    [anon_sym_abort_DQUOTE] = ACTIONS(64),
    [anon_sym_abort] = ACTIONS(64),
    [anon_sym_warning_DQUOTE] = ACTIONS(64),
    [anon_sym_warnings] = ACTIONS(64),
    [aux_sym_comment_token1] = ACTIONS(62),
    [aux_sym_comment_token2] = ACTIONS(62),
    [sym_identifier] = ACTIONS(64),
    [sym_string] = ACTIONS(62),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    ACTIONS(15), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [11] = 3,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    ACTIONS(15), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [22] = 3,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [33] = 3,
    ACTIONS(122), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    ACTIONS(15), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [44] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 11,
  [SMALL_STATE(20)] = 22,
  [SMALL_STATE(21)] = 33,
  [SMALL_STATE(22)] = 44,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 2, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 2, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_definition, 2, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(16),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(15),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(15),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_forth(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
