import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for i in range(1, N+1):
    write(" "*(N-i) + "* "*i + "\n")
