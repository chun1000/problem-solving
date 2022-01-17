import sys

read = sys.stdin.readline
write = sys.stdout.write

def parsing(string):
    val = string.split()
    num = -1
    command = val[0]
    if len(val) == 2:
        num = int(val[1])
    return command, num


m = int(read())
s = 0b00000000000000000000

for _ in range(m):
    command, num = parsing(read())
    if command == "add":
        s = s | (1<< num)
    elif command == "remove":
        s = s & ~(1<<num)
    elif command == "check":
        if s&(1<<num) == 0:
            write("0\n")
        else:
            write("1\n")
    elif command == "toggle":
        s = s ^ (1<<num) #XOR
    elif command == "all":
        s = 0b111111111111111111111
    elif command == "empty":
        s = 0b00000000000000000000
    else:
        pass
