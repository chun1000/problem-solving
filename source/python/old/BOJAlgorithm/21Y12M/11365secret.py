#브론즈 2

import sys
read = sys.stdin.readline
write = sys.stdout.write

while True:
    input_line = read()[:-1]
    
    if input_line == "END":
        break
    write(input_line[::-1])
    write("\n")