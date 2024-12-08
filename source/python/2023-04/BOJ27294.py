import sys
read = sys.stdin.readline
write = sys.stdout.write

T, S = map(int, read().split())

if S == 0 and T >= 12 and T <= 16:
    print("320")
else:
    print("280")