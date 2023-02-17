const fs = require("fs");

const input = Number(fs.readFileSync("a.intxt").toString().trim());
//a.intxt => /dev/stdin



for(let i = 1; i <= input; ++i) {
    console.log("Hello World, Judge " + i.toString() + "!")
}