import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write


board = []

w, h = map(int, read().split())

find = False
start_pos = -1

for line_num in range(h):
    input_line = list(read()[:-1])
    board.append(input_line)

    for col_num in range(w):
        if find:
            break

        if input_line[col_num] == 'C':
            find = True
            start_pos = (line_num, col_num)

difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]


visit = [[-1 for _ in range(w)] for _ in range(h)]
my_queue = deque()
my_queue.append((-1, start_pos))
answer = -1
visit[start_pos[0]][start_pos[1]] = 987654321

while my_queue:
    cur_depth, cur_pos = my_queue.popleft()

    if board[cur_pos[0]][cur_pos[1]] == 'C' and cur_depth != -1:
        answer = cur_depth
        break

    for dif in difs:
        new_x = cur_pos[0]
        new_y = cur_pos[1]
        while True:
            new_x += dif[0]
            new_y += dif[1]

            if new_x < 0 or new_y < 0 or new_x >= h or new_y >= w:
                break
            #맵 밖으로 나감

            if board[new_x][new_y] == '*':
                break
            #벽임

            if visit[new_x][new_y] >= cur_depth + 1:
                continue
            #이미 쏘아져서 꺾인 횟수가 똑같은 놈이 먼저 도달하고 visit으로 길막할수도 있어서 이런 방식의 갱신을 해줘야함.
        
            visit[new_x][new_y] = cur_depth + 1
            my_queue.append((cur_depth + 1, (new_x, new_y)))


print(answer)
