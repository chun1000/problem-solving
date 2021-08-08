import sys
INF = 1000000000

read = sys.stdin.readline
write = sys.stdout.write


def get_solve():
    N, M, W = map(int, read().split())
    edge_info = []
    for _ in range(M):
        S, E, T = map(int, read().split())
        edge_info.append((S, E, T))
        edge_info.append((E, S, T))
        #도로는 양방향임.

    for _ in range(W):
        S, E, T = map(int, read().split())
        edge_info.append((S, E, -T))
        #웜홀은 시간이 반대로 흐르고 방향성이 있음.


    distance = [INF for _ in range(N+1)]
    distance[1] = 0
    has_minus_cycle = False;

    for i in range(N):
        for item in edge_info:
            a, b, c = item
            """
            if distance[a] == INF:
                continue
            넣으면 틀린다. 가지치기 절대 하지 말것.
            
            """
            

            if distance[a] + c < distance[b]:
                distance[b] = distance[a] + c
                if i == N-1:
                    has_minus_cycle = True

    if has_minus_cycle:
        print("YES")
    else:
        print("NO")


TC = int(read());

for _ in range(TC):
    get_solve()



