import sys
read = sys.stdin.readline
write = sys.stdout.write


input_string = read()[:-1]


if input_string[-5:] == "driip":
    write("cute")
else:
    write("not cute")

