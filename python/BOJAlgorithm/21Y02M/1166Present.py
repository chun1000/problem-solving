import sys
read = sys.stdin.readline
write = sys.stdout.write

n, l, w, h = map(int, read().split())

left = 0
right = min(l, w, h)

for i in range(10000):
    mid = (left + right) / 2
    if ((l//mid)*(w//mid)*(h//mid)) >= n:
        left = mid
    else:
        right = mid


print('%.10f' % mid)
