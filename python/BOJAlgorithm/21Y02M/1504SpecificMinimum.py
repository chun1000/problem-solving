import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write
INF = 900000000


def dijkstra(adjacency_list, n, start):
    queue = []
    distance = [ INF for _ in range(n+1)]

    distance[start] = 0
    for i in range(1, n + 1):
        heapq.heappush(queue, (distance[i], i))
    
    while queue:
        cur_dest, cur_node = heapq.heappop(queue)

        for item in adjacency_list[cur_node]:
            cost, dest = item

            if distance[dest] > distance[cur_node] + cost:
                distance[dest] = distance[cur_node] + cost
                heapq.heappush(queue, (distance[dest], dest))
    return distance



n, e = map(int, read().split())
adjacency_list = [[] for _ in range(n+1)]

for _ in range(e):
    a, b, c = map(int, read().split())#a<->b, cost: c
    adjacency_list[a].append((c, b))
    adjacency_list[b].append((c, a)) 
    #(cost, destnation)

x, y = map(int, read().split())

#반드시 거쳐야 하는 정점 x, y가 있을 떄
#(시작점 -> x) +  (x -> y) + (y -> 끝점)
#(시작점 -> y) + (y -> x) + (x -> 끝점)
#중에 더 낮은 값을 선택.

distance_start = dijkstra(adjacency_list, n, 1)
distance_x = dijkstra(adjacency_list, n, x)
distance_y = dijkstra(adjacency_list, n, y)
#각각 start, x, y로 부터 출발할 때의 distacne 배열

start_to_x = distance_start[x]
x_to_y = distance_x[y]
y_to_end = distance_y[n]

first_case = start_to_x + x_to_y + y_to_end

start_to_y = distance_start[y]
y_to_x = distance_y[x]
x_to_end = distance_x[n]

second_case = start_to_y + y_to_x + x_to_end

answer = min(first_case, second_case)

if answer >= INF:
    print("-1")
else:
    print(answer)