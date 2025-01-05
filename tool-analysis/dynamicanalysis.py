from tree_sitter import Language, Parser

class DynamicAnalysis:
    """
    Analysis class is being developed to store and integrate different types of analysis into the IDE.

    The idea is to make it as modular as possible, allowing different analysis to be added into the IDE
    dynamically, such that as the field grows and more langauges / analysis are created, the IDE remains
    flexible.

    Furthermore, there will need to be a structural check for a grammar, as a grammar requires the analysis
    grammar (grammar suitable for the analysis) as a subset of itself. Otherwise, the analysis will not
    be able to evaluate the contract correctly. Furthermore, there needs to be additional consideration
    to cases where there may be a mixture of grammars within a singular grammar, and how an analysis may
    have to extract or handle just a portion of the contract.

    We also want to keep analysis and parsing separate, making the two individual components of the IDE.
    (Improves modularity)


    Types of Analysis
        - Completeness
        - Consistency
        - Vagueness
    """

    def __init__(self):
        pass

    def error_analyser(self, parse_tree):

        # Example of an analyser, this one just counts the number of errors / total number of nodes
        # Maybe swap to number of words, bytes

        count = 0
        total = 0
        # cursor = self.parse_tree.root_node.walk()

        if parse_tree != None:
            s = [parse_tree.root_node]

            while s:
                node = s.pop()

                if node.child_count > 0:
                    for child in node.children:
                        s.append(child)

                if node.type == "ERROR":
                    count += 1
                
                total += 1

        return int((1 - (count / (total))) * 100) if total > 0 else 0