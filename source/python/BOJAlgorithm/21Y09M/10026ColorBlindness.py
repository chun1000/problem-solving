import sys
read = sys.stdin.readline
write = sys.stdout.write


def get_sector_num(N, board):
    visit = set()
    diffs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    sector_num = 0

    for x in range(N):
        for y in range(N):
            if (x, y) not in visit:
                visit.add((x,y))
                my_stack = [(x,y)]
                sector_num += 1
                current_color = board[x][y]

                while my_stack:
                    cur_x, cur_y = my_stack.pop()

                    for diff in diffs:
                        new_x = cur_x + diff[0]
                        new_y = cur_y + diff[1]

                        if new_x < 0 or new_y < 0 or new_x >= N or new_y >= N:
                            continue

                        if (new_x, new_y) in visit:
                            continue

                        if board[new_x][new_y] != current_color:
                            continue

                        visit.add((new_x, new_y))
                        my_stack.append((new_x, new_y))

    return sector_num






N = int(read())
normal_board = []
blind_board = []

for _ in range(N):
    input_line = read()
    normal_board.append(list(input_line[:-1]))
    blind_board.append(list(input_line.replace('R', 'G')[:-1]))

normal_sector = get_sector_num(N, normal_board)
blind_sector = get_sector_num(N, blind_board)

write("{0} {1}".format(normal_sector, blind_sector))

