def solution(n, times):
    answer = 100000000000000
    min_val = 0
    max_val = 100000000000000
    
    while min_val <= max_val:
        mid_val = (min_val + max_val) // 2     
        mid_n = 0
        for time in times:
            mid_n += mid_val // time

        if mid_n >= n:
            max_val = mid_val - 1
            if  answer <= mid_val:
                answer = mid_val
        else:
            min_val = mid_val + 1
    return answer