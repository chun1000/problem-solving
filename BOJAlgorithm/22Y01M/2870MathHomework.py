#실버

import sys
import re
read = sys.stdin.readline
write = sys.stdout.write

p = re.compile("[0-9]+")

N = int(read())
nums = []

for _ in range(N):
    input_line = read()
    nums += list(map(int, p.findall(input_line)))
nums = sorted(nums)

for item in nums:
    write(str(item) + "\n")
