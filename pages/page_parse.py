from flask import Blueprint, request, current_app, jsonify
import os
from pathlib import Path

page_parse = Blueprint("page_parse", __name__)

# ------------
# Home Page
# ------------
#
#   Mainly for parsing and dynamic analysis

# Define a route for parsing text
@page_parse.route("/parse", methods=["POST"])
def parse_text():
    # Get the text from the request
    text = request.json.get("text")

    # In order to incorporate another file, you would need to enable INCLUDES
    # To do this, it would either have to be in the grammar, or extracted at this stage
    # And then, the included file would have to be accessed and appended / prepended onto the text
    # At the point where it appears

    # Basic parsing - you can replace this with custom parsing logic
    parsed_text = current_app.config["handler"].bnfStructure(text)
    return jsonify({"parsed_text": parsed_text})


@page_parse.route("/display-id", methods=["POST"])
def parse_display_id():
    # Get the text from the request
    current_app.config["handler"].bnfIDStructure()
    parsed_text = current_app.config["handler"].bnfStructure()
    return jsonify({"parsed_text": parsed_text})

@page_parse.route("/display-def", methods=["POST"])
def parse_display_definitions():
    # Get the text from the request
    current_app.config["handler"].bnfDefinitionStructure()
    parsed_text = current_app.config["handler"].bnfStructure()
    return jsonify({"parsed_text": parsed_text})



def check_if_current_grammar(directory, filename, grammar_name):
    if directory == "contracts":
        curr_meta = current_app.config["metadata"].read_meta(directory + f"/meta/{filename[:-4]}.ini")
        if "Grammar_Name" in curr_meta:
            return grammar_name == curr_meta["Grammar_Name"]
        else:
            return False
    else:
        return True

def list_file_recursive(files, path='.', ending=""):
    for f in os.listdir(path):
        if os.path.isdir(os.path.join(path, f)):
            list_file_recursive(files, os.path.join(path, f), ending)
        elif f.endswith(ending) and check_if_current_grammar(path, os.path.join(*path.split("/")[1:], f), current_app.config["handler"].grammar_name):
            files.append(os.path.join(path, f))

@page_parse.route("/files", methods=["POST"])
def list_files():
    # List all text files in the directory
    data = request.get_json()
    directory = data.get("path")
    ending = data.get("ends")
    contains = data.get("contains")
    files = []

    list_file_recursive(files, directory, ending)

    return jsonify(sorted(files))


@page_parse.route("/load-file", methods=["POST"])
def load_file():
    data = request.get_json()
    filename = data.get("path")
    if os.path.isfile(filename):
        with open(filename, "r") as file:
            content = file.read()
        return jsonify({"content": content})
    return jsonify({"error": "File not found"}), 404


@page_parse.route("/save-file", methods=["POST"])
def save_file():
    data = request.get_json()
    filename = data.get("filename")
    content = data.get("content")
    if not filename or not content:
        return jsonify({"error": "Invalid input"}), 400

    with open(filename, "w") as file:
        file.write(content)

    directory = filename.split("/")[0]

    if directory == "contracts":
        current_app.config["metadata"].contract_meta(directory, filename, content)

    return jsonify({"message": "File saved successfully"}), 200


@page_parse.route("/delete-file", methods=["POST"])
def delete_file():
    data = request.get_json()
    fn = data.get("filename")

    if not fn:
        return jsonify({"error": "Invalid input"}), 400

    split_up = fn.split("/")

    directory = split_up[0]
    
    if len(split_up) > 2:
        filename = os.path.join(*split_up[1:])
    else:
        filename = split_up[-1]

    if os.path.isfile(fn):
        os.remove(fn)
        current_app.config["metadata"].delete_meta(directory, filename)
    else:
        return jsonify({"error": "Invalid input"}), 400

    return jsonify({"message": "File deleted successfully"}), 200


@page_parse.route("/create-file", methods=["POST"])
def create_file():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    if not filename:
        return jsonify({"error": "Invalid input"}), 400

    filepath = os.path.join(directory, filename) + ".txt"

    os.makedirs(os.path.dirname(filepath), exist_ok=True)

    if os.path.isfile(filepath):
        return jsonify({"error": "File already exists"}), 400
    with open(filepath, "w") as file:
        file.write(" ")
        current_app.config["metadata"].contract_meta(directory, filename + ".txt", " ")

    return jsonify({"message": "File created successfully"}), 200


@page_parse.route("/dynamic-analysis", methods=["POST"])
def dynamic_analysis():
    percentage = current_app.config["interactive_analyser"].error_analyser(current_app.config["handler"].parse_tree)
    timeConflicts = current_app.config["interactive_analyser"].time_analyser(current_app.config["handler"].parse_tree, current_app.config["handler"].internal_id)

    return (
        jsonify(
            {
                "message": "Contract Analysed Successfully",
                "percentage": percentage,
                "problematic_ids": timeConflicts,
            }
        ),
        200,
    )
