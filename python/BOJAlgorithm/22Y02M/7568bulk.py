import sys
read = sys.stdin.readline
write = sys.stdout.write

weights = []
heights = []

N = int(read())
ans = [-1 for _ in range(N)]


for i in range(N):
    weight, height = map(int, read().split())
    weights.append(weight)
    heights.append(height)

for i in range(N):
    place = 1
    for j in range(N):
        if weights[i] < weights[j] and heights[i] < heights[j]:
            place += 1
    write(str(place) + " ")

