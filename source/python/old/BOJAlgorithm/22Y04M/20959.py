import sys
import re
read = sys.stdin.readline
write = sys.stdout.write

input_line = read()

all_integer = re.findall(r'\d+', input_line)

my_set = set(all_integer)

write(str(len(my_set)))