import os
import datetime

class MetaData:
    """
    The objective of this class is to store, manipulate, and read metadata regarding anything saved within this IDE.

    The metadata provides greater accountability, integrity, and understanding of the information.
    """

    def __init__(self):
        pass

    # _ means private

    def _output_meta(self, location, data):
        """
        For outputting to a file.

        Data Format is a dictionary, with key and data values. In python, traversal is guaranteed insert order.

        We are storing it within .ini files (info).
        """
        meta = ""
        for key, info in data.items():
            meta += f"{key}: {info}\n"
        
        with open(location, "w") as file:
            file.write(meta)

        return True


    def read_meta(self, location):
        """
        For reading a previous metadata file.
        """
        info = {}
        if os.path.isfile(location):
            with open(location, "r") as file:
                lines = file.readlines()
                info = {name: element.strip() for name, element in [l.split(": ") for l in lines] if len(element.strip()) > 0}
        return info

        
    def contract_meta(self, directory, filename, content):
        """
        Contract Metadata

        Contains:
            Contract Name - Filename
            Contract Version - Number of updates to the contract
            Grammar Name - Grammar in use
            Grammar Version - Version
            Creation Date - Date contract was created, file was created
            Update Date - Date contract was updated, file was saved
            Hash - Hash of the text content within the contract, for integrity
        """
        time = datetime.datetime.now()

        save_name = f"{directory}/meta/{filename[:-4]}.ini"

        hashed = hash(content)

        # Reading previous metadata
        prev_meta = self.read_meta(save_name)
        version = int(prev_meta["Contract_Version"].strip()) + 1 if "Contract_Version" in prev_meta else 1
        creation_date = prev_meta["Creation_Date"].strip() if "Creation_Date" in prev_meta else time

        # Reading current grammar metadata
        curr_grammar = self.read_meta("bnfs/grammar.ini")
        grammar_version = int(curr_grammar["Grammar_Version"].strip()) if "Grammar_Version" in curr_grammar else ""
        grammar_name = curr_grammar["Grammar_Name"].strip() if "Grammar_Name" in curr_grammar else ""
        
        # Storing in a dictionary
        meta = {
            "Contract_Name": filename[:-4],
            "Contract_Version": version,
            "Grammar_Name": grammar_name,
            "Grammar_Version": grammar_version,
            "Creation_Date": creation_date,
            "Update_Date": time,
            "Hash": hashed
        }

        self._output_meta(save_name, meta)

        return True

        
    def bnf_meta(self, directory, filename):
        """
        BNF Metadata

        Contains:
            Grammar Name - The grammar in question
            Grammar Version - Version
            Creation Date - Date grammar was created, file was created
            Update Date - Date grammar was updated, file was saved
        """
        time = datetime.datetime.now()

        save_name = f"{directory}/meta/{filename[:-4]}.ini"

        prev_meta = self.read_meta(save_name)
        version = int(prev_meta["Grammar_Version"].strip()) + 1 if "Grammar_Version" in prev_meta else ""
        creation_date = prev_meta["Creation_Date"].strip() if "Creation_Date" in prev_meta else ""

        meta = {
            "Grammar_Name": filename[:-4],
            "Grammar_Version": version,
            "Creation_Date": creation_date,
            "Update_Date": time
        }

        self._output_meta(save_name, meta)

        return True
        

    def grammar_meta(self, directory, filename):
        """
        Grammar Metadata - Storing information about CURRENT grammar in use

        Contains:
            Grammar Name - The grammar in question
            Grammar Version - Version
            Apply Date - Date grammar was applied
        """
        time = datetime.datetime.now()
        
        # Information about the grammar
        grammar_meta_name = f"{directory}/meta/{filename[:-4]}.ini"
        
        save_name = f"{directory}/grammar.ini"

        prev_grammar_meta = self.read_meta(grammar_meta_name)
        version = int(prev_grammar_meta["Grammar_Version"].strip()) if "Grammar_Version" in prev_grammar_meta else ""
        
        meta = {
            "Grammar_Name": filename[:-4],
            "Grammar_Version": version,
            "Apply_Date": time
        }

        self._output_meta(save_name, meta)
        
        return True