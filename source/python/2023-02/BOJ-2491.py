import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
arr = list(map(int, read().split()))

increase = True

dp_inc = [0 for _ in range(len(arr))]
dp_dec = [0 for _ in range(len(arr))]
dp_inc[0] = 1
dp_dec[0] = 1

for i in range(1, len(arr)):
    if arr[i] >= arr[i-1]:
        dp_inc[i] += dp_inc[i-1] + 1
    else:
        dp_inc[i] = 1  
    
    if arr[i] <= arr[i-1]:
        dp_dec[i] += dp_dec[i-1] + 1
    else:
        dp_dec[i] = 1

print(max(max(dp_inc), max(dp_dec)))