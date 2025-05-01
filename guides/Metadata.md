# Metadata Plan

## Reasoning

Each piece of information that is saved requires metadata, allowing us to provide a structured and standardised way of understanding the information. It is data that describes data. In our case, this would be used for grammar tracking, date and time tracking, and more. 

This is important for accountability and integrity. It allows us to track when a piece of information has last been changed, along with whether what exists now is true to it's previous version.

---

## BNF Metadata

### Format

*Filename* - Same as the BNF name

*Structure* - Metadata_Name: Information

*To be updated* - Whenever a grammar is saved / applied.

*To be used* - When retrieving information regarding a grammar, when saving a contract

We will maintain two structures, one regarding the BNF itself, and another regarding the the BNF currently being used in the IDE.

### Information to be held - BNF

1. Grammar Name
2. Grammar Version (Previous + 1)
3. Creation Date
4. Update Date


### Information to be held - Grammar

1. Grammar Name
2. Grammar Version
3. Applied Date


---

## Contract Metadata

### Format

*Filename* - Same as the contract name

*Structure* - Metadata_Name: Information

*To be updated* - Whenever a contract is saved

*To be used* - To ensure integrity of the saved file and for accountability.

Need to store a hash of the file, make sure it hasn't been altered.

### Infomration to be held - Contract
1. Contract Name
2. Contract Version
3. Grammar Used
4. Grammar Version
5. Creation Date
6. Save Date
7. Hash of Contract