import sys
read = sys.stdin.readline
write = sys.stdout.write
MAX_VAL = 100000

n = int(read())
#1, 2, 5, 7 동전

dp = [0 for _ in range(n+1)]

dp[0] = 0

for i in range(1, n+1):
    coin_one = MAX_VAL
    coin_two = MAX_VAL
    coin_five = MAX_VAL
    coin_seven = MAX_VAL
    if i >= 1:
        coin_one = dp[i-1] + 1
    if i >= 2:
        coin_two = dp[i-2] + 1
    if i>= 5:
        coin_five = dp[i-5] + 1
    if i >= 7:
        coin_seven = dp[i-7] + 1
    #5원은 3원(i-2)에서 2원짜리 하나를 더해서 만들 수 있음.
    #이러한 5가지 경우 중 가장 min_val을 구하면 됨.

    dp[i] = min(coin_one, coin_two, coin_seven, coin_five)

print(dp[n])