import sys
read = sys.stdin.readline
write = sys.stdout.write

T = int(read())

for i in range(1, T+1):
    A, B = map(int, read().split())
    write("Case #{0}: {1} + {2} = {3}\n".format(i, A, B, A+B))