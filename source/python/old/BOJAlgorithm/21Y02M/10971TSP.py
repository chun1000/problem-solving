import sys
import copy
read = sys.stdin.readline
write = sys.stdout.write


def backtracking(w, n, row , cost, check, depth):
    if row == 0 and depth == n:
            return cost
    #모든 도시의 수 만큼 순회했고, 첫번째 도시에 도달한 경우
    
    if depth != 0 and row == 0:
        return 10000000000
    #모든 도시를 순회하지 않았고, 출발하기 이전도 아닌데, 첫 번째 도시에 다시 되돌아온경우 INF를 반환.(가지치기 안하면 시간초과 뜸)

    new_cost = [10000000000]

    for i in range(n):
        if not check[i] and w[row][i] != 0:
            new_check = copy.deepcopy(check)
            new_check[i] = True
            new_cost.append(backtracking(w, n, i, cost + w[row][i], new_check, depth + 1))
        # 0이 아니고, 방문한 도시가 아니면 다른 도시를 재귀적으로 방문하여 새로운 값을 얻는다.

    return min(new_cost)
    #얻은 값 중에 최소값을 반환한다.


n = int(read())

w = [[] for _ in range(n)]

for i in range(n):
    nums = map(int, read().split())
    for item in nums:
        w[i].append(item)

check = [False for _ in range(n)]



print(backtracking(w, n, 0, 0, check, 0))

