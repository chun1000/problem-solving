import sys
import re
read = sys.stdin.readline
write = sys.stdout.write

p = re.compile(r'nemo', re.IGNORECASE)

while True:
    input_line = read()
    if input_line == "EOI\n":
        break
    ans = p.search(input_line)
    if ans:
        write("Found\n")
    else:
        write("Missing\n")
