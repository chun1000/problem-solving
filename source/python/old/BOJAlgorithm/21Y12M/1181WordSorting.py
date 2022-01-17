#Sort를 이용한 테크닉. 봐두면 굉장히 좋은 실버 문제.

import sys
read = sys.stdin.readline
write = sys.stdout.write

N = int(read())
words = set()

for _ in range(N):
    word = read()
    words.add((len(word), word))
    
words = list(words)
words.sort()

for item in words:
    write(item[1])