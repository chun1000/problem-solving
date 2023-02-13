import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

time_arr = [0]
precedence_arr = [[]]

for i in range(N):
    input_num = list(map(int, read().split()))
    time_arr.append(input_num[0])
    precedence_arr.append(input_num[2:])

dp = [0 for _ in range(N+1)]

for i in range(N+1):
        max_val = 0
        for idx in precedence_arr[i]:
            max_val = max(max_val, dp[idx])
        dp[i] = time_arr[i] + max_val

print(max(dp))