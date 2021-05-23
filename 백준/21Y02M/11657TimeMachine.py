import sys
read = sys.stdin.readline
write = sys.stdout.write
INF = 1000000000


n, m = map(int, read().split())

edge_info = []

for _ in range(m):
    a, b, c = map(int, read().split())
    edge_info.append((a, b, c))

distance = [INF for _ in range(n+1)]
distance[1] = 0
has_minus_cycle = False

for _ in range(n-1):
    for item in edge_info:
        a, b, c = item
        if distance[a] == INF:
            continue

        if distance[a] + c < distance[b]:
            distance[b] = distance[a] + c

for item in edge_info:
    a, b, c = item

    if distance[a] == INF:
            continue

    if distance[a] + c < distance[b]:
        has_minus_cycle = True

if has_minus_cycle:
    print("-1")
else:
    for i in range(2, n+1):
        if distance[i] == INF:
            print("-1")
        else:
            print(distance[i])