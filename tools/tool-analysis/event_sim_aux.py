try:
    from time_override import TimeOverride
except ImportError:
    from time_base import TimeOverride

from datetime import datetime


class Condition:
    def __init__(self, identifier, sentence, negation, time_cond=None):
        self.identifier = identifier
        self.sentence = sentence
        self.flag = False
        self.negation = negation
        self.time_cond = time_cond

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
    """
    Event Simulation Class

    Used for building events and subsequently evaluating the consequence to statements and alternatives.

    Currently in a primitive state.
        Allows for events to be added to the evaluation (If you have the same condition but two different times, the latest one stands)
        Statements will be flipped to (Green = True, Red = False) if the relevant events are added
    
    Next steps:
        Allow for events to trigger a program or script
        Have a set of more practical resultant outcomes
        Merge it into the main contract view (or have some type of contract view, so it is visible alongside the simulation engine)
    """

    def __init__(self):
        # Global dictionary of conditions
        self.conditions = {}
        # Global dictionary of statements and definitions
        self.state_def = {}
        # Array of Past Events - Not necessarily chronologically in the past
        self.past_events = []

        # Mapping for functions, based on node types
        self.mapper = {
            "statement": self.s_d_function,
            "statement_specific": self.ss_function,
            "definition": self.s_d_function,
            "condition": self.c_function,
            "else": self.e_function,
            "bracket": self.b_function,
            "and_expression": self.a_function,
            "or_expression": self.o_function,
            "negation": self.n_function,
            "time_holder": self.t_function,
        }

        self.and_or = True
        self.negation = False

        # For extracting time
        self.time = None
        self.time_convert = TimeOverride()

        # For unique identifier
        self.global_count = 1

        # For unique identifier
        self.global_count_arr = [0]

    def eval_count(self):
        return '.'.join([str(i) for i in self.global_count_arr])

    def find_clauses(self, tree, clause_arr):
        # cursor = tree.walk()
        # First find the clauses. BFS first
        
        root = tree.root_node
        
        self.explore_clauses(root, clause_arr)
        
    def explore_clauses(self, node, clause_arr):
        for c in node.children:
            if c.type == "clause":
                # Start with two arrays, first is for conditions, second for THEN, add third for ELSE
                clause_arr.append([[], []])
                # Default is AND, then flips if necessary
                self.and_or = True

                # Increment count
                self.global_count_arr[0] += 1

                self.global_count_arr.append(0)

                # Completely recursive.
                self.explore(c, clause_arr)

                self.global_count_arr.pop()

                # Have to the ands and ors at the clause level because it's not nested within the statement

                # First set of statements
                for child in clause_arr[-1][1]:
                    child.and_or = self.and_or

                # Second set of statements (ELSE)
                if len(clause_arr[-1]) > 2:
                    for child in clause_arr[-1][2]:
                        child.and_or = self.and_or
                        child.if_else = True
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
        
        # Storing previous level operator
        old_and_or = self.and_or

        # Increment count
        self.global_count_arr[-1] += 1
        self.global_count_arr.append(0)

        clause_arr.append([[], []])
        self.explore(c, clause_arr)
        state = Statement(
            str(c.id),
            c.text.decode("utf8"),
            if_else=False,
            and_or=self.and_or,
        )
        state.conditions = clause_arr.pop()[0]
        clause_arr[-1][0].append(state)

        # Pop count
        self.global_count_arr.pop()

        # Restoring previous level operator
        self.and_or = old_and_or


    # HELPER Function for extracting text without time
    def extract_text(self, c, arr):
        if c.type == "time_holder":
            return
        else:
            if len(c.children) > 0:
                for child in c.children:
                    self.extract_text(child, arr)
            else:
                arr.append(c.text.decode("utf8"))


    # CONDITION Function
    def c_function(self, c, clause_arr):
        self.negation = False
        self.time = None

        # Increment count
        self.global_count_arr[-1] += 1

        self.explore(c, clause_arr)

        str_arr = []
        self.extract_text(c, str_arr)

        cond = Condition(
            self.eval_count(),
            # c.text.decode("utf8"),
            ' '.join(str_arr), 
            self.negation,
            self.time,
            )
        # Adding to array of conditions for that clause
        clause_arr[-1][0].append(cond)
        # Adding to dictionary, easier to access
        self.conditions[cond.identifier] = cond

    # STATEMENT DEFINITION Function
    def s_d_function(self, c, clause_arr):
        # This is evaluated too early. - Now it is evaluated fine but the text is off.
        self.explore(c, clause_arr)
        """
        Realistically, you should be using statement as a more general one, and not nest conditions under it. 
        """
        state = Statement(
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

    # TIME Function
    """
    For extracting time from condition (Should be made to condition & statement level)
    """
    def t_function(self, c, clause_arr):
        self.time = self.time_convert.time_analyser(c)

    # STATEMENT_SPECIFIC Function
    def ss_function(self, c, clause_arr):
        return c.text.decode("utf8")

    def explore(self, node, clause_arr):
        for c in node.children:
            if c.type in self.mapper:
                self.mapper[c.type](c, clause_arr)
            else:
                self.explore(c, clause_arr)

    def event_simulation(self, parse_tree):
        # Resetting the simulation
        self.conditions = {}
        self.state_def = {}
        self.past_events = []
        self.global_count = 1
        self.global_count_arr = [0]

        clause_arr = []
        self.find_clauses(parse_tree, clause_arr)
        for clause in clause_arr:

            for s in clause[1]:
                self.state_def[s.identifier] = s

            if len(clause) > 2:
                for e in clause[2]:
                    self.state_def[e.identifier] = e

    def evaluate_condition(self, identity, time_str):
        
        time_obj = datetime.now()

        # Evaluating the time of the event
        if time_str != "":
            time_obj = self.time_convert.evaluate_time_str(time_str)

        # Adding it to the list of past events
        self.past_events.append((identity, self.time_convert.return_time_str(time_obj), self.conditions[identity].sentence))

        # Doing a comparison of the time and using it for evaluation
        time_comparison = self.evaluate_condition_time(identity, time_obj)

        if time_comparison:
            self.conditions[identity].flag = True
        else:
            self.conditions[identity].flag = False
        

    # Function for evaluating time against the condition time
    def evaluate_condition_time(self, identity, time_obj):
        # Getting the time tuple
        tc = self.conditions[identity].time_cond

        if tc == None:
            return True
        else:
            # Checking if it is before, after, or on the date.
            
            if len(tc) == 2:
                val, op = tc

                # On a time
                if op == "o":
                    if time_obj == val:
                        return True
                        
                # After a time
                elif op == "a":
                    if time_obj > val:
                        return True

                # Before a time
                elif op == "b":
                    if time_obj < val:
                        return True

            elif len(tc) == 5:

                val1, op1, condition, val2, op2 = tc

                if op1 != op2:
                    if condition == "and":
                        # Inclusive
                        # <A t B>
                        if min(val1, val2) <= time_obj <= max(val1, val2):
                            return True
                    elif condition == "or":
                        # t A> or <B t
                        if min(val1, val2) >= time_obj or max(val1, val2) <= time_obj:
                            return True

        return False


    def toggle_condition(self, identity):
        self.conditions[identity].flag = not self.conditions[identity].flag

    def evaluate_state_def(self, identity):
        return self.state_def[identity]
