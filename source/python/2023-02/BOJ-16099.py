import sys
read = sys.stdin.readline
write = sys.stdout.write


def solve():
    lt, wt, le, we = map(int, read().split())
    if lt*wt > le*we:
        write("TelecomParisTech\n")
    elif(lt*wt < le*we):
        write("Eurecom\n")
    else:
        write("Tie\n")



T = int(read())
for _ in range(T):
    solve()




