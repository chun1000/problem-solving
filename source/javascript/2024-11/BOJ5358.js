const fs = require("fs");

const input = fs.readFileSync("input.txt").toString().trim().split("\n");
//input => /dev/stdin

for(let line of input) {
    let arr = line.split('');
    let new_arr = arr.map(function(c) {
        if(c == 'e') return 'i';
        else if(c == 'i') return 'e';
        else if(c == 'E') return 'I';
        else if(c == 'I') return 'E';
        else return c;
    });
    console.log(new_arr.join(''));
}