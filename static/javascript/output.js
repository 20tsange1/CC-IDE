// Trigger full process on page load
document.addEventListener('DOMContentLoaded', () => {
    // loadContent(); // Load contract into document
    loadFileList();
});

// ------------
// File Management
// ------------

// Elements for file operations
const filesList = document.getElementById('files');
const filenameSelect = document.getElementById('filenameSelect');
const formatTemplate = document.getElementById('pdf-container')
const pathname = 'templates/output-templates';
const foldername = 'output-templates'

// Load the list of files from the server
function loadFileList() {
    fetch('/files', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ path: pathname, ends: '.html', contains: '' })
    })
        .then(response => response.json())
        .then(files => {
            // Populate the dropdown and file list
            filenameSelect.innerHTML = '<option value="">Select a file...</option>';
            filesList.replaceChildren();
            files.forEach(file => {
                const option = document.createElement('option');
                option.value = file;
                option.textContent = file;
                filenameSelect.appendChild(option);

                const li = document.createElement('li');
                li.textContent = file;
                filesList.appendChild(li);
            });
        })
        .catch(error => console.error('Error loading files:', error));
}

// Load file content when a file is selected
filenameSelect.addEventListener('change', () => {
    const filename = filenameSelect.value;

    if (filename) {
        fetch(`/load-template/${filename}`, {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify({ path: foldername })
        })
            .then(response => response.json())
            .then(data => {
                if (data.content) {
                    formatTemplate.innerHTML = data.template;
                    const container = document.getElementById("content-container");
                    container.innerHTML = data.content;
                } else {
                    alert('Error loading file content');
                }
            })
            .catch(error => console.error('Error loading file content:', error));
    } else {
        formatTemplate.innerHTML = ''; // Clear editor if no file is selected
    }
});


// ------------
// Contract Injection
// ------------

// function loadContent() {
//     fetch(`/parse`)
//         .then(response => response.json())  // Get content as JSON
//         .then(data => {
//             // Update the content dynamically
//             var element = document.getElementById('content-container')
//             element.innerHTML = data.content;
            
//         });
// }