#git 등재 타겟

import sys
from collections import deque
import heapq
read = sys.stdin.readline
write = sys.stdout.write

def swap(board, dif):
    board = string_to_board(board)
    x, y = -1, -1
    dif_x, dif_y = dif
    for i in range(3):
        for j in range(3):
            if board[i][j] == 0:
                x = i
                y = j
                break
    if x+dif_x < 0 or x+dif_x >=3 or y+dif_y < 0 or y+dif_y >= 3:
        return -1

    board[x][y] = board[x+dif_x][y+dif_y]
    board[x+dif_x][y+dif_y] = 0
    return board_to_string(board)

def board_to_string(board):
    board_string = ""
    for x in range(3):
        for y in range(3):
            board_string += str(board[x][y])
    
    return board_string

def string_to_board(string):
    board = [[0 for _ in range(3)] for _ in range(3)]
    for i in range(len(string)):
        board[i//3][i%3] = int(string[i])
    return board

def get_heuristic(board):
    completed_puzzle = "1234567890"
    heuristic = 0
    for i in range(len(board)):
        if board[i] != completed_puzzle[i]:
            heuristic += 1
    return heuristic
    


completed_puzzle = "123456780"
difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
board = []

for _ in range(3):
    input_line = list(map(int, read().split()))
    board.append(input_line)

board = board_to_string(board)

queue = []
heapq.heappush(queue, (get_heuristic(board), 0, board)) #(h+g, g, item)
visit = set()
visit.add(board)
count = -1
while queue:
    cur_hg ,cur_count ,cur_board = heapq.heappop(queue)
    if cur_board == completed_puzzle:
        count = cur_count
        break
    for dif in difs:
        new_board = swap(cur_board, dif)
        if new_board == -1:
            continue
        
        if new_board not in visit:
            visit.add(new_board)
            queue.append((get_heuristic(board) + cur_count + 1, cur_count + 1, new_board))

print(count)

    