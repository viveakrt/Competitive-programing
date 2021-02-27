#https://codeforces.com/problemset/problem/546/A

k,n,w = map(int,input().split())
c=0
for i in range(w):
    c+=(i+1)*k

if(n>c):
    print(0)
else:
    print(c-n)