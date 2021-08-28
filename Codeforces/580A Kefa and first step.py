# https://codeforces.com/problemset/problem/580/A

n = int(input())
l = list(map(int,input().split(" ")))

mc = 0
c = 0
for i in range(n-1):
    if l[i]<=l[i+1]:
        c+=1
        mc = max(mc, c)
    else:
        mc = max(mc, c)
        c=0
print(mc+1)