from tree_sitter import Language, Parser
from condition_sim_aux import ConditionSim

class StaticAnalysis:
    """
    Idea is that static analyses go into this class.
    So one such analysis would be event simulation, what happens to the truth of the contract after certain conditions are (un)fulfilled.
    """

    def __init__(self):
        self.condition_simulator = ConditionSim()
    
    def simulate(self, parse_tree):
        self.condition_simulator.event_simulation(parse_tree)

        # print(self.event_simulator.conditions)
        for c in self.condition_simulator.conditions.values():
            print(c.time_cond)
        print(self.condition_simulator.state_def)