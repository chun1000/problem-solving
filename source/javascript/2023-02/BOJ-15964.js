const fs = require("fs");

let input = fs.readFileSync("a.intxt").toString().trim().split(" ");
//a.intxt => /dev/stdin
const[A, B] = input.map(item => Number(item));

let golbang2 = function(A, B) {
    return (A+B)*(A-B)
};

console.log(golbang2(A, B))