# Final Year Project

A Computable Contract IDE, designed for drafting contracts.

In order to begin using the IDE and install tree-sitter, follow the steps below:

1. Open Terminal
2. Navigate to folder
3. Run `pip3 install -r requirements.txt`
4. Run `python3 app.py`
5. Open up `http://localhost:8080/` in a web browser.

In the case that tree-sitter needs to be installed and configured, you will need to initialise tree-sitter.
This can be done via the steps below:

1. Run `npm install -g tree-sitter-cli`
2. `cd cola`
3. `tree-sitter init-config`
4. `tree-sitter init`

Current flow of operations:

1. BNF of Grammar written in a text file.
2. BNF is then parsed and evaluated into a Tree-Sitter grammar json file.
3. Tree-Sitter is then used to convert this into a parser
4. We build the language on Python and are now able to parse using this language + traverse our parse trees.
5. The front-end application is hosted on Flask, establishing a web-server.

Current Implemented Features:

- Autosuggestion
- Syntax Highlighting
- BNF Parsing
- File saving + editing
- Incremental Parsing


A key benefit currently provided by this application is our ability to use grammars as we develop them (although there are considerations still to be solved regarding associativity, precedence and so forth), making it versatile towards all current legal grammars with a valid BNF.



### Storage

Currently, the format of majority of the files in use are txt files. This is because text files are versatile and allow for us to dictate our own formats and sizes without unecessary data structures. 

example: 
    NODENAME: #COLOUR

This type of format makes it easy for us to change it depending on what information we need to store.
However, this may not be the best way moving forward, particularly if we will need to include version control and the ability to save and swap between grammars for these different things. One thing I am particularly keen on is looking at how we can implement some form of caching, such that in the case we are using a grammar that we have already parsed or used previously, we should not have to generate everything from scratch. Instead we should be able to pull from our cache. Now how about the size of the cache and how many versions we store? 

When you look at github, you can have a massive range of versions with each retrievable. Realistically, this should be possible when writing grammars, otherwise how do you keep accountability and control over the versions?





Additionally, there will need to be a guide produced on BNF creation and standards. 

Things to Consider:
- Colours do not save yet, however, once set, unless the grammar is changed, they will be consistent as long as the program is running.