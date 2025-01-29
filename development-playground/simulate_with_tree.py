import sys
sys.path.append('tool-auxiliary/')
sys.path.append('tool-auxiliary/antlr')

from main import Handler

handler = Handler()

parseString = ""
with open("contracts/allCases.txt", "r") as file:
    parseString = file.read()


# print(parseString)

tree = handler.bnfStructure(parseString)

print(handler.parse_tree)

root = handler.parse_tree.root_node

print(root.type)

# print(tree)

argarr = [[]]

connector = []

# So the idea is that you traverse through the tree, and whenever it is a certain type of sentence
# You will then add it to the array

# So what we are doing here is basically turning it into some sort of predicate logic. 
# Take out the IFs, ANDs and THENs. -> Conjunction, Disjunction, Implication.

mapper = {"simple_definition": 'D', "simple_statement": 'S', "simple_condition": 'C'}


def explore(node, flag):
    if node:
        if node.type in mapper:
            argarr[-1].append([mapper[node.type]])
            for c in node.children:
                explore(c, True)
        elif flag:
            if not node.children:
                argarr[-1][-1].append(node.text.decode("utf-8"))
            else:
                for c in node.children:
                    explore(c, flag)
        else:
            if not node.children:
                node_type = node.text.decode("utf-8")
                if node_type == 'C-AND':
                    argarr.append([])
                else:
                    argarr[-1].append(node_type)
                connector.append(node_type)
            else:
                for c in node.children:
                    explore(c, flag)
            


explore(root, False)

# print(argarr)

transformed_arr = []
conditionals = []

for s in argarr:
    print(s)
    transformed_arr.append([])
    conditionals.append([[], []])
    for c in s:
        if isinstance(c, str):
            print(c + "\n")
            transformed_arr[-1].append(c)
            if c == "ELSE":
                conditionals[-1].append([])
        else:
            print(' '.join(c) + "\n")
            transformed_arr[-1].append(c[0] + c[2])
            if c[0] == "C":
                conditionals[-1][0].append(c[0] + c[2])
            else:
                conditionals[-1][-1].append(c[0] + c[2])

    # print(' '.join(s))

# print(connector)

print(transformed_arr)

# Conditionals is in the form
# [Conditions], [Statements or Definitions], [ELSE Statements or Definitions]
# But also, if it is a conditional statement, it is not a definition and vice versa *******

# We also know that if there are no conditions, then it is automatically true. This is good.
# We then create some sort of truth table, have inputs for the conditionals and check whether
# they are true, then you can evaluate the statements and definitions.

# My only problem here is when we use OR as oppposed to AND. AND is a simple conjunction, however,
# we don't have operators to signify precedence and associativity. Which one comes first?
print(conditionals)

# Each element of transformed_arr is a sub-contract on it's own.
# Each case should have either DEFINITION/STATEMENT IF CONDITION or IF CONDITION THEN DEFINITION/STATMENT

# We get the problem here of necessity. Is something necessarily true? 
# AKA, does the other thing HAVE TO be true for our thing to be true?

class Condition:
    def __init__(self, identifier):
        self.identifier = identifier
        self.flag = False

    def __repr__(self):
        return self.identifier + " --- " + str(self.flag)

class Statement:
    def __init__(self, identifier, ifelse):
        self.identifier = identifier
        self.conditions = []
        self.ifelse = ifelse # True = Else, False = Not Else

    def __repr__(self):
        return self.identifier + "---" + str(self.evaluate())
        # return self.identifier + " --- " + str(self.evaluate()) + "---" + str(self.conditions)
    
    def evaluate(self):
        flag = True
        for e in self.conditions:
            flag = flag and e.flag

        if self.ifelse: # True when not ALL ANDs. 
            return not flag
        else:
            return flag

conditions = {}
state_def = {}

for contract in conditionals:

    conditions_temp = []

    for c in contract[0]:
        identity = c[1:]
        if identity not in conditions:
            conditions[identity] = Condition(identity)
        conditions_temp.append(conditions[identity])

    for c in contract[1]:
        identity = c[1:]
        if identity not in state_def:
            state_def[identity] = Statement(identity, False)
        state_def[identity].conditions = conditions_temp

    if len(contract) > 2:
        for c in contract[2]:
            identity = c[1:]
            if identity not in state_def:
                state_def[identity] = Statement(identity, True)
            state_def[identity].conditions = conditions_temp
        

print(conditions)
print(state_def)

# Tests
conditions["1"].flag = True
conditions["2"].flag = True

print(conditions)
print(state_def)

# conditions["1"].flag = True
# conditions["2"].flag = True
print(state_def["3"].conditions)



# What we currently have is a way to pull out the conditions, statements and definitions from a contract and basically simulate events.
# Currently using a predicate logic format. Either true or false.
# Next steps -> Do some identity analysis, make sure it is unique. 
# Add in ORs
# Make the event simulation system more interactive. Base design is there, make it better.
# Furthermore, this is completely based on the idea that conditions are always leading to make some definition or statement true.
# Now is this true in all legal contracts? Need to explore the intersection.



# We can also traverse connector backwards

# Our structure is basically fixed.
# Always 
# IF A ((AND | OR) A)* THEN D (AND D)*
# (C-AND (IF A ((AND | OR) A)* THEN D (AND D)*))*

# So all our arguments with AND are grouped together, then new list for Then and end when IF, then new list for C-AND.


# print(len(connector), len(s)) # 13 v 11 so there is C-AND num more connectors.

# <conditional-definition> 
# ::= <definition> IF <condition>
#  | IF <condition> THEN <definition>
#  | <definition> IF <condition> ELSE <definition>
#  | IF <condition> THEN <definition> ELSE <definition>

# <condition> 
# ::= <simple-condition>
#  | <simple-condition> OR <condition>
#  | <simple-condition> AND <condition>