import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write

n, m, t = map(int, read().split())
adjacency_list = [[] for _ in range(n+1)]
visit = [False for _ in range(n+1)]

for _ in range(m):
    a, b, c = map(int, read().split())
    adjacency_list[a].append((b, c))
    adjacency_list[b].append((a, c))

prim_heap = []

visit[1] = True

for item in adjacency_list[1]:
    dest, cost = item
    heapq.heappush(prim_heap, (cost, dest))

total_cost = 0

while prim_heap:
    cur_cost, cur_vertex = heapq.heappop(prim_heap)

    if not visit[cur_vertex]:
        total_cost += cur_cost
        visit[cur_vertex] = True

        for item in adjacency_list[cur_vertex]:
            dest, cost = item
            heapq.heappush(prim_heap, (cost, dest))

#sigma from 1 to n-1(ti)
#= t*(n-1)*(n-2)/2

extra_cost = 0

if n == 1:
    extra_cost = t

if n > 2:
    extra_cost = t*(n-1)*(n-2)/2


print(total_cost + int(extra_cost))