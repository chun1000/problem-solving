import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())
for _ in range(n):
    a = int(read())
    write("{0} {0}\n".format(a))