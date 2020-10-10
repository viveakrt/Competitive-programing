for _ in range(int(input())):
    n = int(input())
    s = input()
    p=0
    for i in range(n-1):
        if s[i]!='a' or s[i]!='e' or s[i]!='i' or s[i]!='o' or s[i]!='u':
            if s[i+1]=='a' or s[i+1]=='e' or s[i+1]=='i' or s[i+1]=='o' or s[i+1]=='u':
                p+=1
                i+=1
    print(p)
# import re
# T = int(input())
# for _ in range(T) :
#     n = int(input())
#     s = input()
#     print(len(re.findall(r'([^aeiou])([aeiou])',s)))