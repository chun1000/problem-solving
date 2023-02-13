const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//a.intxt => /dev/stdin

const [N, S, V] = input

const arr = S.split(' ')
console.log(arr.filter(num => num == V).length)