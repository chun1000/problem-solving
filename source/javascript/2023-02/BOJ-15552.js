const fs = require("fs");

let input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//a.intxt => /dev/stdin

const T = input[0];

let str = "";

for(let i = 1; i <= T; ++i) {
    const [A, B] = input[i].split(" ").map(item => Number(item));
    str += (A+B) + '\n';
}

console.log(str);