"""
"""

import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())
a = list(map(int, read().split()))
b = list(map(int, read().split()))

a.sort(key=lambda x: x)
b.sort(key=lambda x: -x)

total = 0

for i in range(len(a)):
    total += a[i]*b[i]

print(total)