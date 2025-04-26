from flask import Blueprint, request, current_app, jsonify
import os

page_analysis = Blueprint("page_analysis", __name__)

# ------------
# Analysis Page
# ------------
#

#   Condition Simulation


@page_analysis.route("/condition-simulation")
def static_analysis_condition():
    current_app.config["static_analyser"].simulate_conditions(current_app.config["handler"].parse_tree)
    return jsonify({"message": "Simulation Successful"}), 200


@page_analysis.route("/condition-read")
def read_condition():
    conditions = [
        [i.identifier, i.evaluate(), i.sentence]
        for i in current_app.config["static_analyser"].condition_simulator.conditions.values()
    ]
    states = [
        [i.identifier, i.evaluate(), i.sentence]
        for i in current_app.config["static_analyser"].condition_simulator.state_def.values()
    ]
    print(conditions)
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

@page_analysis.route("/condition-toggle", methods=["POST"])
def toggle_condition():
    data = request.get_json()
    identifier = data.get("identifier")
    condition_sim = current_app.config["static_analyser"].condition_simulator
    if identifier in condition_sim.conditions:
        condition_sim.toggle_condition(identifier)
        return jsonify({"message": "Successful toggle"}), 200
    else:
        return jsonify({"error": "Unsuccessful toggle"}), 404


#   Event Simulation


@page_analysis.route("/event-simulation")
def static_analysis():
    current_app.config["static_analyser"].simulate_events(current_app.config["handler"].parse_tree)
    return jsonify({"message": "Simulation Successful"}), 200


@page_analysis.route("/event-read")
def event_sim_events():
    conditions = [
        [i.identifier, i.sentence]
        for i in current_app.config["static_analyser"].event_simulator.conditions.values()
    ]
    events = [i for i in current_app.config["static_analyser"].event_simulator.past_events]
    states = [
        [i.identifier, i.evaluate(), i.sentence]
        for i in current_app.config["static_analyser"].event_simulator.state_def.values()
    ]
    return (
        jsonify(
            {
                "conditions": conditions,
                "states": states,
                "events": events,
                "message": "Successful Analysis",
            }
        ),
        200,
    )

@page_analysis.route("/event-toggle", methods=["POST"])
def condition_sim_toggle():
    data = request.get_json()
    identifier = data.get("identifier")
    condition_sim = current_app.config["static_analyser"].event_simulator
    if identifier in condition_sim.conditions:
        condition_sim.toggle_condition(identifier)
        return jsonify({"message": "Successful toggle"}), 200
    else:
        return jsonify({"error": "Unsuccessful toggle"}), 404


@page_analysis.route("/event-submit", methods=["POST"])
def event_sim_add():
    # so what we have to do is, keep track of the event, do the time conversion, evaluate it within the event sim, and then display.
    # So what you would do is first, do the translation, if translation doesn't work you would boot it.
    # Then you want to evaluate it within the event sim, use the condition id, and then compare it to the time. (Make a function)
    # Then this would reflect in the boolean value of the condition.
    # Then you would keep track of the event — condition and the time. Then refresh.
    data = request.get_json()
    identifier = data.get("identifier")
    time = data.get("time")

    event_sim = current_app.config["static_analyser"].event_simulator

    try:
        event_sim.evaluate_condition(identifier, time)
    except ValueError as e:
        return jsonify({"error": "Invalid Time"}), 404

    return jsonify({"message": "Successful Event"}), 200