const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//a.intxt => /dev/stdin

let s = new Set();

for(let i = 0; i < input.length; ++i) {
    let num = Number(input[i]) % 42;
    s.add(num);
}

console.log(s.size);
