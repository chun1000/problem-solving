const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//a.intxt => /dev/stdin

new_str = ""
diff = 'a'.charCodeAt(0) - 'A'.charCodeAt(0)
for(let char of input[0]) {
    let code = char.charCodeAt(0)
    if(code >= 'a'.charCodeAt(0) && code <= 'z'.charCodeAt(0)){
        new_str += String.fromCharCode(code - diff)
    }
    else {
        new_str += String.fromCharCode(code + diff)
    }   
}

console.log(new_str)