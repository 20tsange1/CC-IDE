from flask import Blueprint, request, current_app, jsonify
import os

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
    # Basic parsing - you can replace this with custom parsing logic
    parsed_text = current_app.config["handler"].bnfStructure(text)  # Example: Convert text to uppercase
    return jsonify({"parsed_text": parsed_text})


@page_parse.route("/parse-node", methods=["POST"])
def parse_node_text():
    # Get the text from the request
    parsed_text = current_app.config["handler"].bnfIDStructure()  # Example: Convert text to uppercase
    return jsonify({"parsed_text": parsed_text})


def check_if_current_grammar(directory, filename, grammar_name):
    # print(directory + f"/meta/{filename[::-4]}.ini")
    if directory == "contracts":
        curr_meta = current_app.config["metadata"].read_meta(directory + f"/meta/{filename[:-4]}.ini")
        # print(curr_meta, grammar_name)
        if "Grammar_Name" in curr_meta:
            return grammar_name == curr_meta["Grammar_Name"]
        else:
            return False
    else:
        return True

@page_parse.route("/files", methods=["POST"])
def list_files():
    # List all text files in the directory
    data = request.get_json()
    directory = data.get("path")
    ending = data.get("ends")
    contains = data.get("contains")
    files = []

    for f in os.listdir(directory):
        if f.endswith(ending) and contains in f and check_if_current_grammar(directory, f, current_app.config["handler"].grammar_name):
            files.append(f)

    return jsonify(files)


@page_parse.route("/load-file/<filename>", methods=["POST"])
def load_file(filename):
    data = request.get_json()
    directory = data.get("path")
    filepath = os.path.join(directory, filename)
    if os.path.isfile(filepath):
        with open(filepath, "r") as file:
            content = file.read()
        return jsonify({"content": content})
    return jsonify({"error": "File not found"}), 404


@page_parse.route("/save-file", methods=["POST"])
def save_file():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    content = data.get("content")
    if not filename or not content:
        return jsonify({"error": "Invalid input"}), 400

    filepath = os.path.join(directory, filename)
    with open(filepath, "w") as file:
        file.write(content)

    if directory == "contracts":
        current_app.config["metadata"].contract_meta(directory, filename, content)

    return jsonify({"message": "File saved successfully"}), 200


@page_parse.route("/delete-file", methods=["POST"])
def delete_file():
    data = request.get_json()
    filename = data.get("filename")
    directory = data.get("path")
    if not filename:
        return jsonify({"error": "Invalid input"}), 400

    filepath = os.path.join(directory, filename)
    if os.path.isfile(filepath):
        os.remove(filepath)
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

    if os.path.isfile(filepath):
        return jsonify({"error": "File already exists"}), 400
    with open(filepath, "w") as file:
        file.write(" ")
        current_app.config["metadata"].contract_meta(directory, filename + ".txt", " ")

    return jsonify({"message": "File created successfully"}), 200


@page_parse.route("/dynamic-analysis", methods=["POST"])
def dynamic_analysis():
    percentage = current_app.config["dynamic_analyser"].error_analyser(current_app.config["handler"].parse_tree)
    timeConflicts = current_app.config["dynamic_analyser"].time_analyser(current_app.config["handler"].parse_tree, current_app.config["handler"].internal_id)

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
