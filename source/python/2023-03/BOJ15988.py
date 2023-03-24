import sys
read = sys.stdin.readline
write = sys.stdout.write

T = int(read())

dp = [0 for _ in range(1000001)]

dp[1] = 1
dp[2] = 2
dp[3] = 4

for i in range(4, 1000001):
    dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 1000000009

for i in range(T):
    n = int(read())
    write(str(dp[n]) + '\n')