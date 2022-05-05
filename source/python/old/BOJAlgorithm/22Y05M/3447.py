import sys
read = sys.stdin.readline
write = sys.stdout.write

import re
p = re.compile(r'BUG')

while True:
    line = read()
    if not line: break

    old_line = ""
    while old_line != line:
        old_line = line
        line = p.sub('', line)
    write(line)

