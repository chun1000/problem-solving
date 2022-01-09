import sys
read = sys.stdin.readline
write = sys.stdout.write

input_line = read()[:-1]

position = 1

for char in input_line:
    if char == 'A' and position == 1:
        position = 2
    elif char == 'A' and position == 2:
        position = 1
    elif char == 'B' and position == 2:
        position = 3
    elif char == 'B' and position == 3:
        position = 2
    elif char == 'C' and position == 1:
        position = 3
    elif char == 'C' and position == 3:
        position = 1

print(position)