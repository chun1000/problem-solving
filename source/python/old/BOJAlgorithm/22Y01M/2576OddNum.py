#브론즈, 필터와 리듀스 연습

import sys
from functools import reduce
read = sys.stdin.readline
write = sys.stdout.write

nums = []

for _ in range(7):
    nums.append(int(read()))

nums = list(filter(lambda x: x % 2 != 0, nums))

if len(nums) == 0:
    print("-1")
else:
    print(reduce(lambda acc, cur: acc + cur, nums, 0))
    print(reduce(lambda acc, cur: cur if cur < acc else acc, nums, 999))