# Introduction
*Brief overview of the topic and dive into the problem space.*

## Where do we begin
Setting the context.

Computable contracts, what are they, why are they needed?

Do they help us in our everyday lives? Do they help lawyers? Why do we need them at all?

## Gap
So what are they missing? What problem can you solve? What do you add to this field? What hasn't been done?

What is the main contribution that is added. IDE that supports both developers and lawyers, new languages - developer, writing contract - lawyer, -Efficiency and breadth of language support - Langauge server protocols, highlighting and 


If IDE is for one language, it's trivial to add semantics, language has its own semantics. But when you have multiple languages, then you can't control, it becomes much more difficult.

Generic IDE vs a legal IDE?

Then semantics to ANY grammar.
Why do we want semantics, the research gap?

## Aims
What do you want to achieve from this project? High level?

## Objectives
How will you achieve it? Specifics?

Measurable? Quantitative or Qualitative?

# Background

*Diving into what exists, what are the smaller pieces that precede this project?*

## Previous Projects
Where have we seen computable contracts?
What is the work currently being done? Who is writing it?

## Real World Use Case
Where might this come in handy? Where might it already be used?

## Legal Languages
Catala, L4, Lexon, Logical English, Cola ...

Who is writing the languages? What languages exist? What do these languages do? What are the differences between them?

## Grammars, Syntax, and Theory
How is a legal language built up? What are the constituents to a legal language? What rules do legal languages have to follow?

The basis of a legal contract? 

Clauses, Events, Statements, Definitions, Conditions?

# Design

*Exploring what tools are at hand and what motivates the use of certain tools, along with the important underlying factors of consideration*

## BNF and The Tree
Why the BNF and how the tree is everything.

How does the BNF form of a legal language play into our IDE? How does the outputted AST form the basis to everything?

## Streamlining the process
Where do we save time and effort for the user? How do we wrap everything within the IDE, bar what the developer needs to change?

Why is this better than the previous way? Why will this help?

## The Puzzle Pieces
What are the tools that we have at hand? 

- Tree-sitter?
- ANTLR4?
- Flask?

What are the small pieces we use to slot into the puzzle?

Which ones fit together, you may have more than one solution, why is it a good fit.

## Design Choices

Plugin & Go:
- How does each function work? 
- How is it integrated into the IDE?

Abstraction wherever possible:
- Where and with what does the user interact?
- Where and with what does the developer interact?
- What do we hide?

# Implementation

*What did we achieve and how did we achieve it? What goes on behind the scenes to make it all work and how does it achieve what we wanted it to achieve?*

<sub>Exploring that transition from one to another. Developer & User -> What language they need to use (IDE) and how they add semantics onto the language (symbols and attributes) -> What if they stray from the original or have certain formats (Time and Translation)?</sub>

## Building the IDE

## The Developer and the User
Who develops the grammar and who uses the grammar? Who has what role?

## Symbols and Semantics
Well now we've got the IDE and you can create and parse languages, but isn't it just like any other parser with a few less steps?

How can we give it meaning? Give it semantics? And how can you leverage these semantics?

Capture semantics of grammar to provide additional functionally.

## Time and Translation
And how about for something specific to a single grammar? Grammars are usually never the same, but where it does differ, how do we make sure the meaning is passed along?

We provide a higher level evaluation, but lower level analysis and semantics differs from grammar to grammar. How do you evaluate it correctly?

Even with something like time, how do we compare US vs UK time with the months and dates?

People speak differently and so do languages. 

# Evaluation & Conclusion

Are we fitting it into a mold?

## Validation

Build a task, how different sections of the IDE achieve that task.

Which BNFs will break IDE. Smalls BNFs that can cause trouble.

Upload BNF and then Upload contract. Correctly captured?

Building the code right (verification) vs building the right code (validation - Does it fulfil the original gap you set out to solve)

## What we did, did it work?

## What did we learn?

## Conclusion

## Next Steps