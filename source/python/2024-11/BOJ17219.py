import sys
read = sys.stdin.readline
write = sys.stdout.write

N, M = map(int, read().split())
d = dict()

for _ in range(N):
    site, pw = map(str, read().split())
    d[site] = pw

for _ in range(M):
    site = read()[:-1]
    write(d[site] + '\n')
