#https://codeforces.com/problemset/problem/112/A

s1 = input().lower()
s2 = input().lower()
for i in range(len(s1)):
    if(ord(s1[i])==ord(s2[i])):
        ans=0
    elif ord(s1[i])>ord(s2[i]):
        ans=1
        break
    else:
        ans=-1
        break

print(ans)