import sys
read = sys.stdin.readline
write = sys.stdout.write

line = ":fan::fan::fan:"

id = read()[:-1]

print(line)
print(":fan::{0}::fan:".format(id))
print(line)