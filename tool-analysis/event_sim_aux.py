class Condition:
    def __init__(self, identifier, sentence, negation):
        self.identifier = identifier
        self.sentence = sentence
        self.flag = False
        self.negation = negation

    def __repr__(self):
        return self.identifier + " --- " + str(self.flag)

    def evaluate(self):
        if self.negation:
            return not self.flag
        else:
            return self.flag


class Statement:
    def __init__(self, identifier, sentence, if_else, and_or):
        self.identifier = identifier
        self.sentence = sentence
        self.conditions = []
        self.if_else = if_else
        self.and_or = and_or  # AND = TRUE, OR = FALSE

    def __repr__(self):
        return self.identifier + " --- " + str(self.evaluate())

    def evaluate(self):
        flag = False

        if self.and_or:
            # When it is an AND
            flag = True
            for c in self.conditions:
                flag = flag and c.evaluate()
        else:
            # When it is an OR
            flag = False
            for c in self.conditions:
                flag = flag or c.evaluate()

        if self.if_else:
            return not flag
        else:
            return flag


class EventSim:
    def __init__(self):
        self.conditions = {}
        self.state_def = {}
        self.mapper = {
            "statement": self.s_d_function,
            "definition": self.s_d_function,
            "condition": self.c_function,
            "else": self.e_function,
            "bracket": self.b_function,
            "and": self.a_function,
            "or": self.o_function,
            "negation": self.n_function,
        }

        self.and_or = True
        self.negation = False

        self.global_count = 1

    def find_clauses(self, tree, clause_arr):
        # cursor = tree.walk()
        # First find the clauses. BFS first
        
        root = tree.root_node
        
        self.explore_clauses(root, clause_arr)
        
    def explore_clauses(self, node, clause_arr):
        for c in node.children:
            if c.type == "clause":
                clause_arr.append([[], []])
                self.and_or = True
                self.explore(c, clause_arr)
            else:
                self.explore_clauses(c, clause_arr)

    # AND Function
    def a_function(self, c, clause_arr):
        self.and_or = True

    # OR Function
    def o_function(self, c, clause_arr):
        self.and_or = False

    # BRACKET Function
    def b_function(self, c, clause_arr):
        
        old_and_or = self.and_or

        clause_arr.append([[], []])
        self.explore(c, clause_arr)
        state = Statement(
            str(c.id),
            # self.global_count,
            c.text.decode("utf8"),
            if_else=False,
            and_or=self.and_or,
        )
        # self.global_count += 1
        state.conditions = clause_arr.pop()[0]
        clause_arr[-1][0].append(state)

        self.and_or = old_and_or

    # CONDITION Function
    def c_function(self, c, clause_arr):
        self.negation = False
        self.explore(c, clause_arr)
        cond = Condition(
            # str(c.id), 
            str(self.global_count),
            c.text.decode("utf8"), 
            self.negation
            )
        self.global_count += 1
        clause_arr[-1][0].append(cond)
        self.conditions[cond.identifier] = cond

    # STATEMENT DEFINITION Function
    def s_d_function(self, c, clause_arr):
        # This is evaluated too early. - Now it is evaluated fine but the text is off.
        self.explore(c, clause_arr)
        state = Statement(
            # str(c.id),
            str(self.global_count),
            c.text.decode("utf8"),
            len(clause_arr[-1]) == 3,
            and_or=self.and_or,
        )
        self.global_count += 1
        clause_arr[-1][-1].append(state)
        state.conditions = clause_arr[-1][0]

    # ELSE Function
    def e_function(self, c, clause_arr):
        clause_arr[-1].append([])

    # NEGATION Function
    """
    Need to think about how to use negations, are all conditions starting off false or?
    """
    def n_function(self, c, clause_arr):
        self.negation = True

    def explore(self, node, clause_arr):
        for c in node.children:
            if c.type in self.mapper:
                self.mapper[c.type](c, clause_arr)
            else:
                self.explore(c, clause_arr)

    def event_simulation(self, parse_tree):
        self.conditions = {}
        self.state_def = {}
        self.global_count = 1

        clause_arr = []
        self.find_clauses(parse_tree, clause_arr)
        for clause in clause_arr:

            for s in clause[1]:
                self.state_def[s.identifier] = s

            if len(clause) > 2:
                for e in clause[2]:
                    self.state_def[e.identifier] = e

    def toggle_condition(self, identity):
        self.conditions[identity].flag = not self.conditions[identity].flag

    def evaluate_state_def(self, identity):
        return self.state_def[identity]
