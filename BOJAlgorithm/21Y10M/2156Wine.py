import sys
read = sys.stdin.readline
write = sys.stdout.write


n = int(read())
arr = []
for _ in range(n):
    arr.append(int(read()))

dp = [0 for _ in range(n)]


dp[0] = arr[0]
if n > 1:
    dp[1] = arr[0] + arr[1]
if n > 2:
    dp[2] = arr[0] + arr[2]

for i in range(3, n):
    dp[i] = max(dp[i-3] + arr[i-1] + arr[i], dp[i-2] + arr[i])
    dp[i] = max(dp[i-1], dp[i])

print(dp[n-1])