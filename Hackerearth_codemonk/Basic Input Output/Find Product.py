n = int(input())
l=list(map(int,input().split()))
a=1
m=1000000007
for i in range(n):
    a=(a*l[i])%m
print(a)