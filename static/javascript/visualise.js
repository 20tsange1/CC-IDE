
// ------------
// Visualisation Management
// ------------

const optionsBox = document.getElementById('options-container');
const optionsContainer = document.getElementById('visualisationOptions');
const optionsSaveButton = document.getElementById('saveOptionsBtn');
const optionsToggleButton = document.getElementById('toggleOptionsBtn');

function loadContent(type, clickedLink) {
    fetch(`/${type}_draw`)
        .then(response => response.json())  // Get content as JSON
        .then(data => {
            // Update the content dynamically
            var element = document.getElementById('content-container')
            element.innerHTML = data.content;

            optionsContainer.innerHTML = ''

            updateActiveLink(clickedLink);
        });
}

function updateActiveLink(clickedElement) {
    // Get all the links
    const links = document.querySelectorAll('.subheader a');

    // Remove active class from all links
    links.forEach(link => {
        link.classList.remove('active');
    });

    // Add active class to the clicked link
    clickedElement.classList.add('active');
}





// ------------
// Contract View Node Choices
// ------------

// const toggleColorsBtn = document.getElementById('toggleColorsBtn');
// const saveColorsBtn = document.getElementById('saveColorsBtn');
let keysArray = [];
let selectedKeys = [];

function getNodeTypes() {
    fetch('/contract_get_nodes')
        .then(response => response.json())
        .then(data => {
            keysArray = data; // Dynamically assign the keysArray
            createOptions();
        })
        .catch(error => console.error('Error fetching node types:', error));
}


function createOptions() {
    optionsContainer.innerHTML = ''; // Clear existing options
    keysArray.forEach(([key, mapping]) => {
        const entryDiv = document.createElement('div');
        entryDiv.classList.add('node-entry');

        const keyLabel = document.createElement('span'); // Key label
        keyLabel.textContent = key;
        keyLabel.classList.add('key-label');

        const checkButton = document.createElement('button');
        checkButton.textContent = 'X';
        checkButton.name = `${key}Option`;
        checkButton.value = mapping;
        checkButton.classList.add('button');

        if (selectedKeys.includes(key)) {
            checkButton.classList.add('selected');
        }

        checkButton.addEventListener('click', () => {
            toggleSelection(mapping, checkButton);
        });

        entryDiv.appendChild(keyLabel);
        entryDiv.appendChild(checkButton);
        optionsContainer.appendChild(entryDiv);
    });
}

function toggleOptionsBoxOpen(bool) {
    optionsBox.style.display = bool ? 'block' : 'none';
}

function toggleSelection(key, button) {
    const index = selectedKeys.indexOf(key);
    if (index === -1) {
        // Add to list if not already selected
        selectedKeys.push(key);
        button.classList.add('selected');
    } else {
        // Remove from list if already selected
        selectedKeys.splice(index, 1);
        button.classList.remove('selected');
    }
    alert(selectedKeys);
}

optionsSaveButton.addEventListener('click', () => {
    fetch('/contract_retrieve_nodes', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ nodes: selectedKeys })
    })
        .then(response => response.text())
        .then(data => {
            console.log('Server response:', data);
            alert('Nodes saved successfully!');
            fetch(`/contract_draw`)
                .then(response => response.json())  // Get content as JSON
                .then(data => {
                    // Update the content dynamically
                    var element = document.getElementById('content-container')
                    element.innerHTML = data.content;
                });
        })
        .catch(error => console.error('Error saving formats:', error));
});


optionsToggleButton.addEventListener('click', () => {
    const isHidden = optionsContainer.style.display === 'none';
    optionsContainer.style.display = isHidden ? 'block' : 'none';
    optionsSaveButton.style.display = isHidden ? 'block' : 'none';
});