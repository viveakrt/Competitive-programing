t = int(input())

for i in range(t):
    n = int(input())
    ni=int(n/2)
    if(ni%2!=0):
        print("NO")
    else:
        print("YES")
        l = []
        for j in range(ni):
            l.append((j+1)*2)
        for k in range(ni-1):
            l.append((k+1)*2-1)
        l.append((ni*2-1)+ni)
        print(*l, sep=' ')
    
        