import sys
from collections import deque
read = sys.stdin.readline
write = sys.stdout.write


def rotation_right(position, n):
    return (position + 1)% (n*2)
#벨트를 한칸 회전시킴.

def rotation_left(position, n):
    if position - 1 == -1:
        return (n*2) -1
    else:
        return position - 1

n, k = map(int, read().split())

convey_durability = list(map(int, read().split()))
down_location = len(convey_durability)//2 - 1
up_location = 0

break_belt_num = 0
queue = deque()
my_set = set() 
level = 1

while True:
    #벨트가 한칸 회전한다. 큐에 있는 로봇의 칸은 변함이 없음.(칸 째로 움직이므로)
    up_location = rotation_left(up_location, n)
    down_location = rotation_left(down_location, n)

    #로봇이 내려가는 위치에 있으면 내려간다. 내구성 감소는 없다.
    if queue and queue[0] == down_location:
        robot = queue.popleft()
        my_set.remove(robot)
    
    #가장 먼저 벨트에 올라간 로봇부터, 벨트가 회전하는 방향으로 한 칸이동한다.
    for i in range(len(queue)):
        #이동 가능한 경우: 이동하려는 칸에 로봇이 없음. 그 칸의 내구도가 1 이상.
        if rotation_right(queue[i], n) not in my_set and convey_durability[rotation_right(queue[i], n)] >= 1:
            my_set.remove(queue[i])
            queue[i] = rotation_right(queue[i], n)
            my_set.add(queue[i])
            convey_durability[queue[i]] -= 1
            if convey_durability[queue[i]] == 0:
                break_belt_num += 1
                
    #로봇이 내려가는 위치에 있으면 내려간다.
    if queue and queue[0] == down_location:
        robot = queue.popleft()
        my_set.remove(robot)
  

    #올라가는 위치에 로봇이 없고, 내구도가 1이 상이면 로봇이 올라간다. 올라갈 때 내구도가 1 깎인다.
    if up_location not in my_set and convey_durability[up_location] >= 1:
        my_set.add(up_location)
        queue.append(up_location)
        convey_durability[up_location] -= 1
        if convey_durability[up_location] == 0:
                break_belt_num += 1

    #내구도가 0인 칸의 개수가 K개 이상이면 과정을 종료한다.
    if break_belt_num >= k:
        break    
    level += 1

print(level)