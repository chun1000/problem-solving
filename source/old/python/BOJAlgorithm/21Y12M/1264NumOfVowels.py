import sys
import re
read = sys.stdin.readline
write = sys.stdout.write

p = re.compile("a|e|i|o|u", re.IGNORECASE)

while True:
    input_line = read()
    if input_line == "#\n":
        break
    print(len(p.findall(input_line)))
    
    