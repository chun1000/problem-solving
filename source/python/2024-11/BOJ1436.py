import sys
read = sys.stdin.readline
write = sys.stdout.write



def has_666(num: int):
    while num > 0:
        if num % 10 == 6 and (num // 10) % 10 == 6 and (num // 100) % 10 == 6:
            return True
        num = num // 10
    return False


N = int(read())



num = 0
cnt = 0
while True:
    if has_666(num):
        cnt += 1
    if cnt == N:
        print(num)
        break
    num += 1