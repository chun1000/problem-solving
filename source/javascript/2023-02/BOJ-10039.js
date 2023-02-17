const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n").map(item => Number(item));
//a.intxt => /dev/stdin
total = 0;
console.log(input.reduce((acc, cur) =>{if(cur < 40) return acc + 40; else return acc + cur} , 0)/5)
