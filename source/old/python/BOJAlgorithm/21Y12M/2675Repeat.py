#맵 함수 연습

import sys
read = sys.stdin.readline
write = sys.stdout.write

T = int(read())

for _ in range(T):
    num, input_string = read().split()
    num = int(num)
    
    ans = tuple(map(lambda x: x*num, list(input_string)))
    for item in ans:
        write(item)
    write("\n")