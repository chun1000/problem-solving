import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for i in range(1, N*2+1):
    if N % 2 == 0:
        if i % 2 == 1:
            write("* "*(N//2) + "\n")
        else:
            write(" *"*(N//2) + "\n")
    else:
        if i % 2 == 1:
            write("* "*(N//2+1) + "\n")
        else:
            write(" *"*(N//2) + "\n")