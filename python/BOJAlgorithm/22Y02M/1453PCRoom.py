#bronze

import sys
read = sys.stdin.readline
write = sys.stdout.write

seats = [0 for _ in range(101)]

N = int(read())
input_line = list(map(int, read().split()))
ans = 0

for item in input_line:
    if seats[item] == 0:
        seats[item] = 1
    else:
        ans +=1

write(str(ans))