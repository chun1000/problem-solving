import sys
read = sys.stdin.readline
write = sys.stdout.write

M, N = map(int, read().split())

board = [True for _ in range(N+1)]
board[0] = False
board[1] = False

for i in range(2, N+1):
    if not board[i]:
        continue
    for j in range(i+i, N+1, i):
        board[j] = False
    
for i in  range(M, N+1):
    if board[i]:
        write(str(i) + "\n")

