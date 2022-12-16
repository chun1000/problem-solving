#브론즈 정규식

import sys
import re
read = sys.stdin.readline
write = sys.stdout.write

p = re.compile("FBI")
exists = False

for i in range(1, 6):
    input_line = read()
    if p.search(input_line) != None:
        write(str(i) + "\n")
        exists = True

if not exists:
    write("HE GOT AWAY!")
    