from flask import Blueprint, request, current_app, jsonify
import os

page_analysis = Blueprint("page_analysis", __name__)

# ------------
# Analysis Page
# ------------
#
#   Event Simulation


@page_analysis.route("/event-simulation")
def static_analysis():
    current_app.config["static_analyser"].simulate(current_app.config["handler"].parse_tree)
    return jsonify({"message": "Simulation Successful"}), 200


@page_analysis.route("/event-read")
def event_sim_events():
    conditions = [
        [i.identifier, i.evaluate(), i.sentence]
        for i in current_app.config["static_analyser"].event_simulator.conditions.values()
    ]
    states = [
        [i.identifier, i.evaluate(), i.sentence]
        for i in current_app.config["static_analyser"].event_simulator.state_def.values()
    ]
    return (
        jsonify(
            {
                "conditions": conditions,
                "states": states,
                "message": "Successful Analysis",
            }
        ),
        200,
    )

@page_analysis.route("/event-toggle", methods=["POST"])
def event_sim_toggle():
    data = request.get_json()
    identifier = data.get("identifier")
    event_sim = current_app.config["static_analyser"].event_simulator
    if identifier in event_sim.conditions:
        event_sim.toggle_condition(identifier)
        return jsonify({"message": "Successful toggle"}), 200
    else:
        return jsonify({"error": "Unsuccessful toggle"}), 404