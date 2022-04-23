import sys
from functools import reduce
read = sys.stdin.readline
write = sys.stdout.write
import re
p = re.compile(r'[\d]+')

N = int(read())
input_line = read()

hidden_nums = p.findall(input_line)
ans = 0

if len(hidden_nums) > 0:
    hidden_nums[0] = int(hidden_nums[0])
    ans = reduce(lambda x, y: x + int(y), hidden_nums)

write(str(ans))