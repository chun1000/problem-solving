import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
M = int(read())

pq = []
adjacency_list = [[] for _ in range(N+1)]
visit = [False for _ in range(N+1)]

for _ in range(M):
    a, b, c = map(int, read().split())
    adjacency_list[a].append((c, b))
    adjacency_list[b].append((c, a))

visit[1] = True
for item in adjacency_list[1]:
    heapq.heappush(pq ,item)

ans = 0;
while pq:
    weight, vertex = heapq.heappop(pq)

    if not visit[vertex]:
        visit[vertex] = True
        ans += weight
        for item in adjacency_list[vertex]:
            heapq.heappush(pq, item)
print(ans)
