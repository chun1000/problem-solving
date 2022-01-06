import sys
from functools import reduce
read = sys.stdin.readline

input_line = list(map(int, read().split()))
min_cook = reduce(lambda acc, cur : acc + cur, input_line)
 
input_line = list(map(int, read().split()))
man_sei = reduce(lambda acc, cur : acc + cur, input_line)

print(max(min_cook, man_sei))