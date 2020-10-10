res=[]
for i in range(int(input())):
    n = int(input())
    a = []
    
    d=c=r=0
    for i in range(n):
        l=list(map(int,input().split(" ")))
        if(len(l)!=len(set(l))):
            r+=1
        a.append(l)
        d+=a[i][i]    
    
    t_matrix = zip(*a) 
    
    for i in t_matrix:
        if(len(i)!=len(set(i))):
            
            c+=1
    
    
    res.append(d)
    res.append(r)
    res.append(c)


c=1
for i in range(0,len(res)-2,3):
    st="Case #"+str(c)+":"    
    print(st,res[i],res[i+1],res[i+2],sep=" ")
    c+=1
