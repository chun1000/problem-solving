import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(input())

while n >= 5:
    n -= 5
    write('V')

for i in range(n):
    write('I')

    