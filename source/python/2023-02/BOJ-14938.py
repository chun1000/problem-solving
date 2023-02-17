import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write
INF = 100000000

def solve(n, d, c):
    adjacency_list = [[] for _ in range(n+1)]
    for _ in range(d):
        a, b, s = map(int, read().split())
        adjacency_list[b].append((s, a))
    pq = []
    d = [INF for _ in range(n+1)]
    heapq.heappush(pq, (0, c))
    d[c] = 0

    while pq:
        (dist, vertex) = heapq.heappop(pq)
        if d[vertex] < dist: continue
        for item in adjacency_list[vertex]:
            (dest_dist , dest_vertex) = item
            if dist + dest_dist < d[dest_vertex]:
                d[dest_vertex] = dist + dest_dist
                heapq.heappush(pq, (d[dest_vertex], dest_vertex))
    
    time  = 0
    cnt = 0
    for item in d:
        if item != INF:
            time = max(item ,time)
            cnt += 1

    write(str(cnt) + ' ' + str(time) + '\n')


T = int(read())

for _ in range(T):
    n, d, c = map(int, read().split())
    solve(n, d, c)

#코드 정리 후 리스트에 넣기.