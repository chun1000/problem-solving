import sys
read = sys.stdin.readline
write = sys.stdout.write

N, M = map(int, read().split())
A = int(read())
B = int(read())

write(str(A*B))