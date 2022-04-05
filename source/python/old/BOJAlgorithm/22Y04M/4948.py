import sys
read = sys.stdin.readline
write = sys.stdout.write
MAX_VAL = 123456*2+1


board = [True for _ in range(MAX_VAL)]


board[0] = False
board[1] = False

for i in range(MAX_VAL):
    if not board[i]:
        continue
    for j in range(i+i, MAX_VAL, i):
        board[j] = False

ans = [0 for _ in range(MAX_VAL)]

for i in range(1, MAX_VAL):
    if board[i]:
        ans[i] = ans[i-1] + 1
    else:
        ans[i] = ans[i-1]

while True:
    n = int(read())
    if n == 0:
        break
    write(str(ans[2*n] - ans[n])+"\n")