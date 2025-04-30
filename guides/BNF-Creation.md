# Writing your own BNF

Currently, BNFs for our grammars are stored in the file "bnfs".

When we talk about BNFs, we mean the Backus Naur Form, a formal method used to describe the syntax of a language - most often programming languages.

However, in our case, it helps us describe the syntax behind a controlled natural language (CNL). Legal languages (such as CoLa, L4, Lexon...) can be considered as a type of programming language, whilst contracts can be considered as functions. We see clear similarities within their implementations and execution – If statements are just like conditionals, definitions are like constants – contracts themselves are just functions written in a legal language. A large objective of today is to sum up legal language in a programming style, allowing lawyers and developers alike to write contracts with more control and precision, whilst bringing in different extensions which can serve to speed up the drafting process. 

In programming, when using an IDE, we often have different tools which help us with our coding. Syntax highlighting, autocorrect, debugging, and so on... just to name a few. Why shouldn't we be able to have the same concepts for our legal languages? for our drafting processes?

Legal drafting currently takes place within Word documents, with the only version control being the filename of these documents. Furthermore, the correctness of a contract depends completely on the lawyer's scrutiny, which then means it is heavily subjective, given that each contract can be written differently and interpreted differently if under the eye of a different lawyer. 

While subjectivity is required in the legal industry and is often desired, a language must be restricted for the purposes of analysis. An infinitely large language is extremely difficult to analyse, particularly due to a sentence or a paragraph's semantics. Semantics are extremely important in conveying meaning, however, semantics are hard to attribute to all types of sentences. In fact, it may not be possible at all in some cases (find example). As such, by restricting the language such that the semantic meaning is the same, we can still provide flexibility in word choice and assignment, without straying away from our understanding of a sentence. What this means is that in our legal languages, all sentences can be understood in a way clear to lawyers and developers, allowing us to create analysis tools that are deterministic.

It doesn't make sense for our analysis to be non-deterministic, as what good is an analysis that changes it's results everytime. With this IDE, it should be that one input on one place, leads to the exact same output on another place. Different variations of an analysis may give different results, but a singular analysis should always provide the same deterministic result. That is a concept that is held throughout the IDE. Every input leads to the same deterministic output. This allows for both parties of a contract to have the same contract and be able to utilise it in the same way. Now, it may also be possible for one party to have access to more tools than the other party, that is always a part of competition, however, the underlying contract itself will remain the same to both sides.


Now, with BNFs, we use it to restrict and portray the language that we use to write a contract. This language in it's restricted and fixed form is a controlled natural language. It reads like natural language, but the writer will be forced to choose the path they take, restricting the vartiations that they take towards a sentence and the vocabulary that they use. In some cases, the vocabulary will be provided, in others, there may be flexibility (declaring subjects, prices, dates). Furthermore, an additional implemented feature is the ability to add ontologies, mapping more general words in a language to more specific words, such as OBLIGATIONS -> must, have to, required to, allowing us to manually tailor that mapping and provide greater flexibility.

https://www.geeksforgeeks.org/bnf-notation-in-compiler-design/

The general structure of a BNF term is 

    name ::= expansion

The symbol ::= means "defined as" or "may be replaced with". In our case, it is "expands into", meaning that when this name is used, it will be expanded into the right hand side. The expansion itself is then a single or series of other terms and terminals.

Within this IDE, the form used is:

    <name> ::= expansion 
            | expansion2 
            | ...
            ;
    
    where expansion ::= <name> | terminal | combination

    Optional:
        <name>? | terminal?

    Right Precedence or Left Precedence:
        <name> R6::= expansion;
        <name> L7::= expansion;

    Where the number is the value assigned to the precedence.

    Hidden Nodes
        <_name> ::= expansion;

    Means that the node is hidden from the AST, allowing you to have a more streamlined exploration.

A few important things to note is
1. The use of regex is enabled, allowing you to capture strings using regex. This makes it easier for us to capture terminals in the language.
2. Recursive terms may require you to declare right or left associativity, changing whether it is right recursive or left recursive. This may need to be considered when writing grammars, and when writing analyses.

The ability to develop grammars in this format using BNFs, allows the grammar to have a standard structure, following a clear format. This prevents the grammar from being uncontrolled and free, instead ensuring that each faucet of the grammar has been considered by the developer. It is also the case that the dynamicness of this IDE provides developers with the ability to change the grammar and test it immediately as they see fit, removing the steps previously required of building a language and it's interactions. Instead, the IDE completes this in it's entirety, allowing you to immediately begin parsing with the grammar.

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
