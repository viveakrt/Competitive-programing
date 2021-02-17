#https://codeforces.com/problemset/problem/282/A
r=0
for _ in range(int(input())):
    s=input()
    if(s[0]=='-' or s[1]=='-' or s[2]=='-'):
        r-=1
    else:
        r+=1
print(r)