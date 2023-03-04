const readline = require('readline');


function solve(arr) {
    let ordered = "Unordered";
    if(arr[0] <= arr[1] && arr[1] <= arr[2]) ordered = "Ordered";
    if(arr[0] >= arr[1] && arr[1] >= arr[2]) ordered = "Ordered";
    console.log(ordered); 
}

const r1 = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

r1.on('line', function(line) {
    input.push(line);
}).on("close", function() {
    let N = Number(input[0]);
    console.log("Gnomes:")
    for(let i = 1; i <= N; ++i) {
        arr = input[i].split(' ').map(Number);
        solve(arr);
    }
    process.exit();
});