const readline = require('readline');


function solve(A, B, C) {
    let arr = [A, B, C];
    arr.sort(function(a, b) {
        if(a > b) return 1;
        else if(a < b) return -1;
        else if(a === b) return 0;
        else return 1;
    });

    for(let item of arr) {
        process.stdout.write(item.toString() + " ");
    }
}

const r1 = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

r1.on('line', function(line) {
    input.push(line);
}).on("close", function() {
    const [A, B, C] = input[0].split(' ').map(Number);
    solve(A, B, C);
    process.exit();
});