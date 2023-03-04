import sys
read = sys.stdin.readline
write = sys.stdout.write


def get_sum_of_decomp(num):
    ret = 0
    while num != 0:
        ret += num % 10
        num = num // 10
    return ret



N = int(read())
flag = False
for i in range(1, 1000001):
    if i + get_sum_of_decomp(i) == N:
        print(i)
        flag = True
        break

if not flag:
    print(0)
