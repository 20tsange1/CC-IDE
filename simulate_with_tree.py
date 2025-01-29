import sys
sys.path.append('tool-auxiliary/')
sys.path.append('tool-auxiliary/antlr')

from main import Handler


class Condition:
    def __init__(self, identifier, sentence):
        self.identifier = identifier
        self.sentence = sentence
        self.flag = False

    def __repr__(self):
        return self.identifier + " --- " + str(self.flag)

class Statement:
    def __init__(self, identifier, sentence, ifelse):
        self.identifier = identifier
        self.sentence = sentence # The actual phrase behind it.
        self.conditions = []
        self.ifelse = ifelse # True = Else, False = Not Else

    def __repr__(self):
        return self.identifier + " --- " + str(self.evaluate())
        # return self.identifier + " --- " + str(self.evaluate()) + "---" + str(self.conditions)
    
    def evaluate(self):
        flag = True
        for e in self.conditions:
            flag = flag and e.flag

        if self.ifelse: # True when not ALL ANDs. 
            return not flag
        else:
            return flag

handler = Handler()

parseString = ""
with open("contracts/testContract.txt", "r") as file:
    parseString = file.read()


tree = handler.bnfStructure(parseString)

root = handler.parse_tree.root_node

conditions = {}
state_def = {}

"""
Clause is an object with statements, definitions, conditions.

Statement is some true or false fact.

Condition is an evaluable question.

Definition is a fact.

For this example, we will contain it to just clauses with conditions and statements.

Our first move is to find out what are the conditions, what are the statements, and what links to what.
"""

mapper = {"statement": "S", "definition": "D", "condition": "C", "else":"E"}

clause_arr = []

def find_clauses(tree):
    # cursor = tree.walk()
    # First find the clauses. BFS first
    root = tree.root_node

    for c in root.children:
        if c.type == "clause":
            clause_arr.append([[],[]])
            explore(c)


def explore(node):
    for c in node.children:
        if c.type in mapper:
            mapped = mapper[c.type]

            if mapped == "C":
                clause_arr[-1][0].append(Condition(str(c.id), c.text.decode("utf8")))
            elif mapped == "S" or mapped == "D":
                state = Statement(str(c.id), c.text.decode("utf8"), len(clause_arr[-1]) == 3)
                clause_arr[-1][-1].append(state)
                state.conditions = clause_arr[-1][0]
            elif mapped == "E":
                clause_arr[-1].append([])
        else:
            explore(c)


find_clauses(handler.parse_tree)

conditions = {}
state_def = {}

for clauses in clause_arr:
    
    for c in clauses[0]:
        conditions[c.identifier] = c

    for s in clauses[1]:
        state_def[s.identifier] = s

    if len(clauses) > 2:
        for e in clauses[2]:
            state_def[e.identifier] = e

print(clause_arr)

# clause_arr[2][0][0].flag = True
# clause_arr[2][0][1].flag = True

print(clause_arr)

print(conditions)
print(state_def)