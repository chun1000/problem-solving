#bronze

import sys
read = sys.stdin.readline
write = sys.stdout.write

N, X = map(int, read().split())

nums = list(map(int, read().split()))

nums = filter(lambda num : num < X, nums)

for num in nums:
    write(str(num) + ' ')
