const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n").map(item => Number(item));
//a.intxt => /dev/stdin

console.log(input.sort((a, b) => {
    if(a<b) return -1;
    if(a>b) return 1;
    if(a==b) return 0;
    else return -1;
})[1]);

