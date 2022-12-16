#특색없는 브론즈

N = int(input())
current_val = N
count = 0

while True:
    first = current_val // 10
    second = current_val % 10
    current_val = second*10 + (first + second)%10
    count += 1
    if current_val == N:
        print(count)
        break

