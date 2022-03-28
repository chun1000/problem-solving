import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

if N % 2 == 1:
    write("SK\n")
else:
    write("CY\n")