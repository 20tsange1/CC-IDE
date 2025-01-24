## Folders:

- **bnfs**
    | For storing the Backus Naur Form (BNF) of the legal langauge grammars.
    
- **build**
    | For building the grammar currently in use - Necessary for tree-sitter.

- **cola**
    | For the tree-sitter files.

- **contracts**
    | For storing the contract text files.

- **development-playground**
    | For testing purposes.

- **guides**
    | For storing guidance on how to use the IDE. (WIP)

- **static**
    | Static files for the webpages in the IDE.
    - **css**
        | Storing css files, used for formatting.
    - **javascript**
        | Storing javascript files, used for webpage interactions.
    - **output-templates**
        | Storing contract output templates.
    - **parsing-formatting**
        | Storing parsing css files.

- **stuff-for-docker-WIP**
    | Storing docker files (WIP)

- **templates**
    | Storing HTML files for the IDE pages.
    - **output-templates**
        | Storing contract output templates.

- **text-files**
    | Auxiliary text-files

- **tool-analysis**
    | For storing analysis classes.
    
- **tool-auxiliary**
    | For storing files with auxiliary classes.
    - **antlr**
        | For storing antlr related data and 
        
- **tool-visualisations**
    | For storing visualisation classes.






Reminders to Self:
For parsing Antlr, remember to save (Keep somewhere else) the Visitor file
java -jar antlr-4.13.1-complete.jar grammarParser.g4 -visitor -no-listener -Dlanguage=Python3


In order to install tree-sitter and begin using the IDE with Docker, follow the steps below:

1. Open Terminal
2. Run `npm install tree-sitter-cli`
3. Make sure Docker is installed (https://www.docker.com/)
4. Run `docker build -t gp-app .`
5. Run `docker run -p 8080:8080 gp-app`
6. Open up `http://localhost:8080/` in a web browser.

