// ------------
// FOR ANALYSIS
// ------------

// Trigger full process on page load
document.addEventListener('DOMContentLoaded', () => {
    staticAnalysis(); // Load file list when the page is ready
});

// Perform static analysis and update the progress bar
function staticAnalysis() {
    fetch('/event-simulation', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({})
    })
        .then(response => response.json())
        .then(data => {
            alert(data.message || 'Error analysing');
        })
        .catch(error => console.error('Error analysing:', error));
}