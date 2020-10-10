l,r,k=map(int,input().split())
a=r//k
if l%k==0:
    b=l//k - 1
else:
    b=l//k
print(a-b)