class Ontology:

    def __init__(self):
        self.ontologies = {}

    def breakdown(self, filename):

        with open(file=filename, mode="r") as file:
            for line in file:
                
                # Removing whitespaces/newlines
                line = line.strip()

                # Finding start index of word
                start = 0
                while line[start] != ":":
                    start += 1

                # Finding word we are mapping
                word = line[:start].strip()
                if word[0] == "<" and word[-1] == ">":
                    word = word[1:-1]

                self.ontologies[word] = line[start + 2:].split(',')
    
        # print(self.ontologies)