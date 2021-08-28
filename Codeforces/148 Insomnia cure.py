# https://codeforces.com/problemset/problem/148/A

k,l,m,n,d=int(input()),int(input()),int(input()),int(input()),int(input())
h=0
for i in range(1,d+1):
    if i%k==0:
        h+=1
        continue
    if i%l==0:
        h+=1
        continue
    if i%m==0:
        h+=1
        continue
    if i%n==0:
        h+=1
        continue
print(h)