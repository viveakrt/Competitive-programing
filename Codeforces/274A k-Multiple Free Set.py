n,k=map(int,input().split())
l=[int(x) for x in input().split()]
l.sort()
s=set([])
ans=0
for i in l:
    if i%k==0:
        if i//k not in s:
            s.add(i)
            ans+=1
    else:
        ans+=1
        s.add(i)
print(ans)

# https://codeforces.com/problemset/problem/274/A
