#BOJ Silver 4, Queue
import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

my_queue = deque()

for i in range(1, N+1):
    my_queue.append(i)

while len(my_queue) > 1:
    number = my_queue.popleft()
    number = my_queue.popleft()
    my_queue.append(number)

print(my_queue.popleft())