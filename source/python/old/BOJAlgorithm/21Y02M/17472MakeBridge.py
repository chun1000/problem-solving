import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write


class Disjointset:
    def __init__(self, size):
        self.data = [i for i in range(size)]
    
    def find(self, n):
        if n == self.data[n]:
            return n
        
        self.data[n] = self.find(self.data[n])
        return self.data[n]

    #u가 v를 루트로 합쳐진다.
    def union(self, u, v):
        u = self.find(u)
        v = self.find(v)

        if u == v:
            return
        self.data[u] = v


def get_bridge_info(start, board, n, m, graph_info):
    cur_x, cur_y = start
    cur_island_number = board[cur_x][cur_y]
    bridge_length = 0
    dest = -1

    difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

    for dif in difs:
        while True:
            cur_x += dif[0]
            cur_y += dif[1]

            #보드 밖으로 나간 경우
            if cur_x < 0 or cur_y < 0 or cur_x >= n or cur_y >= m:
                bridge_length = 0
                break
            
            #같은 섬인 경우
            if board[cur_x][cur_y] == cur_island_number:
                bridge_length = 0
                break
            
            #목적지를 찾은 경우
            if board[cur_x][cur_y] != 0:
                dest = board[cur_x][cur_y]
                break

            bridge_length += 1
        if bridge_length > 1:
            graph_info.append((bridge_length, cur_island_number, dest))
            graph_info.append((bridge_length, dest, cur_island_number))
            #(cost, start, dest)




def island_numbering_by_using_dfs(start, island_num, visit, board, n, m):
    stack = [start]
    visit.add(start)
    difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

    while stack:
        cur_x, cur_y = stack.pop()
        board[cur_x][cur_y] = island_num

        for dif in difs:
            new_x = cur_x + dif[0]
            new_y = cur_y + dif[1]

            if new_x < 0 or new_y < 0 or new_x >= n or new_y >= m:
                continue
            if (new_x, new_y) in visit:
                continue
            if board[new_x][new_y] == 0:
                continue
            
            stack.append((new_x, new_y))
            visit.add((new_x, new_y))



n, m = map(int, read().split())
board = []

for _ in range(n):
    input_line = list(map(int, read().split()))
    board.append(input_line)

#MST를 돌리려면 그래프부터 만들어야함.
#DFS를 이용해서 board의 섬에 노드 번호를 매기기


visit = set()

island_number = 1
for x in range(n):
    for y in range(m):
        if ((x, y) not in visit) and (board[x][y] != 0):
            start = (x, y)
            island_numbering_by_using_dfs(start, island_number, visit, board, n, m)
            island_number += 1


#각 섬에서 직선으로 선을 뻗어서 다리 길이를 그래프 형태로 저장하기.
#board를 순회해서 섬인 것을 찾는다.
#섬의 번호 x에서 상하좌우로 0인 공간에 다리를 뻗는다.
#만약 다른 번호 y가 나오면 그래프 정보에 저장한다. 같은 번호는 아무런 행동도 하지 않는다.

visit = set()
graph_info = []

for x in range(n):
    for y in range(m):
        if board[x][y] != 0:
            get_bridge_info((x, y), board, n, m, graph_info)


#만들어진 그래프로 MST를 돌림
queue = []
disjoint = Disjointset(island_number+1)
total_cost = 0
disjoint_count = 0

for item in graph_info:
    heapq.heappush(queue, item)

while queue:
    cur_weight, cur_start, cur_dest = heapq.heappop(queue)

    if disjoint.find(cur_start) == disjoint.find(cur_dest):
        pass
    else:
        total_cost += cur_weight
        disjoint_count += 1
        disjoint.union(cur_start, cur_dest)

#귀찮아서 연결 안되는 섬이 있는지는 이걸로 체크함... 다른 방법 권장
if disjoint_count + 2 != island_number:
    print("-1")
else:
    print(total_cost)