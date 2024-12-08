const fs = require("fs");

const input = fs.readFileSync("input.txt").toString().trim().split("\n");
//input => /dev/stdin

for(let line of input) {
    console.log(line)
}