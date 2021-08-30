n,m=map(int,input().split())
l=list(map(int,input().split()))
l=sorted(l)
mini=l[n-1]-l[0]
for i in range(m-n+1):
    t=l[i+n-1]-l[i]
    if t < mini:
        mini=t
print(mini)