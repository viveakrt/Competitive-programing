# https://www.codechef.com/START11C/problems/BIGARRAY

for  _ in range(int(input())):
    n,s = map(int, input().split())
    total = n*(n+1)//2
    total = total-s
    if (total>=1 and total<=n):
        print(total)
    else:
        print("-1")
