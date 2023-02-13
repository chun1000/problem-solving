const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//a.intxt => /dev/stdin

arr = Array(31).fill(false)

for (let idx in input) {
    arr[Number(input[idx])] = true
}

ans = []
for(let i = 1; i <= 30; ++i) {
    if(!arr[i]) ans.push(i)
}


console.log(ans[0])
console.log(ans[1])