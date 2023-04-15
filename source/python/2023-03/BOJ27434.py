import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(input())
ans = 1

for i in range(1, N+1):
    ans *= i
print(ans)