import sys
read = sys.stdin.readline
write = sys.stdout.write

N, M = map(int, read().split())

if N*100 >= M:
    print("Yes")
else:
    print("No")