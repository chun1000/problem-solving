const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split(" ").map(Number);
//input => /dev/stdin

const [x, y, w, h] = input;

console.log(Math.min(x, y, w-x, h-y))