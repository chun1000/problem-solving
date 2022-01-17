import sys
read = sys.stdin.readline
write = sys.stdout.write


def decrease_shark_smell(shark_smell, n):
    for i in range(n):
        for j in range(n):
            smell_clock, shark_num = shark_smell[i][j]
            shark_smell[i][j] = (smell_clock -1 , shark_num)


class Shark:
    def __init__(self, direction, priority, shark_pos):
        self.direction = direction
        #1, 2, 3, 4: 위, 아래, 왼쪽, 오른쪽
        self.priority = [0, 0, 0, 0, 0]
        self.priority[1] = priority[0]
        self.priority[2] = priority[1]
        self.priority[3] = priority[2]
        self.shark_pos = shark_pos
        self.shark_alive = True
    
    def shark_moving(self, shark_smell, n, shark_num):
        difs = [0, (-1, 0), (1, 0), (0, -1), (0, 1)]

        #현재 방향값을 토대로, 상하좌우 우선순위를 가져옴
        priority_info = self.priority[self.direction]

        #인접한 칸으로 이동한다. 아무 냄새가 없는 칸의 방향을 탐색한다.

        #아무 냄새가 없는 칸 중 우선순위를 따른다.
        #우선순위는 방향에 따라 다르다. 방금 이동한 방향이 상어가 보는 방향이 된다.

        for i in priority_info:
            cur_x, cur_y = self.shark_pos
            dif_x, dif_y = difs[i]

            next_x = cur_x + dif_x
            next_y = cur_y + dif_y

            if next_x < 0 or next_x >= n or next_y < 0 or next_y >= n:
                continue 

            if shark_smell[next_x][next_y][0] <= 0:
                self.direction = i
                self.shark_pos = (next_x, next_y)
                return


        for i in priority_info:
            cur_x, cur_y = self.shark_pos
            dif_x, dif_y = difs[i]

            next_x = cur_x + dif_x
            next_y = cur_y + dif_y

            if next_x < 0 or next_x >= n or next_y < 0 or next_y >= n:
                continue 

            if shark_smell[next_x][next_y][1] == shark_num:
                self.direction = i
                self.shark_pos = (next_x, next_y)
                return





n, m, k = map(int, read().split())

shark_pos = [-1 for _ in range(m+1)]
shark_smell = [[(0, -1) for _ in range(n)] for _ in range(n)]
#(냄새 시간, 냄새 보유 상어)

for i in range(n):
    info = list(map(int, read().split()))
    for j in range(len(info)):
        if info[j] != 0:
            shark_pos[info[j]] = (i, j)


#1, 2, 3, 4 : 위, 아래, 왼쪽, 오른쪽

shark_direction = list(map(int, read().split()))

shark_info = [-1]

for i in range(m):
    shark_direction_priority = []
    for _ in range(4):
        shark_direction_priority.append(list(map(int, read().split())))
    shark = Shark(shark_direction[i], shark_direction_priority, shark_pos[i+1])
    shark_info.append(shark)

t = 0

for i in range(1, m+1):
    x, y = shark_info[i].shark_pos
    shark_smell[x][y] = (k, i)

while t < 1000:
    #안 쫓겨난 상어는
    for i in range(1, m+1):
        shark:Shark = shark_info[i]

        if not shark.shark_alive:
            continue

        shark.shark_moving(shark_smell, n, i)
    #움직인다.

    decrease_shark_smell(shark_smell, n)
    #냄새가 한칸 줄어듬

    for i in range(1, m+1):
        shark:Shark = shark_info[i]

        if not shark.shark_alive:
            continue

        x, y = shark.shark_pos
        shark_smell[x][y] = (k, i)
    #냄새를 뿌린다.

    
    for i in range(1, m+1):
        for j in range(1, m+1):
            if i != j:
                if shark_info[i].shark_pos == shark_info[j].shark_pos and shark_info[i].shark_alive and shark_info[j].shark_alive:
                    if i < j:
                        shark_info[j].shark_alive = False
                        x, y = shark_info[i].shark_pos
                        shark_smell[x][y] = (k, i)
                    else:
                        shark_info[i].shark_alive = False 
                        x, y = shark_info[j].shark_pos
                        shark_smell[x][y] = (k, j)
    #같은 칸에 있으면 가장 작은 상어 빼고 다 쫓겨난다

    is_only_one_alive = True
    for i in range(2, m+1):
        if shark_info[i].shark_alive == True:
            is_only_one_alive = False
            break

    if is_only_one_alive:
        break

    t += 1

if t >= 1000:
    print("-1")
else:
    print(t+1)