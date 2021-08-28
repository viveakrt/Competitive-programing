#https://codeforces.com/problemset/problem/318/A
n,i=map(int, input().split(" "))
r=0
if n%2==0:
    if i<=n/2 :
        r=i+i-1
    else:
        i=i-n/2
        r=i*2
else:
    if i<=(n+1)/2:
        r=i+i-1
    else:
        i=i-(n+1)/2
        r=i*2
print(int(r))