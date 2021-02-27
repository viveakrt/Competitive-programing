#https://codeforces.com/problemset/problem/116/A
ans=0
l=[]
for _ in range(int(input())):
    a,b=map(int,input().split())
    ans-=a
    ans+=b
    l.append(ans)

print(max(l))
    