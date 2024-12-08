import sys
read = sys.stdin.readline
write = sys.stdout.write

A = int(read())
B = int(read())

write("{0}\n{1}".format(((A+B)//2), ((A-B)//2)))