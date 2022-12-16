import sys
import re
read = sys.stdin.readline

input_string = read()
p = re.compile(read()[:-1])

print(len(p.findall(input_string)))
