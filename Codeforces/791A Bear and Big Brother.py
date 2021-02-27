#https://codeforces.com/problemset/problem/791/A

a,b = map(int,input().split())
c=0
while(a<=b):
    c+=1
    a*=3
    b*=2

print(c)