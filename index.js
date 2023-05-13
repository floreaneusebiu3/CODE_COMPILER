const Websocket = require('ws')

//create a new websocket server

const wss = new Websocket.Server({port:8080})       
wss.on('connection', (ws) => {
  const fs = require('fs')  
console.log('A new client is connected')
ws.on('message', (data) => {                           
    var content = data.toString() + "\n" + "." + "\n";
    try {
      const data = fs.writeFileSync('file.in', content)
      //file written successfully
    } catch (err) {
      console.error(err);
    }
var exec = require('child_process').exec;

exec('make', function (error, stdout, stderr) {
    if (error) {
        console.error('Error running make:', error);
        return;
    }
    console.log('Make completed successfully.');
    
    exec('./program.out < file.in', function (error, stdout, stderr) {
        if (error) {
            console.error('Error running a.out:', error);
            return;
        }
        console.log('Program execution completed.');
        ws.send(stdout.toString());
        });
    });
})   
})