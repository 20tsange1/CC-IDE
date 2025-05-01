# Symbol Prefix and Mappings

Symbol: CC::= 
Mapping: clause 
Semantic Meaning: A major building block of a contract, and it divides the contract into different deontic components. Within this system, each clause can hold one set of conditions and two sets of statements, the Consequent (What happens if the condition is true) and the Alternative (What happens if the condition is false)
Usage: Highest Level, used to denote the beginning of contract section. Contains "condition" and "statement". Inclusion of "else" denotes that there are two sets of statements.


Symbol: C::= 
Mapping: condition 
Semantic Meaning: A logical requirement that must be satisfied (true or false) for the associated clause to be triggered or made valid. Acts as a pre-requisite for the clause.
Usage: Must be independent from "statement" and "definition". Can contain "bracket". "bracket" denotes that there exists a set of sub-conditions, these sub-conditions should be under "bracket". 

Symbol: S::= 
Mapping: statement 
Semantic Meaning: A statement asserts a fact, obligation, or action. It is the outcome or consequence of a condition being met, representing what must occur or hold true. It represents the Consequent and Alternative
Usage: Must be independent from "condition" and "definition". Evaluated as a standalone.

Symbol: D::= 
Mapping: definition 
Semantic Meaning: A definition assigns meaning to a term or phrase used within a contract. It reduces ambiguity by clarifying terminology and providing a precise context.
Usage: Must be independent from "condition" and "statement". Evaluated as a standalone. Should contain the word "IS" as the 2nd element.

Symbol: B::= 
Mapping: bracket
Semantic Meaning: Used for grouping expressions and controlling the evaluation order of conditions. Helps ensure that the logical operators are evaluated correctly.
Usage: Should be a holder of "condition"s. It can contain "and_expression" and "or_expression". "and_expression" and "or_expression" denote a sequence of conditions and should follow a flat structure.

Symbol: A::= 
Mapping: and_expression 
Semantic Meaning: Represents a logical AND. All conditions within the expression must be true for the expression to evaluate to true.
Usage: Should chain "condition"s together. Follow a structure like <condition> (<and_expression> <condition>)*

Symbol: O::= 
Mapping: or_expression 
Semantic Meaning: Represents a logical OR. At least one condition within the expression has to be true for the expression to evaluate to true.
Usage: Should chain "condition"s together. Follow a structure like <condition> (<or_expression> <condition>)*

Symbol: E::=
Mapping: else
Semantic Meaning: Represents the existence of alternatives within the clause. Used to separate the sets of statements.
Usage: It's placement is not necessary, but has to be after the first set of statements to evaluate correctly. i.e. <statement> <else_expression> <statement> and not <statement> <statement> <else_expression>

Symbol: TT::=
Mapping: time
Semantic Meaning: The time object itself. It is the container for the time text which is translated into a datetime object.
Usage: The symbol that gets translated, this should encapsulate the text for time within a language. e.g. <day> <month> <year> This will then be translated via the overridden class.

Symbol: TTH
Mapping: time_holder
Semantic Meaning: Holds all aspects related to time, such that it can be evaluated beyond just the time object itself. Used for declaring ranges and for using operators.
Usage: Contains the time symbol as well as the operators and range declarators. Should follow the structure (<time_after> | <time_before>) <time> ( (<time_or> | <time_and>) (<time_after> | <time_before>) <time>)?

Symbol: TTCA
Mapping: time_and
Semantic Meaning: For linking two times together to create a range. Used for creating ranges between two times.
Usage: Comes in between two sets of times. Should be within the time_holder.

Symbol: TTCO
Mapping: time_or
Semantic Meaning: For linking two times together to create a range. Used for creating ranges outside two times.
Usage: Comes in between two sets of times. Should be within the time_holder.

Symbol: TTB
Mapping: time_before
Semantic Meaning: For declaring that a condition should happen before a certain time.
Usage: Used as a boolean operator for a time symbol within the time_holder. i.e. <time_before> <time>

Symbol: TTA
Mapping: time_after
Semantic Meaning: For declaring that a condition should happen after a certain time.
Usage: Used as a boolean operator for a time symbol within the time_holder. i.e. <time_after> <time>

Symbol: TTO
Mapping: time_on
Semantic Meaning: For declaring that a condition should happen on a certain time.
Usage: Used as a boolean operator for a time symbol within the time_holder. i.e. <time_on> <time>
