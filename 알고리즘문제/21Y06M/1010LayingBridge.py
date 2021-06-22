import sys
import math
read = sys.stdin.readline
write = sys.stdout.write

T = int(read())

for _ in range(T):
    n, m = map(int, read().split())
    print(math.comb(m, n))

#math.comb는 파이썬의 버전을 확인하고 사용해야함.
#낮은 버전이면 사용할 수 없음.