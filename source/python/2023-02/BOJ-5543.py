import sys
import heapq
read = sys.stdin.readline
write = sys.stdout.write

bugers = []
drinks = []

for _ in range(3):
    bugers.append(int(read()))
for _ in range(2):
    drinks.append(int(read()))

print(min(bugers) + min(drinks) - 50)