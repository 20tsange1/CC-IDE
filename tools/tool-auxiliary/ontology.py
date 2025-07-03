class Ontology:
    """
    This was the beginning of an Ontology class

    The idea was to allow for ontologies to be added to grammars, replacing the instances of a word with a new rule

    This allows you to extend grammars with pre-existing ontologies, equivalent to defining a language with more granularity

    In turn, this could also be used in GAS, whereby the ontology could link in with pre-existing systems, adding items to the language which can be evaluated.
    """


    def __init__(self):
        self.ontologies = {}

    def breakdown(self, filename):

        with open(file=filename, mode="r") as file:
            for line in file:
                
                # Removing whitespaces/newlines
                line = line.strip()

                # Finding start index of word
                start = 0
                while line and line[start] != ":":
                    start += 1

                # Finding word we are mapping
                word = line[:start].strip()
                if word[0] == "<" and word[-1] == ">":
                    word = word[1:-1]

                self.ontologies[word] = line[start + 2:].split(',')
    
        # print(self.ontologies)