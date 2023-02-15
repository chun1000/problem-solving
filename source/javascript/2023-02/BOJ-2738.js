const fs = require("fs");

const input = fs.readFileSync("a.intxt").toString().trim().split("\n");
//input => /dev/stdin

const [N, M] = input[0].split(' ').map(Number)

let A = []
let B = []
for(let i = 1; i <= N; ++i) {
    A.push(input[i].split(' ').map(Number))    
}

for(let i = N+1; i <= N+N; ++i) {
    B.push(input[i].split(' ').map(Number))
}

let C = ""
for(let i = 0; i < N; ++i) {
    for(let j = 0; j < M; ++j) {
        C += A[i][j] + B[i][j] + " "
    }
    C += "\n"
}

console.log(C)