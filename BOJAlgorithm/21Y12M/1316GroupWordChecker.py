#실버5 문자열 문제

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
ans = N
before = '@'

for _ in range(N):
    input_string = read()
    alphabets = set()
    for item in input_string:
        if before != item and item in alphabets:
            ans -= 1
            break
        else:
            alphabets.add(item)
        before = item

print(ans)