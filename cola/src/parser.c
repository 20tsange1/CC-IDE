#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
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
  anon_sym_or = 17,
  anon_sym_SEMI = 18,
  anon_sym_before = 19,
  anon_sym_the = 20,
  anon_sym_after = 21,
  anon_sym_on = 22,
  anon_sym_DASH = 23,
  anon_sym_1st = 24,
  anon_sym_2nd = 25,
  anon_sym_3rd = 26,
  anon_sym_4th = 27,
  anon_sym_5th = 28,
  anon_sym_6th = 29,
  anon_sym_7th = 30,
  anon_sym_8th = 31,
  anon_sym_9th = 32,
  anon_sym_10th = 33,
  anon_sym_11th = 34,
  anon_sym_12th = 35,
  anon_sym_13th = 36,
  anon_sym_14th = 37,
  anon_sym_15th = 38,
  anon_sym_16th = 39,
  anon_sym_17th = 40,
  anon_sym_18th = 41,
  anon_sym_19th = 42,
  anon_sym_20th = 43,
  anon_sym_21st = 44,
  anon_sym_22nd = 45,
  anon_sym_23rd = 46,
  anon_sym_24th = 47,
  anon_sym_25th = 48,
  anon_sym_26th = 49,
  anon_sym_27th = 50,
  anon_sym_28th = 51,
  anon_sym_29th = 52,
  anon_sym_30th = 53,
  anon_sym_31st = 54,
  anon_sym_January = 55,
  anon_sym_February = 56,
  anon_sym_March = 57,
  anon_sym_April = 58,
  anon_sym_May = 59,
  anon_sym_June = 60,
  anon_sym_July = 61,
  anon_sym_August = 62,
  anon_sym_September = 63,
  anon_sym_October = 64,
  anon_sym_November = 65,
  anon_sym_December = 66,
  sym_string = 67,
  sym_num = 68,
  sym__numSingle = 69,
  sym_comment = 70,
  sym_contract = 71,
  sym_start = 72,
  sym_user = 73,
  sym_name = 74,
  sym_negation = 75,
  sym_discount = 76,
  sym_discount_specific = 77,
  sym_conditional_upper = 78,
  sym_conditional = 79,
  sym_conditional_and = 80,
  sym_and_connect = 81,
  sym_conditional_or = 82,
  sym_or_connect = 83,
  sym_condition_n = 84,
  sym_time_holder = 85,
  sym__pre_time = 86,
  sym_time_and = 87,
  sym_time_or = 88,
  sym_time_before = 89,
  sym_time_after = 90,
  sym_time_on = 91,
  sym_time = 92,
  sym_day = 93,
  sym_month = 94,
  sym_year = 95,
  aux_sym_contract_repeat1 = 96,
  aux_sym_discount_repeat1 = 97,
  aux_sym_conditional_and_repeat1 = 98,
  aux_sym_conditional_or_repeat1 = 99,
  aux_sym_condition_n_repeat1 = 100,
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
  [anon_sym_or] = "or",
  [anon_sym_SEMI] = ";",
  [anon_sym_before] = "before",
  [anon_sym_the] = "the",
  [anon_sym_after] = "after",
  [anon_sym_on] = "on",
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
  [sym_or_connect] = "or_expression",
  [sym_condition_n] = "condition",
  [sym_time_holder] = "time_holder",
  [sym__pre_time] = "_pre_time",
  [sym_time_and] = "time_and",
  [sym_time_or] = "time_or",
  [sym_time_before] = "time_before",
  [sym_time_after] = "time_after",
  [sym_time_on] = "time_on",
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
  [anon_sym_or] = anon_sym_or,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_the] = anon_sym_the,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_on] = anon_sym_on,
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
  [sym_or_connect] = sym_or_connect,
  [sym_condition_n] = sym_condition_n,
  [sym_time_holder] = sym_time_holder,
  [sym__pre_time] = sym__pre_time,
  [sym_time_and] = sym_time_and,
  [sym_time_or] = sym_time_or,
  [sym_time_before] = sym_time_before,
  [sym_time_after] = sym_time_after,
  [sym_time_on] = sym_time_on,
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
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
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
  [sym_or_connect] = {
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
  [sym_time_and] = {
    .visible = true,
    .named = true,
  },
  [sym_time_or] = {
    .visible = true,
    .named = true,
  },
  [sym_time_before] = {
    .visible = true,
    .named = true,
  },
  [sym_time_after] = {
    .visible = true,
    .named = true,
  },
  [sym_time_on] = {
    .visible = true,
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
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '$', 179,
        '%', 176,
        '-', 192,
        '.', 167,
        '/', 11,
        '0', 279,
        '1', 248,
        '2', 249,
        '3', 250,
        '4', 255,
        '5', 256,
        '6', 257,
        '7', 258,
        '8', 259,
        '9', 260,
        ';', 184,
        'A', 103,
        'D', 46,
        'F', 37,
        'J', 17,
        'M', 18,
        'N', 98,
        'O', 28,
        'S', 38,
        '[', 181,
      );
      if (lookahead == '\\') SKIP(161);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 't') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\r') ADVANCE(292);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(184);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(291);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '-', 192,
        '/', 11,
        'A', 103,
        'D', 46,
        'F', 37,
        'J', 17,
        'M', 18,
        'N', 98,
        'O', 28,
        'S', 38,
      );
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '/', 11,
        '0', 280,
        '1', 281,
        '2', 282,
        '3', 283,
        '4', 284,
        '5', 285,
        '6', 286,
        '7', 287,
        '8', 288,
        '9', 289,
      );
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 't') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '\\') SKIP(8);
      if (lookahead == 'i') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 156:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 159:
      if (lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 160:
      if (eof) ADVANCE(165);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 161:
      if (eof) ADVANCE(165);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(160);
      END_STATE();
    case 162:
      if (eof) ADVANCE(165);
      if (lookahead == '\n') SKIP(164);
      END_STATE();
    case 163:
      if (eof) ADVANCE(165);
      if (lookahead == '\n') SKIP(164);
      if (lookahead == '\r') SKIP(162);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '/', 11,
        '0', 280,
        '1', 281,
        '2', 282,
        '3', 283,
        '4', 284,
        '5', 285,
        '6', 286,
        '7', 287,
        '8', 288,
        '9', 289,
      );
      if (lookahead == '\\') SKIP(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_discount);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_bracketopen);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_bracketclose);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_before);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_after);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_1st);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_2nd);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_3rd);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_4th);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_5th);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_6th);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_7th);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_8th);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_9th);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_10th);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_11th);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_12th);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_13th);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_14th);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_15th);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_16th);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_17th);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_18th);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_19th);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_20th);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_21st);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_22nd);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_23rd);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_24th);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_25th);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_26th);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_27th);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_28th);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_29th);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_30th);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_31st);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 261,
        '1', 262,
        '2', 263,
        '3', 264,
        '4', 265,
        '5', 266,
        '6', 267,
        '7', 268,
        '8', 269,
        '9', 270,
        's', 123,
      );
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_num);
      ADVANCE_MAP(
        '0', 271,
        '1', 253,
        '2', 251,
        '3', 252,
        '4', 272,
        '5', 273,
        '6', 274,
        '7', 275,
        '8', 276,
        '9', 277,
        'n', 32,
      );
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '0') ADVANCE(278);
      if (lookahead == '1') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(33);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__numSingle);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 132,
        '1', 133,
        '2', 134,
        '3', 135,
        '4', 136,
        '5', 137,
        '6', 138,
        '7', 139,
        '8', 140,
        '9', 141,
        's', 123,
      );
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__numSingle);
      ADVANCE_MAP(
        '0', 142,
        '1', 119,
        '2', 96,
        '3', 114,
        '4', 143,
        '5', 144,
        '6', 145,
        '7', 146,
        '8', 147,
        '9', 148,
        'n', 32,
      );
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__numSingle);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 164},
  [8] = {.lex_state = 164},
  [9] = {.lex_state = 164},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 164},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 164},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 164},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 164},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 0},
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
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
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
    [sym_contract] = STATE(71),
    [sym_start] = STATE(21),
    [sym_user] = STATE(73),
    [sym_name] = STATE(73),
    [aux_sym_contract_repeat1] = STATE(21),
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
    STATE(48), 1,
      sym_time,
    STATE(66), 1,
      sym_day,
    STATE(67), 1,
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
      sym__numSingle,
    STATE(57), 1,
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
  [92] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_the,
    ACTIONS(17), 1,
      sym__numSingle,
    ACTIONS(15), 31,
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
  [135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_the,
    ACTIONS(23), 1,
      sym__numSingle,
    ACTIONS(21), 31,
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
  [178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_the,
    ACTIONS(29), 1,
      sym__numSingle,
    ACTIONS(27), 31,
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
  [221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__numSingle,
    ACTIONS(31), 31,
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
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__numSingle,
    ACTIONS(35), 31,
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
  [301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__numSingle,
    ACTIONS(39), 31,
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
  [341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__numSingle,
    STATE(82), 1,
      sym_month,
    ACTIONS(43), 12,
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
  [365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__numSingle,
    STATE(65), 1,
      sym_month,
    ACTIONS(43), 12,
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
  [389] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_before,
    ACTIONS(51), 1,
      anon_sym_after,
    ACTIONS(53), 1,
      anon_sym_on,
    ACTIONS(55), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_condition_n_repeat1,
    STATE(30), 1,
      sym__pre_time,
    STATE(92), 1,
      sym_time_holder,
    STATE(2), 3,
      sym_time_before,
      sym_time_after,
      sym_time_on,
  [422] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_before,
    ACTIONS(51), 1,
      anon_sym_after,
    ACTIONS(53), 1,
      anon_sym_on,
    ACTIONS(55), 1,
      sym_string,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      aux_sym_condition_n_repeat1,
    STATE(30), 1,
      sym__pre_time,
    STATE(74), 1,
      sym_time_holder,
    STATE(2), 3,
      sym_time_before,
      sym_time_after,
      sym_time_on,
  [455] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_it,
    ACTIONS(61), 1,
      sym_bracketopen,
    ACTIONS(63), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_condition_n_repeat1,
    STATE(59), 1,
      sym_negation,
    STATE(60), 1,
      sym_conditional,
    STATE(17), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(52), 2,
      sym_conditional_and,
      sym_conditional_or,
  [485] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_it,
    ACTIONS(61), 1,
      sym_bracketopen,
    ACTIONS(63), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_condition_n_repeat1,
    STATE(59), 1,
      sym_negation,
    STATE(62), 1,
      sym_conditional,
    STATE(17), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(52), 2,
      sym_conditional_and,
      sym_conditional_or,
  [515] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_it,
    ACTIONS(61), 1,
      sym_bracketopen,
    ACTIONS(63), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_condition_n_repeat1,
    STATE(59), 1,
      sym_negation,
    STATE(70), 1,
      sym_conditional,
    STATE(17), 2,
      sym_conditional_upper,
      sym_condition_n,
    STATE(52), 2,
      sym_conditional_and,
      sym_conditional_or,
  [545] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_and,
    ACTIONS(69), 1,
      anon_sym_or,
    STATE(18), 1,
      sym_and_connect,
    STATE(19), 1,
      sym_or_connect,
    STATE(24), 1,
      aux_sym_conditional_or_repeat1,
    STATE(25), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(65), 3,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
  [572] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_it,
    ACTIONS(61), 1,
      sym_bracketopen,
    ACTIONS(63), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_condition_n_repeat1,
    STATE(59), 1,
      sym_negation,
    STATE(37), 2,
      sym_conditional_upper,
      sym_condition_n,
  [595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_it,
    ACTIONS(61), 1,
      sym_bracketopen,
    ACTIONS(63), 1,
      sym_string,
    STATE(13), 1,
      aux_sym_condition_n_repeat1,
    STATE(59), 1,
      sym_negation,
    STATE(35), 2,
      sym_conditional_upper,
      sym_condition_n,
  [618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_before,
    ACTIONS(73), 1,
      anon_sym_after,
    ACTIONS(75), 1,
      anon_sym_on,
    STATE(72), 1,
      sym__pre_time,
    STATE(2), 3,
      sym_time_before,
      sym_time_after,
      sym_time_on,
  [639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_string,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(73), 2,
      sym_user,
      sym_name,
  [657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_string,
    STATE(22), 2,
      sym_start,
      aux_sym_contract_repeat1,
    STATE(73), 2,
      sym_user,
      sym_name,
  [675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_or,
    STATE(19), 1,
      sym_or_connect,
    STATE(23), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(84), 3,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
  [693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_or,
    STATE(19), 1,
      sym_or_connect,
    STATE(23), 1,
      aux_sym_conditional_or_repeat1,
    ACTIONS(89), 3,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
  [711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_and_connect,
    STATE(27), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(91), 3,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
  [729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_condition_n_repeat1,
    ACTIONS(95), 3,
      anon_sym_before,
      anon_sym_after,
      anon_sym_on,
  [747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_and,
    STATE(18), 1,
      sym_and_connect,
    STATE(27), 1,
      aux_sym_conditional_and_repeat1,
    ACTIONS(100), 3,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
  [765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_discount,
      anon_sym_off,
    ACTIONS(105), 3,
      anon_sym_DOT,
      anon_sym_and,
      anon_sym_if,
  [778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      anon_sym_or,
  [789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_and,
    ACTIONS(113), 1,
      anon_sym_or,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(20), 2,
      sym_time_and,
      sym_time_or,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      anon_sym_or,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      anon_sym_or,
  [828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
      anon_sym_or,
  [839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_DASH,
  [849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
      anon_sym_or,
  [859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      sym_num,
    STATE(55), 1,
      sym_discount_specific,
    STATE(81), 1,
      sym_discount,
  [875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 4,
      anon_sym_DOT,
      anon_sym_and,
      sym_else,
      sym_bracketclose,
  [885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SEMI,
      anon_sym_DASH,
  [895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_and,
    STATE(39), 1,
      aux_sym_discount_repeat1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_if,
  [909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_bracketopen,
    ACTIONS(136), 2,
      anon_sym_it,
      sym_string,
  [920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_before,
      anon_sym_after,
      anon_sym_on,
  [929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_DOT,
      anon_sym_and,
      anon_sym_if,
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_bracketopen,
    ACTIONS(144), 2,
      anon_sym_it,
      sym_string,
  [949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(150), 1,
      anon_sym_and,
    STATE(50), 1,
      aux_sym_discount_repeat1,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_DOT,
      anon_sym_and,
      anon_sym_if,
  [971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      sym_num,
    STATE(44), 1,
      sym_discount_specific,
  [984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_before,
      anon_sym_after,
      anon_sym_on,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SEMI,
  [1002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_and,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_discount_repeat1,
  [1015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_and,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_discount_repeat1,
  [1028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      sym_num,
    STATE(45), 1,
      sym_discount_specific,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_DOT,
      sym_else,
      sym_bracketclose,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_and,
    ACTIONS(160), 1,
      anon_sym_if,
    STATE(39), 1,
      aux_sym_discount_repeat1,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_and,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(49), 1,
      aux_sym_discount_repeat1,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_and,
    ACTIONS(162), 1,
      anon_sym_if,
    STATE(53), 1,
      aux_sym_discount_repeat1,
  [1089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      sym_num,
    STATE(54), 1,
      sym_discount_specific,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SEMI,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_and,
      anon_sym_or,
      anon_sym_SEMI,
  [1120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_condition_n_repeat1,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      sym_else,
  [1140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_string,
  [1148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      sym_else,
  [1158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DASH,
    ACTIONS(180), 1,
      sym__numSingle,
  [1168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__numSingle,
    STATE(57), 1,
      sym_year,
  [1178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DASH,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DASH,
  [1192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DASH,
  [1199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_not,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_that,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_bracketclose,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [1227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SEMI,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_has,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_SEMI,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_num,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
  [1262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_string,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__numSingle,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DASH,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__numSingle,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_DOT,
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DASH,
  [1304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_has,
  [1311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_true,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DASH,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_off,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_is,
  [1339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__numSingle,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__numSingle,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__numSingle,
  [1360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__numSingle,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 365,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 422,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 485,
  [SMALL_STATE(16)] = 515,
  [SMALL_STATE(17)] = 545,
  [SMALL_STATE(18)] = 572,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 618,
  [SMALL_STATE(21)] = 639,
  [SMALL_STATE(22)] = 657,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 693,
  [SMALL_STATE(25)] = 711,
  [SMALL_STATE(26)] = 729,
  [SMALL_STATE(27)] = 747,
  [SMALL_STATE(28)] = 765,
  [SMALL_STATE(29)] = 778,
  [SMALL_STATE(30)] = 789,
  [SMALL_STATE(31)] = 806,
  [SMALL_STATE(32)] = 817,
  [SMALL_STATE(33)] = 828,
  [SMALL_STATE(34)] = 839,
  [SMALL_STATE(35)] = 849,
  [SMALL_STATE(36)] = 859,
  [SMALL_STATE(37)] = 875,
  [SMALL_STATE(38)] = 885,
  [SMALL_STATE(39)] = 895,
  [SMALL_STATE(40)] = 909,
  [SMALL_STATE(41)] = 920,
  [SMALL_STATE(42)] = 929,
  [SMALL_STATE(43)] = 938,
  [SMALL_STATE(44)] = 949,
  [SMALL_STATE(45)] = 962,
  [SMALL_STATE(46)] = 971,
  [SMALL_STATE(47)] = 984,
  [SMALL_STATE(48)] = 993,
  [SMALL_STATE(49)] = 1002,
  [SMALL_STATE(50)] = 1015,
  [SMALL_STATE(51)] = 1028,
  [SMALL_STATE(52)] = 1041,
  [SMALL_STATE(53)] = 1050,
  [SMALL_STATE(54)] = 1063,
  [SMALL_STATE(55)] = 1076,
  [SMALL_STATE(56)] = 1089,
  [SMALL_STATE(57)] = 1102,
  [SMALL_STATE(58)] = 1111,
  [SMALL_STATE(59)] = 1120,
  [SMALL_STATE(60)] = 1130,
  [SMALL_STATE(61)] = 1140,
  [SMALL_STATE(62)] = 1148,
  [SMALL_STATE(63)] = 1158,
  [SMALL_STATE(64)] = 1168,
  [SMALL_STATE(65)] = 1178,
  [SMALL_STATE(66)] = 1185,
  [SMALL_STATE(67)] = 1192,
  [SMALL_STATE(68)] = 1199,
  [SMALL_STATE(69)] = 1206,
  [SMALL_STATE(70)] = 1213,
  [SMALL_STATE(71)] = 1220,
  [SMALL_STATE(72)] = 1227,
  [SMALL_STATE(73)] = 1234,
  [SMALL_STATE(74)] = 1241,
  [SMALL_STATE(75)] = 1248,
  [SMALL_STATE(76)] = 1255,
  [SMALL_STATE(77)] = 1262,
  [SMALL_STATE(78)] = 1269,
  [SMALL_STATE(79)] = 1276,
  [SMALL_STATE(80)] = 1283,
  [SMALL_STATE(81)] = 1290,
  [SMALL_STATE(82)] = 1297,
  [SMALL_STATE(83)] = 1304,
  [SMALL_STATE(84)] = 1311,
  [SMALL_STATE(85)] = 1318,
  [SMALL_STATE(86)] = 1325,
  [SMALL_STATE(87)] = 1332,
  [SMALL_STATE(88)] = 1339,
  [SMALL_STATE(89)] = 1346,
  [SMALL_STATE(90)] = 1353,
  [SMALL_STATE(91)] = 1360,
  [SMALL_STATE(92)] = 1367,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_before, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_before, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_on, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_on, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_after, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_after, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_before, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_before, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_after, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_after, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_on, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_on, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_or_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_or, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_and, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_condition_n_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_and_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount_specific, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_holder, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_upper, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_n, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_discount_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_discount_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_connect, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_connect, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_or, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount_specific, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_connect, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_connect, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 5, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_and, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pre_time, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 7, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 6, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discount, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_holder, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 5, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
