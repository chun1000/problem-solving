import sys
read = sys.stdin.readline
write = sys.stdout.write
import re
input_line = read()
for i in range(ord('a'), ord('a') + 26):
    alpha = chr(i)
    input_line = re.sub(r'{0}{0}+'.format(alpha), alpha, input_line)
write(input_line)