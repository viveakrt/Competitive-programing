# https://codeforces.com/problemset/problem/750/A

n,k = map(int,input().split())
v = 240-k
s=0
c=0
for i in range(n):
    s+=(i+1)*5
    if v>=s:
        c+=1
    else:
        break
print(c)

