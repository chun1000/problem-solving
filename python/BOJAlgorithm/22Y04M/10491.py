#bronze2, ReExp 

import sys
read = sys.stdin.readline
write = sys.stdout.write

import re



p = re.compile(r'problem', re.IGNORECASE)

while True:
    input_line = read()

    if input_line == "":
        break
    
    if p.search(input_line):
        write("yes\n")
    else:
        write("no\n")