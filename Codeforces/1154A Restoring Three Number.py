# https://codeforces.com/problemset/problem/1154/A
a,b,c,d=map(int,input().split())
m=max(a,b,c,d)
if(m==a):
    print(a-b,a-c,a-d)
elif(m==b):
    print(b-a,b-c,b-d)
elif(m==c):
    print(c-a,c-b,c-d)
else:
    print(d-a,d-b,d-c)