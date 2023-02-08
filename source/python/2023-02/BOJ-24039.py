import math
import sys
read = sys.stdin.readline
write = sys.stdout.write


def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)+1)):
        if num % i == 0:
            return False
    return True

N = int(read())
prev_prime = -1

for i in range(20000):
    if is_prime(i):
        if i*prev_prime > N:
            print(i*prev_prime)
            break
        else:
            prev_prime = i
