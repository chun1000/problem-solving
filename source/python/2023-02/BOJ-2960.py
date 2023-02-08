import math
import sys
read = sys.stdin.readline
write = sys.stdout.write



N, K = map(int, read().split())

count = 0
sieve = [False for _ in range(N+1)]
sieve[0] = True 
sieve[1] = True

for i in range(2, N+1):
    if sieve[i]:
        continue
    for j in range(i, N+1, i):
        if not sieve[j]:
            sieve[j] = True
            count += 1
            if count == K:
                print(j)

