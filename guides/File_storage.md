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
