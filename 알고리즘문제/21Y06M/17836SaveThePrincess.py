from collections import deque
import sys
read = sys.stdin.readline
write = sys.stdout.write
INF = 100000000

n, m, t = map(int, read().split())
board = []

for _ in range(n):
    input_line = list(map(int, read().split()))
    board.append(input_line)

#입력 받기 끝

my_queue = deque()
my_queue.append((0, 0, 0)) #x, y, time
diffs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
visit = set()
visit.add((0, 0))
find_princess = False
find_gram = False
min_time_of_princess = INF
min_time_of_gram = INF

while my_queue:
    x, y, time = my_queue.popleft()

    if find_gram and find_princess:
        break

    if x == n-1 and y == m-1 and not find_princess:
        min_time_of_princess = time
        find_princess = True
    #공주에게 도달

    if board[x][y] == 2 and not find_gram:
        find_gram = True
        min_time_of_gram = abs(n-1-x)+abs(m-1-y) + time
        continue
    #그람을 찾음



    for diff in diffs:
        new_x = x + diff[0]
        new_y = y + diff[1]

        if new_x >= n or new_y >= m or new_x < 0 or new_y < 0:
            continue
        #맵 밖으로 나감

        if board[new_x][new_y] == 1:
            continue
        #벽으로 막혀있음

        if (new_x, new_y) in visit:
            continue
        #이미 방문함

        if time+1 > t:
            continue
        #제한시간 내에 구출 불가능

        visit.add((new_x, new_y))
        my_queue.append((new_x, new_y, time+1))


min_time = min(min_time_of_gram, min_time_of_princess)

if min_time > t:
    print("Fail")
else:
    print(min_time)
