import sys
import heapq

read = sys.stdin.readline
write = sys.stdout.write



n = int(read())
cost_matrix = [[int(x) for x in read().split()] for y in range(n)]

queue = []
visit = [False for _ in range(n)]



visit[0] = True

for i in range(n):
    if i != 0 and not visit[i]:
        heapq.heappush(queue, (cost_matrix[0][i], i))
total_cost = 0

while queue:
    cur_cost, cur_vertex = heapq.heappop(queue)

    if not visit[cur_vertex]:
        total_cost += cur_cost
        visit[cur_vertex] = True

        for i in range(n):
            if i != cur_vertex and not visit[i]:
                heapq.heappush(queue, (cost_matrix[cur_vertex][i], i))

print(total_cost)