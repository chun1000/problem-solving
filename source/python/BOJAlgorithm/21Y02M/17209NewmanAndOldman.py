import sys
read = sys.stdin.readline
write = sys.stdout.write

n = int(read())

report_info = [[False for _ in range(n)] for _ in range(n)]

for x in range(n):
    new_line = list(read()[:-1])
    for y in range(n):
        if new_line[y] == '1':
            report_info[x][y] = True
            report_info[y][x] = True
#입력을 받아서 양방향으로 바꿈.

visit = set()
total_min_new_num = 0

for x in range(n):
        if (x, 'n') not in visit:
            #방문하지 않은 정점을 기준으로 DFS를 이용해서 연결된 노드들을 탐색을 시작한다.
            stack = [(x, 'n')]
            visit.add((x, 'n'))
            new_num_with_new_start = 0
            #탐색을 시작하는 노드가 새내기인 경우.
            while stack:
                cur_x, new_or_old = stack.pop()
                next_new_or_old = ''
                
                if new_or_old == 'n':
                    new_num_with_new_start += 1
                    next_new_or_old = 'o'
                else:
                    next_new_or_old = 'n'
                #현재 노드가 새내기라면 새내기의 숫자가 1 더해진다. 그리고 다음 노드는 무조건 헌내기이다.
                #현재 노드가 헌내기라면 연결된(신고하거나 신고받은) 다음 노드는 무조건 새내기이다.

                for new_pos in range(n):
                    if report_info[cur_x][new_pos] and (new_pos, next_new_or_old) not in visit:
                        visit.add((new_pos, next_new_or_old))
                        stack.append((new_pos, next_new_or_old))
                        #방문하지 않았으면서 연결된 모든 노드들을 스택에 추가한다.
            
            stack = [(x, 'o')]
            visit.add((x, 'o'))
            new_num_with_old_start = 0
            #탐색을 시작하는 노드가 헌내기인 경우. 아래 코드는 new_num_with_old_start(old로 시작할 경우 새내기의 숫자)를 이용하는 것 빼고는 코드가 위와 완전히 같음.

            while stack:
                cur_x, new_or_old = stack.pop()
                next_new_or_old = ''
                
                if new_or_old == 'n':
                    new_num_with_old_start += 1
                    next_new_or_old = 'o'
                else:
                    next_new_or_old = 'n'

                for new_pos in range(n):
                    if report_info[cur_x][new_pos] and (new_pos, next_new_or_old) not in visit:
                        visit.add((new_pos, next_new_or_old))
                        stack.append((new_pos, next_new_or_old))
            
            total_min_new_num += min(new_num_with_new_start, new_num_with_old_start)
            #서로 연결된 그래프에서 헌내기로 시작하는 경우/새내기로 시작하는 경우 중에 새내기의 수가 더 작은 쪽을 total에 더한다.

print(n - total_min_new_num)
#전체 학생 수 - 새내기의 최소 수.
                




