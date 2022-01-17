import sys
from collections import deque
import heapq
read = sys.stdin.readline
write = sys.stdout.write

n, k = map(int, read().split())

difs = [2, 1, -1]

queue = []
queue.append((0, n))
visit = set()
visit.add(n)
while queue:
    cur_time, cur_pos = heapq.heappop(queue)

    if cur_pos == k:
        break

    for dif in difs:
        if dif == 2:
            new_pos = cur_pos*2
            if new_pos < 0 or new_pos > 200000:
                continue
            if new_pos in visit:
                continue
            visit.add(new_pos)
            heapq.heappush(queue, (cur_time, new_pos))
        else:
            new_pos = dif + cur_pos
            if new_pos < 0 or new_pos > 200000:
                continue
            if new_pos in visit:
                continue
            visit.add(new_pos)
            heapq.heappush(queue, (cur_time+1, new_pos))
        
print(cur_time)