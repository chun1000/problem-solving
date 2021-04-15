import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write


def print_pass(visit, n, k):
    my_stack = [k]
    idx = k

    while idx != n:
        my_stack.append(visit[idx])
        idx = visit[idx]

    while my_stack:
        print(my_stack.pop(), end=' ')




def my_input():
    n, k = map(int, read().split())
    return n, k



def my_solution(n, k):
    my_queue = deque()
    visit = [-1 for _ in range(100005)]
    my_queue.append((n, 0))
    visit[n] = n
    ans_depth = -1

    difs = [2, 1, -1]


    while my_queue:
        cur_node, cur_depth = my_queue.popleft()

        if cur_node == k:
            ans_depth = cur_depth
            break

        for dif in difs:
            if dif == 2:
                new_node = cur_node*2
            else:
                new_node = cur_node + dif

            if new_node < 0 or new_node >= 100005:
                continue

            if visit[new_node] != -1:
                continue
            
            visit[new_node] = cur_node
            my_queue.append((new_node, cur_depth + 1))
    

    print(ans_depth)
    print_pass(visit, n, k)



n, k = my_input()
my_solution(n, k)




