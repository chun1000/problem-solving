import sys
read = sys.stdin.readline
write = sys.stdout.write

num_list = []
max_num = 0
while True:
    n = int(read())
    if n == 0:
        break
    num_list.append(n)
    max_num = max(max_num, n)

dp = [1 for _ in range(max_num + 1)]

for i in range(2, max_num+1):
    dp[i] = dp[i-1] + i

for item in num_list:
    write(str(dp[item]) + '\n')