#골드 문제. RE로 대충 풀면 시간초과.
import sys
read = sys.stdin.readline
write = sys.stdout.write


input_string = read()[:-1]
bomb = list(read()[:-1])

stack = []

for item in input_string:
    stack.append(item)
    if stack[-len(bomb):] == bomb:
        for _ in range(len(bomb)):
            stack.pop()
            
if stack:
    print("".join(stack))
else:
    print("FRULA")