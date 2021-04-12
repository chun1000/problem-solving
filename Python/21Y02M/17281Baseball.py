import sys
import copy
read = sys.stdin.readline
write = sys.stdout.write

order_set = []

def make_order(start, end, order):
    global order_set

    if start == end:
        new_order = copy.deepcopy(order)
        order_set.append(new_order)
        return
    
    for i in range(start, end+1):
        temp = order[start]
        order[start] = order[i]
        order[i] = temp

        make_order(start+1, end, order)

        temp = order[start]
        order[start] = order[i]
        order[i] = temp






def process_ru(ru, result):
    score = 0
    if result == 1:
        if ru[2] == 1:
            score += 1
            ru[2] = 0
        if ru[1] == 1:
            ru[2] = 1
            ru[1] = 0
        if ru[0] == 1:
            ru[1] = 1
        ru[0] = 1
        
    elif result == 2:
        if ru[2] == 1:
            ru[2] = 0
            score += 1
        if ru[1] == 1:
            score += 1
            ru[1] = 0
        if ru[0] == 1:
            ru[2] = 1
            ru[0] = 0
        ru[1] = 1
    elif result == 3:
        if ru[2] == 1:
            score += 1
            ru[2] = 0
        if ru[1] == 1:
            score += 1
            ru[1] = 0
        if ru[0] == 1:
            score += 1
            ru[0] = 0
        ru[2] = 1
    elif result == 4:
        if ru[2] == 1:
            score += 1
            ru[2] = 0
        if ru[1] == 1:
            score += 1
            ru[1] = 0
        if ru[0] == 1:
            score += 1
            ru[0] = 0
        score += 1
    return score
        


n = int(read())
board = []

for _ in range(n):
    input_list = list(map(int, read().split()))
    board.append(input_list)

order = [1, 2, 3, 4, 5, 6, 7, 8]
make_order(0, 7, order)


max_score = 0
for order in order_set:
    order = order[0:3] + [0] + order[3:]
    cur_inning = 0
    idx = 0
    out_count = 0
    score = 0
    ru = [0, 0, 0]
    while cur_inning < n:
        result = board[cur_inning][order[idx]]

        if result == 0:
            out_count += 1
        else:
            score += process_ru(ru, result)

        if out_count == 3:
            out_count = 0
            ru = [0, 0, 0]
            cur_inning += 1
        idx = (idx + 1) % 9
    max_score = max(score, max_score)

print(max_score)

#순열 푸는 방법 알아두기.
