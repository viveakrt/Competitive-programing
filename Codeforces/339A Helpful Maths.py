#https://codeforces.com/problemset/problem/339/A

s = list(map(int,input().split('+')))
ans=""
for i in sorted(s):
    ans+=str(i)
    ans+='+'

ans=ans[0:-1]
print(ans)