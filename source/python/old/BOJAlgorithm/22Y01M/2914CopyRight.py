#브론즈

import sys
read = sys.stdin.readline
write = sys.stdout.write

A, I = map(int, read().split())
print(A*(I-1)+1)
