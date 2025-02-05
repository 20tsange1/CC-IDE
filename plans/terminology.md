# Terminology and Definitions

### Clause
A major building block of a contract, and it divides the contract into different (often unique and referring to a separate notion) components.

Examples include a payment clause, a termination clause, a force majeure clause, and more.

"IF condition
"IF condition THEN statement ELSE statement"

Additionally, IFs and IFFs are considered differently within contracts. Not the same meaning.

### Statement
A statement is a factual or descriptive assertion within the contract, used to describe an action that must be done or some property that is true. In some cases, statements will lead to further or encapsulate a further condition / event. Often this is used for the action of a clause, resultant of a condition coming true.

e.g "Bob must pay Alice $200" -> "Bob paid Alice $200"

### Definition
A definition is a declaration, or shortening of some known value. Often used as a clarification a specific meaning of some term or notation used within the contract. This reduces the ambiguity involved with contract terms, providing a better interpretation of the context.

e.g "Party 1" is "Bob's Fishing Company", "Party 2" is "Bob's Shelling Company"

### Condition
Elements or actions that must be fulfilled / made true (or false) in order for the contract to be valid, or in some cases, require an action to be carried out. Often, this will be a prerequisite / precedent for a clause to be triggered. 

e.g "If Alice paid Bob $200 Then ..."

### Event
An event has to do with the actions that end up happening, and is what is considered for the fulfilment / triggering of a clause.

"Bob paid Alice $200" -> Triggers the delivery clause.

### Logical Operators
Logical operators are used within contracts to signify the combination and dependency of conditions.

#### AND
When multiple conditions ALL have to be true for the condition to evaluate to true.

#### OR
When only ONE condition of multiple conditions have to be true for the condition to evaluate to true.

#### Brackets
Used for signifying precedence of logical operators. Helps ensure that the conditions are evaluated correctly.

### Party
The group or person that is on each respective side of a contract. Often, one party will be delivering some type of service or goods to another. It may also be that they are delivering something to each other.

e.g "Party A is Alice", "Party B is Bob" -> "Party A is engaging with Party B in the delivery of 20 pallets of water"

### Responsibility
Definition of what each party is required to do in order to carry out the contract / under the agreement. Outlines expectations, deadlines and deliverables. What action items have to be carried out. Usually signified through the use of modal verbs.

### Modality (Modal Verbs)
For representing that something must be, shouldn't be, or may be done.

#### Obligation
An action that must be done.

"Bob must deliver the goods before 01-01-2025"

#### Prohibition
An action that must NOT be done.

"Alice shall not enter the premise"

#### Permission
An action that is permitted. 

"Alice may serve alcohol"

### Offer
The act of providing the contract for agreement by the other party, declaring the items within the contract.

### Acceptance
Accepting the offer, validating the terms within the contract, necessitating fulfilment of the contract.

### Consideration
The value exchanged between parties, any type of denotable item (Money, Goods, Services, Promises ... ).

### Performance & Delivery Terms
How, when, where will obligations be performed. How these obligations are carried out and by when. 

e.g Delivery schedules, quality standards, modes of delivery.

### Breach
The case when one party fails to fulfill its obligations. A more complex notion as it is technically a sub-statement of an original condition. Defaults within the contract?

### Force Majeure
Covering unexpected and uncontrollable events. Highly ambigious and provides leeway.

### Termination
Regards how a contract can be ended and how this can be achieved. Usually a type of clause with triggers upon some terminating condition.

### Time
Time has to be universal or translatable to some known computable time. This allows us to add in dynamic elements or events within the program, driving forward a time based implementation of simulation.

This is attuned towards having a way to translate a grammars format of time into a standard time system, such as DD/MM/YYYY.

e.g 6th January 2025 -> 06/01/2025, the latter of which is processable by the program.