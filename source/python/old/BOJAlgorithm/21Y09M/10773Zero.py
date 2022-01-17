import sys
read = sys.stdin.readline
write = sys.stdout.write

k = int(read())

my_stack = []

for _ in range(k):
    input_line = int(read())
    if input_line == 0:
        my_stack.pop()
    else:
        my_stack.append(input_line)

print(sum(my_stack))