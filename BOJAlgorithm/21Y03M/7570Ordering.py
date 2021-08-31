import sys
read = sys.stdin.readline
write = sys.stdout.write


n = int(read())
board = map(int, read().split())
dp = [0 for _ in range(n+1)]

#예를 들어서 5 2 4 1 3 에서는 2 3을 가만히 두고 제외한 나머지를 앞이나 뒤로 옮기면 된다.
#따라서 가장 긴 증가하는 패턴의 길이를 찾고 전체에서 빼면 된다.
#근데 알고리즘 분류가 DP가 맞나?
for item in board:
    dp[item] = dp[item-1] + 1

print( n - max(dp))