t = int(input())
for _ in range(t):
    g,p=map(int,input().split())
    n=int(input())
    c=0
    cc=0
    for i in range(n):
        a,b=map(int,input().split())
        if a==1:
            c=c+g
            cc=cc+p
        if b==1:
            c=c+p
            cc=cc+g
        
    print(c if c<cc else cc)