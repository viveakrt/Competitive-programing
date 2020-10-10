v=0
f=0
for i in range(5):
    for j in range(5):
        a,b,c,d,e = map(int,input().split())
        if(a!=1):
            v = v+1
        else:
            f=1
            break
        if(b!=1):
            v = v+1
        else:
            f=1
            break
        if(c!=1):
            v = v+1
        else:
            f=1
            break
        if(d!=1):
            v = v+1
        else:
            f=1
            break
        if(e!=1):
            v = v+1
        else:
            f=1
            break
    if(f==1):
        break

l = [4,3,2,3,4,3,2,1,2,3,2,1,0,1,2,3,2,1,2,3,4,3,2,3,4]

print(l[v])