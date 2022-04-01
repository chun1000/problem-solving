#silver 소수 판정 문제. 에라토스테네스로 구하는 것이 효율적인지는 모르지만 학습을 위해서 에라토스테네스를 활용하였음.

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())

nums = list(map(int, read().split()))
nums.sort()

eratosthenes = [True for _ in range(nums[len(nums)-1]+1)]
eratosthenes[0] = False
eratosthenes[1] = False


for i in range(2, len(eratosthenes)):
    if eratosthenes[i] == False:
        continue
    for j in range(i+i, len(eratosthenes), i):
        eratosthenes[j] = False

ans = 0

for item in nums:
    if eratosthenes[item] == True:
        ans += 1

print(ans)