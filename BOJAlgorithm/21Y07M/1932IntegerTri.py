import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())
tri_list = []
dp = []

for i in range(n):
    input_line = list(map(int, read().split()))
    tri_list.append(input_line)
    dp.append([0 for _ in range(i+1)])

#input 끝
dp[0][0] = tri_list[0][0]

for i in range(1, n):
    for j in range(i+1):
        left = -1
        if j-1 >= 0:
            left = dp[i-1][j-1]
        if j < i:
            right = dp[i-1][j]
        dp[i][j] = max(left, right) + tri_list[i][j]

print(max(dp[n-1]))