from tree_sitter import Language, Parser
from event_sim_aux import EventSim

class StaticAnalysis:
    """
    Idea is that static analyses go into this class.
    So one such analysis would be event simulation, what happens to the truth of the contract after certain conditions are (un)fulfilled.
    """

    def __init__(self):
        self.event_simulator = EventSim()
    
    def simulate(self, parse_tree):
        self.event_simulator.event_simulation(parse_tree)