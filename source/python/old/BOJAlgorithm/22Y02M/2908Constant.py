#Bronze
import sys
read = sys.stdin.readline
write = sys.stdout.write

A, B = map(list, read().split())

A.reverse()
B.reverse()

if(A > B):
    print("".join(A))
else:
    print("".join(B))