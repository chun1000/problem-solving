#깃 등재 타겟

import sys
import copy
read = sys.stdin.readline
write = sys.stdout.write


n = int(read())


board = [[False for _ in range(101)] for _ in range(101)]
curve_end = -1

for _ in range(n):
    dragon_curve_info = []
    x, y, d, g = map(int, read().split())
    dragon_curve_info.append((x, y))
    if d == 0:
        dragon_curve_info.append((x+1, y))
    elif d == 1:
        dragon_curve_info.append((x, y-1))
    elif d == 2:
        dragon_curve_info.append((x-1, y))
    else:
        dragon_curve_info.append((x, y+1))
    

    next_end_curve = dragon_curve_info[1] #끝점
    for _ in range(g):
        dci = copy.deepcopy(dragon_curve_info)
        end_curve = next_end_curve
        for i in range(len(dci)):
            #끝점이면 변환을 하지 않고 넘김(중복 방지)
            if end_curve == dci[i]:
                continue
            difx = end_curve[0] - dci[i][0]
            dify = end_curve[1] - dci[i][1]
            #끝점에서 각 점으로 가는 벡터를 구함.

            x = dify + end_curve[0]
            y = -difx + end_curve[1]
            #선형 변환 후, 끝점을 기준으로 방향을 더함.

            #가장 먼저 변환된 놈이 끝점임
            if i == 0:
                next_end_curve = (x, y)
            dragon_curve_info.append((x, y))
    
    for item in dragon_curve_info:
        board[item[0]][item[1]] = True

count = 0

for x in range(100):
    for y in range(100):
        if board[x][y] == True:
            if board[x+1][y] == True:
                if board[x][y+1] == True:
                    if board[x+1][y+1] == True:
                        count += 1

print(count)
