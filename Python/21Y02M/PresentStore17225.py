import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write

a, b, n = map(int, read().split())

blue_queue = deque()
red_queue = deque()
order_queue = deque()

red_process = []
blue_process = []
last_time_blue = -1
last_time_red = -1

for _ in range(n):
    t, color, num = read().split()
    t = int(t)
    num = int(num)    
    
    if color == 'B':
        for i in range(0, num):
            t = max(t, last_time_blue)
            blue_queue.append(t+i*a)
        #시간대를 쭉 더하면서 큐에 넣는다.       
        last_time_blue = t + num*a
        #최근에 선물을 포장한 시간을 저장하고 주문이 들어온 시점과 비교해서 더 느린 시점에 작업을 시작하는 것으로 간주한다.
    else:
        for i in range(0, num):
            t = max(t, last_time_red)
            red_queue.append(t+i*b)
        last_time_red = t + num*b


present_num = 1
cur_time = 0

blue = blue_queue.popleft()
red = red_queue.popleft()

while True:
    if blue <= red:
        blue_process.append(present_num)
        present_num += 1
        if blue_queue:
            blue = blue_queue.popleft()
        else:
            red_process.append(present_num)
            present_num += 1
            while red_queue:
                red_process.append(present_num)
                present_num += 1
                red_queue.popleft()
            break
    else:
        red_process.append(present_num)
        present_num += 1
        if red_queue:
            red = red_queue.popleft()
        else:
            blue_process.append(present_num)
            present_num += 1
            while blue_queue:
                blue_process.append(present_num)
                present_num += 1
                blue_queue.popleft()
            break

            
write(str(len(blue_process)) + '\n')

for item in blue_process:
    write(str(item) + " ")
write("\n")

write(str(len(red_process)) + '\n')
for item in red_process:
    write(str(item) + " ")
write("\n")