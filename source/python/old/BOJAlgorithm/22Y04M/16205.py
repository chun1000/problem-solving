import sys
import re
read = sys.stdin.readline
write = sys.stdout.write



N, input_string = read().split()
N = int(N)



if N == 2:
    #Snake
    words = re.findall(r'[a-zA-Z]+', input_string)
elif N == 3:
    words = re.findall(r'([A-Z][a-z]*)', input_string)
    #Pascal
    pass
else:
    words = re.findall(r'[a-z]+|[A-Z][a-z]*', input_string)
    #Camel



ans = ""
words[0] = words[0].lower()
for i in range(len(words)):
    if i != 0:
        words[i] = words[i][0].upper() + words[i][1:]
    ans += words[i]
ans = ans + "\n"
write(ans)



ans = ""
for word in words:
        ans += word.lower() + "_"
ans = ans[:-1] + "\n"
write(ans)



ans = ""
for word in words:
    ans += word[0].upper() + word[1:]
ans = ans + "\n"
write(ans)
        