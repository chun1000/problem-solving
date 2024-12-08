import sys
import math
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())

for _ in range(n):
    d, f, p = map(float, read().split())
    print('$%.2f' %round(d*f*p + 0.0001, 2))