"""
"""
import sys
read = sys.stdin.readline
write = sys.stdout.write


def solve(board, m, n):
    my_stack = []
    difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    count = 0

    for x in range(m):
        for y in range(n):
            if board[x][y] == True:
                board[x][y] = False
                my_stack = [(x, y)]
                count += 1
                while my_stack:
                    cur_x, cur_y = my_stack.pop()

                    for dif in difs:
                        new_x = cur_x + dif[0]
                        new_y = cur_y + dif[1]

                        if new_x < 0 or new_x >= m or new_y < 0 or new_y >= n:
                            continue

                        if board[new_x][new_y]:
                            my_stack.append((new_x, new_y))
                            board[new_x][new_y] = False
    return count



t = int(read())

for _ in range(t):
    m, n, k = map(int, read().split())
    board = [[False for _ in range(n)] for _ in range(m)]
    for _ in range(k):
        x, y = map(int, read().split())
        board[x][y] = True
    print(solve(board, m, n))