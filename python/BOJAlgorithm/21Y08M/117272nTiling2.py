import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())

dp = [1 for _ in range(n+1)]
if n > 1:
    dp[2] = 3

for i in range(3, n+1):
    dp[i] = (dp[i-1] + dp[i-2]*2) % 10007

print(dp[n])

