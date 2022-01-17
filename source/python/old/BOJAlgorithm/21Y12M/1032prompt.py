#브론즈

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())


first = list(read()[:-1])
for _ in range(1, N):
    other = read()[:-1]
    for i in range(len(other)):
        if first[i] != other[i]:
            first[i] = '?'

first = "".join(first)
print(first)
    