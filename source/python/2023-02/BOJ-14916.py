import sys
read = sys.stdin.readline
write = sys.stdout.write

MAX = 1000000

N = int(read())

dp = [MAX for _ in range(N+1)]
if N >= 2: dp[2] = 1
if N >= 4: dp[4] = 2
if N >= 5: dp[5] = 1

for i in range(6, N+1):
    dp[i] = min(dp[i-2]+1, dp[i-5]+1)

if dp[N] >= MAX:
    print('-1')
else:
    print(dp[N])

