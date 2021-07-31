#https://codeforces.com/problemset/problem/59/A
s = input()
c,n=0,0
for i in s:
    if ord(i)<97:
        c+=1
    else:
        n+=1
print(s.lower()) if c<=n else print(s.upper())