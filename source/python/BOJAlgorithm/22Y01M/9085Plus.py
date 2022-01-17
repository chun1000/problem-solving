#브론즈, reduce 함수는 filter, map과 다르게 functools에 포함되어있다.

import sys
from functools import reduce
read = sys.stdin.readline

T = int(read())
for _ in range(T):
    N = int(read())
    nums = list(map(int, read().split()))
    print(reduce(lambda acc, cur: acc + cur, nums))