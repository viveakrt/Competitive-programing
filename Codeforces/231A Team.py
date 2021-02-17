r=0
for _ in range(int(input())):
    a,b,c = map(int,input().split())
    if(a+b+c>1):
        r+=1
print(r)