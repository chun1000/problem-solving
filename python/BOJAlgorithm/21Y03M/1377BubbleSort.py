import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())
integer_list = []

for i in range(n):
    integer_list.append((int(read()), i))

sorted_list = sorted(integer_list, key=lambda x: x[0] )


max_val = 0
for i in range(n):
    if sorted_list[i][1] - i > max_val:
        max_val = sorted_list[i][1] - i

print(max_val + 1)