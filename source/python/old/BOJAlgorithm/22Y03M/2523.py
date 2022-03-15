#별찍기

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for i in range(1, N+1):
    write("*"*i + "\n")
for i in range(N-1, 0, -1):
    write("*"*i + "\n")
