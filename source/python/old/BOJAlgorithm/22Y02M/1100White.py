#브론즈

import sys
read = sys.stdin.readline
write = sys.stdout.write

board = []

for _ in range(8):
    board.append(list(read().rstrip()))
    
ans = 0
for x in range(8):
    for y in range(8):
        if board[x][y] == 'F' and (x + y) % 2 == 0:
            ans += 1

write(str(ans))