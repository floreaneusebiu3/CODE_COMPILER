var exec = require('child_process').exec;

exec('make', function (error, stdout, stderr) {
    if (error) {
        console.error('Error running make:', error);
        return;
    }
    console.log('Make completed successfully.');

    exec('./a.out < for.txt', function (error, stdout, stderr) {
        if (error) {
            console.error('Error running a.out:', error);
            return;
        }
        console.log('Program execution completed.');
        console.log('Output:', stdout);
    });
});

