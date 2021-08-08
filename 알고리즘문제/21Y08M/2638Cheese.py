import sys
import copy
read = sys.stdin.readline
write = sys.stdout.write

"""
접근 방식 생각:
1. DFS로 공기를 찾는다.
2. 공기를 2로 바꿔서 표시한다.
3. 끝나면 한칸씩 돌면서 2와 2개 이상 접촉한 치즈를 보고 녹인다.
4. 남은 치즈가 있으면 2부터 반복
위 접근 방법을 사용하면, 치즈가 턴이 갈수록 기하급수적으로 녹아서 그리 오랜 시간이 걸리지 않을 것이다.
"""
def is_cheese_remain(N, board):
    for i in range(N):
        if 1 in board[i]:
            return True
    return False


def find_air(N, M, board):
    stack = []
    visit = set()
    diffs = [(1,0), (-1, 0), (0, 1), (0, -1)]
    for x in range(N):
        for y in range(M):
            if (x, y) in visit or board[x][y] != 2:
                continue
            stack.append((x, y))
            visit.add((x, y))
            while stack:
                cur_x, cur_y = stack.pop()

                for dif in diffs:
                    new_x = cur_x + dif[0]
                    new_y = cur_y + dif[1]

                    if new_x < 0 or new_x >= N or new_y < 0 or new_y >= M:
                        continue

                    if (new_x, new_y) in visit:
                        continue

                    if board[new_x][new_y] == 0 or board[new_x][new_y] == 3:
                        board[new_x][new_y] = 2
                        stack.append((new_x, new_y))
                        visit.add((new_x, new_y))

def molt_cheese(N, M, board):
    diffs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    for x in range(N):
        for y in range(M):
            if board[x][y] != 1:
                continue
            count = 0
            for dif in diffs:
                new_x = x + dif[0]
                new_y = y + dif[1]
                if new_x < 0 or new_x >= N or new_y < 0 or new_y >=M:
                    continue
                if board[new_x][new_y] == 2:
                    count += 1
            if count >= 2:
                board[x][y] = 3




N, M = map(int, read().split())
board = []
for _ in range(N):
    input_line = map(int, read().split())
    board.append(list(input_line))


for x in range(N):
    for y in range(M):
        if x == 0 or x == N-1 or y == 0 or y == M-1:
            if board[x][y] == 0:
                board[x][y] = 2




t = 0

while is_cheese_remain(N, board):
    find_air(N, M, board)
    molt_cheese(N, M, board)
    t += 1

print(t)
