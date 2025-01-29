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

class EventSim:
    def __init__(self):
        self.conditions = {}
        self.state_def = {}
        self.mapper = {"statement": "S", "definition": "D", "condition": "C", "else":"E"}

    

    def find_clauses(self, tree, clause_arr):
        # cursor = tree.walk()
        # First find the clauses. BFS first
        root = tree.root_node

        for c in root.children:
            if c.type == "clause":
                clause_arr.append([[],[]])
                self.explore(c, clause_arr)


    def explore(self, node, clause_arr):
        for c in node.children:
            if c.type in self.mapper:
                mapped = self.mapper[c.type]

                if mapped == "C":
                    clause_arr[-1][0].append(Condition(str(c.id), c.text.decode("utf8")))
                elif mapped == "S" or mapped == "D":
                    state = Statement(str(c.id), c.text.decode("utf8"), len(clause_arr[-1]) == 3)
                    clause_arr[-1][-1].append(state)
                    state.conditions = clause_arr[-1][0]
                elif mapped == "E":
                    clause_arr[-1].append([])
            else:
                self.explore(c, clause_arr)

    def event_simulation(self, parse_tree):
        self.conditions = {}
        self.state_def = {}

        clause_arr = []
        self.find_clauses(parse_tree, clause_arr)
        for clause in clause_arr:
            
            for c in clause[0]:
                self.conditions[c.identifier] = c

            for s in clause[1]:
                self.state_def[s.identifier] = s

            if len(clause) > 2:
                for e in clause[2]:
                    self.state_def[e.identifier] = e

    
    def toggle_condition(self, identity):
        self.conditions[identity].flag = not self.conditions[identity].flag
    
    def evaluate_state_def(self, identity):
        return self.state_def[identity]