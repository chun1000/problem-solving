import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
board = list(map(int, read().split()))

q = deque()
q.append((board, 0))

diffs = [[1, 3, 9], [1, 9, 3], [3, 1, 9], [3, 9, 1], [9, 1, 3], [9, 3, 1]]
s = set()
s.add(tuple(board))

ans = 999999
while q:
    board, cnt = q.pop()

    if max(board) <= 0:
        ans = min(ans, cnt)
        continue
    
    if cnt >= ans:
        continue

    for diff in diffs:
        new_board = []
        for i in range(len(board)):
            new_board.append(board[i] - diff[i])
        if tuple(new_board) in s:
            continue
        s.add(tuple(new_board))
        q.append((new_board, cnt + 1))

write(str(ans) + '\n')