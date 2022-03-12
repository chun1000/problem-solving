#별찍기

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for i in range(1, N):
    for j in range(i):
        write("*")
    for j in range(N-i):
        write("  ")
    for j in range(i):
        write("*")
    write("\n")


#역방향
for i in range(N, 0, -1):
    for j in range(i):
        write("*")
    for j in range(N-i):
        write("  ")
    for j in range(i):
        write("*")
    write("\n")


