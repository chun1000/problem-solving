import sys
read = sys.stdin.readline
write = sys.stdout.write


def binary_search(integers, key):
    first = 0
    last = len(integers) - 1
    find = False

    while first <= last:
        mid = (first + last) // 2

        if integers[mid] == key:
            find = True
            break
        elif integers[mid] < key:
            first = mid + 1
        else:
            last = mid - 1
    return find


    
N = int(read())
integers = list(map(int, read().split()))

integers.sort()

M = int(read())
keys = list(map(int, read().split()))

for key in keys:
    find = binary_search(integers, key)
    if find:
        write("1\n")
    else:
        write("0\n")