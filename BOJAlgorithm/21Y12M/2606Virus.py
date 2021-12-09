#이전에는 cpp로 풀었던 손풀기 문제
#오랜만에 하니까 잘 안된다.

import sys

read = sys.stdin.readline
write = sys.stdout.write

computer_num = int(read())
edge_num = int(read())

adjacency_list = [[] for _ in range(computer_num+1)]

for _ in range(edge_num):
    a, b = map(int, read().split())
    adjacency_list[a].append(b);
    adjacency_list[b].append(a);
    
visit = set()
visit.add(1)
my_stack = []
my_stack.append(1)

while my_stack:
    current_node = my_stack.pop()
    
    for next_node in adjacency_list[current_node]:
        if next_node in visit:
            continue
        my_stack.append(next_node)
        visit.add(next_node)

print(len(visit)-1)
