t=int(input())
for _ in range(t):
    c,m=map(int,input().split())
    ct = list(map(int,input().split()))
    o=0
    for i in range(c):
        o=o+(int(ct[i]/m))
    print(o)
