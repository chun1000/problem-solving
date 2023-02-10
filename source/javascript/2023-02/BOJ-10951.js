const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//a.intxt => /dev/stdin

for(let i = 0; i < input.length; ++i) {
    let [A, B] = input[i].split(' ').map(Number);
    console.log(A+B);
}