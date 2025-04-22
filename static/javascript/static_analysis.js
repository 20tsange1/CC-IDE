// ------------
// FOR SETUP
// ------------

function loadContent(type, element) {
    const container = document.getElementById('content-container');
    container.innerHTML = ''; // Clear old content

    document.querySelectorAll('.subheader a').forEach(a => a.classList.remove('active'));
    if (element) element.classList.add('active');

    if (type === 'condition') {
        container.innerHTML = `
            <h1>Condition Simulation (WIP)</h1>
            <div class="clause-container">
                <div class="column">
                    <h2 class="columntitle">Conditions</h2>
                    <ul class="eval_block" id="conditions"></ul>
                </div>
                <div class="column">
                    <h2 class="columntitle">States</h2>
                    <ul class="eval_block" id="states"></ul>
                </div>
            </div>
        `;
        staticAnalysisCondition();
    } else if (type === 'event') {
        container.innerHTML = `
            <h1>Event Simulation (WIP)</h1>
            <div class="clause-downward-container">
                <div class="column">
                    <h2 class="columntitle">States</h2>
                    <ul class="eval_block" id="states"></ul>
                </div>
                <div class="column">
                    <h2 class="columntitle">Events</h2>
                    <ul class="eval_block" id="events"></ul>
                </div>
                <div class="column">
                    <h2 class="columntitle">Event Builder</h2>
                    <div class="eval_block" id="event-builder">
                        <select id="condition-select"></select>
                        <input type="text" placeholder="Enter the time here" id="condition-input">
                        <button id="condition-submit">Submit</button>
                    </div>
                </div>
            </div>
        `;
        staticAnalysisEvent();
    }
}

function createLiItem(identifier, flag, sentence) {

    const li = document.createElement('li');

    const divID = document.createElement('div');
    const divFlag = document.createElement('div');
    const divSentence = document.createElement('div');

    divID.textContent = identifier;
    divFlag.textContent = flag;
    divSentence.textContent = sentence;

    li.appendChild(divID);
    li.appendChild(divFlag);
    li.appendChild(divSentence);

    li.flag = flag;

    li.classList.add("flag");

    if (flag) {
        li.classList.add("flagTrue");
    }
    else {
        li.classList.add("flagFalse");
    }

    li.addEventListener('click', () => {staticFlip(identifier)});

    return li;

}

function createLiItemEvent(identifier, time, sentence) {

    const li = document.createElement('li');

    const divID = document.createElement('div');
    const divFlag = document.createElement('div');
    const divSentence = document.createElement('div');

    divID.textContent = identifier;
    divFlag.textContent = time;
    divSentence.textContent = sentence;

    li.appendChild(divID);
    li.appendChild(divFlag);
    li.appendChild(divSentence);

    li.classList.add("flag");
    li.classList.add("flagNeutral");

    li.addEventListener('click', () => {staticFlip(identifier)});

    return li;

}

function staticFlip(identifier) {
    fetch(`/condition-toggle`, {
        method: "POST",
        headers: {"Content-Type": "application/json"},
        body: JSON.stringify({ identifier })
    })
    .then(res => res.json())
    .then(data => {
        console.log(data.message || data.error);
        // Reload current view
        const activeTab = document.querySelector('.subheader a.active');
        if (activeTab?.textContent.includes('Condition')) {
            staticLoadCondition();
        } else {
            staticLoadEvent();
        }
    });
}

// ----------
// CONDITION SIMULATION
// ----------

function staticAnalysisCondition() {
    fetch('/condition-simulation')
    .then( response => response.json())
    .then(data => {
        staticLoadCondition();
        console.log(data.message);
    });
}

function staticLoadCondition() {
    const conditionsList = document.getElementById('conditions');
    const statesList = document.getElementById('states');

    fetch('/condition-read')
        .then(res => res.json())
        .then(data => {
            conditionsList.replaceChildren();
            statesList.replaceChildren();

            data.conditions.forEach(([identifier, flag, sentence]) => {
                const li = createLiItem(identifier, flag, sentence);
                conditionsList.appendChild(li);
            });

            data.states.forEach(([identifier, flag, sentence]) => {
                const li = createLiItem(identifier, flag, sentence);
                statesList.appendChild(li);
            });
        });
}

// ----------
// EVENT SIMULATION
// ----------

function staticAnalysisEvent() {
    fetch('/event-simulation')
    .then( response => response.json())
    .then(data => {
        staticLoadEvent();
        console.log(data.message);
    });
}

function staticLoadEvent() {
    const dropdownList = document.getElementById('condition-select');
    const timeInput = document.getElementById('condition-input');
    const submitButton = document.getElementById('condition-submit');

    const eventsList = document.getElementById('events');
    const statesList = document.getElementById('states');

    fetch('/event-read')
        .then(res => res.json())
        .then(data => {
            dropdownList.replaceChildren();
            eventsList.replaceChildren();
            statesList.replaceChildren();

            // Populate dropdown
            data.conditions.forEach(([identifier, sentence]) => {
                const option = document.createElement('option');
                option.value = identifier;
                option.textContent = sentence;
                dropdownList.appendChild(option);
            });

            data.events.forEach(([identifier, time, sentence]) => {
                const li = createLiItemEvent(identifier, time, sentence);
                eventsList.appendChild(li);
            });

            data.states.forEach(([identifier, flag, sentence]) => {
                const li = createLiItem(identifier, flag, sentence);
                statesList.appendChild(li);
            });
        });

    submitButton.addEventListener('click', () => {
        const selectedCondition = dropdownList.value;
        const timeVal = timeInput.value;

        fetch('/event-submit', {
            method: 'POST',
            headers: {'Content-Type': 'application/json'},
            body: JSON.stringify({
                identifier: selectedCondition,
                time: timeVal
            })
        })
        .then(res => res.json())
        .then(data => {
            console.log(data.message || data.error);
            staticLoadEvent(); // refresh UI
        });
    }, { once: true }); // use once:true to avoid duplicate listeners
}

// Optional auto-load
document.addEventListener('DOMContentLoaded', () => {
});
