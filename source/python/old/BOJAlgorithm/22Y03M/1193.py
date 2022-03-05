#브론즈, 수학적 사고력 문제.
X = int(input())

line = 0
while X > line:
    X -= line
    line += 1

if line % 2 == 0:
    numerator = X
    denominator = line + 1 - X
else:
    numerator = line + 1 - X
    denominator = X

print(f'{numerator}/{denominator}')