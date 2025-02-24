from flask import Blueprint, request, current_app, jsonify, render_template
import os

page_output = Blueprint("page_output", __name__)

# ------------
# Display Page
# ------------

@page_output.route("/pdf-choice", methods=["POST"])
def pdf_choice():
    data = request.get_json()
    format_name = data.get("name")

@page_output.route("/load-template/<filename>", methods=["POST"])
def load_template(filename):
    data = request.get_json()
    directory = data.get("path")
    filepath = os.path.join(directory, filename)
    if os.path.isfile(f"templates/{filepath}"):
        page = render_template(filepath)
        content = current_app.config["handler"].contractOutput()
        return jsonify({"template": page, "content": content})
    return jsonify({"error": "File not found"}), 404