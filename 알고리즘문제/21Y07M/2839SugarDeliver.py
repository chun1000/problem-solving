import sys
read = sys.stdin.readline
write = sys.stdout.write


n = int(read())

dp = [5000 for _ in range(n+1)]
dp[0] = 0
dp[3] = 1
if n >= 5:
    dp[5] = 1

for i in range(6, n+1):
    dp[i] = min(dp[i-3] +1, dp[i-5] + 1)

if dp[n] >= 5000:
    print("-1")
else:
    print(dp[n])
