import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for _ in range(N//4):
    write("long ")
write("int\n")