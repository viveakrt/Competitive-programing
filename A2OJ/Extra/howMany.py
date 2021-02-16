import re
def howMany(sentence) :
    str_list=re.split(r'[!?.,\d\s]\s*',sentence)
    while '' in str_list:
        str_list.remove('')
    return len(str_list)

s="he is a good programmer, he won 865 competitions, but sometimes he dont. What do you think? All test-cases should pass. Done-done?"
print(howMany(s))