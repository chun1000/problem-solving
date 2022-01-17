#알파벳

import sys
read = sys.stdin.readline
write = sys.stdout.write

def make_alpha():
    return 0x0000000000000000000000000
#비트 마스킹의 초기값을 만드는 함수


def check_visit_alpha(bit_string, alphabet):
    idx = ord(alphabet) - ord('A')
    bit_string |= 1<<(idx)
    return bit_string
#비트 마스킹 스트링에서 특정 알파벳을 체크하는 함수


def is_visit(bit_string, alphabet):
    idx = ord(alphabet) - ord('A')
    alphabet_bit = make_alpha()
    alphabet_bit |= 1<<(idx)
    if alphabet_bit & bit_string == 0:
        return False
    else:
        return True
#비트 마스킹의 스트링에서 특정 알파벳이 체크됐는지 확인하는 함수.


#위 3종 함수는 자꾸 메모리 초과 떠서 비트마스킹 사용하려고 만듦.
#근데 안써도 통과할 듯.(이 문제는 BFS로 하면 메모리 초과로 통과 불가능)
#무조건 DFS로 해야지 할 수 있음.(BFS vs DFS 공간복잡도 문제)

r, c = map(int, read().split())
board = []
for _ in range(r):
    input_line = list(read()[:-1])
    board.append(input_line)
#입력 받기

cur_pos = (0, 0)
visit_alpha = make_alpha()
visit_alpha = check_visit_alpha(visit_alpha, board[0][0])
#초기 알파벳 체크 스트링

stack = []
stack.append((cur_pos, visit_alpha, 1))
#pos, visit, count
difs = [(1, 0), (-1, 0), (0, 1), (0, -1)]
max_count = 0

while stack:
    cur_pos, cur_visit_alpha, count = stack.pop()
    max_count = max(count, max_count) #DFS이므로 이런식으로 MAX 갱신.

    for dif in difs:
        new_pos = (cur_pos[0] - dif[0], cur_pos[1] - dif[1])

        if new_pos[0] < 0 or new_pos[1] < 0 or new_pos[0] >= r or new_pos[1] >= c:
            continue
        #좌표판 밖으로 나가면
        
        if is_visit(cur_visit_alpha, board[new_pos[0]][new_pos[1]]):
            continue
        #알파벳이 이미 체크되어있으면

        new_visit = check_visit_alpha(cur_visit_alpha, board[new_pos[0]][new_pos[1]])
        #알파벳 체크
        stack.append((new_pos, new_visit, count + 1))
        #스택 추가

print(max_count)