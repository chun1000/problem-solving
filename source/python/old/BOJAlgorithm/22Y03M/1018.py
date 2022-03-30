#BOJ Silver, Brute Force
import sys
read = sys.stdin.readline
write = sys.stdout.write



def board_to_string(board, x, y):
    board_string = ""
    for i in range(x, x+8):
        for j in range(y, y+8):
            board_string += board[i][j]
    return board_string
    


def count_diff(b1, b2):
    diff = 0
    for i in range(len(b1)):
        if b1[i] == b2[i]:
            diff += 1
    return diff



N, M = map(int, read().split())
board = []
for _ in range(N):
    board.append(list(read()[:-1]))

white_board = "WBWBWBWBBWBWBWBW"*4
black_board = "BWBWBWBWWBWBWBWB"*4


min_val = 100
for x in range(0, N-7):
    for y in range(0, M-7):
        board_string = board_to_string(board, x, y)
        min_val = min(count_diff(board_string, white_board), min_val)
        min_val = min(count_diff(board_string, black_board), min_val)

print(min_val)
