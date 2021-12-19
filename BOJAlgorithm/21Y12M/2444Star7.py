#브론즈

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for i in range(1, N):
    write(" "*(N-i))
    write("*"*(2*i-1))
    write("\n")
    
write("*"*(2*N-1));
write("\n")

for i in range(1, N):
    write(" "*(i))
    write("*"*(2*(N-i)-1))
    write("\n")