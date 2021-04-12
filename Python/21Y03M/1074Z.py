import sys
read = sys.stdin.readline
write = sys.stdout.write

"""
4개의 구역으로 나눠서 재귀적으로 생각한다.
answer에 r, c가 속하는 구역의 시작점을 계속 누적해서 쌓는다.
0이 되는 순간 answer를 리턴한다.
r, c 는 사분면 시작점의 좌표만큼 빼서 좌표 보정을 해주어야 한다.
"""
def recursive_solution(n, r, c, answer):
    if n == 0:
        return answer
        #더 쪼갤 수 없음

    n_pow = 2**(n-1)
    
    if r < n_pow and c < n_pow:
        return recursive_solution(n-1, r, c, answer)
        #1사분면
    elif r <n_pow and c >= n_pow:
        return recursive_solution(n-1, r, c - n_pow, answer + n_pow**2)
        #2사분면
    elif r >= n_pow and c < n_pow:
        return recursive_solution(n-1, r - n_pow, c, answer + (n_pow**2)*2)
        #3사분면
    else:
        return recursive_solution(n-1, r - n_pow, c - n_pow, answer + (n_pow**2)*3)
        #4사분면


n, r, c = map(int, read().split())

print(recursive_solution(n, r, c, 0))
