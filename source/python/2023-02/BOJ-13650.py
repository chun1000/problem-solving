import sys
read = sys.stdin.readline
write = sys.stdout.write

arr = [0 for _ in range(9)]
visit = [False for _ in range(9)]
N = 0
M = 0
#전역변수



def print_arr():
    for i in range(M):
        write(str(arr[i]) + ' ')
    write('\n')
#출력 형식에 맞춰서 정답 출력



def dfs(cnt, num):
    if cnt == M:
        print_arr()
        return
    for i in range(num, N+1):
        if visit[i]: continue
        arr[cnt] = i
        visit[i] = True
        dfs(cnt+1, i+1)
        visit[i] = False
#dfs 실행부






N, M = map(int, read().split())
dfs(0, 1)