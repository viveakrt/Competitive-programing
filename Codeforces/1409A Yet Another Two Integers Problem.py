# https://codeforces.com/problemset/problem/1409/A
for _ in range(int(input())):
    a,b = map(int,input().split())
    if a>b:
        rs = a-b
        if rs%10==0:
            rs //=10 
        else:
            rs = (rs//10) + 1
        print(rs)
    elif a<b:
        rs = b-a
        if rs%10==0:
            rs //=10 
        else:
            rs = (rs//10) + 1
        print(rs)
    else:
        print("0")