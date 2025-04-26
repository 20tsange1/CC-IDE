from tree_sitter import Language, Parser

try:
    from time_override import TimeOverride
except ImportError:
    from time_base import TimeOverride

class InteractiveAnalysis:
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
        self.time_convert = TimeOverride()
        pass

    def error_analyser(self, parse_tree):
        """
        Example of an analyser, this one just counts the number of errors / total number of nodes
        Maybe swap to number of words, bytes
        """

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

        return round((1 - (count / (total))) * 100, 2) if total > 0 else 0

    # def id_analyser(self, parse_tree):

    #     """
    #     Analysing identifiers, making sure they are used correctly.
    #     Make sure there are no overlaps, and make sure they are the right types.
    #     """

    #     existingIDs = {}

    #     problems = set()

    #     mapper = {"simple_definition": 'D', "simple_statement": 'S', "simple_condition": 'C'} 

    #     if parse_tree != None:
    #         s = [parse_tree.root_node]

    #         while s:
    #             node = s.pop()

    #             if node.parent and node.parent.type == "ID":
    #                 identifier = node.text.decode("utf-8")
    #                 if identifier not in ["[", "]"]:
    #                     if identifier in existingIDs:

    #                         # Need to also add in checking the actual sentence behind it to make sure it is either the same.
    #                         # or is a reference.

    #                         if existingIDs[identifier] != node.parent.parent.type:
    #                             problems.add(identifier)
    #                     else:
    #                         existingIDs[identifier] = node.parent.parent.type

    #             if node.child_count > 0:
    #                 for child in node.children:
    #                     s.append(child)

    #     return sorted(list(problems))

    
    def time_analyser(self, parse_tree, identities):

        """
        Analysing the times within the contract, ensuring that they do not conflict.

        i.e The timeframes are possible. (Can't have before and after in certain scenarios)
        """

        times = []

        times_choices = {"time_before": "b", "time_after": "a", "time_on": "o"}

        times_connector = {"time_and": "and", "time_or": "or",}

        if parse_tree != None:
            s = [parse_tree.root_node]

            while s:
                node = s.pop()

                if node.type == "condition":
                    times.append([])
                    times[-1].append(self.time_convert.time_analyser(node))

                if node.id in identities:
                    times[-1].append(identities[node.id])

                if node.child_count > 0:
                    for child in node.children:
                        s.append(child)

        ret_arr = []

        for time_check in times:
            if len(time_check[0]) != 5:
                continue

            val1, op1, condition, val2, op2 = time_check[0]
            key = time_check[1]

            # Directly append if certain conditions are met
            if op1 == op2 or op1 == "o" or op2 == "o":
                ret_arr.append(key)
                continue

            # Determine "before" and "after" values
            after, before = (val1, val2) if op1 == "a" else (val2, val1)

            # Evaluate condition
            if (condition == "and" and after > before) or (condition != "and" and after < before):
                ret_arr.append(key)

        return sorted(ret_arr)