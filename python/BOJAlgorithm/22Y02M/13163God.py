#bronze

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for _ in range(N):
    input_line = list(map(str, read().split()))
    write("god")
    for i in range(1, len(input_line)):
        write(input_line[i])
    write("\n")
