t=int(input())
for i in range(t):
    n,a,b,c,d = map(int,input().split())
    x = n *(a-b)
    y = n*(a+b)
    flag=0
    for z in range(x,y+1):
        
        if(c-d<=z<=c+d):
            flag=1
            break
        elif(c+d<z):
            break

    if(flag==1):
        print("Yes")
    else:
        print("No")