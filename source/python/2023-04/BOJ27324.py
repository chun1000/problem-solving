import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

if N//10 == N%10:
    write("1")
else:
    write("0")