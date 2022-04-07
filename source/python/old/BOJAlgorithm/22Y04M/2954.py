import sys
import re

read = sys.stdin.readline
write = sys.stdout.write

input_string = read()

vowels = ['a', 'e', 'i', 'o', 'u']

for vowel in vowels:
    input_string = re.sub(vowel + "p" + vowel, vowel, input_string)


write(input_string)
