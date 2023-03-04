const readline = require('readline');


function solve(arr) {
    ans = 0;
    for(let i = 0 ; i < arr.length; ++i) {
        for(let j = i +1; j < arr.length; ++j) {
            ans ^= arr[i] || arr[j];
        }
    }

    for(let i = 0; i < arr.length; ++i) {
        for(let j = i + 1; j < arr.length; ++j) {
            for(let k = j + 1; k < arr.length; ++k) {
                ans ^= arr[i] || arr[j] || arr[k];
            }
        }
    }

    console.log(ans);
}

const r1 = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

r1.on('line', function(line) {
    input.push(line);
}).on("close", function() {
    arr = input[0].split(' ').map(Number);
    solve(arr);
    process.exit();
});