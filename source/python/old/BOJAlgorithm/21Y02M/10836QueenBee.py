import sys
read = sys.stdin.readline
write = sys.stdout.write


m, n = map(int ,read().split())

growth_rate = [1 for _ in range(2*m-1)]
board = [[1 for _ in range(m)] for _ in range(m)]

for _ in range(n):
    zero, one, two = map(int, read().split())
    for i in range(zero, 2*m-1):
        if one > 0:
            growth_rate[i] += 1
            one -= 1
        else:
            growth_rate[i] += 2
#0은 연산해줄 필요가 없음. 1이랑 2만 합계를 쌓아서 한번에 업데이트
#시간복잡도 N*(2M-1)*(2/3)

count = 0

for i in range(m-1, -1, -1):
    board[i][0] = growth_rate[count]
    count += 1

for i in range(1, m):
    board[0][i] = growth_rate[count]
    count += 1
#모서리 한 번 업데이트
#시간복잡도 2M-1

for x in range(1, m):
    for y in range(1, m):
        board[x][y] = max(board[x-1][y-1], board[x-1][y], board[x][y-1])
#비모서리 한 번 업데이트
#시간복잡도 M^2

for x in range(m):
    for y in range(m):
        write(str(board[x][y]) + " ")
    write("\n")
#출력
