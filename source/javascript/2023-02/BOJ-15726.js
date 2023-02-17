const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split(" ");
//a.intxt => /dev/stdin

const A = parseInt(input[0]);
const B = parseInt(input[1]);
const C = parseInt(input[2]);

console.log(Math.floor(Math.max(A*B/C, A/B*C)));