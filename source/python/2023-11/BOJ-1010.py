import sys
import math
read = sys.stdin.readline
write = sys.stdout.write

T = int(read())
for _ in range(T):
    N, M = map(int, read().split())
    if M > N: N, M = M, N
    print(math.comb(N, M))