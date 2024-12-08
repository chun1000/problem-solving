import sys
read = sys.stdin.readline
write = sys.stdout.write

INF = 999999999

N, M, B = map(int, read().split())

board = []
for _ in range(N):
    row = map(int, read().split())
    board.extend(row)

ans_height = 0
ans_time = INF


for i in range(0, 257):
    block = B
    time = 0
    for val in board:
        dig = val - i
        if dig > 0:
            block += dig
            time += dig*2
        elif dig < 0:
            block += dig
            time += (-dig)
    if block >= 0 and time <= ans_time:
        ans_height = i
        ans_time = time

print(ans_time, ans_height)