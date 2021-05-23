import sys
read = sys.stdin.readline
write = sys.stdout.write

def gravity(board):
    alpha = ['R', 'G', 'B', 'P', 'Y']
    while True:
        is_changed = False
        for x in range(11, 0, -1):
            for y in range(6):
                if board[x-1][y] in alpha:
                    if board[x][y] == '.':
                        board[x][y] = board[x-1][y]
                        board[x-1][y] = '.'
                        is_changed = True
        if not is_changed:
            break
    
#중력의 영향을 주는 함수.

def explosion(board):
    visit = set()
    stack = []
    alpha = ['R', 'G', 'B', 'P', 'Y']
    difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    has_explosion = False
    for x in range(12):
        for y in range(6):
            if board[x][y] in alpha and (x, y) not in visit:
                visit.add((x, y))
                stack.append((x, y))
                node_count = 1
                cur_alpha = board[x][y]
                remove_target = [(x, y)]
                while stack:
                    x, y = stack.pop()

                    for dif in difs:
                        new_x = x + dif[0]
                        new_y = y + dif[1]

                        if new_x < 0 or new_x >= 12 or new_y < 0 or new_y >= 6:
                            continue

                        if board[new_x][new_y] == cur_alpha and (new_x, new_y) not in visit:
                            node_count += 1
                            visit.add((new_x, new_y))
                            remove_target.append((new_x, new_y))
                            stack.append((new_x, new_y))
                if node_count >= 4:
                    has_explosion = True
                    for item in remove_target:
                        x, y = item
                        board[x][y] = '.'
    if has_explosion:
        return 1
    else:
        return 0
#폭파를 담당하는 함수

board = []

for _ in range(12):
    input_line = list(read()[:-1])
    board.append(input_line)

chain_reaction = 0
while True:
    result = explosion(board)
    if result == 0:
        break
    else:
        chain_reaction += result
    gravity(board)
    
print(chain_reaction)