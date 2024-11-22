# This file was used for a third attempt at some sort of reconciliation method, with classes to map nodes and children.
# Now we check two bnfs against each other to see if one is contained within another.


from parserobjects import BNFParser, Component

def parseandmap(name):
    bnfp = BNFParser(name)
    bnfp.main()

    nodes = bnfp.nodes

    # print(nodes)

    # Make a mapping system based on Current, Prev, Parent
    mapper = {}

    for node in nodes:
        for i in range(len(node.children)):
            for j in range(len(node.children[i])-1):
                child = node.children[i][j]

                childprev = ""
                childnext = ""

                if j > 0:
                    childprev = node.children[i][j-1]
                if j < len(node.children[i]) - 1:
                    childnext = node.children[i][j+1]

                key = (child, childprev, node.name)

                if key not in mapper:
                    mapper[key] = set()
                
                mapper[key].add(childnext)
    
    return mapper

def compare(map1, map2):
    # Define what subset actually means
    # Can we create a proof? Be very clear about definitions

    # And then remember case where you may switch things around, how can we account for that.

    for key in map1:
        if key not in map2:
            return False
        elif len(map1[key].intersection(map2[key])) != len(map1[key]):
            return False
    return True


if __name__=="__main__":

    # 3 Cases

    # Grammar 1 == Grammar 2
    map1 = parseandmap("text-files/colabnf.txt")
    map2 = parseandmap("text-files/colabnf.txt")
    print(compare(map1, map2))

    # Grammar 1 > Grammar 2
    # And hence we do not have all components of grammar 1 in grammar 2
    map1 = parseandmap("text-files/colabnf.txt")
    map2 = parseandmap("text-files/colabnf_copy.txt")
    print(compare(map1, map2))

    # Grammar 1 < Grammar 2
    # And hence grammar 1 is contained within grammar 2
    map1 = parseandmap("text-files/colabnf_copy.txt")
    map2 = parseandmap("text-files/colabnf.txt")
    print(compare(map1, map2))