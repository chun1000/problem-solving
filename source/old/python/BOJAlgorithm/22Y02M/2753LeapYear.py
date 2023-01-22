#브론즈

import sys
read = sys.stdin.readline
write = sys.stdout.write

year = int(read())

if (year % 4 == 0) and (year % 100 != 0 or year % 400 == 0):
    write("1")
else:
    write("0")