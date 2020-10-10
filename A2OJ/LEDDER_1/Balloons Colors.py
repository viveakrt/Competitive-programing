for _ in range(int(input())):
    n,x,y=map(int,input().split())
    p=list(map(int,input().split()))
    if x==p[0] and y==p[-1]:
        print("BOTH")
    elif x==p[0] and y!=p[-1]:
        print("EASY")
    elif x!=p[0] and y==p[-1]:
        print("HARD")
    else:
        print("OKAY")
