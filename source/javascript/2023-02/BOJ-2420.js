const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split(" ").map(Number);
//input => /dev/stdin

const [A, B] = [input[0], input[1]];

console.log(Math.abs(A-B));