n = int(input())
x1,y1,z1=0,0,0
while(n):
    x,y,z = map(int,input().split())
    x1 = x1 + x
    y1 = y1+y
    z1 = z1+z
    n = n-1 

if((x1==0)&(y1==0)&(z1==0)):
   print('YES')
else:
    print('NO')