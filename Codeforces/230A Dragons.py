# https://codeforces.com/problemset/problem/230/A

s,n = map(int, input().split())
flag = 0
dd = []
bb = []
for _ in range(n):
    d,b = map(int, input().split())
    dd.append(d)
    bb.append(b)

for _ in range(n):
    mi = min(dd)
    indices = [i for i, v in enumerate(dd) if v == mi]
    ib = dd.index(mi)
    for ind in indices:
        if bb[ib]<bb[ind]:
            ib=ind
    if s>mi:
        s+=bb[ib]
        del dd[ib]
        del bb[ib]
    else:
        flag=1
        break

print("NO") if flag else print("YES")
