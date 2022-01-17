import sys
read = sys.stdin.readline
write = sys.stdout.write

dp = [0 for _ in range(21)]

dp[0] = 0
dp[1] = 1
dp[2] = 1

n = int(read())


for i in range(3, n+1):
    dp[i] = dp[i-1] + dp[i-2]

print(dp[n])