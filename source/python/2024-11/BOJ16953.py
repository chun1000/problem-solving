import sys
read = sys.stdin.readline
write = sys.stdout.write

from collections import deque

visit = set()
q = deque()

A, B = map(int, read().split())

num = -1

q.append((A, 1))
while True:
    if len(q) == 0:
        print(-1)
        break

    num, cnt = q.pop()
    if num > B:
        continue

    if num == B:
        print(cnt)
        break
    
    q.append((num*2, cnt + 1))
    q.append((num*10+1, cnt + 1))
