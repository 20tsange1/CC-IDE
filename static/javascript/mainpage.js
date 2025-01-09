
// ------------
// FOR PARSING
// ------------

// Elements for parsing functionality
const inputText = document.getElementById('inputText'); // Input text area
const parsedText = document.getElementById('parsedText'); // Parsed text display

// A function for encapsulating all necessary parsing processes
function full_process() {
    parseText();
    dnyamicAnalysis();
}

// Function to parse text and update the parsed display
function parseText() {
    fetch('/parse', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ text: inputText.value })
    })
        .then(response => response.json())
        .then(data => {
            parsedText.innerHTML = data.parsed_text; // Update parsed text
        })
        .catch(error => console.error('Error parsing text:', error));
}

// Trigger parsing and analysis on input change
inputText.addEventListener('input', full_process);

// Trigger full process on page load
document.addEventListener('DOMContentLoaded', () => {
    full_process();
    loadFileList(); // Load file list when the page is ready
});

// ------------
// FOR THE FILES
// ------------

// Elements for file management
const filesList = document.getElementById('files'); // List of files
const filenameSelect = document.getElementById('filenameSelect'); // Dropdown for file selection
const fileContent = document.getElementById('inputText'); // Editor for file content
const pathname = 'contracts'; // Directory for files
const title = document.getElementById('titleHolder'); // Editor title display

// Load the list of files from the server
function loadFileList() {
    fetch('/files', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ path: pathname, ends: '', contains: '' })
    })
        .then(response => response.json())
        .then(files => {
            filenameSelect.innerHTML = '<option value="">Select a file...</option>';
            filesList.replaceChildren(); // Clear the file list
            files.forEach(file => {
                const option = document.createElement('option');
                option.value = file;
                option.textContent = file;
                filenameSelect.appendChild(option);
            });
        })
        .catch(error => console.error('Error loading file list:', error));
}

// Load file content when a file is selected
filenameSelect.addEventListener('change', () => {
    const filename = filenameSelect.value;
    if (filename) {
        fetch(`/load-file/${filename}`, {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify({ path: pathname })
        })
            .then(response => response.json())
            .then(data => {
                if (data.content) {
                    fileContent.value = data.content; // Load file content into editor
                    title.textContent = `Edit Text - ${filename}`; // Update title
                    full_process(); // Trigger parsing and analysis
                } else {
                    alert('Error loading file content');
                }
            })
            .catch(error => console.error('Error loading file content:', error));
    } else {
        fileContent.value = ''; // Clear editor if no file is selected
        title.textContent = 'Edit Text';
        full_process(); // Needs to be repeated in both, otherwise it just doesn't work. i.e can't be outside if statement.
    }
});

// Save file content to the server
saveBtn.addEventListener('click', () => {
    const filename = filenameSelect.value;
    const content = fileContent.value;

    if (!filename) {
        alert('Please select a file to save');
        return;
    }

    fetch('/save-file', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ filename, content, path: pathname })
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error saving file');
        })
        .catch(error => console.error('Error saving file:', error));
});

// Delete file from the server
deleteBtn.addEventListener('click', () => {
    const filename = filenameSelect.value;

    if (!filename) {
        alert('Please select a file to delete');
        return;
    }

    fetch('/delete-file', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ filename, path: pathname })
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error deleting file');
        })
        .catch(error => console.error('Error deleting file:', error));
    loadFileList(); // Refresh the file list
});

// Create a new file on the server
createBtn.addEventListener('click', () => {
    const filename = document.getElementById('createName').value;

    if (!filename) {
        alert('Please input a filename');
        return;
    }

    fetch('/create-file', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ filename, path: pathname })
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error creating file');
        })
        .catch(error => console.error('Error creating file:', error));
    loadFileList(); // Refresh the file list
});

// ------------
// FOR ANALYSIS
// ------------

// Perform dynamic analysis and update the progress bar
function dnyamicAnalysis() {
    const progressBar = document.querySelector(".progress-bar");
    fetch('/dynamic-analysis', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({})
    })
        .then(response => response.json())
        .then(data => {
            if (data.message) {
                const result = data.percentage;
                progressBar.style.width = `${result}%`; // Update progress bar
                document.getElementById('progress-val').textContent = `${result}%`; // Update progress text
            } else {
                alert('Error running analysis');
            }
        })
        .catch(error => console.error('Error running analysis:', error));
}

// ------------
// FOR POPUPS
// ------------

// Show or hide a popup
function popupFunction(elementID) {
    const popup = document.getElementById(elementID);
    popup.classList.toggle("show");
    event.stopPropagation(); // Prevent event propagation
}

// Close all popups when clicking outside
document.addEventListener('click', () => {
    document.querySelectorAll('.popuptext').forEach(box => {
        box.classList.remove("show"); // Hide visible popups
    });
});

// ------------
// FOR NODE SUBSET
// ------------

// Show or hide a popup
function nodeFold(elementID) {
    parseNodeText(elementID);
}

// Function to parse text and update the parsed display
function parseNodeText(nodeID) {
    fetch('/parse-node', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ nodeID: nodeID })
    })
        .then(response => response.json())
        .then(data => {
            parsedText.innerHTML = data.parsed_text; // Update parsed text
        })
        .catch(error => console.error('Error parsing text:', error));
}