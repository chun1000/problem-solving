import sys
read = sys.stdin.readline
write = sys.stdout.write

t = int(read())

for _ in range(t):
    x, y = map(int, read().split())
    write(str(x+y)+"\n")
