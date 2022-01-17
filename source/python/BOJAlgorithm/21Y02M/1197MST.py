import sys
from queue import PriorityQueue

read = sys.stdin.readline
write = sys.stdout.write    

class Disjointset:
    def __init__(self, size):
        self.data = [i for i in range(size)]
    
    def find(self, n):
        if n == self.data[n]:
            return n
        
        self.data[n] = self.find(self.data[n])
        return self.data[n]

    #u가 v를 루트로 합쳐진다.
    def union(self, u, v):
        u = self.find(u)
        v = self.find(v)

        if u == v:
            return
        self.data[u] = v


V, E = map(int, read().split())
queue = PriorityQueue()
disjoint = Disjointset(V+1)
sum = 0

for _ in range(E):
    u, v, w = map(int, read().split())
    #주의: 편의상 weight가 가장 앞에 오며, 양방향 그래프 취급으로, edge를 2배만큼 사용.
    queue.put((w,u,v))
    queue.put((w,v,u))

while not queue.empty():
    current_weight, current_u, current_v = queue.get()

    if disjoint.find(current_u) == disjoint.find(current_v):
        pass
    else:
        sum += current_weight
        disjoint.union(current_u, current_v)
        


write(str(sum))


