import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())

dp = [[0 for _ in range(n+1)] for _ in range(3)]

for i in range(1, n+1):
    r, g, b = map(int, read().split())

    dp[0][i] = r + min(dp[1][i-1], dp[2][i-1])
    dp[1][i] = g + min(dp[0][i-1], dp[2][i-1])
    dp[2][i] = b + min(dp[0][i-1], dp[1][i-1])

min_val = min(dp[0][n], dp[1][n], dp[2][n])

write("{0}\n".format(min_val))