import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write



def my_input():
    N, M = map(int, read().split())
    adjacency_list = [[] for _ in range(N+1)]

    for _ in range(M):
        a_i, b_i = map(int, read().split())
        adjacency_list[a_i].append(b_i)
        adjacency_list[b_i].append(a_i)
    
    return N, M, adjacency_list



def my_solve(N, M, adjacency_list):
    my_queue = deque()
    visit = set()

    my_queue.append((1, 0))#(node, dist)
    visit.add(1)
    same_distance_barns = []
    same_distance_num = 0

    while my_queue:
        cur_node, cur_dist = my_queue.popleft()

        if cur_dist != same_distance_num:
            same_distance_barns = []
            same_distance_num = cur_dist
            same_distance_barns.append(cur_node)
        else:
            same_distance_barns.append(cur_node)

        for item in adjacency_list[cur_node]:
            if item in visit:
                continue
            
            visit.add(item)
            my_queue.append((item, cur_dist + 1))

    same_distance_barns.sort()
    print("{0} {1} {2}".format(same_distance_barns[0], same_distance_num ,len(same_distance_barns)))



N, M, adjacency_list = my_input()
my_solve(N, M, adjacency_list)

        