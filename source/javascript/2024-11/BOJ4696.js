const fs = require("fs");

const input = fs.readFileSync("input.txt").toString().trim().split("\n").map(Number);
//input => /dev/stdin

for(let item of input) {
    if(item == 0) break;
    const ans = 1 + item + item*item + item*item*item + item*item*item*item;
    console.log(ans.toFixed(2));
}