"""
"""
import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write

n, w, L = map(int, read().split())
trucks = list(map(int, read().split()))

my_queue = deque([0 for _ in range(w)])
bridge_weight = 0
idx = 0
t = 0

while idx < len(trucks):
    pop_weight = my_queue.popleft()
    bridge_weight -= pop_weight

    if bridge_weight + trucks[idx] <= L:
        my_queue.append(trucks[idx])
        bridge_weight += trucks[idx]
        idx += 1
    else:
        my_queue.append(0)
    
    t += 1

print(t+w)
