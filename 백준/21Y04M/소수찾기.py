import math

def find_prime_number(num):
    if num == 0 or num == 1:
        return False
        
    is_prime = True
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            is_prime = False
            break
    return is_prime


def dfs(cnt, numbers, select, my_set, length, my_string):
    if cnt == length:
        return
    
    for i in range(length):
        if select[i] == True:
            continue
        select[i] = True
        my_string += numbers[i]
        my_set.add(int(my_string))
        dfs(cnt+1, numbers, select, my_set, length, my_string)
        my_string = my_string[:-1]
        select[i] = False
    


def solution(numbers):
    numbers = list(numbers)
    length = len(numbers)
    select = [False for _ in range(length)]
    my_set = set()
    
    dfs(0, numbers, select, my_set, length, "")
    answer = 0

    for item in my_set:
        if find_prime_number(item):
            answer += 1
    
    return answer