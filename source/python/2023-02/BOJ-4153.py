import sys
read = sys.stdin.readline
write = sys.stdout.write

while True:
    a, b, c = map(int, read().split())
    if a == 0 and b == 0 and c == 0:
        break
    if a > b:
        a, b = b, a
    if b > c:
        b, c = c, b

    if a*a + b*b == c*c:
        write("right\n")
    else:
        write("wrong\n")