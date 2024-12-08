const fs = require("fs");


const input = fs.readFileSync("input.txt").toString().trim().split(" ").map(Number);
//input => /dev/stdin

let ans = Math.floor((Number(input) + 4) / 5);

console.log(ans);