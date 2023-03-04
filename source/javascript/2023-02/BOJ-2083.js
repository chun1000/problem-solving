const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//input => /dev/stdin

let board = [];

for(let item of input)
    board.push(item.split(" ").map(function(elem, idx) {
        if(idx >= 1) return Number(elem);
        else return elem;
    }));

board = board.slice(0, board.length-1);

for(let item of board) {
    if(item[1] > 17 || item[2] >= 80) console.log(item[0] + " Senior");
    else console.log(item[0] + " Junior");
}