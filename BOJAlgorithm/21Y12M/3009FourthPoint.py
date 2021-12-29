import sys
from collections import defaultdict

read = sys.stdin.readline
write = sys.stdout.write

x = defaultdict(int)
y = defaultdict(int)


for _ in range(3):
    in_x, in_y = map(int, read().split())
    x[in_x] += 1
    y[in_y] += 1
    
for item in x.keys():
    if x[item] == 1:
        write(str(item) +" ")
for item in y.keys():
    if y[item] == 1:
        write(str(item))


        