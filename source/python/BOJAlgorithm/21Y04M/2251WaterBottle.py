import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write

def my_input():
    A, B, C = map(int, read().split())
    return A, B, C



def solve(A, B, C):
    a = 0
    b = 0
    c = C
    solution = []
    visit = set()
    my_queue = deque()
    my_queue.append((a, b, c))

    #A<->B, A<->C, B<->C
    #부을 때는 반드시 한쪽이 비거나 가득차야함.
    #한쪽이 비는 경우, A->B에서 a가 B-b보다 작거나 같을 때 -> a = 0, new_b = a+b
    #한쪽이 가득 차는 경우, A->B에서 a가 B-b보다 클 때 -> a = a - B + b , new_b = B

    while my_queue:
        cur_a, cur_b, cur_c = my_queue.popleft()

        if (cur_a, cur_b, cur_c) in visit:
            continue
        else:
            visit.add((cur_a, cur_b, cur_c))

        if cur_a == 0:
            solution.append(cur_c)
       
       #A->B
        if cur_a + cur_b <= B:
            my_queue.append((0, cur_a+cur_b, cur_c))
        else:
            my_queue.append((cur_a-B+cur_b, B, cur_c))

        #B->A
        if cur_b + cur_a <= A:
            my_queue.append((cur_a+cur_b, 0, cur_c))
        else:
            my_queue.append((A, cur_b-A+cur_a, cur_c))

        #B->C
        if cur_b + cur_c <= C:
            my_queue.append((cur_a, 0, cur_b+cur_c))
        else:
            my_queue.append((cur_a, cur_b-C+cur_c, C))
        
        #C->B !
        if cur_c + cur_b <= B:
            my_queue.append((cur_a, cur_b+cur_c, 0))
        else:
            my_queue.append((cur_a, B, cur_c-B+cur_b))

        #A->C
        if cur_a + cur_c <= C:
            my_queue.append((0, cur_b, cur_a+cur_c))
        else:
            my_queue.append((cur_a-C+cur_c, cur_b, C))

        #C->A
        if cur_c + cur_a <= C:
            my_queue.append((cur_a+cur_c, cur_b , 0))
        else:
            my_queue.append((A, cur_b , cur_c-A+cur_a))
    
    solution = sorted(solution)
    for item in solution:
        print(item, end=" ")


A, B, C = my_input()
solve(A, B, C)

