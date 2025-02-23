#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 20,
  [24] = 18,
  [25] = 19,
  [26] = 18,
  [27] = 18,
  [28] = 19,
  [29] = 20,
  [30] = 20,
  [31] = 16,
  [32] = 19,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 18,
  [41] = 19,
  [42] = 20,
  [43] = 18,
  [44] = 20,
  [45] = 36,
  [46] = 46,
  [47] = 47,
  [48] = 34,
  [49] = 35,
  [50] = 38,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 56,
  [60] = 56,
  [61] = 61,
  [62] = 62,
  [63] = 56,
  [64] = 64,
  [65] = 56,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(169);
      ADVANCE_MAP(
        '%', 178,
        '-', 191,
        '.', 171,
        '/', 20,
        '0', 273,
        '1', 242,
        '2', 243,
        '3', 244,
        '4', 249,
        '5', 250,
        '6', 251,
        '7', 252,
        '8', 253,
        '9', 254,
        'A', 111,
        'D', 58,
        'F', 52,
        'J', 33,
        'M', 32,
        'N', 107,
        'O', 43,
        'S', 53,
        '[', 182,
      );
      if (lookahead == '\\') SKIP(165);
      if (lookahead == ']') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 't') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(28);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(28);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(29);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(30);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(15);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(17);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(286);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(285);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '-', 191,
        '/', 20,
        'A', 111,
        'D', 58,
        'F', 52,
        'J', 33,
        'M', 32,
        'N', 107,
        'O', 43,
        'S', 53,
      );
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\\') SKIP(8);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\\') SKIP(18);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\\') SKIP(12);
      if (lookahead == 'o') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '/', 20,
        '0', 274,
        '1', 275,
        '2', 276,
        '3', 277,
        '4', 278,
        '5', 279,
        '6', 280,
        '7', 281,
        '8', 282,
        '9', 283,
      );
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 't') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'i') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == ']') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\\') SKIP(14);
      if (lookahead == ']') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\\') SKIP(16);
      if (lookahead == ']') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(158);
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
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(108);
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
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 160:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 164:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 165:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(164);
      END_STATE();
    case 166:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(168);
      END_STATE();
    case 167:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') SKIP(168);
      if (lookahead == '\r') SKIP(166);
      END_STATE();
    case 168:
      if (eof) ADVANCE(169);
      ADVANCE_MAP(
        '/', 20,
        '0', 274,
        '1', 275,
        '2', 276,
        '3', 277,
        '4', 278,
        '5', 279,
        '6', 280,
        '7', 281,
        '8', 282,
        '9', 283,
      );
      if (lookahead == '\\') SKIP(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_discount);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_bracketopen);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_bracketclose);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_and_connect);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_and_connect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_or_connect);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_or_connect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_1st);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_2nd);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_3rd);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_4th);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_5th);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_6th);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_7th);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_8th);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_9th);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_10th);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_11th);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_12th);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_13th);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_14th);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_15th);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_16th);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_17th);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_18th);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_19th);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_20th);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_21st);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_22nd);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_23rd);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_24th);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_25th);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_26th);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_27th);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_28th);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_29th);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_30th);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_31st);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 255,
        '1', 256,
        '2', 257,
        '3', 258,
        '4', 259,
        '5', 260,
        '6', 261,
        '7', 262,
        '8', 263,
        '9', 264,
        's', 128,
      );
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 265,
        '1', 247,
        '2', 245,
        '3', 246,
        '4', 266,
        '5', 267,
        '6', 268,
        '7', 269,
        '8', 270,
        '9', 271,
        'n', 47,
      );
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '0') ADVANCE(272);
      if (lookahead == '1') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(48);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__numSingle);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 136,
        '1', 137,
        '2', 138,
        '3', 139,
        '4', 140,
        '5', 141,
        '6', 142,
        '7', 143,
        '8', 144,
        '9', 145,
        's', 128,
      );
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 146,
        '1', 125,
        '2', 105,
        '3', 121,
        '4', 147,
        '5', 148,
        '6', 149,
        '7', 150,
        '8', 151,
        '9', 152,
        'n', 47,
      );
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 168},
  [2] = {.lex_state = 168},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 168},
  [5] = {.lex_state = 168},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 168},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 168},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 168},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 168},
  [57] = {.lex_state = 168},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 168},
  [60] = {.lex_state = 168},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 168},
  [64] = {.lex_state = 168},
  [65] = {.lex_state = 168},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 168},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 23},
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
    [sym_contract] = STATE(79),
    [sym_start] = STATE(17),
    [sym_user] = STATE(86),
    [sym_name] = STATE(86),
    [aux_sym_contract_repeat1] = STATE(17),
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
    STATE(68), 1,
      sym_time,
    STATE(69), 1,
      sym_day,
    STATE(71), 1,
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
    STATE(66), 1,
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
    STATE(70), 1,
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
    STATE(91), 1,
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
    STATE(26), 1,
      aux_sym_condition_n_repeat1,
    STATE(57), 1,
      sym_negation,
    STATE(77), 1,
      sym_conditional,
    STATE(31), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(47), 2,
      sym_conditional_and,
      sym_conditional_or,
  [253] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(33), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_condition_n_repeat1,
    STATE(52), 1,
      sym_conditional,
    STATE(63), 1,
      sym_negation,
    STATE(16), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(47), 2,
      sym_conditional_and,
      sym_conditional_or,
  [283] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(33), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_condition_n_repeat1,
    STATE(58), 1,
      sym_conditional,
    STATE(63), 1,
      sym_negation,
    STATE(16), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(47), 2,
      sym_conditional_and,
      sym_conditional_or,
  [313] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(35), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_condition_n_repeat1,
    STATE(59), 1,
      sym_negation,
    STATE(33), 2,
      sym_conditional_upper,
      sym_condition_n,
  [336] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(37), 1,
      sym_string,
    STATE(27), 1,
      aux_sym_condition_n_repeat1,
    STATE(60), 1,
      sym_negation,
    STATE(37), 2,
      sym_conditional_upper,
      sym_condition_n,
  [359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(39), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_condition_n_repeat1,
    STATE(65), 1,
      sym_negation,
    STATE(33), 2,
      sym_conditional_upper,
      sym_condition_n,
  [382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(41), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_condition_n_repeat1,
    STATE(56), 1,
      sym_negation,
    STATE(37), 2,
      sym_conditional_upper,
      sym_condition_n,
  [405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_string,
    STATE(15), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(86), 2,
      sym_user,
      sym_name,
  [423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_and_connect,
    ACTIONS(52), 1,
      sym_or_connect,
    STATE(34), 1,
      aux_sym_conditional_and_repeat1,
    STATE(35), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(48), 2,
      anon_sym_DOT,
      anon_sym_on,
  [443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_string,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(86), 2,
      sym_user,
      sym_name,
  [461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(60), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(58), 3,
      sym_and_connect,
      sym_or_connect,
      anon_sym_on,
  [479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_string,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(64), 3,
      sym_and_connect,
      sym_or_connect,
      anon_sym_on,
  [497] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      sym_string,
    STATE(20), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(68), 3,
      sym_and_connect,
      sym_or_connect,
      anon_sym_on,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 5,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      sym_or_connect,
      anon_sym_on,
  [526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_bracketclose,
    ACTIONS(75), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(64), 2,
      sym_and_connect,
      sym_or_connect,
  [543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_bracketclose,
    ACTIONS(77), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(68), 2,
      sym_and_connect,
      sym_or_connect,
  [560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      sym_string,
    STATE(29), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(58), 2,
      sym_and_connect,
      anon_sym_on,
  [577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      sym_string,
    STATE(29), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(64), 2,
      sym_and_connect,
      anon_sym_on,
  [594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_bracketclose,
    ACTIONS(75), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(58), 2,
      sym_and_connect,
      sym_or_connect,
  [611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      sym_string,
    STATE(30), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(58), 2,
      sym_or_connect,
      anon_sym_on,
  [628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      sym_string,
    STATE(30), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(64), 2,
      sym_or_connect,
      anon_sym_on,
  [645] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      sym_string,
    STATE(29), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(68), 2,
      sym_and_connect,
      anon_sym_on,
  [662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      sym_string,
    STATE(30), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(68), 2,
      sym_or_connect,
      anon_sym_on,
  [679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_bracketclose,
    ACTIONS(90), 1,
      sym_and_connect,
    ACTIONS(92), 1,
      sym_or_connect,
    STATE(48), 1,
      aux_sym_conditional_and_repeat1,
    STATE(49), 1,
      aux_sym_conditional_or_repeat1,
  [698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_bracketclose,
    ACTIONS(64), 1,
      sym_or_connect,
    ACTIONS(94), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_condition_n_repeat1,
  [714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_and_connect,
      anon_sym_on,
  [724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_and_connect,
    STATE(38), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(98), 2,
      anon_sym_DOT,
      anon_sym_on,
  [738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_or_connect,
    STATE(36), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(100), 2,
      anon_sym_DOT,
      anon_sym_on,
  [752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_or_connect,
    STATE(36), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(102), 2,
      anon_sym_DOT,
      anon_sym_on,
  [766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_DOT,
      sym_bracketclose,
      sym_or_connect,
      anon_sym_on,
  [776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_and_connect,
    STATE(38), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(96), 2,
      anon_sym_DOT,
      anon_sym_on,
  [790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(112), 1,
      anon_sym_on,
    STATE(2), 1,
      sym__pre_time,
    STATE(67), 1,
      sym_time_holder,
  [806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_bracketclose,
    ACTIONS(58), 1,
      sym_and_connect,
    ACTIONS(114), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_condition_n_repeat1,
  [822] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_bracketclose,
    ACTIONS(64), 1,
      sym_and_connect,
    ACTIONS(114), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_condition_n_repeat1,
  [838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_bracketclose,
    ACTIONS(68), 1,
      sym_and_connect,
    ACTIONS(116), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_condition_n_repeat1,
  [854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_bracketclose,
    ACTIONS(58), 1,
      sym_or_connect,
    ACTIONS(94), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_condition_n_repeat1,
  [870] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_bracketclose,
    ACTIONS(68), 1,
      sym_or_connect,
    ACTIONS(119), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_condition_n_repeat1,
  [886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_bracketclose,
    ACTIONS(122), 1,
      sym_or_connect,
    STATE(45), 1,
      aux_sym_conditional_or_repeat1,
  [899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(125), 2,
      anon_sym_discount,
      anon_sym_off,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_DOT,
      sym_bracketclose,
      anon_sym_on,
  [919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_and_connect,
    ACTIONS(98), 1,
      sym_bracketclose,
    STATE(50), 1,
      aux_sym_conditional_and_repeat1,
  [932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_or_connect,
    ACTIONS(100), 1,
      sym_bracketclose,
    STATE(45), 1,
      aux_sym_conditional_or_repeat1,
  [945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_bracketclose,
    ACTIONS(129), 1,
      sym_and_connect,
    STATE(50), 1,
      aux_sym_conditional_and_repeat1,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_string,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_DOT,
      anon_sym_on,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_DOT,
      anon_sym_DASH,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__numSingle,
    STATE(66), 1,
      sym_year,
  [992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_DOT,
      anon_sym_DASH,
  [1000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_string,
    STATE(32), 1,
      aux_sym_condition_n_repeat1,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_string,
    STATE(22), 1,
      aux_sym_condition_n_repeat1,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_DOT,
      anon_sym_on,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_condition_n_repeat1,
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_string,
    STATE(28), 1,
      aux_sym_condition_n_repeat1,
  [1048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DASH,
    ACTIONS(154), 1,
      sym__numSingle,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_num,
    STATE(39), 1,
      sym_discount,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_string,
    STATE(19), 1,
      aux_sym_condition_n_repeat1,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_string,
  [1086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_condition_n_repeat1,
  [1096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOT,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOT,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DASH,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DASH,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DASH,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_PERCENT,
  [1145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_is,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_true,
  [1159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_if,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_not,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_bracketclose,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_has,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
  [1194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym__numSingle,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DASH,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__numSingle,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_that,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__numSingle,
  [1236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_has,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__numSingle,
  [1250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_string,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__numSingle,
  [1264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
  [1271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DASH,
  [1278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__numSingle,
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
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 359,
  [SMALL_STATE(14)] = 382,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 423,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 461,
  [SMALL_STATE(19)] = 479,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 515,
  [SMALL_STATE(22)] = 526,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 560,
  [SMALL_STATE(25)] = 577,
  [SMALL_STATE(26)] = 594,
  [SMALL_STATE(27)] = 611,
  [SMALL_STATE(28)] = 628,
  [SMALL_STATE(29)] = 645,
  [SMALL_STATE(30)] = 662,
  [SMALL_STATE(31)] = 679,
  [SMALL_STATE(32)] = 698,
  [SMALL_STATE(33)] = 714,
  [SMALL_STATE(34)] = 724,
  [SMALL_STATE(35)] = 738,
  [SMALL_STATE(36)] = 752,
  [SMALL_STATE(37)] = 766,
  [SMALL_STATE(38)] = 776,
  [SMALL_STATE(39)] = 790,
  [SMALL_STATE(40)] = 806,
  [SMALL_STATE(41)] = 822,
  [SMALL_STATE(42)] = 838,
  [SMALL_STATE(43)] = 854,
  [SMALL_STATE(44)] = 870,
  [SMALL_STATE(45)] = 886,
  [SMALL_STATE(46)] = 899,
  [SMALL_STATE(47)] = 910,
  [SMALL_STATE(48)] = 919,
  [SMALL_STATE(49)] = 932,
  [SMALL_STATE(50)] = 945,
  [SMALL_STATE(51)] = 958,
  [SMALL_STATE(52)] = 966,
  [SMALL_STATE(53)] = 974,
  [SMALL_STATE(54)] = 982,
  [SMALL_STATE(55)] = 992,
  [SMALL_STATE(56)] = 1000,
  [SMALL_STATE(57)] = 1010,
  [SMALL_STATE(58)] = 1020,
  [SMALL_STATE(59)] = 1028,
  [SMALL_STATE(60)] = 1038,
  [SMALL_STATE(61)] = 1048,
  [SMALL_STATE(62)] = 1058,
  [SMALL_STATE(63)] = 1068,
  [SMALL_STATE(64)] = 1078,
  [SMALL_STATE(65)] = 1086,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1103,
  [SMALL_STATE(68)] = 1110,
  [SMALL_STATE(69)] = 1117,
  [SMALL_STATE(70)] = 1124,
  [SMALL_STATE(71)] = 1131,
  [SMALL_STATE(72)] = 1138,
  [SMALL_STATE(73)] = 1145,
  [SMALL_STATE(74)] = 1152,
  [SMALL_STATE(75)] = 1159,
  [SMALL_STATE(76)] = 1166,
  [SMALL_STATE(77)] = 1173,
  [SMALL_STATE(78)] = 1180,
  [SMALL_STATE(79)] = 1187,
  [SMALL_STATE(80)] = 1194,
  [SMALL_STATE(81)] = 1201,
  [SMALL_STATE(82)] = 1208,
  [SMALL_STATE(83)] = 1215,
  [SMALL_STATE(84)] = 1222,
  [SMALL_STATE(85)] = 1229,
  [SMALL_STATE(86)] = 1236,
  [SMALL_STATE(87)] = 1243,
  [SMALL_STATE(88)] = 1250,
  [SMALL_STATE(89)] = 1257,
  [SMALL_STATE(90)] = 1264,
  [SMALL_STATE(91)] = 1271,
  [SMALL_STATE(92)] = 1278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pre_time, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pre_time, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pre_time, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pre_time, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_n, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_n, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_upper, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_and, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_or, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 5, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 5, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_holder, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 5, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
