import sys
read = sys.stdin.readline
write = sys.stdout.write

while True:
    M, F = map(int, read().split())
    if M == 0 and F == 0:
        break
    write(str(M+F)+"\n")
