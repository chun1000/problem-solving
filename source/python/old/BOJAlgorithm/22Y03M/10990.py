import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

write(" "*(N-1) + "*\n")

for i in range(2, N+1):
    write(" "*(N-i) + "*" + " "*((i-1)*2-1) +"*\n")

