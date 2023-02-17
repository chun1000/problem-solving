import sys
read = sys.stdin.readline
write = sys.stdout.write

ans = 0

board = list(map(int, read().split()))

def dfs(cnt, arr, correct):
    global ans
    if cnt == 10 and correct >= 5:
        ans += 1
        return
    for i in range(1, 6): 
        if cnt >= 2 and arr[cnt-1] == i and arr[cnt-2] == i:
            continue
        if correct < cnt - 5:
            continue
        arr[cnt] = i
        if i != board[cnt]:
            dfs(cnt+1, arr, correct)
        else:
            dfs(cnt+1, arr, correct+1)


arr = [0 for _ in range(10)]
dfs(0, arr, 0)

print(ans)
