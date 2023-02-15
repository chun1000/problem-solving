const fs = require("fs");

let input = fs.readFileSync("a.intxt").toString().trim().split("\n");
input = input.map((item)=>item.trim('\r'));
//a.intxt => /dev/stdin

let T = input[0];
for(let i = 1; i <= T; ++i) {
    console.log(input[i][0] + input[i][input[i].length-1]);
}