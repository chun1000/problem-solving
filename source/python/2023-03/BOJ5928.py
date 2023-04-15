import sys
import math
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
N = int(math.sqrt(N))

print("The largest square has side length {0}.".format(N))