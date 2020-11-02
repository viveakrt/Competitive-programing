#https://www.codechef.com/problems/RBX1103

for _ in range(int(input())):
    n,c=map(int,input().split())
    l = list(map(int,input().split()))
    m = []
    s=0
    for i in range(c):
        m = list(map(int,input().split()))
        s+=sum(m)
    
    print(s)