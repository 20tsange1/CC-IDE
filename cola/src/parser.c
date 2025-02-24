#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_has = 1,
  anon_sym_DOT = 2,
  anon_sym_it = 3,
  anon_sym_is = 4,
  anon_sym_not = 5,
  anon_sym_true = 6,
  anon_sym_that = 7,
  anon_sym_PERCENT = 8,
  anon_sym_discount = 9,
  anon_sym_off = 10,
  anon_sym_if = 11,
  sym_bracketopen = 12,
  sym_bracketclose = 13,
  sym_and_connect = 14,
  sym_or_connect = 15,
  anon_sym_on = 16,
  anon_sym_the = 17,
  anon_sym_DASH = 18,
  anon_sym_1st = 19,
  anon_sym_2nd = 20,
  anon_sym_3rd = 21,
  anon_sym_4th = 22,
  anon_sym_5th = 23,
  anon_sym_6th = 24,
  anon_sym_7th = 25,
  anon_sym_8th = 26,
  anon_sym_9th = 27,
  anon_sym_10th = 28,
  anon_sym_11th = 29,
  anon_sym_12th = 30,
  anon_sym_13th = 31,
  anon_sym_14th = 32,
  anon_sym_15th = 33,
  anon_sym_16th = 34,
  anon_sym_17th = 35,
  anon_sym_18th = 36,
  anon_sym_19th = 37,
  anon_sym_20th = 38,
  anon_sym_21st = 39,
  anon_sym_22nd = 40,
  anon_sym_23rd = 41,
  anon_sym_24th = 42,
  anon_sym_25th = 43,
  anon_sym_26th = 44,
  anon_sym_27th = 45,
  anon_sym_28th = 46,
  anon_sym_29th = 47,
  anon_sym_30th = 48,
  anon_sym_31st = 49,
  anon_sym_January = 50,
  anon_sym_February = 51,
  anon_sym_March = 52,
  anon_sym_April = 53,
  anon_sym_May = 54,
  anon_sym_June = 55,
  anon_sym_July = 56,
  anon_sym_August = 57,
  anon_sym_September = 58,
  anon_sym_October = 59,
  anon_sym_November = 60,
  anon_sym_December = 61,
  sym_string = 62,
  sym_num = 63,
  sym__numSingle = 64,
  sym_comment = 65,
  sym_contract = 66,
  sym_start = 67,
  sym_user = 68,
  sym_name = 69,
  sym_negation = 70,
  sym_discount = 71,
  sym_conditional_upper = 72,
  sym_conditional = 73,
  sym_conditional_and = 74,
  sym_conditional_or = 75,
  sym_condition_n = 76,
  sym_time_holder = 77,
  sym__pre_time = 78,
  sym_time = 79,
  sym_day = 80,
  sym_month = 81,
  sym_year = 82,
  aux_sym_contract_repeat1 = 83,
  aux_sym_conditional_and_repeat1 = 84,
  aux_sym_conditional_or_repeat1 = 85,
  aux_sym_condition_n_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_has] = "has",
  [anon_sym_DOT] = ".",
  [anon_sym_it] = "it",
  [anon_sym_is] = "is",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_that] = "that",
  [anon_sym_PERCENT] = "%",
  [anon_sym_discount] = "discount",
  [anon_sym_off] = "off",
  [anon_sym_if] = "if",
  [sym_bracketopen] = "bracketopen",
  [sym_bracketclose] = "bracketclose",
  [sym_and_connect] = "and",
  [sym_or_connect] = "or",
  [anon_sym_on] = "on",
  [anon_sym_the] = "the",
  [anon_sym_DASH] = "-",
  [anon_sym_1st] = "1st",
  [anon_sym_2nd] = "2nd",
  [anon_sym_3rd] = "3rd",
  [anon_sym_4th] = "4th",
  [anon_sym_5th] = "5th",
  [anon_sym_6th] = "6th",
  [anon_sym_7th] = "7th",
  [anon_sym_8th] = "8th",
  [anon_sym_9th] = "9th",
  [anon_sym_10th] = "10th",
  [anon_sym_11th] = "11th",
  [anon_sym_12th] = "12th",
  [anon_sym_13th] = "13th",
  [anon_sym_14th] = "14th",
  [anon_sym_15th] = "15th",
  [anon_sym_16th] = "16th",
  [anon_sym_17th] = "17th",
  [anon_sym_18th] = "18th",
  [anon_sym_19th] = "19th",
  [anon_sym_20th] = "20th",
  [anon_sym_21st] = "21st",
  [anon_sym_22nd] = "22nd",
  [anon_sym_23rd] = "23rd",
  [anon_sym_24th] = "24th",
  [anon_sym_25th] = "25th",
  [anon_sym_26th] = "26th",
  [anon_sym_27th] = "27th",
  [anon_sym_28th] = "28th",
  [anon_sym_29th] = "29th",
  [anon_sym_30th] = "30th",
  [anon_sym_31st] = "31st",
  [anon_sym_January] = "January",
  [anon_sym_February] = "February",
  [anon_sym_March] = "March",
  [anon_sym_April] = "April",
  [anon_sym_May] = "May",
  [anon_sym_June] = "June",
  [anon_sym_July] = "July",
  [anon_sym_August] = "August",
  [anon_sym_September] = "September",
  [anon_sym_October] = "October",
  [anon_sym_November] = "November",
  [anon_sym_December] = "December",
  [sym_string] = "string",
  [sym_num] = "num",
  [sym__numSingle] = "_numSingle",
  [sym_comment] = "comment",
  [sym_contract] = "contract",
  [sym_start] = "clause",
  [sym_user] = "user",
  [sym_name] = "name",
  [sym_negation] = "negation",
  [sym_discount] = "statement",
  [sym_conditional_upper] = "bracket",
  [sym_conditional] = "conditional",
  [sym_conditional_and] = "conditional_and",
  [sym_conditional_or] = "conditional_or",
  [sym_condition_n] = "condition",
  [sym_time_holder] = "time_holder",
  [sym__pre_time] = "_pre_time",
  [sym_time] = "time",
  [sym_day] = "day",
  [sym_month] = "month",
  [sym_year] = "year",
  [aux_sym_contract_repeat1] = "contract_repeat1",
  [aux_sym_conditional_and_repeat1] = "conditional_and_repeat1",
  [aux_sym_conditional_or_repeat1] = "conditional_or_repeat1",
  [aux_sym_condition_n_repeat1] = "condition_n_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_discount] = anon_sym_discount,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_if] = anon_sym_if,
  [sym_bracketopen] = sym_bracketopen,
  [sym_bracketclose] = sym_bracketclose,
  [sym_and_connect] = sym_and_connect,
  [sym_or_connect] = sym_or_connect,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_the] = anon_sym_the,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_1st] = anon_sym_1st,
  [anon_sym_2nd] = anon_sym_2nd,
  [anon_sym_3rd] = anon_sym_3rd,
  [anon_sym_4th] = anon_sym_4th,
  [anon_sym_5th] = anon_sym_5th,
  [anon_sym_6th] = anon_sym_6th,
  [anon_sym_7th] = anon_sym_7th,
  [anon_sym_8th] = anon_sym_8th,
  [anon_sym_9th] = anon_sym_9th,
  [anon_sym_10th] = anon_sym_10th,
  [anon_sym_11th] = anon_sym_11th,
  [anon_sym_12th] = anon_sym_12th,
  [anon_sym_13th] = anon_sym_13th,
  [anon_sym_14th] = anon_sym_14th,
  [anon_sym_15th] = anon_sym_15th,
  [anon_sym_16th] = anon_sym_16th,
  [anon_sym_17th] = anon_sym_17th,
  [anon_sym_18th] = anon_sym_18th,
  [anon_sym_19th] = anon_sym_19th,
  [anon_sym_20th] = anon_sym_20th,
  [anon_sym_21st] = anon_sym_21st,
  [anon_sym_22nd] = anon_sym_22nd,
  [anon_sym_23rd] = anon_sym_23rd,
  [anon_sym_24th] = anon_sym_24th,
  [anon_sym_25th] = anon_sym_25th,
  [anon_sym_26th] = anon_sym_26th,
  [anon_sym_27th] = anon_sym_27th,
  [anon_sym_28th] = anon_sym_28th,
  [anon_sym_29th] = anon_sym_29th,
  [anon_sym_30th] = anon_sym_30th,
  [anon_sym_31st] = anon_sym_31st,
  [anon_sym_January] = anon_sym_January,
  [anon_sym_February] = anon_sym_February,
  [anon_sym_March] = anon_sym_March,
  [anon_sym_April] = anon_sym_April,
  [anon_sym_May] = anon_sym_May,
  [anon_sym_June] = anon_sym_June,
  [anon_sym_July] = anon_sym_July,
  [anon_sym_August] = anon_sym_August,
  [anon_sym_September] = anon_sym_September,
  [anon_sym_October] = anon_sym_October,
  [anon_sym_November] = anon_sym_November,
  [anon_sym_December] = anon_sym_December,
  [sym_string] = sym_string,
  [sym_num] = sym_num,
  [sym__numSingle] = sym__numSingle,
  [sym_comment] = sym_comment,
  [sym_contract] = sym_contract,
  [sym_start] = sym_start,
  [sym_user] = sym_user,
  [sym_name] = sym_name,
  [sym_negation] = sym_negation,
  [sym_discount] = sym_discount,
  [sym_conditional_upper] = sym_conditional_upper,
  [sym_conditional] = sym_conditional,
  [sym_conditional_and] = sym_conditional_and,
  [sym_conditional_or] = sym_conditional_or,
  [sym_condition_n] = sym_condition_n,
  [sym_time_holder] = sym_time_holder,
  [sym__pre_time] = sym__pre_time,
  [sym_time] = sym_time,
  [sym_day] = sym_day,
  [sym_month] = sym_month,
  [sym_year] = sym_year,
  [aux_sym_contract_repeat1] = aux_sym_contract_repeat1,
  [aux_sym_conditional_and_repeat1] = aux_sym_conditional_and_repeat1,
  [aux_sym_conditional_or_repeat1] = aux_sym_conditional_or_repeat1,
  [aux_sym_condition_n_repeat1] = aux_sym_condition_n_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_bracketopen] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketclose] = {
    .visible = true,
    .named = true,
  },
  [sym_and_connect] = {
    .visible = true,
    .named = true,
  },
  [sym_or_connect] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1st] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2nd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3rd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21st] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22nd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23rd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_25th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_26th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_28th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_29th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_30th] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_31st] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_January] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_February] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_March] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_April] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_May] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_June] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_July] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_August] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_September] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_October] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_November] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_December] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym__numSingle] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_contract] = {
    .visible = true,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_discount] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_upper] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_and] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_or] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_n] = {
    .visible = true,
    .named = true,
  },
  [sym_time_holder] = {
    .visible = true,
    .named = true,
  },
  [sym__pre_time] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_day] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_contract_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_and_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_or_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_n_repeat1] = {
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
  [13] = 11,
  [14] = 12,
  [15] = 11,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 19,
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
  [44] = 41,
  [45] = 41,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      ADVANCE_MAP(
        '%', 169,
        '-', 182,
        '.', 162,
        '/', 14,
        '0', 263,
        '1', 232,
        '2', 233,
        '3', 234,
        '4', 239,
        '5', 240,
        '6', 241,
        '7', 242,
        '8', 243,
        '9', 244,
        'A', 102,
        'D', 49,
        'F', 43,
        'J', 24,
        'M', 23,
        'N', 98,
        'O', 34,
        'S', 44,
        '[', 173,
      );
      if (lookahead == '\\') SKIP(156);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 't') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\r') ADVANCE(276);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(275);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '-', 182,
        '/', 14,
        'A', 102,
        'D', 49,
        'F', 43,
        'J', 24,
        'M', 23,
        'N', 98,
        'O', 34,
        'S', 44,
      );
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(8);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(12);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '/', 14,
        '0', 264,
        '1', 265,
        '2', 266,
        '3', 267,
        '4', 268,
        '5', 269,
        '6', 270,
        '7', 271,
        '8', 272,
        '9', 273,
      );
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 't') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'i') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 151:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(220);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 155:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 156:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(155);
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(159);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '\n') SKIP(159);
      if (lookahead == '\r') SKIP(157);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      ADVANCE_MAP(
        '/', 14,
        '0', 264,
        '1', 265,
        '2', 266,
        '3', 267,
        '4', 268,
        '5', 269,
        '6', 270,
        '7', 271,
        '8', 272,
        '9', 273,
      );
      if (lookahead == '\\') SKIP(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_discount);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_bracketopen);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_bracketclose);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_and_connect);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_and_connect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_or_connect);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_or_connect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_1st);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_2nd);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_3rd);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_4th);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_5th);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_6th);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_7th);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_8th);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_9th);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_10th);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_11th);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_12th);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_13th);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_14th);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_15th);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_16th);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_17th);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_18th);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_19th);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_20th);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_21st);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_22nd);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_23rd);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_24th);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_25th);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_26th);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_27th);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_28th);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_29th);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_30th);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_31st);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 245,
        '1', 246,
        '2', 247,
        '3', 248,
        '4', 249,
        '5', 250,
        '6', 251,
        '7', 252,
        '8', 253,
        '9', 254,
        's', 119,
      );
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 255,
        '1', 237,
        '2', 235,
        '3', 236,
        '4', 256,
        '5', 257,
        '6', 258,
        '7', 259,
        '8', 260,
        '9', 261,
        'n', 38,
      );
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '0') ADVANCE(262);
      if (lookahead == '1') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(39);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'r') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__numSingle);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 127,
        '1', 128,
        '2', 129,
        '3', 130,
        '4', 131,
        '5', 132,
        '6', 133,
        '7', 134,
        '8', 135,
        '9', 136,
        's', 119,
      );
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 137,
        '1', 116,
        '2', 96,
        '3', 112,
        '4', 138,
        '5', 139,
        '6', 140,
        '7', 141,
        '8', 142,
        '9', 143,
        'n', 38,
      );
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 159},
  [2] = {.lex_state = 159},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 159},
  [5] = {.lex_state = 159},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 159},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 159},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 159},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 159},
  [45] = {.lex_state = 159},
  [46] = {.lex_state = 159},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 159},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_discount] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_bracketopen] = ACTIONS(1),
    [sym_bracketclose] = ACTIONS(1),
    [sym_and_connect] = ACTIONS(1),
    [sym_or_connect] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_1st] = ACTIONS(1),
    [anon_sym_2nd] = ACTIONS(1),
    [anon_sym_3rd] = ACTIONS(1),
    [anon_sym_4th] = ACTIONS(1),
    [anon_sym_5th] = ACTIONS(1),
    [anon_sym_6th] = ACTIONS(1),
    [anon_sym_7th] = ACTIONS(1),
    [anon_sym_8th] = ACTIONS(1),
    [anon_sym_9th] = ACTIONS(1),
    [anon_sym_10th] = ACTIONS(1),
    [anon_sym_11th] = ACTIONS(1),
    [anon_sym_12th] = ACTIONS(1),
    [anon_sym_13th] = ACTIONS(1),
    [anon_sym_14th] = ACTIONS(1),
    [anon_sym_15th] = ACTIONS(1),
    [anon_sym_16th] = ACTIONS(1),
    [anon_sym_17th] = ACTIONS(1),
    [anon_sym_18th] = ACTIONS(1),
    [anon_sym_19th] = ACTIONS(1),
    [anon_sym_20th] = ACTIONS(1),
    [anon_sym_21st] = ACTIONS(1),
    [anon_sym_22nd] = ACTIONS(1),
    [anon_sym_23rd] = ACTIONS(1),
    [anon_sym_24th] = ACTIONS(1),
    [anon_sym_25th] = ACTIONS(1),
    [anon_sym_26th] = ACTIONS(1),
    [anon_sym_27th] = ACTIONS(1),
    [anon_sym_28th] = ACTIONS(1),
    [anon_sym_29th] = ACTIONS(1),
    [anon_sym_30th] = ACTIONS(1),
    [anon_sym_31st] = ACTIONS(1),
    [anon_sym_January] = ACTIONS(1),
    [anon_sym_February] = ACTIONS(1),
    [anon_sym_March] = ACTIONS(1),
    [anon_sym_April] = ACTIONS(1),
    [anon_sym_May] = ACTIONS(1),
    [anon_sym_June] = ACTIONS(1),
    [anon_sym_July] = ACTIONS(1),
    [anon_sym_August] = ACTIONS(1),
    [anon_sym_September] = ACTIONS(1),
    [anon_sym_October] = ACTIONS(1),
    [anon_sym_November] = ACTIONS(1),
    [anon_sym_December] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym__numSingle] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_contract] = STATE(49),
    [sym_start] = STATE(22),
    [sym_user] = STATE(48),
    [sym_name] = STATE(48),
    [aux_sym_contract_repeat1] = STATE(22),
    [sym_string] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__numSingle,
    STATE(34), 1,
      sym_time,
    STATE(66), 1,
      sym_day,
    STATE(70), 1,
      sym_year,
    ACTIONS(7), 31,
      anon_sym_1st,
      anon_sym_2nd,
      anon_sym_3rd,
      anon_sym_4th,
      anon_sym_5th,
      anon_sym_6th,
      anon_sym_7th,
      anon_sym_8th,
      anon_sym_9th,
      anon_sym_10th,
      anon_sym_11th,
      anon_sym_12th,
      anon_sym_13th,
      anon_sym_14th,
      anon_sym_15th,
      anon_sym_16th,
      anon_sym_17th,
      anon_sym_18th,
      anon_sym_19th,
      anon_sym_20th,
      anon_sym_21st,
      anon_sym_22nd,
      anon_sym_23rd,
      anon_sym_24th,
      anon_sym_25th,
      anon_sym_26th,
      anon_sym_27th,
      anon_sym_28th,
      anon_sym_29th,
      anon_sym_30th,
      anon_sym_31st,
  [49] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_the,
    ACTIONS(15), 1,
      sym__numSingle,
    ACTIONS(13), 31,
      anon_sym_1st,
      anon_sym_2nd,
      anon_sym_3rd,
      anon_sym_4th,
      anon_sym_5th,
      anon_sym_6th,
      anon_sym_7th,
      anon_sym_8th,
      anon_sym_9th,
      anon_sym_10th,
      anon_sym_11th,
      anon_sym_12th,
      anon_sym_13th,
      anon_sym_14th,
      anon_sym_15th,
      anon_sym_16th,
      anon_sym_17th,
      anon_sym_18th,
      anon_sym_19th,
      anon_sym_20th,
      anon_sym_21st,
      anon_sym_22nd,
      anon_sym_23rd,
      anon_sym_24th,
      anon_sym_25th,
      anon_sym_26th,
      anon_sym_27th,
      anon_sym_28th,
      anon_sym_29th,
      anon_sym_30th,
      anon_sym_31st,
  [92] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__numSingle,
    STATE(35), 1,
      sym_day,
    ACTIONS(7), 31,
      anon_sym_1st,
      anon_sym_2nd,
      anon_sym_3rd,
      anon_sym_4th,
      anon_sym_5th,
      anon_sym_6th,
      anon_sym_7th,
      anon_sym_8th,
      anon_sym_9th,
      anon_sym_10th,
      anon_sym_11th,
      anon_sym_12th,
      anon_sym_13th,
      anon_sym_14th,
      anon_sym_15th,
      anon_sym_16th,
      anon_sym_17th,
      anon_sym_18th,
      anon_sym_19th,
      anon_sym_20th,
      anon_sym_21st,
      anon_sym_22nd,
      anon_sym_23rd,
      anon_sym_24th,
      anon_sym_25th,
      anon_sym_26th,
      anon_sym_27th,
      anon_sym_28th,
      anon_sym_29th,
      anon_sym_30th,
      anon_sym_31st,
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__numSingle,
    ACTIONS(19), 31,
      anon_sym_1st,
      anon_sym_2nd,
      anon_sym_3rd,
      anon_sym_4th,
      anon_sym_5th,
      anon_sym_6th,
      anon_sym_7th,
      anon_sym_8th,
      anon_sym_9th,
      anon_sym_10th,
      anon_sym_11th,
      anon_sym_12th,
      anon_sym_13th,
      anon_sym_14th,
      anon_sym_15th,
      anon_sym_16th,
      anon_sym_17th,
      anon_sym_18th,
      anon_sym_19th,
      anon_sym_20th,
      anon_sym_21st,
      anon_sym_22nd,
      anon_sym_23rd,
      anon_sym_24th,
      anon_sym_25th,
      anon_sym_26th,
      anon_sym_27th,
      anon_sym_28th,
      anon_sym_29th,
      anon_sym_30th,
      anon_sym_31st,
  [175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__numSingle,
    STATE(55), 1,
      sym_month,
    ACTIONS(23), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__numSingle,
    STATE(56), 1,
      sym_month,
    ACTIONS(23), 12,
      anon_sym_January,
      anon_sym_February,
      anon_sym_March,
      anon_sym_April,
      anon_sym_May,
      anon_sym_June,
      anon_sym_July,
      anon_sym_August,
      anon_sym_September,
      anon_sym_October,
      anon_sym_November,
      anon_sym_December,
  [223] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(31), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_condition_n_repeat1,
    STATE(41), 1,
      sym_negation,
    STATE(50), 1,
      sym_conditional,
    STATE(21), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(42), 2,
      sym_conditional_and,
      sym_conditional_or,
  [253] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(31), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_condition_n_repeat1,
    STATE(41), 1,
      sym_negation,
    STATE(67), 1,
      sym_conditional,
    STATE(21), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(42), 2,
      sym_conditional_and,
      sym_conditional_or,
  [283] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(31), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_condition_n_repeat1,
    STATE(41), 1,
      sym_negation,
    STATE(69), 1,
      sym_conditional,
    STATE(21), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(42), 2,
      sym_conditional_and,
      sym_conditional_or,
  [313] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_on,
    ACTIONS(39), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(19), 1,
      aux_sym_condition_n_repeat1,
    STATE(27), 1,
      sym_time_holder,
    ACTIONS(33), 2,
      anon_sym_DOT,
      sym_bracketclose,
    ACTIONS(35), 2,
      sym_and_connect,
      sym_or_connect,
  [340] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_on,
    ACTIONS(39), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(19), 1,
      aux_sym_condition_n_repeat1,
    STATE(29), 1,
      sym_time_holder,
    ACTIONS(41), 2,
      anon_sym_DOT,
      sym_bracketclose,
    ACTIONS(43), 2,
      sym_and_connect,
      sym_or_connect,
  [367] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_or_connect,
    ACTIONS(37), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(24), 1,
      aux_sym_condition_n_repeat1,
    STATE(27), 1,
      sym_time_holder,
    ACTIONS(33), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [393] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_on,
    ACTIONS(43), 1,
      sym_and_connect,
    ACTIONS(47), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(23), 1,
      aux_sym_condition_n_repeat1,
    STATE(29), 1,
      sym_time_holder,
    ACTIONS(41), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [419] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_and_connect,
    ACTIONS(37), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(23), 1,
      aux_sym_condition_n_repeat1,
    STATE(27), 1,
      sym_time_holder,
    ACTIONS(33), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [445] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_on,
    ACTIONS(43), 1,
      sym_or_connect,
    ACTIONS(45), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(24), 1,
      aux_sym_condition_n_repeat1,
    STATE(29), 1,
      sym_time_holder,
    ACTIONS(41), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [471] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(49), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_condition_n_repeat1,
    STATE(44), 1,
      sym_negation,
    STATE(37), 2,
      sym_conditional_upper,
      sym_condition_n,
  [494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(51), 1,
      sym_string,
    STATE(16), 1,
      aux_sym_condition_n_repeat1,
    STATE(45), 1,
      sym_negation,
    STATE(38), 2,
      sym_conditional_upper,
      sym_condition_n,
  [517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      sym_bracketclose,
    ACTIONS(55), 3,
      sym_and_connect,
      sym_or_connect,
      anon_sym_on,
  [536] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_string,
    STATE(20), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(48), 2,
      sym_user,
      sym_name,
  [554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_and_connect,
    ACTIONS(69), 1,
      sym_or_connect,
    STATE(28), 1,
      aux_sym_conditional_or_repeat1,
    STATE(32), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(65), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [574] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_string,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(48), 2,
      sym_user,
      sym_name,
  [592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      sym_bracketclose,
    ACTIONS(55), 2,
      sym_and_connect,
      anon_sym_on,
  [610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      sym_bracketclose,
    ACTIONS(55), 2,
      sym_or_connect,
      anon_sym_on,
  [628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
      anon_sym_DASH,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 5,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
      anon_sym_DASH,
  [650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
  [660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_or_connect,
    STATE(31), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(85), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
  [684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
  [694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_or_connect,
    STATE(31), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(89), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_and_connect,
    STATE(33), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(94), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_and_connect,
    STATE(33), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(96), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
  [766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
  [775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_DOT,
      sym_bracketclose,
      sym_or_connect,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_if,
    ACTIONS(107), 2,
      anon_sym_discount,
      anon_sym_off,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      sym__numSingle,
  [805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_string,
    STATE(11), 1,
      aux_sym_condition_n_repeat1,
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_DOT,
      sym_bracketclose,
  [823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym__numSingle,
    STATE(35), 1,
      sym_year,
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_string,
    STATE(15), 1,
      aux_sym_condition_n_repeat1,
  [843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_condition_n_repeat1,
  [853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_string,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_num,
    STATE(71), 1,
      sym_discount,
  [871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_has,
  [878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_DOT,
  [892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_string,
  [899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__numSingle,
  [906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
  [913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__numSingle,
  [920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DASH,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DASH,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym__numSingle,
  [941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DASH,
  [948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_is,
  [955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_PERCENT,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__numSingle,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_has,
  [976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__numSingle,
  [983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__numSingle,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_true,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DASH,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DOT,
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_not,
  [1018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_bracketclose,
  [1025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DASH,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DOT,
  [1039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_if,
  [1046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_that,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 313,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 445,
  [SMALL_STATE(17)] = 471,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 517,
  [SMALL_STATE(20)] = 536,
  [SMALL_STATE(21)] = 554,
  [SMALL_STATE(22)] = 574,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 628,
  [SMALL_STATE(26)] = 639,
  [SMALL_STATE(27)] = 650,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 674,
  [SMALL_STATE(30)] = 684,
  [SMALL_STATE(31)] = 694,
  [SMALL_STATE(32)] = 708,
  [SMALL_STATE(33)] = 722,
  [SMALL_STATE(34)] = 736,
  [SMALL_STATE(35)] = 746,
  [SMALL_STATE(36)] = 756,
  [SMALL_STATE(37)] = 766,
  [SMALL_STATE(38)] = 775,
  [SMALL_STATE(39)] = 784,
  [SMALL_STATE(40)] = 795,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 815,
  [SMALL_STATE(43)] = 823,
  [SMALL_STATE(44)] = 833,
  [SMALL_STATE(45)] = 843,
  [SMALL_STATE(46)] = 853,
  [SMALL_STATE(47)] = 861,
  [SMALL_STATE(48)] = 871,
  [SMALL_STATE(49)] = 878,
  [SMALL_STATE(50)] = 885,
  [SMALL_STATE(51)] = 892,
  [SMALL_STATE(52)] = 899,
  [SMALL_STATE(53)] = 906,
  [SMALL_STATE(54)] = 913,
  [SMALL_STATE(55)] = 920,
  [SMALL_STATE(56)] = 927,
  [SMALL_STATE(57)] = 934,
  [SMALL_STATE(58)] = 941,
  [SMALL_STATE(59)] = 948,
  [SMALL_STATE(60)] = 955,
  [SMALL_STATE(61)] = 962,
  [SMALL_STATE(62)] = 969,
  [SMALL_STATE(63)] = 976,
  [SMALL_STATE(64)] = 983,
  [SMALL_STATE(65)] = 990,
  [SMALL_STATE(66)] = 997,
  [SMALL_STATE(67)] = 1004,
  [SMALL_STATE(68)] = 1011,
  [SMALL_STATE(69)] = 1018,
  [SMALL_STATE(70)] = 1025,
  [SMALL_STATE(71)] = 1032,
  [SMALL_STATE(72)] = 1039,
  [SMALL_STATE(73)] = 1046,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pre_time, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pre_time, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pre_time, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pre_time, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_n, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_n, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_or, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_upper, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_and, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_holder, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 5, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cola(void) {
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
