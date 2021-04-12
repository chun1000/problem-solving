#git 타깃.

import sys
read = sys.stdin.readline
write = sys.stdout.write


def dfs(start_pos, visit, board, n, m):
    #반복문 형식의 DFS, 각 그림별로 DFS가 함수가 한번씩 호출되고, 모든 함수는 visit을 공유함.
    difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    x, y = start_pos
    stack = []
    stack.append((x, y))
    visit.add((x, y))

    count = 0
    #1의 개수 카운트

    while stack:
        cur_x, cur_y = stack.pop()
        if board[cur_x][cur_y] == 1:
            count += 1

        for dif in difs:
            new_x = cur_x + dif[0]
            new_y = cur_y + dif[1]

            if new_x < 0 or new_y < 0 or new_x >= n or new_y >= m:
                continue

            if (new_x, new_y) in visit:
                continue

            if board[new_x][new_y] != 0:
                visit.add((new_x, new_y))
                stack.append((new_x, new_y))
    return count


n, m = map(int, read().split())
board = []

for _ in range(n):
    input_line = list(map(int, read().split()))
    board.append(input_line)

visit = set()
stack = []
num_of_pic = 0
max_pic_size = 0

#모든 좌표에 대해서
for x in range(n):
    for y in range(m):
        #방문하지 않고, 그림의 시작점이 될 수있으면
        if (x, y) not in visit and board[x][y] != 0:
            #시작점을 기준으로 DFS 실행.
            start_pos = (x, y)
            pic_size = dfs(start_pos, visit, board, n , m)
            if pic_size > 0:
            #그림 크기가 0보다 크면 MAX를 갱신하고, 그림 개수를 하나 추가.
                num_of_pic += 1
                max_pic_size = max(max_pic_size, pic_size)

print(num_of_pic)
print(max_pic_size)

