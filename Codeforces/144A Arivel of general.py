# https://codeforces.com/problemset/problem/144/A

n = int(input())
l = list(map(int, input().split()))

ma = max(l)
mi = min(l)
mai=l.index(ma)
for i in range(n):
    if l[i] == mi:
        mii = i

if mai < mii:
    rs = mai + (n-mii)-1
else:
    rs = mai + (n-mii) -2

print(rs)