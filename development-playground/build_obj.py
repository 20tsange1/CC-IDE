# This file was used for an initial attempt at some sort of reconciliation method, with classes to map nodes and children.



from parserobjects import BNFParser, Component

if __name__=="__main__":
    bnfp = BNFParser("text-files/colabnf.txt")
    bnfp.main()

    nodes = bnfp.nodes

    mapper = {}

    # print(nodes)

    for node in nodes:
        mapper[node.name] = node

    for node in nodes:
        for i in range(len(node.children)):
            for j in range(len(node.children[i])):
                child = node.children[i][j]
                if child in mapper:
                    node.children[i][j] = mapper[child]

    for node in nodes:
        for i in range(len(node.children)):
            for j in range(len(node.children[i])):
                child = node.children[i][j]
                if type(child) == Component:

                    # Map according to parent type
                    if node.name not in child.prev:
                        child.prev[node.name] = set()
                    if node.name not in child.next:
                        child.next[node.name] = set()

                    if j > 0:
                        childprev = node.children[i][j-1]
                        child.prev[node.name].add(childprev)
                    if j < len(node.children[i]) - 1:
                        childnext = node.children[i][j+1]
                        child.next[node.name].add(childnext)

    # for name in mapper["nonnumerical_object"].children:
    #     print(name)

    # print(mapper["string"])
    
    checkStr = " "

    # print(mapper)

    while checkStr != "":
        checkStr = str(input())
        if checkStr in mapper:
            print(mapper[checkStr], mapper[checkStr].children, mapper[checkStr].prev, mapper[checkStr].next)


    # Then idea is that whenever you encounter an error, you can go backwards to the last sibling to suggest the new node.

    # Currently, we are using a (Current) and (Next)

    # However, we should be using a (Previous, Current, Parent) key to map it to the correct subsequent node type.
    # This way, we guarantee that the correct order is used and that the parsability remains valid.

    # print(mapper["string"].prev)
    # print(mapper["string"].next)

    # Think about how to use this in conjunction with tree-sitter parsing. 
    # Build a Trie -> Autocorrect
    # Cyclic Analysis?
    # Next step prediction

    # 3rd party analyser
    # provide some sort of BNF or Accepted Syntax

    # output to the screen