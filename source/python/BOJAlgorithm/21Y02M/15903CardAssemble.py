import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write

n, m = map(int, read().split())
num_list = list(map(int, read().split()))

heapq.heapify(num_list)

for _ in range(m):
    x = heapq.heappop(num_list)
    y = heapq.heappop(num_list)
    xy = x + y
    heapq.heappush(num_list, xy)
    heapq.heappush(num_list, xy)
#힙은 항상 최솟값을 넣고 뺄 수 있음. 넣고 뺄 때 때 O(lg(n))

print(sum(num_list))