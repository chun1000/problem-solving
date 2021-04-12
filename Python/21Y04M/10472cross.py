import sys
from collections import deque
from copy import deepcopy
read = sys.stdin.readline
write = sys.stdout.write


def press_board(x, y, board):
    difs = [(0, 0), (1, 0), (-1, 0), (0, 1), (0, -1)]
    new_board = deepcopy(board)
    for dif in difs:
        new_x = x + dif[0]
        new_y = y + dif[1]

        if new_x < 0 or new_y < 0 or new_x >= 3 or new_y >= 3:
            continue

        if new_board[new_x][new_y] == '*':
            new_board[new_x][new_y] = '.'
        else:
            new_board[new_x][new_y] = '*'

    return new_board

def change_board_to_string(board):
    string = ""
    for i in range(3):
        string += ''.join(board[i])
    
    return string



p = int(read())

for _ in range(p):
    board = []
    for _ in range(3):
        input_line = list(read()[:-1])
        board.append(input_line)

    my_queue = deque()
    my_queue.append((board, 0))
    visit = set()
    visit.add(change_board_to_string(board))


    while my_queue:
        cur_board, count = my_queue.popleft()

        if change_board_to_string(cur_board) == ".........":
            print(count)
            break

        for x in range(3):
            for y in range(3):
                new_board = press_board(x, y, cur_board)
                new_board_string = change_board_to_string(new_board)

                if new_board_string in visit:
                    continue
                
                visit.add(new_board_string)
                my_queue.append((new_board, count+1))




    
    

