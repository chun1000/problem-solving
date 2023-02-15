const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split(" ").map(item=>Number(item));
//a.intxt => /dev/stdin

let [A, B] = input;

if(B < 45) {
    A -= 1;
    B += 60;    
}

B = B - 45;

if(A < 0) {
    A = 23;
}

console.log(A + " " + B)
