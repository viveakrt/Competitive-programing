#https://codeforces.com/problemset/problem/266/A
p,s = input(),input()
c=0
for i in range(int(p)-1):
    if(s[i]==s[i+1]):
        c+=1
print(c)