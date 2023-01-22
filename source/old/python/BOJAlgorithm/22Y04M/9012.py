import re
import sys

read = sys.stdin.readline
write = sys.stdout.write

T = int(read())

for _ in range(T):
    input_line = read()[:-1]
    old_line = "none"
    while old_line != input_line:
        old_line = input_line
        input_line = re.sub("\(\)", "", input_line)
    if input_line == "":
        write("YES\n")
    else:
        write("NO\n")
