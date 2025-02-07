# Framework for a Legal IDE

A framework based IDE is the objective in this project. It creates a base off of which legal languages can be developed and used, providing a more efficient method of iterating through versions of a grammar.

This IDE would follow a system with plugins, enabling various languages to be added, and be extendable such that different tools can be provided for each language along with a suite of basic/general tools.

## Analysis
- Static Analysis
- Dynamic Analysis

Split into two categories. Dynamic to run while contract is being written. Allow us to separate contract feedback and contract simulation.

Analysis is always done on the tree but separate to the parsing. This prevents conflicts by keeping analysis isolated and not tampering with the root tree.

## LSP 
- Autosuggestion
- Syntax Highlighting
- Error Highlighting
- Hover Information (Node Type)
- Autocomplete (WIP - Plan is to use lookaheaditerator)

## PDF view

PDF view work has begun, currently in progress. Still in the midst of working out how to format correctly and provide pagination (If contract is more than one page, how would we print). 

Currently, uses Template with HTML along with Template-specific CSS to create a contract format. This then allows a contract to be output into the middle section of the template. Provides a commercial use.

## Folding Nodes

Currently, primitive solution created, picking the node-id and restricting the parse-view based on that. However, this will prevent you from seeing anything other than what you have dived into, and will be reset the moment any new text is added (Due to how reparsing works).

-> This will need to be altered such that it continues focusing on that section.
-> It is also possible to "ignore" sections using the same concept. (Add the IDs to a set and do not print if within the set)

## Meta-Data

Metadata allows us to store information about a contract, bnf or grammar. This includes the language a contract was written in, the date, the time, and so on. This information is crucial as it provides us with an understanding of a contract/bnf without looking directly within, whilst also retaining historical information. 

This has been implemented in the MetaData class, and can be extended to include more components.

Currently:
- Contracts
- BNFs
- Grammar in use

## Formatting

Within the IDE, formatting the parsed output is done through HTML and CSS. It leverages the use of CSS classes to change the formatting at a node-type level, allowing us to choose how to style each component.

For example, statements can be displayed with blocks, making it more clear to the drafter on what they are currently writing, and improve efficiency.

Additionally, the formatting has been swapped to being language-specific, allowing you to swap between different styles for different languages.


## Logical Operators

Evaluation of logical operators have been added, allowing us to consider the conditions within a clause, flagging them as true or false. In turn, we then evaluate the conditions that build up a (set of) statements and evaluate the statement itself.


Semantics should be in the non-terminals.

You can define multiple things as statements / conditions / clauses. It allows you to have greater flexibility, while assinging semantics.




##
Time. How do we represent time, translate into a "universal time"?

## Current Challenges?

How do we simulate events? 
How do we ensure that a general solution can work?
How do we test?
How can we use indirection or indicative nodes?

What is the purpose of developing a language server?
How can we leverage tree-sitter to create a LSP alternative, providing the same features without needed the setup?

Does HTML work in every case? Where might it not work?

How can we check if grammars are equivalent or a subset of another? Checking parents?




Interesting things that came up.

Definitions, you need to be able to define certain things. Types, so on. And check for it.

Indentations for associativity of AND / OR? Implicit or explicit, bracket or no bracket.

Functions?

JL4, what are they doing? How are they handling each section?


# Glossary

drafter
metadata
language
grammar




https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890