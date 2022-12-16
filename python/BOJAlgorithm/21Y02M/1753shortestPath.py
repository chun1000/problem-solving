import sys
from queue import PriorityQueue

read = sys.stdin.readline
write = sys.stdout.write
INF = 400000
queue = PriorityQueue()

V, E = map(int, read().split())
k = int(read())

#디스턴스 배열 과 인접 리스트
distance = [INF for _ in range(V+1)]
info_list = [[] for _ in range(V+1)]

#인접 리스트에 정보 넣기.
for _ in range(E):
    u, v, w = map(int, read().split())
    info_list[u].append((v, w))

 
distance[k] = 0
#시작 정점의 distance를 0으로 표현해줌.   

for i in range(1, V+1):
    queue.put((distance[i], i))
#큐에 모든 정점을 집어넣음

while not queue.empty():
    cur_dist, cur_node = queue.get()
    #큐에서 정점을 pop함.

    for item in info_list[cur_node]:
        if not item: 
            continue
        #해당 정점과 연결된 정점이 없는 경우

        v, w = item
        if distance[v] > distance[cur_node] + w:
            distance[v] = distance[cur_node] + w
            queue.put((distance[v], v))
        #크기 비교후 맞으면 queue에 삽입.
        

for i in range(1, V+1):
    if distance[i] == INF:
        write("INF\n")
    else:
        write(str(distance[i]) + "\n")
#출력
