# https://codeforces.com/contest/1566/problem/A
import math
for _ in range(int(input())):
    n,s = map(int,input().split())
    h = math.ceil(n/2)
    if n%2==0:
        r=s//(h+1)
    else:
        r=s//h
    print(r)