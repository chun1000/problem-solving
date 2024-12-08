import sys
read = sys.stdin.readline
write = sys.stdout.write

A = int(read())
B = int(read())
C = int(read())

print(A+B-C)
print(int(str(A)+str(B)) - C)