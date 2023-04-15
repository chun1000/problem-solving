import sys
import math
read = sys.stdin.readline
write = sys.stdout.write

n1, n2, n12 = map(int, read().split())
write(str(int((n1+1)*(n2+1)/(n12+1)-1)))