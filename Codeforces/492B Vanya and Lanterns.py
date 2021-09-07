# https://codeforces.com/problemset/problem/492/B

n,l = map(int,input().split())

a = list(map(int,input().split())) 
a.sort()
ml = []
ml.append(a[0]*2)
for i in range(n-1):
    ml.append(a[i+1]-a[i])
ml.append((l-a[-1])*2)
r = max(ml)/2
print(r)