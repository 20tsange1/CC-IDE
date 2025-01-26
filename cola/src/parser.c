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
#define STATE_COUNT 215
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
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
  anon_sym_it = 18,
  anon_sym_is = 19,
  anon_sym_the = 20,
  anon_sym_case = 21,
  anon_sym_that = 22,
  anon_sym_not = 23,
  anon_sym_deliver = 24,
  anon_sym_pay = 25,
  anon_sym_charge = 26,
  anon_sym_refund = 27,
  anon_sym_delivered = 28,
  anon_sym_paid = 29,
  anon_sym_charged = 30,
  anon_sym_refunded = 31,
  anon_sym_less = 32,
  anon_sym_than = 33,
  anon_sym_equals = 34,
  anon_sym_equal = 35,
  anon_sym_to = 36,
  anon_sym_more = 37,
  anon_sym_greater = 38,
  anon_sym_may = 39,
  anon_sym_forbidden = 40,
  anon_sym_shall = 41,
  anon_sym_must = 42,
  anon_sym_on = 43,
  anon_sym_ANYDATE = 44,
  anon_sym_SOMEDATE = 45,
  anon_sym_THEDATE = 46,
  anon_sym_before = 47,
  anon_sym_after = 48,
  anon_sym_day = 49,
  anon_sym_week = 50,
  anon_sym_year = 51,
  anon_sym_days = 52,
  anon_sym_weeks = 53,
  anon_sym_years = 54,
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
  anon_sym_AMOUNT = 67,
  anon_sym_SOMECURRENCY = 68,
  anon_sym_REPORT = 69,
  anon_sym_NAMEDOBJECT = 70,
  anon_sym_OTHEROBJECT = 71,
  anon_sym_GBP = 72,
  anon_sym_POUNDS = 73,
  anon_sym_quid = 74,
  anon_sym_USD = 75,
  anon_sym_DOLLARS = 76,
  anon_sym_buck = 77,
  anon_sym_EUR = 78,
  anon_sym_EUROS = 79,
  sym_string = 80,
  sym_num = 81,
  sym_contract = 82,
  sym_component = 83,
  sym_definition = 84,
  sym_simple_definition = 85,
  sym_numerical_expression = 86,
  sym_operator = 87,
  sym_conditional_definition = 88,
  sym_statement = 89,
  sym_conditional_statement = 90,
  sym_simple_statement = 91,
  sym_condition = 92,
  sym_simple_condition = 93,
  sym_boolean_expression = 94,
  sym_ID = 95,
  sym_holds = 96,
  sym_subject = 97,
  sym_verb = 98,
  sym_verb_status = 99,
  sym_comparison = 100,
  sym_equal = 101,
  sym_more_than = 102,
  sym_modal_verb = 103,
  sym_obligation = 104,
  sym_date = 105,
  sym_temporal_quantifier = 106,
  sym_specific_date = 107,
  sym_temporal_offset = 108,
  sym_month = 109,
  sym_object = 110,
  sym_numerical_object = 111,
  sym_nonnumerical_object = 112,
  sym_pounds = 113,
  sym_dollars = 114,
  sym_euros = 115,
  sym_receiver = 116,
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
  [9] = 9,
  [10] = 9,
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
  [37] = 33,
  [38] = 36,
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
  [56] = 50,
  [57] = 48,
  [58] = 50,
  [59] = 48,
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
  [106] = 106,
  [107] = 107,
  [108] = 92,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 110,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 112,
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
  [142] = 130,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 123,
  [149] = 149,
  [150] = 50,
  [151] = 48,
  [152] = 152,
  [153] = 153,
  [154] = 133,
  [155] = 145,
  [156] = 146,
  [157] = 153,
  [158] = 133,
  [159] = 133,
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
  [172] = 28,
  [173] = 173,
  [174] = 174,
  [175] = 4,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 27,
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
  [191] = 29,
  [192] = 192,
  [193] = 24,
  [194] = 26,
  [195] = 164,
  [196] = 25,
  [197] = 186,
  [198] = 187,
  [199] = 164,
  [200] = 178,
  [201] = 201,
  [202] = 164,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 30,
  [208] = 205,
  [209] = 209,
  [210] = 210,
  [211] = 205,
  [212] = 205,
  [213] = 192,
  [214] = 214,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(280);
      ADVANCE_MAP(
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
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
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(381);
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
      if (lookahead == 'D') ADVANCE(365);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(281);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
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
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(334);
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
      if (lookahead == 'E') ADVANCE(333);
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
      if (lookahead == 'P') ADVANCE(362);
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
      if (lookahead == 'R') ADVANCE(368);
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
      if (lookahead == 'S') ADVANCE(369);
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
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(366);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(357);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(361);
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
      if (lookahead == 'Y') ADVANCE(358);
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
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(381);
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
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(313);
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
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(311);
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
      if (lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 186:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 187:
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(323);
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
      if (lookahead == 'y') ADVANCE(310);
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
      if (lookahead == 'k') ADVANCE(367);
      END_STATE();
    case 199:
      if (lookahead == 'k') ADVANCE(340);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(328);
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
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(327);
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
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(308);
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
      if (lookahead == 'y') ADVANCE(349);
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
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(319);
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
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(352);
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
      if (lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 273:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 274:
      if (lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 275:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 276:
      if (lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 277:
      if (lookahead == 'y') ADVANCE(346);
      END_STATE();
    case 278:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_C);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_it);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_deliver);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_deliver);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_pay);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_charge);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_charge);
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_refund);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_refund);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_delivered);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_paid);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_charged);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_refunded);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_equal);
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_more);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_greater);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_may);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_forbidden);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_shall);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_must);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_on);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_ANYDATE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SOMEDATE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_THEDATE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_before);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_after);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_January);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_February);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_March);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_April);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_June);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_July);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_August);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_September);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_October);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_November);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_December);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_AMOUNT);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_SOMECURRENCY);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_NAMEDOBJECT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_OTHEROBJECT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_GBP);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_POUNDS);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_quid);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_USD);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DOLLARS);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_buck);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_EUR);
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_EUROS);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
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
  [34] = {.lex_state = 85},
  [35] = {.lex_state = 279},
  [36] = {.lex_state = 279},
  [37] = {.lex_state = 279},
  [38] = {.lex_state = 279},
  [39] = {.lex_state = 279},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 107},
  [42] = {.lex_state = 279},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 279},
  [45] = {.lex_state = 279},
  [46] = {.lex_state = 279},
  [47] = {.lex_state = 279},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 85},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 279},
  [62] = {.lex_state = 279},
  [63] = {.lex_state = 279},
  [64] = {.lex_state = 279},
  [65] = {.lex_state = 279},
  [66] = {.lex_state = 279},
  [67] = {.lex_state = 279},
  [68] = {.lex_state = 279},
  [69] = {.lex_state = 279},
  [70] = {.lex_state = 279},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 279},
  [74] = {.lex_state = 279},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 279},
  [77] = {.lex_state = 130},
  [78] = {.lex_state = 130},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 279},
  [81] = {.lex_state = 130},
  [82] = {.lex_state = 279},
  [83] = {.lex_state = 130},
  [84] = {.lex_state = 279},
  [85] = {.lex_state = 130},
  [86] = {.lex_state = 107},
  [87] = {.lex_state = 107},
  [88] = {.lex_state = 279},
  [89] = {.lex_state = 279},
  [90] = {.lex_state = 279},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 279},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 130},
  [99] = {.lex_state = 279},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 130},
  [103] = {.lex_state = 130},
  [104] = {.lex_state = 279},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 279},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 279},
  [109] = {.lex_state = 279},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 279},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 279},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 279},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 279},
  [118] = {.lex_state = 279},
  [119] = {.lex_state = 279},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 279},
  [123] = {.lex_state = 278},
  [124] = {.lex_state = 279},
  [125] = {.lex_state = 279},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 278},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 278},
  [136] = {.lex_state = 278},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 279},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 279},
  [141] = {.lex_state = 278},
  [142] = {.lex_state = 278},
  [143] = {.lex_state = 279},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 278},
  [146] = {.lex_state = 279},
  [147] = {.lex_state = 278},
  [148] = {.lex_state = 278},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 278},
  [153] = {.lex_state = 279},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 278},
  [156] = {.lex_state = 279},
  [157] = {.lex_state = 279},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 278},
  [161] = {.lex_state = 278},
  [162] = {.lex_state = 278},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 278},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 278},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 278},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 278},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 278},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 278},
  [183] = {.lex_state = 278},
  [184] = {.lex_state = 278},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 278},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 278},
  [194] = {.lex_state = 278},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 278},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 278},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 278},
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
    [sym_contract] = STATE(189),
    [sym_component] = STATE(140),
    [sym_definition] = STATE(111),
    [sym_simple_definition] = STATE(88),
    [sym_conditional_definition] = STATE(138),
    [sym_statement] = STATE(119),
    [sym_conditional_statement] = STATE(138),
    [sym_simple_statement] = STATE(68),
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
    STATE(141), 1,
      sym_comparison,
    STATE(149), 1,
      sym_object,
    ACTIONS(13), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    STATE(214), 2,
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
    STATE(209), 3,
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
      sym_object,
    STATE(141), 1,
      sym_comparison,
    ACTIONS(13), 2,
      anon_sym_more,
      anon_sym_greater,
    STATE(174), 2,
      sym_numerical_object,
      sym_nonnumerical_object,
    STATE(214), 2,
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
    STATE(209), 3,
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
    STATE(8), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(71), 1,
      sym_date,
    STATE(85), 1,
      sym_modal_verb,
    STATE(102), 1,
      sym_obligation,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
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
  [199] = 14,
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
    STATE(24), 1,
      sym_specific_date,
    STATE(77), 1,
      sym_modal_verb,
    STATE(84), 1,
      sym_date,
    STATE(102), 1,
      sym_obligation,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
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
  [247] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(13), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(75), 1,
      sym_date,
    STATE(81), 1,
      sym_modal_verb,
    STATE(102), 1,
      sym_obligation,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
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
  [295] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(139), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [333] = 4,
    STATE(187), 1,
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
  [361] = 4,
    STATE(198), 1,
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
    STATE(24), 1,
      sym_specific_date,
    STATE(78), 1,
      sym_modal_verb,
    STATE(80), 1,
      sym_date,
    STATE(102), 1,
      sym_obligation,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
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
  [437] = 14,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(8), 1,
      sym_verb_status,
    STATE(24), 1,
      sym_specific_date,
    STATE(71), 1,
      sym_date,
    STATE(85), 1,
      sym_modal_verb,
    STATE(102), 1,
      sym_obligation,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
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
  [485] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(144), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
    ACTIONS(17), 4,
      anon_sym_SOMECURRENCY,
      anon_sym_REPORT,
      anon_sym_NAMEDOBJECT,
      anon_sym_OTHEROBJECT,
  [523] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    STATE(126), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
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
    STATE(128), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
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
    STATE(129), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
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
    STATE(121), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
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
    STATE(132), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
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
    STATE(137), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
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
    STATE(134), 1,
      sym_object,
    STATE(174), 2,
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
    STATE(209), 3,
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
  [812] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    ACTIONS(57), 1,
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
    STATE(209), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [846] = 9,
    ACTIONS(15), 1,
      anon_sym_AMOUNT,
    ACTIONS(23), 1,
      anon_sym_EUR,
    ACTIONS(25), 1,
      anon_sym_EUROS,
    ACTIONS(57), 1,
      sym_num,
    STATE(45), 1,
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
    STATE(209), 3,
      sym_pounds,
      sym_dollars,
      sym_euros,
  [880] = 1,
    ACTIONS(59), 15,
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
  [898] = 1,
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
  [916] = 1,
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
    STATE(6), 1,
      sym_subject,
    STATE(41), 1,
      sym_holds,
    STATE(70), 1,
      sym_boolean_expression,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(112), 1,
      sym_temporal_offset,
    STATE(152), 1,
      sym_date,
    STATE(193), 1,
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
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(112), 1,
      sym_temporal_offset,
    STATE(147), 1,
      sym_date,
    STATE(193), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1088] = 2,
    STATE(186), 1,
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
  [1106] = 12,
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
    STATE(12), 1,
      sym_subject,
    STATE(43), 1,
      sym_holds,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(112), 1,
      sym_temporal_offset,
    STATE(147), 1,
      sym_date,
    STATE(193), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1144] = 2,
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
  [1162] = 2,
    STATE(178), 1,
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
  [1180] = 2,
    STATE(197), 1,
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
    STATE(200), 1,
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
  [1216] = 1,
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
  [1230] = 10,
    ACTIONS(3), 1,
      anon_sym_IF,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_ID,
    STATE(68), 1,
      sym_simple_statement,
    STATE(88), 1,
      sym_simple_definition,
    STATE(111), 1,
      sym_definition,
    STATE(119), 1,
      sym_statement,
    STATE(140), 1,
      sym_component,
    STATE(203), 1,
      sym_contract,
    STATE(138), 2,
      sym_conditional_definition,
      sym_conditional_statement,
  [1262] = 10,
    ACTIONS(45), 1,
      sym_num,
    ACTIONS(77), 1,
      anon_sym_on,
    ACTIONS(81), 1,
      sym_string,
    STATE(11), 1,
      sym_subject,
    STATE(67), 1,
      sym_boolean_expression,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(112), 1,
      sym_temporal_offset,
    STATE(161), 1,
      sym_date,
    STATE(193), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
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
    STATE(7), 1,
      sym_subject,
    STATE(92), 1,
      sym_temporal_quantifier,
    STATE(112), 1,
      sym_temporal_offset,
    STATE(135), 1,
      sym_date,
    STATE(193), 1,
      sym_specific_date,
    ACTIONS(79), 2,
      anon_sym_before,
      anon_sym_after,
  [1340] = 2,
    ACTIONS(99), 1,
      anon_sym_EUR,
    ACTIONS(97), 9,
      anon_sym_AMOUNT,
      anon_sym_GBP,
      anon_sym_POUNDS,
      anon_sym_quid,
      anon_sym_USD,
      anon_sym_DOLLARS,
      anon_sym_buck,
      anon_sym_EUROS,
      sym_num,
  [1355] = 2,
    STATE(23), 1,
      sym_operator,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_PLUS,
      anon_sym_MINUS,
      anon_sym_TIMES,
      anon_sym_DIVIDE,
      anon_sym_IF,
      anon_sym_ELSE,
  [1370] = 1,
    ACTIONS(103), 10,
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
  [1395] = 2,
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
  [1408] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(62), 1,
      sym_date,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1431] = 2,
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
  [1444] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(61), 1,
      sym_date,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1467] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(65), 1,
      sym_date,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1490] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(66), 1,
      sym_date,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1513] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(63), 1,
      sym_date,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
      sym_temporal_offset,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [1536] = 7,
    ACTIONS(41), 1,
      anon_sym_on,
    ACTIONS(45), 1,
      sym_num,
    STATE(24), 1,
      sym_specific_date,
    STATE(64), 1,
      sym_date,
    STATE(108), 1,
      sym_temporal_quantifier,
    STATE(120), 1,
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
      anon_sym_C,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1583] = 2,
    ACTIONS(113), 1,
      sym_num,
    ACTIONS(111), 6,
      anon_sym_S,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1595] = 2,
    ACTIONS(109), 1,
      sym_num,
    ACTIONS(107), 6,
      anon_sym_S,
      anon_sym_it,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1607] = 2,
    ACTIONS(47), 3,
      anon_sym_day,
      anon_sym_week,
      anon_sym_year,
    ACTIONS(49), 3,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [1618] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1627] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1636] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1645] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1654] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1663] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1672] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1681] = 2,
    ACTIONS(131), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1692] = 1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_OR,
  [1701] = 1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1710] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(79), 1,
      sym_modal_verb,
    STATE(102), 1,
      sym_obligation,
    ACTIONS(39), 2,
      anon_sym_shall,
      anon_sym_must,
  [1727] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_ID,
    STATE(68), 1,
      sym_simple_statement,
    STATE(88), 1,
      sym_simple_definition,
    STATE(117), 1,
      sym_definition,
    STATE(118), 1,
      sym_statement,
  [1746] = 2,
    ACTIONS(139), 2,
      anon_sym_AND,
      anon_sym_OR,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [1757] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_OR,
  [1766] = 5,
    ACTIONS(33), 1,
      anon_sym_is,
    ACTIONS(37), 1,
      anon_sym_may,
    STATE(83), 1,
      sym_modal_verb,
    STATE(102), 1,
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
    STATE(14), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1801] = 2,
    STATE(17), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1811] = 2,
    STATE(18), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1821] = 2,
    STATE(20), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [1831] = 2,
    STATE(16), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1841] = 1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_AND,
      anon_sym_IF,
      anon_sym_ELSE,
  [1849] = 2,
    STATE(19), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1859] = 2,
    STATE(15), 1,
      sym_verb_status,
    ACTIONS(35), 4,
      anon_sym_delivered,
      anon_sym_paid,
      anon_sym_charged,
      anon_sym_refunded,
  [1869] = 2,
    STATE(13), 1,
      sym_verb,
    ACTIONS(145), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [1879] = 2,
    ACTIONS(149), 1,
      sym_num,
    ACTIONS(147), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1889] = 2,
    ACTIONS(153), 1,
      sym_num,
    ACTIONS(151), 4,
      anon_sym_on,
      anon_sym_before,
      anon_sym_after,
      sym_string,
  [1899] = 2,
    ACTIONS(157), 1,
      anon_sym_AND,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
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
    STATE(73), 1,
      sym_simple_condition,
    STATE(106), 1,
      sym_condition,
  [1950] = 3,
    ACTIONS(177), 1,
      sym_num,
    STATE(116), 1,
      sym_temporal_offset,
    ACTIONS(163), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [1961] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_ID,
    STATE(68), 1,
      sym_simple_statement,
    STATE(143), 1,
      sym_statement,
  [1974] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_ID,
    STATE(68), 1,
      sym_simple_statement,
    STATE(125), 1,
      sym_statement,
  [1987] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_simple_definition,
    STATE(114), 1,
      sym_ID,
    STATE(122), 1,
      sym_definition,
  [2000] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_simple_definition,
    STATE(114), 1,
      sym_ID,
    STATE(124), 1,
      sym_definition,
  [2013] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_condition,
    STATE(113), 1,
      sym_condition,
  [2026] = 1,
    ACTIONS(183), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2033] = 1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2040] = 4,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_simple_definition,
    STATE(99), 1,
      sym_definition,
    STATE(114), 1,
      sym_ID,
  [2053] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_condition,
    STATE(109), 1,
      sym_condition,
  [2066] = 1,
    ACTIONS(187), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2073] = 1,
    ACTIONS(189), 4,
      anon_sym_deliver,
      anon_sym_pay,
      anon_sym_charge,
      anon_sym_refund,
  [2080] = 1,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_IF,
      anon_sym_ELSE,
  [2087] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_ID,
    STATE(68), 1,
      sym_simple_statement,
    STATE(104), 1,
      sym_statement,
  [2100] = 1,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
      anon_sym_THEN,
      anon_sym_ELSE,
  [2107] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_ID,
    STATE(73), 1,
      sym_simple_condition,
    STATE(204), 1,
      sym_condition,
  [2120] = 3,
    ACTIONS(195), 1,
      sym_num,
    STATE(110), 1,
      sym_temporal_offset,
    ACTIONS(171), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2131] = 2,
    ACTIONS(199), 1,
      anon_sym_ELSE,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2139] = 2,
    STATE(157), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2147] = 2,
    ACTIONS(203), 1,
      anon_sym_IF,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2155] = 2,
    STATE(146), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2163] = 2,
    ACTIONS(207), 1,
      anon_sym_ELSE,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2171] = 3,
    ACTIONS(81), 1,
      sym_string,
    ACTIONS(83), 1,
      anon_sym_D,
    STATE(163), 1,
      sym_subject,
  [2181] = 1,
    ACTIONS(209), 3,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
      sym_num,
  [2187] = 2,
    STATE(153), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2195] = 2,
    ACTIONS(213), 1,
      anon_sym_ELSE,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2203] = 2,
    ACTIONS(217), 1,
      anon_sym_ELSE,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2211] = 2,
    ACTIONS(219), 1,
      anon_sym_IF,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2219] = 2,
    STATE(156), 1,
      sym_temporal_quantifier,
    ACTIONS(43), 2,
      anon_sym_before,
      anon_sym_after,
  [2227] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(53), 1,
      sym_receiver,
  [2234] = 1,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2239] = 2,
    ACTIONS(225), 1,
      sym_string,
    STATE(207), 1,
      sym_subject,
  [2246] = 1,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2251] = 1,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2256] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(54), 1,
      sym_receiver,
  [2263] = 2,
    ACTIONS(231), 1,
      anon_sym_the,
    ACTIONS(233), 1,
      anon_sym_not,
  [2270] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(64), 1,
      sym_receiver,
  [2277] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(52), 1,
      sym_receiver,
  [2284] = 2,
    ACTIONS(225), 1,
      sym_string,
    STATE(194), 1,
      sym_subject,
  [2291] = 1,
    ACTIONS(235), 2,
      anon_sym_before,
      anon_sym_after,
  [2296] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(62), 1,
      sym_receiver,
  [2303] = 2,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(239), 1,
      sym_num,
  [2310] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(63), 1,
      sym_receiver,
  [2317] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(75), 1,
      sym_subject,
  [2324] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(82), 1,
      sym_subject,
  [2331] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(65), 1,
      sym_receiver,
  [2338] = 1,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2343] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(51), 1,
      sym_receiver,
  [2350] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      anon_sym_C_DASHAND,
  [2357] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(74), 1,
      sym_subject,
  [2364] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(26), 1,
      sym_subject,
  [2371] = 1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_C_DASHAND,
  [2376] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(49), 1,
      sym_receiver,
  [2383] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(28), 1,
      sym_subject,
  [2390] = 1,
    ACTIONS(249), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2395] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(71), 1,
      sym_subject,
  [2402] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(30), 1,
      sym_subject,
  [2409] = 2,
    ACTIONS(221), 1,
      anon_sym_to,
    STATE(55), 1,
      sym_receiver,
  [2416] = 1,
    ACTIONS(111), 2,
      anon_sym_D,
      sym_string,
  [2421] = 1,
    ACTIONS(107), 2,
      anon_sym_D,
      sym_string,
  [2426] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(84), 1,
      sym_subject,
  [2433] = 1,
    ACTIONS(251), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2438] = 2,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      sym_num,
  [2445] = 2,
    ACTIONS(225), 1,
      sym_string,
    STATE(172), 1,
      sym_subject,
  [2452] = 1,
    ACTIONS(257), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2457] = 1,
    ACTIONS(259), 2,
      anon_sym_SOMEDATE,
      anon_sym_THEDATE,
  [2462] = 2,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      sym_num,
  [2469] = 2,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      sym_num,
  [2476] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(39), 1,
      sym_subject,
  [2483] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(80), 1,
      sym_subject,
  [2490] = 2,
    ACTIONS(241), 1,
      sym_string,
    STATE(46), 1,
      sym_subject,
  [2497] = 2,
    ACTIONS(29), 1,
      anon_sym_IS,
    ACTIONS(31), 1,
      anon_sym_EQUALS,
  [2504] = 1,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
  [2508] = 1,
    ACTIONS(271), 1,
      anon_sym_to,
  [2512] = 1,
    ACTIONS(273), 1,
      sym_string,
  [2516] = 1,
    ACTIONS(275), 1,
      anon_sym_to,
  [2520] = 1,
    ACTIONS(277), 1,
      anon_sym_to,
  [2524] = 1,
    ACTIONS(279), 1,
      sym_string,
  [2528] = 1,
    ACTIONS(281), 1,
      anon_sym_than,
  [2532] = 1,
    ACTIONS(283), 1,
      anon_sym_forbidden,
  [2536] = 1,
    ACTIONS(67), 1,
      sym_string,
  [2540] = 1,
    ACTIONS(285), 1,
      anon_sym_that,
  [2544] = 1,
    ACTIONS(287), 1,
      anon_sym_to,
  [2548] = 1,
    ACTIONS(27), 1,
      sym_string,
  [2552] = 1,
    ACTIONS(289), 1,
      anon_sym_is,
  [2556] = 1,
    ACTIONS(291), 1,
      anon_sym_case,
  [2560] = 1,
    ACTIONS(293), 1,
      sym_num,
  [2564] = 1,
    ACTIONS(65), 1,
      sym_string,
  [2568] = 1,
    ACTIONS(295), 1,
      sym_num,
  [2572] = 1,
    ACTIONS(297), 1,
      sym_num,
  [2576] = 1,
    ACTIONS(299), 1,
      sym_string,
  [2580] = 1,
    ACTIONS(301), 1,
      sym_string,
  [2584] = 1,
    ACTIONS(303), 1,
      sym_string,
  [2588] = 1,
    ACTIONS(305), 1,
      sym_num,
  [2592] = 1,
    ACTIONS(307), 1,
      sym_num,
  [2596] = 1,
    ACTIONS(309), 1,
      sym_num,
  [2600] = 1,
    ACTIONS(311), 1,
      anon_sym_case,
  [2604] = 1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [2608] = 1,
    ACTIONS(315), 1,
      anon_sym_that,
  [2612] = 1,
    ACTIONS(69), 1,
      sym_string,
  [2616] = 1,
    ACTIONS(317), 1,
      sym_num,
  [2620] = 1,
    ACTIONS(59), 1,
      sym_string,
  [2624] = 1,
    ACTIONS(63), 1,
      sym_string,
  [2628] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
  [2632] = 1,
    ACTIONS(61), 1,
      sym_string,
  [2636] = 1,
    ACTIONS(321), 1,
      sym_num,
  [2640] = 1,
    ACTIONS(323), 1,
      sym_num,
  [2644] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [2648] = 1,
    ACTIONS(327), 1,
      sym_num,
  [2652] = 1,
    ACTIONS(329), 1,
      anon_sym_the,
  [2656] = 1,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
  [2660] = 1,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
  [2664] = 1,
    ACTIONS(335), 1,
      anon_sym_THEN,
  [2668] = 1,
    ACTIONS(337), 1,
      sym_num,
  [2672] = 1,
    ACTIONS(339), 1,
      anon_sym_than,
  [2676] = 1,
    ACTIONS(71), 1,
      sym_string,
  [2680] = 1,
    ACTIONS(341), 1,
      sym_num,
  [2684] = 1,
    ACTIONS(343), 1,
      sym_num,
  [2688] = 1,
    ACTIONS(345), 1,
      sym_num,
  [2692] = 1,
    ACTIONS(347), 1,
      sym_num,
  [2696] = 1,
    ACTIONS(349), 1,
      sym_num,
  [2700] = 1,
    ACTIONS(351), 1,
      sym_num,
  [2704] = 1,
    ACTIONS(353), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 295,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 437,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 523,
  [SMALL_STATE(15)] = 561,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 637,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 713,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 789,
  [SMALL_STATE(22)] = 812,
  [SMALL_STATE(23)] = 846,
  [SMALL_STATE(24)] = 880,
  [SMALL_STATE(25)] = 898,
  [SMALL_STATE(26)] = 916,
  [SMALL_STATE(27)] = 934,
  [SMALL_STATE(28)] = 952,
  [SMALL_STATE(29)] = 970,
  [SMALL_STATE(30)] = 988,
  [SMALL_STATE(31)] = 1006,
  [SMALL_STATE(32)] = 1047,
  [SMALL_STATE(33)] = 1088,
  [SMALL_STATE(34)] = 1106,
  [SMALL_STATE(35)] = 1144,
  [SMALL_STATE(36)] = 1162,
  [SMALL_STATE(37)] = 1180,
  [SMALL_STATE(38)] = 1198,
  [SMALL_STATE(39)] = 1216,
  [SMALL_STATE(40)] = 1230,
  [SMALL_STATE(41)] = 1262,
  [SMALL_STATE(42)] = 1294,
  [SMALL_STATE(43)] = 1311,
  [SMALL_STATE(44)] = 1340,
  [SMALL_STATE(45)] = 1355,
  [SMALL_STATE(46)] = 1370,
  [SMALL_STATE(47)] = 1383,
  [SMALL_STATE(48)] = 1395,
  [SMALL_STATE(49)] = 1408,
  [SMALL_STATE(50)] = 1431,
  [SMALL_STATE(51)] = 1444,
  [SMALL_STATE(52)] = 1467,
  [SMALL_STATE(53)] = 1490,
  [SMALL_STATE(54)] = 1513,
  [SMALL_STATE(55)] = 1536,
  [SMALL_STATE(56)] = 1559,
  [SMALL_STATE(57)] = 1571,
  [SMALL_STATE(58)] = 1583,
  [SMALL_STATE(59)] = 1595,
  [SMALL_STATE(60)] = 1607,
  [SMALL_STATE(61)] = 1618,
  [SMALL_STATE(62)] = 1627,
  [SMALL_STATE(63)] = 1636,
  [SMALL_STATE(64)] = 1645,
  [SMALL_STATE(65)] = 1654,
  [SMALL_STATE(66)] = 1663,
  [SMALL_STATE(67)] = 1672,
  [SMALL_STATE(68)] = 1681,
  [SMALL_STATE(69)] = 1692,
  [SMALL_STATE(70)] = 1701,
  [SMALL_STATE(71)] = 1710,
  [SMALL_STATE(72)] = 1727,
  [SMALL_STATE(73)] = 1746,
  [SMALL_STATE(74)] = 1757,
  [SMALL_STATE(75)] = 1766,
  [SMALL_STATE(76)] = 1783,
  [SMALL_STATE(77)] = 1791,
  [SMALL_STATE(78)] = 1801,
  [SMALL_STATE(79)] = 1811,
  [SMALL_STATE(80)] = 1821,
  [SMALL_STATE(81)] = 1831,
  [SMALL_STATE(82)] = 1841,
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
  [SMALL_STATE(93)] = 1961,
  [SMALL_STATE(94)] = 1974,
  [SMALL_STATE(95)] = 1987,
  [SMALL_STATE(96)] = 2000,
  [SMALL_STATE(97)] = 2013,
  [SMALL_STATE(98)] = 2026,
  [SMALL_STATE(99)] = 2033,
  [SMALL_STATE(100)] = 2040,
  [SMALL_STATE(101)] = 2053,
  [SMALL_STATE(102)] = 2066,
  [SMALL_STATE(103)] = 2073,
  [SMALL_STATE(104)] = 2080,
  [SMALL_STATE(105)] = 2087,
  [SMALL_STATE(106)] = 2100,
  [SMALL_STATE(107)] = 2107,
  [SMALL_STATE(108)] = 2120,
  [SMALL_STATE(109)] = 2131,
  [SMALL_STATE(110)] = 2139,
  [SMALL_STATE(111)] = 2147,
  [SMALL_STATE(112)] = 2155,
  [SMALL_STATE(113)] = 2163,
  [SMALL_STATE(114)] = 2171,
  [SMALL_STATE(115)] = 2181,
  [SMALL_STATE(116)] = 2187,
  [SMALL_STATE(117)] = 2195,
  [SMALL_STATE(118)] = 2203,
  [SMALL_STATE(119)] = 2211,
  [SMALL_STATE(120)] = 2219,
  [SMALL_STATE(121)] = 2227,
  [SMALL_STATE(122)] = 2234,
  [SMALL_STATE(123)] = 2239,
  [SMALL_STATE(124)] = 2246,
  [SMALL_STATE(125)] = 2251,
  [SMALL_STATE(126)] = 2256,
  [SMALL_STATE(127)] = 2263,
  [SMALL_STATE(128)] = 2270,
  [SMALL_STATE(129)] = 2277,
  [SMALL_STATE(130)] = 2284,
  [SMALL_STATE(131)] = 2291,
  [SMALL_STATE(132)] = 2296,
  [SMALL_STATE(133)] = 2303,
  [SMALL_STATE(134)] = 2310,
  [SMALL_STATE(135)] = 2317,
  [SMALL_STATE(136)] = 2324,
  [SMALL_STATE(137)] = 2331,
  [SMALL_STATE(138)] = 2338,
  [SMALL_STATE(139)] = 2343,
  [SMALL_STATE(140)] = 2350,
  [SMALL_STATE(141)] = 2357,
  [SMALL_STATE(142)] = 2364,
  [SMALL_STATE(143)] = 2371,
  [SMALL_STATE(144)] = 2376,
  [SMALL_STATE(145)] = 2383,
  [SMALL_STATE(146)] = 2390,
  [SMALL_STATE(147)] = 2395,
  [SMALL_STATE(148)] = 2402,
  [SMALL_STATE(149)] = 2409,
  [SMALL_STATE(150)] = 2416,
  [SMALL_STATE(151)] = 2421,
  [SMALL_STATE(152)] = 2426,
  [SMALL_STATE(153)] = 2433,
  [SMALL_STATE(154)] = 2438,
  [SMALL_STATE(155)] = 2445,
  [SMALL_STATE(156)] = 2452,
  [SMALL_STATE(157)] = 2457,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_status, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb_status, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specific_date, 5, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verb, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_object, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numerical_expression, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ID, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ID, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 6, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 7, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 7, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 6, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 8, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 8, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_condition, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 5, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 5, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_holds, 6, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_holds, 6, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modal_verb, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obligation, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_quantifier, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 5, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_definition, 6, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 6, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporal_offset, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonnumerical_object, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pounds, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dollars, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_more_than, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_euros, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
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
