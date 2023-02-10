import sys
read = sys.stdin.readline
write = sys.stdout.write

n, k = map(int, read().split())

coins = [int(read()) for _ in range(n)]
dp = [0 for _ in range(k+1)]
dp[0] = 1

for coin in coins:
    for i in range(1, k+1):
        if coin > i : continue
        dp[i] += dp[i-coin]
print(dp[k])
