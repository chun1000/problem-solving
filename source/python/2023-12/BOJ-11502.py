import sys
import math
read = sys.stdin.readline
write = sys.stdout.write


def solve(sieve, K):
     for i in range(1001):
        for j in range(1001):
            for k in range(1001):
                if not sieve[i] or not sieve[j] or not sieve[k]:
                    continue
                if i + j + k == K:
                    write(f'{i} {j} {k}\n') 
                    return



sieve = [True for _ in range(1001)]
sieve[0] = False
sieve[1] = False

for i in range(2, int(math.sqrt(1000))+ 1):
    if sieve[i] == False:
        continue
    j = 2
    while i*j <= 1000:
        sieve[i*j] = False
        j += 1
#Get sieve

T = int(read())
for _ in range(T):
    K = int(read())
    solve(sieve, K)
   


