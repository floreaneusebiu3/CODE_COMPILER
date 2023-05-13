 document.addEventListener('DOMContentLoaded', function() {
    const websocket = new WebSocket("ws://localhost:8080")
    const runButton = document.getElementById("run");
    const inputArea = document.getElementById("input");
    const outputArea = document.getElementById("output");
    
    $(document).ready(function() {
    outputArea.readOnly = true;
    inputArea.setAttribute('placeholder', 'Enter code here:');
    outputArea.setAttribute('placeholder', "OUTPUT:");
    runButton.addEventListener('click', function(event) {
          websocket.send(inputArea.value);
        });
      });
    
    websocket.addEventListener('open', () => {
          console.log('we are connected')
    })

    websocket.addEventListener('message', ({data}) => {
          outputArea.value = data;         
     })
    });

