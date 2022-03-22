import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for i in range(1, N+1):
    if i == 1:
        write(" "*(N-i)+"*\n")
    elif i == N:
        write("*"*(2*N-1) + "\n")
    else:
        write(" "*(N-i)+"*"+" "*(2*(i-1)-1) + "*\n")