import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
board = [[-1 for _ in range(1001)] for _ in range (1001)]
for i in range(N):
    a, b, c, d = map(int, read().split())
    for col in range(a, a+ c):
        for row in range(b, b + d):
                board[col][row] = i


ans = [0 for _ in range(N)]

for col in range(1001):
     for row in range(1001):
          if board[col][row] >= 0:
               ans[board[col][row]] += 1

for i in range(N):
     print(ans[i])