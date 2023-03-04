import sys
read = sys.stdin.readline
write = sys.stdout.write

T = int(read())

for _ in range(T):
    num, unit = read().split()
    num = float(num)

    trans_num = 0
    trans_unit = ""

    if unit == "kg":
        trans_unit = "lb"
        trans_num = 2.2046
    elif unit == "lb":
        trans_unit = "kg"
        trans_num = 0.4536
    elif unit == "l":
        trans_unit = "g"
        trans_num = 0.2642
    else:
        trans_unit = "l"
        trans_num = 3.7854  
    print("%.4f %s" % (round(num*trans_num, 4), trans_unit))