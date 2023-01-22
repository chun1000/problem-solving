import sys
import re

read = sys.stdin.readline
write = sys.stdout.write

p = re.compile("[0-9]+")

input_string = read()


print(len(list(p.findall(input_string))))