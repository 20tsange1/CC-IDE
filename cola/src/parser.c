#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_has = 1,
  anon_sym_DOT = 2,
  anon_sym_it = 3,
  anon_sym_is = 4,
  anon_sym_not = 5,
  anon_sym_true = 6,
  anon_sym_that = 7,
  anon_sym_and = 8,
  anon_sym_if = 9,
  anon_sym_PERCENT = 10,
  anon_sym_discount = 11,
  anon_sym_off = 12,
  anon_sym_DOLLAR = 13,
  sym_else = 14,
  sym_bracketopen = 15,
  sym_bracketclose = 16,
  sym_or_connect = 17,
  anon_sym_on = 18,
  anon_sym_the = 19,
  anon_sym_DASH = 20,
  anon_sym_1st = 21,
  anon_sym_2nd = 22,
  anon_sym_3rd = 23,
  anon_sym_4th = 24,
  anon_sym_5th = 25,
  anon_sym_6th = 26,
  anon_sym_7th = 27,
  anon_sym_8th = 28,
  anon_sym_9th = 29,
  anon_sym_10th = 30,
  anon_sym_11th = 31,
  anon_sym_12th = 32,
  anon_sym_13th = 33,
  anon_sym_14th = 34,
  anon_sym_15th = 35,
  anon_sym_16th = 36,
  anon_sym_17th = 37,
  anon_sym_18th = 38,
  anon_sym_19th = 39,
  anon_sym_20th = 40,
  anon_sym_21st = 41,
  anon_sym_22nd = 42,
  anon_sym_23rd = 43,
  anon_sym_24th = 44,
  anon_sym_25th = 45,
  anon_sym_26th = 46,
  anon_sym_27th = 47,
  anon_sym_28th = 48,
  anon_sym_29th = 49,
  anon_sym_30th = 50,
  anon_sym_31st = 51,
  anon_sym_January = 52,
  anon_sym_February = 53,
  anon_sym_March = 54,
  anon_sym_April = 55,
  anon_sym_May = 56,
  anon_sym_June = 57,
  anon_sym_July = 58,
  anon_sym_August = 59,
  anon_sym_September = 60,
  anon_sym_October = 61,
  anon_sym_November = 62,
  anon_sym_December = 63,
  sym_string = 64,
  sym_num = 65,
  sym__numSingle = 66,
  sym_comment = 67,
  sym_contract = 68,
  sym_start = 69,
  sym_user = 70,
  sym_name = 71,
  sym_negation = 72,
  sym_discount = 73,
  sym_discount_specific = 74,
  sym_conditional_upper = 75,
  sym_conditional = 76,
  sym_conditional_and = 77,
  sym_and_connect = 78,
  sym_conditional_or = 79,
  sym_condition_n = 80,
  sym_time_holder = 81,
  sym__pre_time = 82,
  sym_time = 83,
  sym_day = 84,
  sym_month = 85,
  sym_year = 86,
  aux_sym_contract_repeat1 = 87,
  aux_sym_discount_repeat1 = 88,
  aux_sym_conditional_and_repeat1 = 89,
  aux_sym_conditional_or_repeat1 = 90,
  aux_sym_condition_n_repeat1 = 91,
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
  [anon_sym_and] = "and",
  [anon_sym_if] = "if",
  [anon_sym_PERCENT] = "%",
  [anon_sym_discount] = "discount",
  [anon_sym_off] = "off",
  [anon_sym_DOLLAR] = "$",
  [sym_else] = "else",
  [sym_bracketopen] = "bracketopen",
  [sym_bracketclose] = "bracketclose",
  [sym_or_connect] = "or_expression",
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
  [sym_discount] = "discount",
  [sym_discount_specific] = "statement",
  [sym_conditional_upper] = "bracket",
  [sym_conditional] = "conditional",
  [sym_conditional_and] = "conditional_and",
  [sym_and_connect] = "and_expression",
  [sym_conditional_or] = "conditional_or",
  [sym_condition_n] = "condition",
  [sym_time_holder] = "time_holder",
  [sym__pre_time] = "_pre_time",
  [sym_time] = "time",
  [sym_day] = "day",
  [sym_month] = "month",
  [sym_year] = "year",
  [aux_sym_contract_repeat1] = "contract_repeat1",
  [aux_sym_discount_repeat1] = "discount_repeat1",
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
  [anon_sym_and] = anon_sym_and,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_discount] = anon_sym_discount,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_else] = sym_else,
  [sym_bracketopen] = sym_bracketopen,
  [sym_bracketclose] = sym_bracketclose,
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
  [sym_discount_specific] = sym_discount_specific,
  [sym_conditional_upper] = sym_conditional_upper,
  [sym_conditional] = sym_conditional,
  [sym_conditional_and] = sym_conditional_and,
  [sym_and_connect] = sym_and_connect,
  [sym_conditional_or] = sym_conditional_or,
  [sym_condition_n] = sym_condition_n,
  [sym_time_holder] = sym_time_holder,
  [sym__pre_time] = sym__pre_time,
  [sym_time] = sym_time,
  [sym_day] = sym_day,
  [sym_month] = sym_month,
  [sym_year] = sym_year,
  [aux_sym_contract_repeat1] = aux_sym_contract_repeat1,
  [aux_sym_discount_repeat1] = aux_sym_discount_repeat1,
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketopen] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketclose] = {
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
  [sym_discount_specific] = {
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
  [sym_and_connect] = {
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
  [aux_sym_discount_repeat1] = {
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
  [17] = 11,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 11,
  [24] = 12,
  [25] = 11,
  [26] = 12,
  [27] = 20,
  [28] = 19,
  [29] = 29,
  [30] = 21,
  [31] = 31,
  [32] = 32,
  [33] = 22,
  [34] = 22,
  [35] = 35,
  [36] = 22,
  [37] = 22,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 22,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 40,
  [55] = 39,
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
  [69] = 49,
  [70] = 50,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 72,
  [76] = 76,
  [77] = 72,
  [78] = 72,
  [79] = 72,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '$', 187,
        '%', 184,
        '-', 197,
        '.', 174,
        '/', 21,
        '0', 281,
        '1', 250,
        '2', 251,
        '3', 252,
        '4', 257,
        '5', 258,
        '6', 259,
        '7', 260,
        '8', 261,
        '9', 262,
        'A', 113,
        'D', 59,
        'F', 52,
        'J', 33,
        'M', 32,
        'N', 109,
        'O', 43,
        'S', 53,
        '[', 190,
      );
      if (lookahead == '\\') SKIP(168);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 't') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(28);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(28);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25);
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
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == '\r') SKIP(15);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(17);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(294);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'i') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(293);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '-', 197,
        '/', 21,
        'A', 113,
        'D', 59,
        'F', 52,
        'J', 33,
        'M', 32,
        'N', 109,
        'O', 43,
        'S', 53,
      );
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(8);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(12);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(16);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '/', 21,
        '0', 282,
        '1', 283,
        '2', 284,
        '3', 285,
        '4', 286,
        '5', 287,
        '6', 288,
        '7', 289,
        '8', 290,
        '9', 291,
      );
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 't') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(14);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(18);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(186);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 163:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 167:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 168:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(167);
      END_STATE();
    case 169:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') SKIP(171);
      END_STATE();
    case 170:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') SKIP(171);
      if (lookahead == '\r') SKIP(169);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '/', 21,
        '0', 282,
        '1', 283,
        '2', 284,
        '3', 285,
        '4', 286,
        '5', 287,
        '6', 288,
        '7', 289,
        '8', 290,
        '9', 291,
      );
      if (lookahead == '\\') SKIP(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_and);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_discount);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_else);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_bracketopen);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_bracketclose);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_or_connect);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_or_connect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_1st);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_2nd);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_3rd);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_4th);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_5th);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_6th);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_7th);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_8th);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_9th);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_10th);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_11th);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_12th);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_13th);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_14th);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_15th);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_16th);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_17th);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_18th);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_19th);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_20th);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_21st);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_22nd);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_23rd);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_24th);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_25th);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_26th);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_27th);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_28th);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_29th);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_30th);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_31st);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 263,
        '1', 264,
        '2', 265,
        '3', 266,
        '4', 267,
        '5', 268,
        '6', 269,
        '7', 270,
        '8', 271,
        '9', 272,
        's', 131,
      );
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 273,
        '1', 255,
        '2', 253,
        '3', 254,
        '4', 274,
        '5', 275,
        '6', 276,
        '7', 277,
        '8', 278,
        '9', 279,
        'n', 47,
      );
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == '1') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(48);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__numSingle);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 139,
        '1', 140,
        '2', 141,
        '3', 142,
        '4', 143,
        '5', 144,
        '6', 145,
        '7', 146,
        '8', 147,
        '9', 148,
        's', 131,
      );
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 149,
        '1', 127,
        '2', 107,
        '3', 123,
        '4', 150,
        '5', 151,
        '6', 152,
        '7', 153,
        '8', 154,
        '9', 155,
        'n', 47,
      );
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == '1') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 171},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 171},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 171},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 171},
  [75] = {.lex_state = 171},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 171},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 171},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 171},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 0},
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
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_discount] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_else] = ACTIONS(1),
    [sym_bracketopen] = ACTIONS(1),
    [sym_bracketclose] = ACTIONS(1),
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
    [sym_contract] = STATE(91),
    [sym_start] = STATE(35),
    [sym_user] = STATE(86),
    [sym_name] = STATE(86),
    [aux_sym_contract_repeat1] = STATE(35),
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
    STATE(41), 1,
      sym_time,
    STATE(84), 1,
      sym_day,
    STATE(89), 1,
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
    STATE(42), 1,
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
    STATE(102), 1,
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
    STATE(103), 1,
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
    STATE(13), 1,
      aux_sym_condition_n_repeat1,
    STATE(74), 1,
      sym_negation,
    STATE(83), 1,
      sym_conditional,
    STATE(30), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(65), 2,
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
    STATE(11), 1,
      aux_sym_condition_n_repeat1,
    STATE(78), 1,
      sym_negation,
    STATE(80), 1,
      sym_conditional,
    STATE(21), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(65), 2,
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
    STATE(11), 1,
      aux_sym_condition_n_repeat1,
    STATE(73), 1,
      sym_conditional,
    STATE(78), 1,
      sym_negation,
    STATE(21), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(65), 2,
      sym_conditional_and,
      sym_conditional_or,
  [313] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(41), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(22), 1,
      aux_sym_condition_n_repeat1,
    STATE(44), 1,
      sym_time_holder,
    ACTIONS(37), 3,
      anon_sym_and,
      sym_else,
      sym_or_connect,
  [340] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(41), 1,
      sym_string,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(2), 1,
      sym__pre_time,
    STATE(22), 1,
      aux_sym_condition_n_repeat1,
    STATE(38), 1,
      sym_time_holder,
    ACTIONS(45), 3,
      anon_sym_and,
      sym_else,
      sym_or_connect,
  [367] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_bracketclose,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(47), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(33), 1,
      aux_sym_condition_n_repeat1,
    STATE(44), 1,
      sym_time_holder,
    ACTIONS(37), 2,
      anon_sym_and,
      sym_or_connect,
  [393] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(43), 1,
      sym_bracketclose,
    ACTIONS(47), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(33), 1,
      aux_sym_condition_n_repeat1,
    STATE(38), 1,
      sym_time_holder,
    ACTIONS(45), 2,
      anon_sym_and,
      sym_or_connect,
  [419] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(49), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(34), 1,
      aux_sym_condition_n_repeat1,
    STATE(44), 1,
      sym_time_holder,
    ACTIONS(37), 2,
      sym_else,
      sym_or_connect,
  [445] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(34), 1,
      aux_sym_condition_n_repeat1,
    STATE(38), 1,
      sym_time_holder,
    ACTIONS(45), 2,
      sym_else,
      sym_or_connect,
  [471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(51), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(36), 1,
      aux_sym_condition_n_repeat1,
    STATE(44), 1,
      sym_time_holder,
    ACTIONS(37), 2,
      anon_sym_and,
      sym_else,
  [497] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(36), 1,
      aux_sym_condition_n_repeat1,
    STATE(38), 1,
      sym_time_holder,
    ACTIONS(45), 2,
      anon_sym_and,
      sym_else,
  [523] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(53), 1,
      sym_string,
    STATE(17), 1,
      aux_sym_condition_n_repeat1,
    STATE(77), 1,
      sym_negation,
    STATE(51), 2,
      sym_conditional_upper,
      sym_condition_n,
  [546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(55), 1,
      sym_string,
    STATE(15), 1,
      aux_sym_condition_n_repeat1,
    STATE(75), 1,
      sym_negation,
    STATE(52), 2,
      sym_conditional_upper,
      sym_condition_n,
  [569] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_and,
    ACTIONS(61), 1,
      sym_or_connect,
    STATE(19), 1,
      sym_and_connect,
    STATE(40), 1,
      aux_sym_conditional_and_repeat1,
    STATE(49), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(57), 2,
      anon_sym_DOT,
      sym_else,
  [592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      sym_string,
    STATE(22), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(65), 4,
      anon_sym_and,
      sym_else,
      sym_or_connect,
      anon_sym_on,
  [611] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_bracketclose,
    ACTIONS(37), 1,
      sym_or_connect,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(70), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(44), 1,
      sym_time_holder,
    STATE(46), 1,
      aux_sym_condition_n_repeat1,
  [636] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(43), 1,
      sym_bracketclose,
    ACTIONS(45), 1,
      sym_or_connect,
    ACTIONS(70), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(38), 1,
      sym_time_holder,
    STATE(46), 1,
      aux_sym_condition_n_repeat1,
  [661] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_bracketclose,
    ACTIONS(37), 1,
      anon_sym_and,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(72), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(37), 1,
      aux_sym_condition_n_repeat1,
    STATE(44), 1,
      sym_time_holder,
  [686] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_on,
    ACTIONS(43), 1,
      sym_bracketclose,
    ACTIONS(45), 1,
      anon_sym_and,
    ACTIONS(72), 1,
      sym_string,
    STATE(2), 1,
      sym__pre_time,
    STATE(37), 1,
      aux_sym_condition_n_repeat1,
    STATE(38), 1,
      sym_time_holder,
  [711] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(74), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_condition_n_repeat1,
    STATE(79), 1,
      sym_negation,
    STATE(52), 2,
      sym_conditional_upper,
      sym_condition_n,
  [734] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_it,
    ACTIONS(29), 1,
      sym_bracketopen,
    ACTIONS(76), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_condition_n_repeat1,
    STATE(72), 1,
      sym_negation,
    STATE(51), 2,
      sym_conditional_upper,
      sym_condition_n,
  [757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      sym_string,
    STATE(29), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(86), 2,
      sym_user,
      sym_name,
  [775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_bracketclose,
    ACTIONS(59), 1,
      anon_sym_and,
    ACTIONS(83), 1,
      sym_or_connect,
    STATE(28), 1,
      sym_and_connect,
    STATE(54), 1,
      aux_sym_conditional_and_repeat1,
    STATE(69), 1,
      aux_sym_conditional_or_repeat1,
  [797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 6,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
      anon_sym_DASH,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
      anon_sym_DASH,
  [821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_bracketclose,
    ACTIONS(89), 1,
      sym_string,
    STATE(33), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(65), 3,
      anon_sym_and,
      sym_or_connect,
      anon_sym_on,
  [839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      sym_string,
    STATE(34), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(65), 3,
      sym_else,
      sym_or_connect,
      anon_sym_on,
  [857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_string,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(86), 2,
      sym_user,
      sym_name,
  [875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      sym_string,
    STATE(36), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(65), 3,
      anon_sym_and,
      sym_else,
      anon_sym_on,
  [893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_bracketclose,
    ACTIONS(100), 1,
      sym_string,
    STATE(37), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(65), 2,
      anon_sym_and,
      anon_sym_on,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
  [921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_and,
    STATE(19), 1,
      sym_and_connect,
    STATE(39), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(105), 2,
      anon_sym_DOT,
      sym_else,
  [938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_and,
    STATE(19), 1,
      sym_and_connect,
    STATE(39), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(110), 2,
      anon_sym_DOT,
      sym_else,
  [955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
  [977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_discount,
      anon_sym_off,
    ACTIONS(118), 3,
      anon_sym_DOT,
      anon_sym_and,
      anon_sym_if,
  [1012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_bracketclose,
    ACTIONS(122), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(65), 2,
      sym_or_connect,
      anon_sym_on,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
  [1040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_and,
    STATE(48), 1,
      aux_sym_discount_repeat1,
    ACTIONS(127), 2,
      anon_sym_DOT,
      anon_sym_if,
  [1054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_or_connect,
    STATE(50), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(132), 2,
      anon_sym_DOT,
      sym_else,
  [1068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_or_connect,
    STATE(50), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(134), 2,
      anon_sym_DOT,
      sym_else,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
      sym_or_connect,
  [1102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      sym_num,
    STATE(64), 1,
      sym_discount_specific,
    STATE(104), 1,
      sym_discount,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_and,
    ACTIONS(110), 1,
      sym_bracketclose,
    STATE(28), 1,
      sym_and_connect,
    STATE(55), 1,
      aux_sym_conditional_and_repeat1,
  [1134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_bracketclose,
    ACTIONS(107), 1,
      anon_sym_and,
    STATE(28), 1,
      sym_and_connect,
    STATE(55), 1,
      aux_sym_conditional_and_repeat1,
  [1150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
    ACTIONS(145), 1,
      anon_sym_and,
    STATE(59), 1,
      aux_sym_discount_repeat1,
  [1163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      sym_num,
    STATE(62), 1,
      sym_discount_specific,
  [1176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_and,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(48), 1,
      aux_sym_discount_repeat1,
  [1189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_and,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_discount_repeat1,
  [1202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_and,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_discount_repeat1,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_DOT,
      anon_sym_and,
      anon_sym_if,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_DOT,
      anon_sym_and,
      anon_sym_if,
  [1233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      sym_num,
    STATE(60), 1,
      sym_discount_specific,
  [1246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_and,
    ACTIONS(155), 1,
      anon_sym_if,
    STATE(58), 1,
      aux_sym_discount_repeat1,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
  [1268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      sym_num,
    STATE(56), 1,
      sym_discount_specific,
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_bracketopen,
    ACTIONS(157), 2,
      anon_sym_it,
      sym_string,
  [1292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
    ACTIONS(145), 1,
      anon_sym_and,
    STATE(48), 1,
      aux_sym_discount_repeat1,
  [1305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_or_connect,
    ACTIONS(132), 1,
      sym_bracketclose,
    STATE(70), 1,
      aux_sym_conditional_or_repeat1,
  [1318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_bracketclose,
    ACTIONS(161), 1,
      sym_or_connect,
    STATE(70), 1,
      aux_sym_conditional_or_repeat1,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__numSingle,
    STATE(42), 1,
      sym_year,
  [1341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_condition_n_repeat1,
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      sym_else,
  [1361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_string,
    STATE(14), 1,
      aux_sym_condition_n_repeat1,
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_string,
    STATE(16), 1,
      aux_sym_condition_n_repeat1,
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      sym__numSingle,
  [1391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_string,
    STATE(18), 1,
      aux_sym_condition_n_repeat1,
  [1401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_condition_n_repeat1,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_condition_n_repeat1,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      sym_else,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym_string,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__numSingle,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_bracketclose,
  [1453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DASH,
  [1460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_is,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_has,
  [1474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__numSingle,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym__numSingle,
  [1488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DASH,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_off,
  [1502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__numSingle,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_true,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_that,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_string,
  [1537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_PERCENT,
  [1544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__numSingle,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_has,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DASH,
  [1565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_num,
  [1572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_not,
  [1579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DASH,
  [1586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DASH,
  [1593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOT,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__numSingle,
  [1607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DASH,
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
  [SMALL_STATE(18)] = 497,
  [SMALL_STATE(19)] = 523,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 592,
  [SMALL_STATE(23)] = 611,
  [SMALL_STATE(24)] = 636,
  [SMALL_STATE(25)] = 661,
  [SMALL_STATE(26)] = 686,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 734,
  [SMALL_STATE(29)] = 757,
  [SMALL_STATE(30)] = 775,
  [SMALL_STATE(31)] = 797,
  [SMALL_STATE(32)] = 809,
  [SMALL_STATE(33)] = 821,
  [SMALL_STATE(34)] = 839,
  [SMALL_STATE(35)] = 857,
  [SMALL_STATE(36)] = 875,
  [SMALL_STATE(37)] = 893,
  [SMALL_STATE(38)] = 910,
  [SMALL_STATE(39)] = 921,
  [SMALL_STATE(40)] = 938,
  [SMALL_STATE(41)] = 955,
  [SMALL_STATE(42)] = 966,
  [SMALL_STATE(43)] = 977,
  [SMALL_STATE(44)] = 988,
  [SMALL_STATE(45)] = 999,
  [SMALL_STATE(46)] = 1012,
  [SMALL_STATE(47)] = 1029,
  [SMALL_STATE(48)] = 1040,
  [SMALL_STATE(49)] = 1054,
  [SMALL_STATE(50)] = 1068,
  [SMALL_STATE(51)] = 1082,
  [SMALL_STATE(52)] = 1092,
  [SMALL_STATE(53)] = 1102,
  [SMALL_STATE(54)] = 1118,
  [SMALL_STATE(55)] = 1134,
  [SMALL_STATE(56)] = 1150,
  [SMALL_STATE(57)] = 1163,
  [SMALL_STATE(58)] = 1176,
  [SMALL_STATE(59)] = 1189,
  [SMALL_STATE(60)] = 1202,
  [SMALL_STATE(61)] = 1215,
  [SMALL_STATE(62)] = 1224,
  [SMALL_STATE(63)] = 1233,
  [SMALL_STATE(64)] = 1246,
  [SMALL_STATE(65)] = 1259,
  [SMALL_STATE(66)] = 1268,
  [SMALL_STATE(67)] = 1281,
  [SMALL_STATE(68)] = 1292,
  [SMALL_STATE(69)] = 1305,
  [SMALL_STATE(70)] = 1318,
  [SMALL_STATE(71)] = 1331,
  [SMALL_STATE(72)] = 1341,
  [SMALL_STATE(73)] = 1351,
  [SMALL_STATE(74)] = 1361,
  [SMALL_STATE(75)] = 1371,
  [SMALL_STATE(76)] = 1381,
  [SMALL_STATE(77)] = 1391,
  [SMALL_STATE(78)] = 1401,
  [SMALL_STATE(79)] = 1411,
  [SMALL_STATE(80)] = 1421,
  [SMALL_STATE(81)] = 1431,
  [SMALL_STATE(82)] = 1439,
  [SMALL_STATE(83)] = 1446,
  [SMALL_STATE(84)] = 1453,
  [SMALL_STATE(85)] = 1460,
  [SMALL_STATE(86)] = 1467,
  [SMALL_STATE(87)] = 1474,
  [SMALL_STATE(88)] = 1481,
  [SMALL_STATE(89)] = 1488,
  [SMALL_STATE(90)] = 1495,
  [SMALL_STATE(91)] = 1502,
  [SMALL_STATE(92)] = 1509,
  [SMALL_STATE(93)] = 1516,
  [SMALL_STATE(94)] = 1523,
  [SMALL_STATE(95)] = 1530,
  [SMALL_STATE(96)] = 1537,
  [SMALL_STATE(97)] = 1544,
  [SMALL_STATE(98)] = 1551,
  [SMALL_STATE(99)] = 1558,
  [SMALL_STATE(100)] = 1565,
  [SMALL_STATE(101)] = 1572,
  [SMALL_STATE(102)] = 1579,
  [SMALL_STATE(103)] = 1586,
  [SMALL_STATE(104)] = 1593,
  [SMALL_STATE(105)] = 1600,
  [SMALL_STATE(106)] = 1607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pre_time, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pre_time, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pre_time, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pre_time, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_n, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_n, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 4, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_and, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_holder, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 5, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount_specific, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_upper, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_discount_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_discount_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_or, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 7, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount_specific, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_connect, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_connect, 1, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 5, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 2, 0, 0),
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
