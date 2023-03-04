import sys
read = sys.stdin.readline
write = sys.stdout.write

N, M = map(int, read().split())

board = list(map(int, read().split()))

ans = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if board[i] + board[j] + board[k] <= M:
                ans = max(ans, board[i] + board[j] + board[k])
print(ans)