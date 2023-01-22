import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write

def is_connected(adjacency_list, n):
    stack = []
    visit = set()
    all_node = set()

    for i in range(1, n+1):
        all_node.add(i)

    visit.add(1)
    for item in adjacency_list[1]:
        if item != -1:
            stack.append(item)
            visit.add(item[1])
    
    while stack:
        cur_weight, cur_node = stack.pop()

        for item in adjacency_list[cur_node]:
            if item == -1:
                continue

            new_weight, new_node = item

            if new_node not in visit:
                visit.add(new_node)
                stack.append((new_weight, new_node))

    if visit == all_node:
        return True
    else:
        return False



def delete_target_node(adjacency_list, n, target):
    target_weight, target_node = target
    target_dest_node = -1

    for i in range(len(adjacency_list[target_node])):
        if adjacency_list[target_node][i] == -1:
            continue
        item_weight, item_node = adjacency_list[target_node][i]
        
        if item_weight == target_weight:
            target_dest_node = item_node
            adjacency_list[target_node][i] = -1
            break
    
    for i in range(len(adjacency_list[target_dest_node])):
        if adjacency_list[target_dest_node][i] == -1:
            continue
        item_weight, item_node = adjacency_list[target_dest_node][i]

        if item_weight == target_weight:
            adjacency_list[target_dest_node][i] = -1
            break

            



n, m, k = map(int, read().split())
adjacency_list = [[] for _ in range(n+1)]
delete_list = []
#(weight, dest), -1: removed

for weight in range(1, m+1):
    u, v = map(int, read().split())
    delete_list.append((weight, v))
    adjacency_list[u].append((weight, v))
    adjacency_list[v].append((weight, u))

for i in range(k):
    if not is_connected(adjacency_list, n):
        write("0 ")
        continue

    queue = []
    visit = set()

    visit.add(1)

    for item in adjacency_list[1]:
        if item == -1:
            continue
        heapq.heappush(queue, item)

    total_weight = 0

    while queue:
        cur_weight, cur_node = heapq.heappop(queue)

        if cur_node not in visit:

            total_weight += cur_weight
            visit.add(cur_node)

            for item in adjacency_list[cur_node]:
                if item == -1:
                    continue
                new_weight, new_node = item
                if new_node not in visit:
                    heapq.heappush(queue, item)
    write(str(total_weight) + " ")
    delete_target_node(adjacency_list, n, delete_list[i])
    
    