import sys
read = sys.stdin.readline
write = sys.stdout.write

X = int(read())

total = 0
N = int(read())

for _ in range(N):
    a, b = map(int, read().split())
    total += a*b

if total == X:
    print("Yes")
else:
    print("No")