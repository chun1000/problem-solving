import sys
read = sys.stdin.readline
write = sys.stdout.write

import re

quotation_pattern = re.compile(r'\"[\w\ ]+\"')


while True:
    line = read()

    if line == "END\n": break

    q = quotation_pattern.match(line)
    if not q: 
        write("not a quine\n")
        continue
    q_start, q_end = q.span()
    q = q.group()

    if line[q_end] != " ":
        write("not a quine\n")
        continue
    
    line = line[q_end+1:-1]
    
    if line != q[1:-1]:
        write("not a quine\n")
        continue
    write("Quine({0})\n".format(line))
    

