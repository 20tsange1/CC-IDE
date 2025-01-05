from tree_sitter import Language, Parser
from event_sim_aux import Condition, Statement, explore

class StaticAnalysis:
    """
    Idea is that static analyses go into this class.
    So one such analysis would be event simulation, what happens to the truth of the contract after certain conditions are (un)fulfilled.
    """

    def __init__(self):
        pass

    def event_simulation(self, parse_tree):
        argarr = [[]]
        connector = []
        mapper = {"simple_definition": 'D', "simple_statement": 'S', "simple_condition": 'C'} 

        if parse_tree != None:
            root = parse_tree.root_node
        else:
            return

        explore(root, False, mapper, argarr, connector)

        transformed_arr = []
        conditionals = []

        for s in argarr:
            transformed_arr.append([])
            conditionals.append([[], []])
            for c in s:
                if isinstance(c, str):
                    transformed_arr[-1].append(c)
                    if c == "ELSE":
                        conditionals[-1].append([])
                else:
                    transformed_arr[-1].append(c[0] + c[2])
                    if c[0] == "C":
                        conditionals[-1][0].append(c[0] + c[2])
                    else:
                        conditionals[-1][-1].append(c[0] + c[2])

        print(transformed_arr)
        print(conditionals)

        conditions = {}
        state_def = {}

        for contract in conditionals:

            conditions_temp = []

            for c in contract[0]:
                identity = c[1:]
                conditions[identity] = Condition(identity)
                conditions_temp.append(conditions[identity])

            for c in contract[1]:
                identity = c[1:]
                state_def[identity] = Statement(identity, False)
                state_def[identity].conditions = conditions_temp

            if len(contract) > 2:
                for c in contract[2]:
                    identity = c[1:]
                    state_def[identity] = Statement(identity, True)
                    state_def[identity].conditions = conditions_temp
                

        print(conditions)
        print(state_def)