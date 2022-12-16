import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write
INF = 900000000


def dikjstra(start, destination, adjacency_list):
    distance = [INF for _ in range(v+1)]
    path = [0 for _ in range(v+1)]
    my_heap = []

    distance[start] = 0
    heapq.heappush(my_heap, (distance[start], start))

    while my_heap:
        cur_dist, cur_node = heapq.heappop(my_heap)

        for item in adjacency_list[cur_node]:
            weight, dest = item

            if distance[cur_node] + weight < distance[dest]:
                distance[dest] = distance[cur_node] + weight
                path[dest] = cur_node
                heapq.heappush(my_heap, (distance[dest], dest))

    return distance[destination]
#평범한 다익스트라. start->destination으로 향하는 경로의 최솟값을 구해줌.


v, e, p = map(int, read().split())
adjacency_list = [[] for _ in range(v+1)]


for _ in range(e):
    a, b, c = map(int, read().split())
    adjacency_list[a].append((c, b))
    adjacency_list[b].append((c, a))

minimum_length = dikjstra(1, v, adjacency_list)

start_to_p_length = dikjstra(1, p, adjacency_list)
p_to_dest_length = dikjstra(p, v, adjacency_list)
#start<->p<->destination의 최소경로와 start<->destination간의 최소경로가 같다면, start<->p<->destination도 최소경로임.


if minimum_length == (start_to_p_length + p_to_dest_length):
    print("SAVE HIM")
else:
    print("GOOD BYE")