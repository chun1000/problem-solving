import sys
read = sys.stdin.readline
write = sys.stdout.write

nums = list(map(int, read().split()))

flag = True
for item in nums:
    if item != 0 and item != 1:
        flag = False

if flag:
    print("S")
else:
    print("F")
