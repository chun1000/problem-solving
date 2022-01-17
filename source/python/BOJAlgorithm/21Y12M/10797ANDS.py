#필터 함수 연습

import sys
read = sys.stdin.readline
write = sys.stdout.write

one_digit = int(read())
cars = map(int, read().split())

res = tuple(filter(lambda x : x == one_digit, cars))

print(len(res))