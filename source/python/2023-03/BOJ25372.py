import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

for i in range(N):
    s = input()
    if len(s) >= 6 and len(s) <= 9:
        write("yes\n")
    else:
        write("no\n")