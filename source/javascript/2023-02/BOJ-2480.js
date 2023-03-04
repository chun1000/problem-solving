const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split(" ").map(item => Number(item));
//input => /dev/stdin

if(input[0] === input[1] && input[1] === input[2]) {
    console.log(input[0]*1000 + 10000);
}
else if(input[1] == input[2]) {
    console.log(input[1]*100 + 1000);
}
else if(input[0] == input[1] || input[0] == input[2]) {
    console.log(input[0]*100 + 1000);
}
else {
    console.log(Math.max(...input)*100);
}