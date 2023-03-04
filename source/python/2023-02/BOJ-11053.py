import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
board = list(map(int, read().split()))
dp  = [1 for _ in range(N)]

for i in range(1, N):
    for j in range(0, i):
        if board[i] > board[j] and dp[i] <= dp[j]:
            dp[i] = dp[j] + 1

print(max(dp))