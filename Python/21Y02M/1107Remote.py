#깃 등재 타겟

import sys
read = sys.stdin.readline
write = sys.stdout.write

current_channel = 100
n = int(read())
m = int(read())
broken_btn = list(read().split())

broken_num = [False for _ in range(10)]
for item in broken_btn:
    broken_num[int(item)] = True
#속도를 위해서 해쉬 배열을 하나 선언함.

min_val = abs(n - 100)
#초기값은 100번 채널에서 n번으로 가는 것.

#모든 채널을 대상으로(다만 채널의 수는 n이 아니라 무한이라서 999999까지 검사함.)
for i in range(1000000):
    #n 채널까지 +나 - 버튼을 누르는 횟수가 최솟값이면
    # 해당 조건이 빈번하게 일어나지는 않기에, 시간 복잡도는 매우 낮을것임.
    if min_val > abs(i-n): 
        num_string = str(i)
        is_all_good = True
        for item in num_string:
            if broken_num[int(item)]:
                is_all_good = False
                break
        #버튼이 고장나서 접근할 수 있는지 검사한다.
        if is_all_good:
            min_val = min(min_val, abs(i-n)+len(num_string))
        #접근 가능한 버튼이면 구 최솟값과 현재 최솟값+숫자버튼 누르는 횟수 합산해서 비교.

print(min_val)
