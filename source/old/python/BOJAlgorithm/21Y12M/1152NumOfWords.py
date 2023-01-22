#첫 Regular Expression 활용

import sys
import re
read = sys.stdin.readline
write = sys.stdout.write


p = re.compile("[a-z]+", re.IGNORECASE)

input_str = read()

write(str(len(p.findall(input_str))))

