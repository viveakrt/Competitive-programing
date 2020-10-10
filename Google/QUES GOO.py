N=int(input())
for i in range(N):
    m=int(input())
    d = input()
    ld = list(d)
    for i2 in range(2*m-2):
        if(ld[i2]=='E'):
            ld[i2]='S'
        else:
            ld[i2]='E'
    
    print("Case #"+str(i)+": "+"".join(ld)) 
            
