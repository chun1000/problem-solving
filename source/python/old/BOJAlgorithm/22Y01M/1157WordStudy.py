from collections import defaultdict

input_line = input().upper()
my_hash = defaultdict(int)

my_hash['A'] = 0
my_hash['B'] = 0
#뒤에 if my_list[0][0] == my_list[1][0]에서 두개의 키를 비교하니까 키가 최소 2개는 존재해야함.

for item in input_line:
    my_hash[item] += 1
    
my_list = []
for key in my_hash.keys():
    my_list.append((my_hash[key], key))
    
my_list.sort(reverse=True)

if my_list[0][0] == my_list[1][0]:
    print("?")
else:
    print(my_list[0][1])