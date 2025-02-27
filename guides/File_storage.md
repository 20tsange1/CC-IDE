# Storage

Currently, the format of majority of the files in use are txt files. This is because text files are versatile and allow for us to dictate our own formats and sizes using plaintext without unecessary data structures. 

example: 
    NODENAME: #COLOUR

This type of format makes it easy for us to change it depending on what information we need to store.

<sub>However, this may not be the best way moving forward, particularly if we will need to include version control and the ability to save and swap between grammars for these different things. One thing I am particularly keen on is looking at how we can implement some form of caching, such that in the case we are using a grammar that we have already parsed or used previously, we should not have to generate everything from scratch. Instead we should be able to pull from our cache. Now how about the size of the cache and how many versions we store?</sub>

<sub>When you look at github, you can have a massive range of versions with each retrievable. Realistically, this should be possible when writing grammars, otherwise how do you keep accountability and control over the versions?</sub>


## Grammar Specific
Each grammar has it's own syntax highlighting, formats, terminals and non-terminals. As a result, each of these configurations must also be saved separately, allowing us to differentiate between the configurations for each grammar and apply it accordingly. This is achieved through separate files with the grammar name as the file name, using metadata to correctly match the configuration to the grammar when required. Helps achieve consistency with the grammar. This is a crude form of caching, used to store the configurations of previously used grammars.

### Structure and configuration

| Text File Name  | Format | Description |
| ----------- | ----------- | ----------- |
| nodecolours.txt  | SYMBOL:#COLOUR |    Stores the colours for syntax highlighting.    |
| nodeformats.txt   | SYMBOL\~\~BEFORE~\~AFTER\~\~INLINE\~\~  | Stores additional formatting options, written in CSS. |
| nodenames.txt   | SYMBOL:SYMBOLMAP | Stores the symbols (node types) and their corresponding mappings (semantic mappings). |
| nodemappings.txt   | SYMBOL,PREVIOUS,PARENT,NEXT,+ | Stores the autosuggestion tuples. |

___

## Parsing Specific
In order to generate tree-sitter grammars correctly, the js file outputted and used for generation must follow the standard tree-sitter grammar syntax. As such head.txt and tail.txt provide the start and ending of this file, ensuring that the file outputted is consistent with the standards.

## Contracts
Each contract is stored within a text file. Since parsing is deterministic, as long as the same text is presented (ignoring whitespaces), it is the case that the output will always be the same. A consideration is scalability of storing these contracts, and categorisation / compartmentalisation, as it increases into a large number of text files quite quickly.