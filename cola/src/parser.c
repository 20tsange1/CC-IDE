#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 223
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_C_DASHAND = 1,
  anon_sym_AND = 2,
  anon_sym_IS = 3,
  anon_sym_EQUALS = 4,
  anon_sym_D = 5,
  anon_sym_PLUS = 6,
  anon_sym_MINUS = 7,
  anon_sym_TIMES = 8,
  anon_sym_DIVIDE = 9,
  anon_sym_IF = 10,
  anon_sym_THEN = 11,
  anon_sym_ELSE = 12,
  anon_sym_OR = 13,
  anon_sym_S = 14,
  anon_sym_C = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_it = 20,
  anon_sym_is = 21,
  anon_sym_the = 22,
  anon_sym_case = 23,
  anon_sym_that = 24,
  anon_sym_not = 25,
  anon_sym_deliver = 26,
  anon_sym_pay = 27,
  anon_sym_charge = 28,
  anon_sym_refund = 29,
  anon_sym_delivered = 30,
  anon_sym_paid = 31,
  anon_sym_charged = 32,
  anon_sym_refunded = 33,
  anon_sym_less = 34,
  anon_sym_than = 35,
  anon_sym_equals = 36,
  anon_sym_equal = 37,
  anon_sym_to = 38,
  anon_sym_more = 39,
  anon_sym_greater = 40,
  anon_sym_may = 41,
  anon_sym_forbidden = 42,
  anon_sym_shall = 43,
  anon_sym_must = 44,
  anon_sym_on = 45,
  anon_sym_ANYDATE = 46,
  anon_sym_SOMEDATE = 47,
  anon_sym_THEDATE = 48,
  anon_sym_before = 49,
  anon_sym_after = 50,
  anon_sym_day = 51,
  anon_sym_week = 52,
  anon_sym_year = 53,
  anon_sym_days = 54,
  anon_sym_weeks = 55,
  anon_sym_years = 56,
  anon_sym_January = 57,
  anon_sym_February = 58,
  anon_sym_March = 59,
  anon_sym_April = 60,
  anon_sym_May = 61,
  anon_sym_June = 62,
  anon_sym_July = 63,
  anon_sym_August = 64,
  anon_sym_September = 65,
  anon_sym_October = 66,
  anon_sym_November = 67,
  anon_sym_December = 68,
  anon_sym_AMOUNT = 69,
  anon_sym_SOMECURRENCY = 70,
  anon_sym_REPORT = 71,
  anon_sym_NAMEDOBJECT = 72,
  anon_sym_OTHEROBJECT = 73,
  anon_sym_GBP = 74,
  anon_sym_POUNDS = 75,
  anon_sym_quid = 76,
  anon_sym_USD = 77,
  anon_sym_DOLLARS = 78,
  anon_sym_buck = 79,
  anon_sym_EUR = 80,
  anon_sym_EUROS = 81,
  sym_string = 82,
  sym_num = 83,
  sym_contract = 84,
  sym_component = 85,
  sym_definition = 86,
  sym_simple_definition = 87,
  sym_numerical_expression = 88,
  sym_operator = 89,
  sym_conditional_definition = 90,
  sym_statement = 91,
  sym_conditional_statement = 92,
  sym_simple_statement = 93,
  sym_condition = 94,
  sym_simple_condition = 95,
  sym_boolean_expression = 96,
  sym_ID = 97,
  sym_holds = 98,
  sym_subject = 99,
  sym_verb = 100,
  sym_verb_status = 101,
  sym_comparison = 102,
  sym_equal = 103,
  sym_more_than = 104,
  sym_modal_verb = 105,
  sym_obligation = 106,
  sym_date = 107,
  sym_temporal_quantifier = 108,
  sym_specific_date = 109,
  sym_temporal_offset = 110,
  sym_month = 111,
  sym_object = 112,
  sym_numerical_object = 113,
  sym_nonnumerical_object = 114,
  sym_pounds = 115,
  sym_dollars = 116,
  sym_euros = 117,
  sym_receiver = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_C_DASHAND] = "C-AND",
  [anon_sym_AND] = "AND",
  [anon_sym_IS] = "IS",
  [anon_sym_EQUALS] = "EQUALS",
  [anon_sym_D] = "D",
  [anon_sym_PLUS] = "PLUS",
  [anon_sym_MINUS] = "MINUS",
  [anon_sym_TIMES] = "TIMES",
  [anon_sym_DIVIDE] = "DIVIDE",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_OR] = "OR",
  [anon_sym_S] = "S",
  [anon_sym_C] = "C",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_it] = "it",
  [anon_sym_is] = "is",
  [anon_sym_the] = "the",
  [anon_sym_case] = "case",
  [anon_sym_that] = "that",
  [anon_sym_not] = "not",
  [anon_sym_deliver] = "deliver",
  [anon_sym_pay] = "pay",
  [anon_sym_charge] = "charge",
  [anon_sym_refund] = "refund",
  [anon_sym_delivered] = "delivered",
  [anon_sym_paid] = "paid",
  [anon_sym_charged] = "charged",
  [anon_sym_refunded] = "refunded",
  [anon_sym_less] = "less",
  [anon_sym_than] = "than",
  [anon_sym_equals] = "equals",
  [anon_sym_equal] = "equal",
  [anon_sym_to] = "to",
  [anon_sym_more] = "more",
  [anon_sym_greater] = "greater",
  [anon_sym_may] = "may",
  [anon_sym_forbidden] = "forbidden",
  [anon_sym_shall] = "shall",
  [anon_sym_must] = "must",
  [anon_sym_on] = "on",
  [anon_sym_ANYDATE] = "ANYDATE",
  [anon_sym_SOMEDATE] = "SOMEDATE",
  [anon_sym_THEDATE] = "THEDATE",
  [anon_sym_before] = "before",
  [anon_sym_after] = "after",
  [anon_sym_day] = "day",
  [anon_sym_week] = "week",
  [anon_sym_year] = "year",
  [anon_sym_days] = "days",
  [anon_sym_weeks] = "weeks",
  [anon_sym_years] = "years",
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
  [anon_sym_AMOUNT] = "AMOUNT",
  [anon_sym_SOMECURRENCY] = "SOMECURRENCY",
  [anon_sym_REPORT] = "REPORT",
  [anon_sym_NAMEDOBJECT] = "NAMEDOBJECT",
  [anon_sym_OTHEROBJECT] = "OTHEROBJECT",
  [anon_sym_GBP] = "GBP",
  [anon_sym_POUNDS] = "POUNDS",
  [anon_sym_quid] = "quid",
  [anon_sym_USD] = "USD",
  [anon_sym_DOLLARS] = "DOLLARS",
  [anon_sym_buck] = "buck",
  [anon_sym_EUR] = "EUR",
  [anon_sym_EUROS] = "EUROS",
  [sym_string] = "string",
  [sym_num] = "num",
  [sym_contract] = "contract",
  [sym_component] = "component",
  [sym_definition] = "definition",
  [sym_simple_definition] = "simple_definition",
  [sym_numerical_expression] = "numerical_expression",
  [sym_operator] = "operator",
  [sym_conditional_definition] = "conditional_definition",
  [sym_statement] = "statement",
  [sym_conditional_statement] = "conditional_statement",
  [sym_simple_statement] = "simple_statement",
  [sym_condition] = "condition",
  [sym_simple_condition] = "simple_condition",
  [sym_boolean_expression] = "boolean_expression",
  [sym_ID] = "ID",
  [sym_holds] = "holds",
  [sym_subject] = "subject",
  [sym_verb] = "verb",
  [sym_verb_status] = "verb_status",
  [sym_comparison] = "comparison",
  [sym_equal] = "equal",
  [sym_more_than] = "more_than",
  [sym_modal_verb] = "modal_verb",
  [sym_obligation] = "obligation",
  [sym_date] = "date",
  [sym_temporal_quantifier] = "temporal_quantifier",
  [sym_specific_date] = "specific_date",
  [sym_temporal_offset] = "temporal_offset",
  [sym_month] = "month",
  [sym_object] = "object",
  [sym_numerical_object] = "numerical_object",
  [sym_nonnumerical_object] = "nonnumerical_object",
  [sym_pounds] = "pounds",
  [sym_dollars] = "dollars",
  [sym_euros] = "euros",
  [sym_receiver] = "receiver",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_C_DASHAND] = anon_sym_C_DASHAND,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_EQUALS] = anon_sym_EQUALS,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_MINUS] = anon_sym_MINUS,
  [anon_sym_TIMES] = anon_sym_TIMES,
  [anon_sym_DIVIDE] = anon_sym_DIVIDE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_the] = anon_sym_the,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_deliver] = anon_sym_deliver,
  [anon_sym_pay] = anon_sym_pay,
  [anon_sym_charge] = anon_sym_charge,
  [anon_sym_refund] = anon_sym_refund,
  [anon_sym_delivered] = anon_sym_delivered,
  [anon_sym_paid] = anon_sym_paid,
  [anon_sym_charged] = anon_sym_charged,
  [anon_sym_refunded] = anon_sym_refunded,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_than] = anon_sym_than,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_equal] = anon_sym_equal,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_more] = anon_sym_more,
  [anon_sym_greater] = anon_sym_greater,
  [anon_sym_may] = anon_sym_may,
  [anon_sym_forbidden] = anon_sym_forbidden,
  [anon_sym_shall] = anon_sym_shall,
  [anon_sym_must] = anon_sym_must,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_ANYDATE] = anon_sym_ANYDATE,
  [anon_sym_SOMEDATE] = anon_sym_SOMEDATE,
  [anon_sym_THEDATE] = anon_sym_THEDATE,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_years] = anon_sym_years,
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
  [anon_sym_AMOUNT] = anon_sym_AMOUNT,
  [anon_sym_SOMECURRENCY] = anon_sym_SOMECURRENCY,
  [anon_sym_REPORT] = anon_sym_REPORT,
  [anon_sym_NAMEDOBJECT] = anon_sym_NAMEDOBJECT,
  [anon_sym_OTHEROBJECT] = anon_sym_OTHEROBJECT,
  [anon_sym_GBP] = anon_sym_GBP,
  [anon_sym_POUNDS] = anon_sym_POUNDS,
  [anon_sym_quid] = anon_sym_quid,
  [anon_sym_USD] = anon_sym_USD,
  [anon_sym_DOLLARS] = anon_sym_DOLLARS,
  [anon_sym_buck] = anon_sym_buck,
  [anon_sym_EUR] = anon_sym_EUR,
  [anon_sym_EUROS] = anon_sym_EUROS,
  [sym_string] = sym_string,
  [sym_num] = sym_num,
  [sym_contract] = sym_contract,
  [sym_component] = sym_component,
  [sym_definition] = sym_definition,
  [sym_simple_definition] = sym_simple_definition,
  [sym_numerical_expression] = sym_numerical_expression,
  [sym_operator] = sym_operator,
  [sym_conditional_definition] = sym_conditional_definition,
  [sym_statement] = sym_statement,
  [sym_conditional_statement] = sym_conditional_statement,
  [sym_simple_statement] = sym_simple_statement,
  [sym_condition] = sym_condition,
  [sym_simple_condition] = sym_simple_condition,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_ID] = sym_ID,
  [sym_holds] = sym_holds,
  [sym_subject] = sym_subject,
  [sym_verb] = sym_verb,
  [sym_verb_status] = sym_verb_status,
  [sym_comparison] = sym_comparison,
  [sym_equal] = sym_equal,
  [sym_more_than] = sym_more_than,
  [sym_modal_verb] = sym_modal_verb,
  [sym_obligation] = sym_obligation,
  [sym_date] = sym_date,
  [sym_temporal_quantifier] = sym_temporal_quantifier,
  [sym_specific_date] = sym_specific_date,
  [sym_temporal_offset] = sym_temporal_offset,
  [sym_month] = sym_month,
  [sym_object] = sym_object,
  [sym_numerical_object] = sym_numerical_object,
  [sym_nonnumerical_object] = sym_nonnumerical_object,
  [sym_pounds] = sym_pounds,
  [sym_dollars] = sym_dollars,
  [sym_euros] = sym_euros,
  [sym_receiver] = sym_receiver,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_C_DASHAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQUALS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIMES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIVIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refund] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delivered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_charged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refunded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_more] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greater] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_may] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forbidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_must] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANYDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOMEDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
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
  [anon_sym_AMOUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOMECURRENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAMEDOBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OTHEROBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GBP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EUROS] = {
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
  [sym_contract] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_numerical_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ID] = {
    .visible = true,
    .named = true,
  },
  [sym_holds] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_status] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_more_than] = {
    .visible = true,
    .named = true,
  },
  [sym_modal_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_obligation] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_specific_date] = {
    .visible = true,
    .named = true,
  },
  [sym_temporal_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_numerical_object] = {
    .visible = true,
    .named = true,
  },
  [sym_nonnumerical_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pounds] = {
    .visible = true,
    .named = true,
  },
  [sym_dollars] = {
    .visible = true,
    .named = true,
  },
  [sym_euros] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver] = {
    .visible = true,
    .named = true,
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
  [9] = 6,
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
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
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
  [56] = 54,
  [57] = 53,
  [58] = 53,
  [59] = 54,
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
  [90] = 89,
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
  [106] = 93,
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
  [119] = 113,
  [120] = 118,
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
  [139] = 122,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 140,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 53,
  [149] = 54,
  [150] = 150,
  [151] = 151,
  [152] = 135,
  [153] = 153,
  [154] = 154,
  [155] = 143,
  [156] = 138,
  [157] = 135,
  [158] = 135,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 153,
  [164] = 164,
  [165] = 165,
  [166] = 25,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 27,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 29,
  [177] = 4,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 22,
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
  [197] = 24,
  [198] = 198,
  [199] = 169,
  [200] = 200,
  [201] = 201,
  [202] = 165,
  [203] = 201,
  [204] = 201,
  [205] = 30,
  [206] = 201,
  [207] = 164,
  [208] = 198,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 192,
  [213] = 28,
  [214] = 164,
  [215] = 192,
  [216] = 164,
  [217] = 192,
  [218] = 171,
  [219] = 200,
  [220] = 171,
  [221] = 171,
  [222] = 222,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(280);
      ADVANCE_MAP(
        '(', 301,
        ')', 302,
        'A', 54,
        'C', 297,
        'D', 285,
        'E', 49,
        'F', 141,
        'G', 9,
        'I', 41,
        'J', 108,
        'M', 44,
        'N', 2,
        'O', 70,
        'P', 51,
        'R', 36,
        'S', 295,
        'T', 42,
        'U', 77,
        '[', 299,
        ']', 300,
        'a', 175,
        'b', 150,
        'c', 102,
        'd', 103,
        'e', 223,
        'f', 218,
        'g', 239,
        'i', 247,
        'l', 151,
        'm', 109,
        'n', 220,
        'o', 211,
        'p', 105,
        'q', 260,
        'r', 153,
        's', 186,
        't', 185,
        'w', 157,
        'y', 168,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(282);
      if (lookahead == 'Y') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(367);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(281);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(292);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(293);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(290);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(291);
      if (lookahead == 'S') ADVANCE(283);
      END_STATE();
    case 42:
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'H') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'J') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'J') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(86);
      if (lookahead == 'Q') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 55:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 68:
      if (lookahead == 'P') ADVANCE(364);
      END_STATE();
    case 69:
      if (lookahead == 'P') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(294);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(370);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 78:
      if (lookahead == 'S') ADVANCE(287);
      END_STATE();
    case 79:
      if (lookahead == 'S') ADVANCE(371);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(288);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(289);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(365);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(368);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(361);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(362);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(363);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'U') ADVANCE(5);
      END_STATE();
    case 95:
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'U') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'U') ADVANCE(61);
      END_STATE();
    case 100:
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'Y') ADVANCE(360);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(130);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(257);
      END_STATE();
    case 176:
      if (lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(263);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 183:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(349);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 186:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 187:
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 188:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 189:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'y') ADVANCE(312);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 198:
      if (lookahead == 'k') ADVANCE(369);
      END_STATE();
    case 199:
      if (lookahead == 'k') ADVANCE(342);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 223:
      if (lookahead == 'q') ADVANCE(262);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 262:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 268:
      if (lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 269:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 270:
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 271:
      if (lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 273:
      if (lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 274:
      if (lookahead == 'y') ADVANCE(312);
      END_STATE();
    case 275:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 276:
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 277:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 278:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 279:
      if (eof) ADVANCE(280);
      ADVANCE_MAP(
        'A', 54,
        'C', 1,
        'D', 45,
        'E', 49,
        'F', 141,
        'G', 9,
        'I', 41,
        'J', 108,
        'M', 44,
        'N', 2,
        'O', 70,
        'P', 51,
        'R', 36,
        'S', 66,
        'T', 42,
        'U', 77,
        'a', 175,
        'b', 150,
        'c', 188,
        'd', 104,
        'e', 223,
        'g', 239,
        'i', 246,
        'l', 151,
        'm', 109,
        'o', 211,
        'p', 118,
        'q', 260,
        'r', 171,
        's', 186,
        't', 187,
        'w', 157,
        'y', 168,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_C_DASHAND);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_EQUALS);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_D);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DIVIDE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_S);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_C);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_deliver);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_pay);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_charge);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_charge);
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_refund);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_refund);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_delivered);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_paid);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_charged);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_refunded);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_equal);
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_more);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_greater);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_may);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_forbidden);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_shall);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_must);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SOMEDATE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_before);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_after);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_GBP);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_quid);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_buck);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_EUR);
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 279},
  [3] = {.lex_state = 279},
  [4] = {.lex_state = 279},
  [5] = {.lex_state = 279},
  [6] = {.lex_state = 279},
  [7] = {.lex_state = 279},
  [8] = {.lex_state = 279},
  [9] = {.lex_state = 279},
  [10] = {.lex_state = 279},
  [11] = {.lex_state = 279},
  [12] = {.lex_state = 279},
  [13] = {.lex_state = 279},
  [14] = {.lex_state = 279},
  [15] = {.lex_state = 279},
  [16] = {.lex_state = 279},
  [17] = {.lex_state = 279},
  [18] = {.lex_state = 279},
  [19] = {.lex_state = 279},
  [20] = {.lex_state = 279},
  [21] = {.lex_state = 279},
  [22] = {.lex_state = 279},
  [23] = {.lex_state = 279},
  [24] = {.lex_state = 279},
  [25] = {.lex_state = 279},
  [26] = {.lex_state = 279},
  [27] = {.lex_state = 279},
  [28] = {.lex_state = 279},
  [29] = {.lex_state = 279},
  [30] = {.lex_state = 279},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 279},
  [34] = {.lex_state = 279},
  [35] = {.lex_state = 279},
  [36] = {.lex_state = 85},
  [37] = {.lex_state = 279},
  [38] = {.lex_state = 279},
  [39] = {.lex_state = 107},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 279},
  [42] = {.lex_state = 279},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 279},
  [45] = {.lex_state = 279},
  [46] = {.lex_state = 279},
  [47] = {.lex_state = 279},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 85},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 85},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 279},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 279},
  [65] = {.lex_state = 279},
  [66] = {.lex_state = 279},
  [67] = {.lex_state = 279},
  [68] = {.lex_state = 279},
  [69] = {.lex_state = 279},
  [70] = {.lex_state = 279},
  [71] = {.lex_state = 279},
  [72] = {.lex_state = 279},
  [73] = {.lex_state = 279},
  [74] = {.lex_state = 279},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 279},
  [77] = {.lex_state = 279},
  [78] = {.lex_state = 130},
  [79] = {.lex_state = 279},
  [80] = {.lex_state = 130},
  [81] = {.lex_state = 130},
  [82] = {.lex_state = 279},
  [83] = {.lex_state = 130},
  [84] = {.lex_state = 107},
  [85] = {.lex_state = 130},
  [86] = {.lex_state = 107},
  [87] = {.lex_state = 279},
  [88] = {.lex_state = 130},
  [89] = {.lex_state = 279},
  [90] = {.lex_state = 279},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 279},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 279},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 130},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 279},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 130},
  [104] = {.lex_state = 130},
  [105] = {.lex_state = 279},
  [106] = {.lex_state = 279},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 279},
  [110] = {.lex_state = 279},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 279},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 279},
  [115] = {.lex_state = 279},
  [116] = {.lex_state = 279},
  [117] = {.lex_state = 279},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 278},
  [122] = {.lex_state = 278},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 278},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 278},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 278},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 279},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 279},
  [137] = {.lex_state = 278},
  [138] = {.lex_state = 279},
  [139] = {.lex_state = 278},
  [140] = {.lex_state = 278},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 279},
  [143] = {.lex_state = 279},
  [144] = {.lex_state = 278},
  [145] = {.lex_state = 279},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 279},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 279},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 278},
  [154] = {.lex_state = 278},
  [155] = {.lex_state = 279},
  [156] = {.lex_state = 279},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 278},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 278},
  [163] = {.lex_state = 278},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 278},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 278},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 278},
  [177] = {.lex_state = 278},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 278},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 278},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 278},
  [189] = {.lex_state = 278},
  [190] = {.lex_state = 278},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 278},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 278},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 278},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 278},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 278},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_C_DASHAND] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_EQUALS] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_MINUS] = ACTIONS(1),
    [anon_sym_TIMES] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_deliver] = ACTIONS(1),
    [anon_sym_pay] = ACTIONS(1),
    [anon_sym_charge] = ACTIONS(1),
    [anon_sym_refund] = ACTIONS(1),
    [anon_sym_delivered] = ACTIONS(1),
    [anon_sym_paid] = ACTIONS(1),
    [anon_sym_charged] = ACTIONS(1),
    [anon_sym_refunded] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_than] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_equal] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_more] = ACTIONS(1),
    [anon_sym_greater] = ACTIONS(1),
    [anon_sym_may] = ACTIONS(1),
    [anon_sym_forbidden] = ACTIONS(1),
    [anon_sym_shall] = ACTIONS(1),
    [anon_sym_must] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_ANYDATE] = ACTIONS(1),
    [anon_sym_THEDATE] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
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
    [anon_sym_AMOUNT] = ACTIONS(1),
    [anon_sym_REPORT] = ACTIONS(1),
    [anon_sym_NAMEDOBJECT] = ACTIONS(1),
    [anon_sym_OTHEROBJECT] = ACTIONS(1),
    [anon_sym_GBP] = ACTIONS(1),
    [anon_sym_POUNDS] = ACTIONS(1),
    [anon_sym_quid] = ACTIONS(1),
    [anon_sym_USD] = ACTIONS(1),
    [anon_sym_DOLLARS] = ACTIONS(1),
    [anon_sym_buck] = ACTIONS(1),
    [anon_sym_EUR] = ACTIONS(1),
    [anon_sym_EUROS] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_contract] = STATE(191),
    [sym_component] = STATE(136),
    [sym_definition] = STATE(109),
    [sym_simple_definition] = STATE(87),
    [sym_conditional_definition] = STATE(134),
    [sym_statement] = STATE(116),
    [sym_conditional_statement] = STATE(134),
    [sym_simple_statement] = STATE(73),
    [sym_ID] = STATE(32),
    [anon_sym_IF] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(7), 1,
      anon_sym_less,
    ACTIONS(9), 1,
      anon_sym_equals,
    ACTIONS(11), 1,
      anon_sym_equal,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(126), 1,
      sym_comparison,
    STATE(131), 1,
      sym_object,
    ACTIONS(13), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    STATE(222), 2,
      sym_equal,
      sym_more_than,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [58] = 15,
    ACTIONS(7), 1,
      anon_sym_less,
    ACTIONS(9), 1,
      anon_sym_equals,
    ACTIONS(11), 1,
      anon_sym_equal,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(126), 1,
      sym_comparison,
    STATE(146), 1,
      sym_object,
    ACTIONS(13), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    STATE(222), 2,
      sym_equal,
      sym_more_than,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [116] = 1,
    ACTIONS(27), 26,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IS,
      anon_sym_EQUALS,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_to,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [145] = 16,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(10), 1,
      sym_verb_status,
    STATE(27), 1,
      sym_specific_date,
    STATE(75), 1,
      sym_date,
    STATE(88), 1,
      sym_modal_verb,
    STATE(103), 1,
      sym_obligation,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [199] = 4,
    STATE(199), 1,
      sym_month,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(51), 12,
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
  [227] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(2), 1,
      sym_verb_status,
    STATE(27), 1,
      sym_specific_date,
    STATE(77), 1,
      sym_date,
    STATE(85), 1,
      sym_modal_verb,
    STATE(103), 1,
      sym_obligation,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [275] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(12), 1,
      sym_verb_status,
    STATE(27), 1,
      sym_specific_date,
    STATE(60), 1,
      sym_date,
    STATE(78), 1,
      sym_modal_verb,
    STATE(103), 1,
      sym_obligation,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [323] = 4,
    STATE(169), 1,
      sym_month,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
    ACTIONS(51), 12,
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
  [351] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(130), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [389] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(3), 1,
      sym_verb_status,
    STATE(27), 1,
      sym_specific_date,
    STATE(81), 1,
      sym_modal_verb,
    STATE(82), 1,
      sym_date,
    STATE(103), 1,
      sym_obligation,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [437] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(151), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [475] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(10), 1,
      sym_verb_status,
    STATE(27), 1,
      sym_specific_date,
    STATE(75), 1,
      sym_date,
    STATE(88), 1,
      sym_modal_verb,
    STATE(103), 1,
      sym_obligation,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [523] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(146), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [561] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(159), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [599] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(141), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [637] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(125), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [675] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(127), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [713] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(128), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [751] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(133), 1,
      sym_object,
    STATE(209), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [789] = 2,
    ACTIONS(55), 2,
      anon_sym_equal,
      anon_sym_EUR,
    ACTIONS(53), 16,
      anon_sym_less,
      anon_sym_equals,
      anon_sym_more,
      anon_sym_greater,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
  [812] = 1,
    ACTIONS(57), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [830] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    ACTIONS(59), 1,
      sym_num,
    STATE(46), 1,
      sym_numerical_expression,
    STATE(47), 1,
      sym_numerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [864] = 1,
    ACTIONS(61), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [882] = 1,
    ACTIONS(63), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [900] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    ACTIONS(59), 1,
      sym_num,
    STATE(42), 1,
      sym_numerical_expression,
    STATE(47), 1,
      sym_numerical_object,
    ACTIONS(19), 3,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
    ACTIONS(21), 3,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
    STATE(193), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [934] = 1,
    ACTIONS(65), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [952] = 1,
    ACTIONS(67), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [970] = 1,
    ACTIONS(69), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [988] = 1,
    ACTIONS(71), 15,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_is,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
      anon_sym_may,
      anon_sym_shall,
      anon_sym_must,
  [1006] = 13,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(73), 1,
      anon_sym_C,
    ACTIONS(75), 1,
      anon_sym_it,
    ACTIONS(77), 1,
      anon_sym_on,
    ACTIONS(81), 1,
      sym_string,
    STATE(7), 1,
      sym_subject,
    STATE(39), 1,
      sym_holds,
    STATE(71), 1,
      sym_boolean_expression,
    STATE(93), 1,
      sym_temporal_quantifier,
    STATE(113), 1,
      sym_temporal_offset,
    STATE(154), 1,
      sym_date,
    STATE(170), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1047] = 13,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_it,
    ACTIONS(77), 1,
      anon_sym_on,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(83), 1,
      anon_sym_D,
    ACTIONS(85), 1,
      anon_sym_S,
    STATE(5), 1,
      sym_subject,
    STATE(43), 1,
      sym_holds,
    STATE(93), 1,
      sym_temporal_quantifier,
    STATE(113), 1,
      sym_temporal_offset,
    STATE(137), 1,
      sym_date,
    STATE(170), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1088] = 2,
    STATE(165), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1106] = 2,
    STATE(202), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1124] = 2,
    ACTIONS(89), 1,
      anon_sym_EUR,
    ACTIONS(87), 12,
      anon_sym_AMOUNT,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
  [1142] = 12,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(75), 1,
      anon_sym_it,
    ACTIONS(77), 1,
      anon_sym_on,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(85), 1,
      anon_sym_S,
    STATE(13), 1,
      sym_subject,
    STATE(43), 1,
      sym_holds,
    STATE(93), 1,
      sym_temporal_quantifier,
    STATE(113), 1,
      sym_temporal_offset,
    STATE(137), 1,
      sym_date,
    STATE(170), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1180] = 2,
    STATE(198), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1198] = 2,
    STATE(208), 1,
      sym_month,
    ACTIONS(51), 12,
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
  [1216] = 10,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(77), 1,
      anon_sym_on,
    ACTIONS(81), 1,
      sym_string,
    STATE(11), 1,
      sym_subject,
    STATE(70), 1,
      sym_boolean_expression,
    STATE(93), 1,
      sym_temporal_quantifier,
    STATE(113), 1,
      sym_temporal_offset,
    STATE(160), 1,
      sym_date,
    STATE(170), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1248] = 10,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_statement,
    STATE(87), 1,
      sym_simple_definition,
    STATE(109), 1,
      sym_definition,
    STATE(116), 1,
      sym_statement,
    STATE(136), 1,
      sym_component,
    STATE(172), 1,
      sym_contract,
    STATE(134), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [1280] = 1,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_num,
  [1294] = 3,
    STATE(23), 1,
      sym_operator,
    ACTIONS(95), 4,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1311] = 9,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(77), 1,
      anon_sym_on,
    ACTIONS(81), 1,
      sym_string,
    STATE(8), 1,
      sym_subject,
    STATE(93), 1,
      sym_temporal_quantifier,
    STATE(113), 1,
      sym_temporal_offset,
    STATE(129), 1,
      sym_date,
    STATE(170), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1340] = 1,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_to,
  [1353] = 2,
    ACTIONS(101), 1,
      anon_sym_EUR,
    ACTIONS(99), 9,
      anon_sym_AMOUNT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
      sym_num,
  [1368] = 2,
    STATE(23), 1,
      sym_operator,
    ACTIONS(103), 9,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
  [1383] = 1,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
  [1395] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(27), 1,
      sym_specific_date,
    STATE(65), 1,
      sym_date,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1418] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(27), 1,
      sym_specific_date,
    STATE(66), 1,
      sym_date,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1441] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(27), 1,
      sym_specific_date,
    STATE(69), 1,
      sym_date,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1464] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(27), 1,
      sym_specific_date,
    STATE(68), 1,
      sym_date,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1487] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(27), 1,
      sym_specific_date,
    STATE(61), 1,
      sym_date,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1510] = 2,
    ACTIONS(109), 1,
      sym_num,
    ACTIONS(107), 7,
      anon_sym_D,
      anon_sym_S,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1523] = 2,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(111), 7,
      anon_sym_D,
      anon_sym_S,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1536] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(27), 1,
      sym_specific_date,
    STATE(64), 1,
      sym_date,
    STATE(106), 1,
      sym_temporal_quantifier,
    STATE(119), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1559] = 2,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(111), 6,
      anon_sym_C,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1571] = 2,
    ACTIONS(109), 1,
      sym_num,
    ACTIONS(107), 6,
      anon_sym_S,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1583] = 2,
    ACTIONS(109), 1,
      sym_num,
    ACTIONS(107), 6,
      anon_sym_C,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1595] = 2,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(111), 6,
      anon_sym_S,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1607] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(83), 1,
      sym_modal_verb,
    STATE(103), 1,
      sym_obligation,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
  [1624] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1633] = 2,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [1644] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_statement,
    STATE(87), 1,
      sym_simple_definition,
    STATE(115), 1,
      sym_statement,
    STATE(117), 1,
      sym_definition,
  [1663] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1672] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1681] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1690] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1699] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1708] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1717] = 1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1726] = 1,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1735] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1744] = 2,
    ACTIONS(137), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1755] = 2,
    ACTIONS(141), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [1766] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(80), 1,
      sym_modal_verb,
    STATE(103), 1,
      sym_obligation,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
  [1783] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1791] = 2,
    STATE(15), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [1801] = 2,
    STATE(16), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1811] = 1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1819] = 2,
    STATE(17), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1829] = 2,
    STATE(18), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1839] = 2,
    STATE(19), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [1849] = 2,
    STATE(20), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1859] = 2,
    ACTIONS(149), 1,
      sym_num,
    ACTIONS(147), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1869] = 2,
    STATE(14), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1879] = 2,
    ACTIONS(153), 1,
      sym_num,
    ACTIONS(151), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1889] = 2,
    ACTIONS(157), 1,
      anon_sym_AND,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1899] = 2,
    STATE(12), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1909] = 4,
    ACTIONS(159), 1,
      anon_sym_the,
    ACTIONS(161), 1,
      anon_sym_ANYDATE,
    ACTIONS(165), 1,
      sym_num,
    ACTIONS(163), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1923] = 4,
    ACTIONS(167), 1,
      anon_sym_the,
    ACTIONS(169), 1,
      anon_sym_ANYDATE,
    ACTIONS(173), 1,
      sym_num,
    ACTIONS(171), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1937] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_ID,
    STATE(74), 1,
      sym_simple_condition,
    STATE(110), 1,
      sym_condition,
  [1950] = 4,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_statement,
    STATE(145), 1,
      sym_statement,
  [1963] = 3,
    ACTIONS(179), 1,
      sym_num,
    STATE(118), 1,
      sym_temporal_offset,
    ACTIONS(163), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1974] = 4,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_statement,
    STATE(150), 1,
      sym_statement,
  [1987] = 1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1994] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_ID,
    STATE(74), 1,
      sym_simple_condition,
    STATE(112), 1,
      sym_condition,
  [2007] = 1,
    ACTIONS(183), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2014] = 4,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_simple_definition,
    STATE(99), 1,
      sym_definition,
    STATE(111), 1,
      sym_ID,
  [2027] = 1,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2034] = 4,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_statement,
    STATE(95), 1,
      sym_statement,
  [2047] = 4,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_simple_definition,
    STATE(111), 1,
      sym_ID,
    STATE(147), 1,
      sym_definition,
  [2060] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_ID,
    STATE(74), 1,
      sym_simple_condition,
    STATE(105), 1,
      sym_condition,
  [2073] = 1,
    ACTIONS(189), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2080] = 1,
    ACTIONS(191), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2087] = 1,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [2094] = 3,
    ACTIONS(195), 1,
      sym_num,
    STATE(120), 1,
      sym_temporal_offset,
    ACTIONS(171), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2105] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_ID,
    STATE(74), 1,
      sym_simple_condition,
    STATE(174), 1,
      sym_condition,
  [2118] = 4,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_simple_definition,
    STATE(111), 1,
      sym_ID,
    STATE(142), 1,
      sym_definition,
  [2131] = 2,
    ACTIONS(199), 1,
      anon_sym_IF,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2139] = 2,
    ACTIONS(203), 1,
      anon_sym_ELSE,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2147] = 3,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(83), 1,
      anon_sym_D,
    STATE(123), 1,
      sym_subject,
  [2157] = 2,
    ACTIONS(207), 1,
      anon_sym_ELSE,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2165] = 2,
    STATE(143), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2173] = 1,
    ACTIONS(209), 3,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
      sym_num,
  [2179] = 2,
    ACTIONS(213), 1,
      anon_sym_ELSE,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2187] = 2,
    ACTIONS(215), 1,
      anon_sym_IF,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2195] = 2,
    ACTIONS(219), 1,
      anon_sym_ELSE,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2203] = 2,
    STATE(138), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2211] = 2,
    STATE(155), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2219] = 2,
    STATE(156), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2227] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(79), 1,
      sym_subject,
  [2234] = 2,
    ACTIONS(223), 1,
      sym_string,
    STATE(176), 1,
      sym_subject,
  [2241] = 2,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
  [2248] = 1,
    ACTIONS(225), 2,
      anon_sym_before,
      anon_sym_after,
  [2253] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(64), 1,
      sym_receiver,
  [2260] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(72), 1,
      sym_subject,
  [2267] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(50), 1,
      sym_receiver,
  [2274] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(66), 1,
      sym_receiver,
  [2281] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(60), 1,
      sym_subject,
  [2288] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(52), 1,
      sym_receiver,
  [2295] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(48), 1,
      sym_receiver,
  [2302] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(41), 1,
      sym_subject,
  [2309] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(68), 1,
      sym_receiver,
  [2316] = 1,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2321] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
  [2328] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      anon_sym_C_DASHAND,
  [2335] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(75), 1,
      sym_subject,
  [2342] = 1,
    ACTIONS(237), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2347] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(29), 1,
      sym_subject,
  [2354] = 2,
    ACTIONS(223), 1,
      sym_string,
    STATE(213), 1,
      sym_subject,
  [2361] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(51), 1,
      sym_receiver,
  [2368] = 1,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2373] = 1,
    ACTIONS(241), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2378] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(28), 1,
      sym_subject,
  [2385] = 1,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2390] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(49), 1,
      sym_receiver,
  [2397] = 1,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2402] = 1,
    ACTIONS(107), 2,
      anon_sym_D,
      sym_string,
  [2407] = 1,
    ACTIONS(111), 2,
      anon_sym_D,
      sym_string,
  [2412] = 1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2417] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(55), 1,
      sym_receiver,
  [2424] = 2,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
  [2431] = 2,
    ACTIONS(223), 1,
      sym_string,
    STATE(181), 1,
      sym_subject,
  [2438] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(77), 1,
      sym_subject,
  [2445] = 1,
    ACTIONS(253), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2450] = 1,
    ACTIONS(255), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2455] = 2,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
  [2462] = 2,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
  [2469] = 2,
    ACTIONS(227), 1,
      anon_sym_to,
    STATE(65), 1,
      sym_receiver,
  [2476] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(82), 1,
      sym_subject,
  [2483] = 2,
    ACTIONS(265), 1,
      anon_sym_the,
    ACTIONS(267), 1,
      anon_sym_not,
  [2490] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(44), 1,
      sym_subject,
  [2497] = 2,
    ACTIONS(221), 1,
      sym_string,
    STATE(22), 1,
      sym_subject,
  [2504] = 1,
    ACTIONS(269), 1,
      sym_num,
  [2508] = 1,
    ACTIONS(271), 1,
      sym_num,
  [2512] = 1,
    ACTIONS(63), 1,
      sym_string,
  [2516] = 1,
    ACTIONS(273), 1,
      anon_sym_case,
  [2520] = 1,
    ACTIONS(275), 1,
      anon_sym_the,
  [2524] = 1,
    ACTIONS(277), 1,
      sym_num,
  [2528] = 1,
    ACTIONS(65), 1,
      sym_string,
  [2532] = 1,
    ACTIONS(279), 1,
      sym_num,
  [2536] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [2540] = 1,
    ACTIONS(283), 1,
      anon_sym_forbidden,
  [2544] = 1,
    ACTIONS(285), 1,
      anon_sym_THEN,
  [2548] = 1,
    ACTIONS(287), 1,
      anon_sym_to,
  [2552] = 1,
    ACTIONS(69), 1,
      sym_string,
  [2556] = 1,
    ACTIONS(27), 1,
      sym_string,
  [2560] = 1,
    ACTIONS(289), 1,
      anon_sym_is,
  [2564] = 1,
    ACTIONS(291), 1,
      sym_num,
  [2568] = 1,
    ACTIONS(293), 1,
      sym_num,
  [2572] = 1,
    ACTIONS(57), 1,
      sym_string,
  [2576] = 1,
    ACTIONS(295), 1,
      sym_num,
  [2580] = 1,
    ACTIONS(297), 1,
      sym_num,
  [2584] = 1,
    ACTIONS(299), 1,
      anon_sym_than,
  [2588] = 1,
    ACTIONS(301), 1,
      sym_string,
  [2592] = 1,
    ACTIONS(303), 1,
      anon_sym_to,
  [2596] = 1,
    ACTIONS(305), 1,
      anon_sym_than,
  [2600] = 1,
    ACTIONS(307), 1,
      sym_string,
  [2604] = 1,
    ACTIONS(309), 1,
      sym_string,
  [2608] = 1,
    ACTIONS(311), 1,
      sym_string,
  [2612] = 1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [2616] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [2620] = 1,
    ACTIONS(317), 1,
      sym_num,
  [2624] = 1,
    ACTIONS(319), 1,
      anon_sym_to,
  [2628] = 1,
    ACTIONS(321), 1,
      sym_string,
  [2632] = 1,
    ACTIONS(323), 1,
      anon_sym_that,
  [2636] = 1,
    ACTIONS(61), 1,
      sym_string,
  [2640] = 1,
    ACTIONS(325), 1,
      sym_num,
  [2644] = 1,
    ACTIONS(327), 1,
      sym_num,
  [2648] = 1,
    ACTIONS(329), 1,
      sym_num,
  [2652] = 1,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
  [2656] = 1,
    ACTIONS(333), 1,
      sym_num,
  [2660] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
  [2664] = 1,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
  [2668] = 1,
    ACTIONS(71), 1,
      sym_string,
  [2672] = 1,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
  [2676] = 1,
    ACTIONS(341), 1,
      sym_num,
  [2680] = 1,
    ACTIONS(343), 1,
      sym_num,
  [2684] = 1,
    ACTIONS(345), 1,
      anon_sym_to,
  [2688] = 1,
    ACTIONS(347), 1,
      anon_sym_that,
  [2692] = 1,
    ACTIONS(349), 1,
      anon_sym_case,
  [2696] = 1,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [2700] = 1,
    ACTIONS(67), 1,
      sym_string,
  [2704] = 1,
    ACTIONS(353), 1,
      sym_num,
  [2708] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2712] = 1,
    ACTIONS(357), 1,
      sym_num,
  [2716] = 1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [2720] = 1,
    ACTIONS(361), 1,
      sym_num,
  [2724] = 1,
    ACTIONS(363), 1,
      sym_num,
  [2728] = 1,
    ACTIONS(365), 1,
      sym_num,
  [2732] = 1,
    ACTIONS(367), 1,
      sym_num,
  [2736] = 1,
    ACTIONS(369), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 275,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 351,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 437,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 523,
  [SMALL_STATE(15)] = 561,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 637,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 713,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 789,
  [SMALL_STATE(22)] = 812,
  [SMALL_STATE(23)] = 830,
  [SMALL_STATE(24)] = 864,
  [SMALL_STATE(25)] = 882,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 934,
  [SMALL_STATE(28)] = 952,
  [SMALL_STATE(29)] = 970,
  [SMALL_STATE(30)] = 988,
  [SMALL_STATE(31)] = 1006,
  [SMALL_STATE(32)] = 1047,
  [SMALL_STATE(33)] = 1088,
  [SMALL_STATE(34)] = 1106,
  [SMALL_STATE(35)] = 1124,
  [SMALL_STATE(36)] = 1142,
  [SMALL_STATE(37)] = 1180,
  [SMALL_STATE(38)] = 1198,
  [SMALL_STATE(39)] = 1216,
  [SMALL_STATE(40)] = 1248,
  [SMALL_STATE(41)] = 1280,
  [SMALL_STATE(42)] = 1294,
  [SMALL_STATE(43)] = 1311,
  [SMALL_STATE(44)] = 1340,
  [SMALL_STATE(45)] = 1353,
  [SMALL_STATE(46)] = 1368,
  [SMALL_STATE(47)] = 1383,
  [SMALL_STATE(48)] = 1395,
  [SMALL_STATE(49)] = 1418,
  [SMALL_STATE(50)] = 1441,
  [SMALL_STATE(51)] = 1464,
  [SMALL_STATE(52)] = 1487,
  [SMALL_STATE(53)] = 1510,
  [SMALL_STATE(54)] = 1523,
  [SMALL_STATE(55)] = 1536,
  [SMALL_STATE(56)] = 1559,
  [SMALL_STATE(57)] = 1571,
  [SMALL_STATE(58)] = 1583,
  [SMALL_STATE(59)] = 1595,
  [SMALL_STATE(60)] = 1607,
  [SMALL_STATE(61)] = 1624,
  [SMALL_STATE(62)] = 1633,
  [SMALL_STATE(63)] = 1644,
  [SMALL_STATE(64)] = 1663,
  [SMALL_STATE(65)] = 1672,
  [SMALL_STATE(66)] = 1681,
  [SMALL_STATE(67)] = 1690,
  [SMALL_STATE(68)] = 1699,
  [SMALL_STATE(69)] = 1708,
  [SMALL_STATE(70)] = 1717,
  [SMALL_STATE(71)] = 1726,
  [SMALL_STATE(72)] = 1735,
  [SMALL_STATE(73)] = 1744,
  [SMALL_STATE(74)] = 1755,
  [SMALL_STATE(75)] = 1766,
  [SMALL_STATE(76)] = 1783,
  [SMALL_STATE(77)] = 1791,
  [SMALL_STATE(78)] = 1801,
  [SMALL_STATE(79)] = 1811,
  [SMALL_STATE(80)] = 1819,
  [SMALL_STATE(81)] = 1829,
  [SMALL_STATE(82)] = 1839,
  [SMALL_STATE(83)] = 1849,
  [SMALL_STATE(84)] = 1859,
  [SMALL_STATE(85)] = 1869,
  [SMALL_STATE(86)] = 1879,
  [SMALL_STATE(87)] = 1889,
  [SMALL_STATE(88)] = 1899,
  [SMALL_STATE(89)] = 1909,
  [SMALL_STATE(90)] = 1923,
  [SMALL_STATE(91)] = 1937,
  [SMALL_STATE(92)] = 1950,
  [SMALL_STATE(93)] = 1963,
  [SMALL_STATE(94)] = 1974,
  [SMALL_STATE(95)] = 1987,
  [SMALL_STATE(96)] = 1994,
  [SMALL_STATE(97)] = 2007,
  [SMALL_STATE(98)] = 2014,
  [SMALL_STATE(99)] = 2027,
  [SMALL_STATE(100)] = 2034,
  [SMALL_STATE(101)] = 2047,
  [SMALL_STATE(102)] = 2060,
  [SMALL_STATE(103)] = 2073,
  [SMALL_STATE(104)] = 2080,
  [SMALL_STATE(105)] = 2087,
  [SMALL_STATE(106)] = 2094,
  [SMALL_STATE(107)] = 2105,
  [SMALL_STATE(108)] = 2118,
  [SMALL_STATE(109)] = 2131,
  [SMALL_STATE(110)] = 2139,
  [SMALL_STATE(111)] = 2147,
  [SMALL_STATE(112)] = 2157,
  [SMALL_STATE(113)] = 2165,
  [SMALL_STATE(114)] = 2173,
  [SMALL_STATE(115)] = 2179,
  [SMALL_STATE(116)] = 2187,
  [SMALL_STATE(117)] = 2195,
  [SMALL_STATE(118)] = 2203,
  [SMALL_STATE(119)] = 2211,
  [SMALL_STATE(120)] = 2219,
  [SMALL_STATE(121)] = 2227,
  [SMALL_STATE(122)] = 2234,
  [SMALL_STATE(123)] = 2241,
  [SMALL_STATE(124)] = 2248,
  [SMALL_STATE(125)] = 2253,
  [SMALL_STATE(126)] = 2260,
  [SMALL_STATE(127)] = 2267,
  [SMALL_STATE(128)] = 2274,
  [SMALL_STATE(129)] = 2281,
  [SMALL_STATE(130)] = 2288,
  [SMALL_STATE(131)] = 2295,
  [SMALL_STATE(132)] = 2302,
  [SMALL_STATE(133)] = 2309,
  [SMALL_STATE(134)] = 2316,
  [SMALL_STATE(135)] = 2321,
  [SMALL_STATE(136)] = 2328,
  [SMALL_STATE(137)] = 2335,
  [SMALL_STATE(138)] = 2342,
  [SMALL_STATE(139)] = 2347,
  [SMALL_STATE(140)] = 2354,
  [SMALL_STATE(141)] = 2361,
  [SMALL_STATE(142)] = 2368,
  [SMALL_STATE(143)] = 2373,
  [SMALL_STATE(144)] = 2378,
  [SMALL_STATE(145)] = 2385,
  [SMALL_STATE(146)] = 2390,
  [SMALL_STATE(147)] = 2397,
  [SMALL_STATE(148)] = 2402,
  [SMALL_STATE(149)] = 2407,
  [SMALL_STATE(150)] = 2412,
  [SMALL_STATE(151)] = 2417,
  [SMALL_STATE(152)] = 2424,
  [SMALL_STATE(153)] = 2431,
  [SMALL_STATE(154)] = 2438,
  [SMALL_STATE(155)] = 2445,
  [SMALL_STATE(156)] = 2450,
  [SMALL_STATE(157)] = 2455,
  [SMALL_STATE(158)] = 2462,
  [SMALL_STATE(159)] = 2469,
  [SMALL_STATE(160)] = 2476,
  [SMALL_STATE(161)] = 2483,
  [SMALL_STATE(162)] = 2490,
  [SMALL_STATE(163)] = 2497,
  [SMALL_STATE(164)] = 2504,
  [SMALL_STATE(165)] = 2508,
  [SMALL_STATE(166)] = 2512,
  [SMALL_STATE(167)] = 2516,
  [SMALL_STATE(168)] = 2520,
  [SMALL_STATE(169)] = 2524,
  [SMALL_STATE(170)] = 2528,
  [SMALL_STATE(171)] = 2532,
  [SMALL_STATE(172)] = 2536,
  [SMALL_STATE(173)] = 2540,
  [SMALL_STATE(174)] = 2544,
  [SMALL_STATE(175)] = 2548,
  [SMALL_STATE(176)] = 2552,
  [SMALL_STATE(177)] = 2556,
  [SMALL_STATE(178)] = 2560,
  [SMALL_STATE(179)] = 2564,
  [SMALL_STATE(180)] = 2568,
  [SMALL_STATE(181)] = 2572,
  [SMALL_STATE(182)] = 2576,
  [SMALL_STATE(183)] = 2580,
  [SMALL_STATE(184)] = 2584,
  [SMALL_STATE(185)] = 2588,
  [SMALL_STATE(186)] = 2592,
  [SMALL_STATE(187)] = 2596,
  [SMALL_STATE(188)] = 2600,
  [SMALL_STATE(189)] = 2604,
  [SMALL_STATE(190)] = 2608,
  [SMALL_STATE(191)] = 2612,
  [SMALL_STATE(192)] = 2616,
  [SMALL_STATE(193)] = 2620,
  [SMALL_STATE(194)] = 2624,
  [SMALL_STATE(195)] = 2628,
  [SMALL_STATE(196)] = 2632,
  [SMALL_STATE(197)] = 2636,
  [SMALL_STATE(198)] = 2640,
  [SMALL_STATE(199)] = 2644,
  [SMALL_STATE(200)] = 2648,
  [SMALL_STATE(201)] = 2652,
  [SMALL_STATE(202)] = 2656,
  [SMALL_STATE(203)] = 2660,
  [SMALL_STATE(204)] = 2664,
  [SMALL_STATE(205)] = 2668,
  [SMALL_STATE(206)] = 2672,
  [SMALL_STATE(207)] = 2676,
  [SMALL_STATE(208)] = 2680,
  [SMALL_STATE(209)] = 2684,
  [SMALL_STATE(210)] = 2688,
  [SMALL_STATE(211)] = 2692,
  [SMALL_STATE(212)] = 2696,
  [SMALL_STATE(213)] = 2700,
  [SMALL_STATE(214)] = 2704,
  [SMALL_STATE(215)] = 2708,
  [SMALL_STATE(216)] = 2712,
  [SMALL_STATE(217)] = 2716,
  [SMALL_STATE(218)] = 2720,
  [SMALL_STATE(219)] = 2724,
  [SMALL_STATE(220)] = 2728,
  [SMALL_STATE(221)] = 2732,
  [SMALL_STATE(222)] = 2736,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb_status, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 6, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 6, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 8, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 8, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 5, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 6, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligation, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_quantifier, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_offset, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 6, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 6, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pounds, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dollars, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_euros, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_than, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
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
