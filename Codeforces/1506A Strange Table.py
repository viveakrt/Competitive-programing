#https://codeforces.com/contest/1506/problem/A

for _ in range(int(input())):
    n,m,x=map(int,input().split())
    divisor=x//n
    mod=x%n
    if mod!=0:
        print((mod-1)*m+divisor+1)
    else:
        print((n-1)*m+divisor)
