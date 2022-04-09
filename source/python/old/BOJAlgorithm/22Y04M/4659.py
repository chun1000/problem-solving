import sys
import re
read = sys.stdin.readline
write = sys.stdout.write



alphabet = {chr(i) for i in range(ord('a'), ord('a') + 26)}
vowels = {'a', 'e', 'i', 'o', 'u'}
consonants = alphabet - vowels
#for case 1

triple_vowel = "("
for vowel in vowels:
    triple_vowel += vowel + "|"
triple_vowel = (triple_vowel[:-1] + ")")*3

triple_consonant = "("
for consonant in consonants:
    triple_consonant += consonant + "|"
triple_consonant = (triple_consonant[:-1] + ")")*3
#for case 2

double_item = set()
for alpha in alphabet:
    double_item.add(alpha*2)
double_item.remove("ee")
double_item.remove("oo")
#for case 3

def is_acceptable(input_string):
    has_all_vowel = False
    for vowel in vowels:
        if vowel in input_string:
            has_all_vowel = True
    
    if not has_all_vowel:
        return False
    #case 1

    if re.search(triple_vowel, input_string):
        return False
    
    if re.search(triple_consonant, input_string):
        return False
    #case2
    
    for item in double_item:
        if item in input_string:
            return False
    #case 3
    
    return True




while True:
    input_string = read()[:-1]
    if input_string == "end":
        break
    if is_acceptable(input_string):
        write("<{0}> is acceptable.\n".format(input_string))
    else:
        write("<{0}> is not acceptable.\n".format(input_string))

