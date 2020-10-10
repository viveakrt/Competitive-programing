# def rec(a, b, c):
#     if a >= b:
#         return ((a-b)//2+(a-b)%2)
#     if b%c==0:
#         return (1 + rec(a,b//c,c))
#     else:
#         x=(b//c+1)*c
#         return ((x-b)//2 + (x-b)%2 + rec(a,x,c))
 
# t = int(input())
# while t > 0:
#     a, b, c = map(int, input().split())
#     print(rec(a, b, c))
#     t -= 1
from sys import stdin, stdout  
t = stdin.readline()
for i in range(int(t)):
    k,m,n=map(int,stdin.readline().split())
    s=0
    while True:
        if k>=m:
            s+=(k-m)//2+(k-m)%2
            break
        else:
            if m%n==0:
                s+=1
                m=m//n
            else:
                x=(m//n+1)*n
                s+=(x-m)//2+(x-m)%2
                m=x
    print(s)