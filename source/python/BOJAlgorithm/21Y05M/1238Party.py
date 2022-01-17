"""
단방향 그래프에 다익스트라를 적용할 때
간선을 뒤집으면 무슨일이 일어나는지 알면 좋은 문제.

역방향 소트를 하는 방법도 알아도는 것이 좋음.
"""

import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write
INF = 1000000000


def dijkstra(n, m, x, adjacency_list):
    distance = [INF for _ in range(n+1)]
    distance[x] = 0
    my_heap = []
    
    for i in range(1, n+1):
        heapq.heappush(my_heap, (distance[i], i))

    while my_heap:
        _, cur_node = heapq.heappop(my_heap)

        for item in adjacency_list[cur_node]:
            end_node, weight = item
            if distance[end_node] > distance[cur_node] + weight:
                distance[end_node] = distance[cur_node] + weight
                heapq.heappush(my_heap, (distance[end_node], end_node))
    return distance

n, m, x = map(int, read().split())
adjacency_list = [[] for _ in range(n+1)]
inverse_adjacency_list = [[] for _ in range(n+1)]

for _ in range(m):
    start, end, i = map(int, read().split())
    adjacency_list[start].append((end, i))
    inverse_adjacency_list[end].append((start, i))

distance = dijkstra(n, m, x, adjacency_list)
inverse_distance = dijkstra(n, m, x ,inverse_adjacency_list)

sum_of_distance = []

for i in range(len(distance)):
    temp = distance[i] + inverse_distance[i]
    sum_of_distance.append(temp)

sum_of_distance.sort(key=lambda x : -x)

print(sum_of_distance[1])
