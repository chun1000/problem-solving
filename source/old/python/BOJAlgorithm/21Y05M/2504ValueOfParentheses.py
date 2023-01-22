"""
전형적으로 스택을 사용하는 문제.

try except가 급한대로 쓸만할 수도 있음.
except가 발생하지 않으면 if문과 비슷한 시간복잡도를 보임.
하지만 exception이 발생할시 0.01 usec -> 0.37 usec
정도의 시간복잡도 차이가 나는 것으로 보임.
(이 문제에서는 그정도까지 복잡도 차이가 나지는 않음)

런타임 에러가 3번 발생했는데
문제를 끝까지 안 읽어서 이상한 괄호쌍이 들어올 수 있다는 점을
간과하였음.
"""
import sys
read = sys.stdin.readline
write = sys.stdout.write


def get_input():
    input_list = list(read()[:-1])
    return input_list



def solve(input_list):
    try:
        my_stack = []
        for character in input_list:
            if character == '(':
                my_stack.append('(')
            elif character == ')':
                val = 0
                while True:
                    poping_item = my_stack.pop()
                    if poping_item != '(':
                        val += poping_item
                    else:
                        if val == 0: val = 1
                        my_stack.append(val*2)
                        break
            elif character == '[':
                my_stack.append('[')
            elif character == ']':
                val = 0
                while True:
                    poping_item = my_stack.pop()
                    if poping_item != '[':
                        val += poping_item
                    else:
                        if val == 0: val = 1
                        my_stack.append(val*3)
                        break
        my_stack_sum = sum(my_stack)
    except:
        my_stack_sum = 0

    print(my_stack_sum)



input_list = get_input()
solve(input_list)