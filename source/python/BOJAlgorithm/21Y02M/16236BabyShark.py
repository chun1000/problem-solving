import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write


def get_target(fish_list):
    distance = fish_list[0][2]
    x = 1000
    y = 1000

    for item in fish_list:
        item_x, item_y, item_dis = item
        if item_x < x:
            x = item_x
            y = item_y
        if item_x == x:
            if item_y <= y:
                x = item_x
                y = item_y
    return x, y, distance

def search_fish(board, n, shark_size, shark_pos):
    queue = deque()
    visit = set()
    fish_list = []

    visit.add((shark_pos[0], shark_pos[1]))
    start = (shark_pos[0], shark_pos[1], 0)
    queue.append(start)
    difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    deepest_depth = 1000

    while queue:
        cur_x, cur_y, depth = queue.popleft()
        #depth = 거리

        for dif in difs:
            dif_x, dif_y = dif
            new_x = cur_x + dif_x
            new_y = cur_y + dif_y

            #좌표가 보드에서 벗어난 경우.
            if new_x < 0 or new_x >= n or new_y < 0 or new_y >= n:
                continue

            #지나갈 수 있으면서 방문하지 않은 경우, 현재 발견된 거리보다 짧은 경우.
            if (new_x, new_y) not in visit and board[new_x][new_y] <= shark_size and depth <= deepest_depth:
                visit.add((new_x, new_y))
                if board[new_x][new_y] != 0 and board[new_x][new_y] < shark_size:
                    #먹을 수 있다면
                    deepest_depth = depth
                    fish_list.append((new_x, new_y, depth+1))
                else:
                    #못 먹는 경우
                    queue.append((new_x, new_y, depth + 1))

    return fish_list
    #힙을 반환하면 가장 위, 왼쪽을 쉽게 찾을 수 있음.
                


n = int(read())

board = []

for _ in range(n):
    input_line = list(map(int, read().split()))
    board.append(input_line)

shark_size = 2
shark_eat_stack = 0
shark_pos = (-1, -1)
for x in range(n):
    for y in range(n):
        if board[x][y] == 9:
            shark_pos = (x, y)

time = 0

while True:
    fish_list = search_fish(board, n, shark_size, shark_pos)

    if not fish_list:
        break
    #더 이상 먹을 물고기가 없음.

    fish_x, fish_y, distance = get_target(fish_list)
    #가장 위면서 왼쪽인 물고기의 정보

    board[shark_pos[0]][shark_pos[1]] = 0
    board[fish_x][fish_y] = 9
    shark_pos = (fish_x, fish_y)
    shark_eat_stack += 1
    #상어가 물고기를 먹으로 이동, 물고기를 먹음.

    if shark_eat_stack == shark_size:
        shark_size += 1
        shark_eat_stack = 0
    #물고기를 자기 크기만큼 먹으면 상어가 커짐.

    time += distance
    #움직여야하는 거리만큼 시간이 흐름.

print(time)

    
    






