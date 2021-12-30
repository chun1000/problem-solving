import sys
import re
read = sys.stdin.readline
write = sys.stdout.write

len2_pattern = re.compile("c=|c-|d-|lj|nj|s=")
len3_pattern = re.compile("dz=|z=")

input_line = read().rstrip()
ans = len(input_line) - len(len2_pattern.findall(input_line)) 
z_pattern = list(len3_pattern.findall(input_line))

dz_len = len(list(filter(lambda x: x == "dz=", z_pattern)))
ans = ans - dz_len*2 - (len(z_pattern) - dz_len)

print(ans)