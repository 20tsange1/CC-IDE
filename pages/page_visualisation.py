from flask import Blueprint, jsonify, current_app, request
from markupsafe import Markup

page_visualisation = Blueprint("page_visualisation", __name__)

# ------------
# Visualisation Page
# ------------

@page_visualisation.route("/tree_draw")
def tree_draw():
    # Generate SVG for the tree
    svg_content = current_app.config["visualiser"].drawTree(current_app.config["handler"].parse_tree)
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)


@page_visualisation.route("/file_draw")
def file_draw():
    # Generate SVG for the file structure
    svg_content = current_app.config["visualiser"].drawFile(current_app.config["handler"].parse_tree)
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)

@page_visualisation.route("/contract_draw")
def contract_draw():
    # Generate SVG for the contract structure
    svg_content = current_app.config["visualiser"].drawContract(current_app.config["handler"].parse_tree)
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)

@page_visualisation.route("/contract_get_nodes")
def contract_get_nodes():
    node_names = [[name, mapping] for name, mapping in current_app.config["handler"].node_types.items()]
    return jsonify(node_names)

@page_visualisation.route("/contract_retrieve_nodes", methods=["POST"])
def contract_retrieve_nodes():
    data = request.get_json()
    nodes = data.get("nodes", [])
    if len(nodes) > 0:
        current_app.config["visualiser"].drawContractNodes(nodes)
        return jsonify({"message": "Nodes Chosen Successfully"}), 200
    else:
        return jsonify({"error": "No nodes chosen"}), 400

@page_visualisation.route("/boolean_draw")
def boolean_draw():
    # Generate SVG for the contract structure
    svg_content = current_app.config["visualiser"].drawBoolean(current_app.config["handler"].parse_tree, current_app.config["handler"].internal_id)
    svg_content = Markup(svg_content)
    return jsonify(content=svg_content)