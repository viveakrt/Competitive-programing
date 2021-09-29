# https://codeforces.com/problemset/problem/581/A
r,b = map(int,input().split())
if (r>b):
    print(b,(r-b)//2)
elif(b>r):
    print(r,(b-r)//2)
else:
    print(r,0)