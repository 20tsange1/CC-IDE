# This file was used for a second attempt at some sort of reconciliation method, with classes to map nodes and children.


from parserobjects import BNFParser, Component

if __name__=="__main__":
    bnfp = BNFParser("text-files/colabnf.txt")
    bnfp.main()

    nodes = bnfp.nodes

    print(nodes)

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
                # key2 = (child, childprev, "ERROR")

                if key not in mapper:
                    mapper[key] = set()
                # if key2 not in mapper:
                #     mapper[key2] = set()
                
                mapper[key].add(childnext)
                # mapper[key2].add(childnext)

    with open("text-files/nodemappings.txt", "w") as file:
        for i in mapper.items():
            arr = list(i[0])
            arr.extend(list(i[1]))
            for item in arr:
                file.write(item + ",")
            file.write("\n")