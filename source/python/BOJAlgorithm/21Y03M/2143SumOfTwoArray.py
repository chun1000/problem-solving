import sys
from bisect import bisect_left, bisect_right
read = sys.stdin.readline
write = sys.stdout.write



def find_a_num_of_x(arr, x):
    right = bisect_right(arr, x)
    left = bisect_left(arr, x)
    return right - left
#바이너리 서치의 특정값이 나오는 가장 왼쪽, 오른쪽 인덱스를 빼서, 특정 값이 리스트에 몇 개 들어있는지 반환하는 함수. 



t = int(read())
n = int(read())
arr_a = list(map(int, read().split()))
m = int(read())
arr_b = list(map(int, read().split()))

a_sum_arr = []
b_sum_arr = []

for i in range(n):
    sum_of_num = 0
    for j in range(i, n):
        sum_of_num += arr_a[j]
        a_sum_arr.append(sum_of_num)

for i in range(m):
    sum_of_num = 0
    for j in range(i, m):
        sum_of_num += arr_b[j]
        b_sum_arr.append(sum_of_num)


b_sum_arr.sort()
#binary_search를 사용하기 위해서 b는 미리 소팅한다.

answer = 0

for item in a_sum_arr:
    #t에서 a의 구간합을 빼고 해당 값이 b의 구간합에서 몇 개 존재하는지 파악해서 덧셈.
    dif = t - item
    answer += find_a_num_of_x(b_sum_arr, dif)

print(answer)
    