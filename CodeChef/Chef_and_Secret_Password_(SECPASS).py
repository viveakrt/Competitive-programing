# https://www.codechef.com/COOK103A/problems/SECPASS/

t=int(input())
for i in range(t):
    n=int(input())
    x=input()
    m=x[0]
    P=[1 for j in range(n)]
    for j in range(1,n):
        if x[j]==m:
            p=0
            k=j
            while k<n and x[k]==x[p]:
                P[p]+=1
                p+=1
                k+=1
                
    #print(P)
    maxi=0
    ans=""
    for j in range(n-1,-1,-1):
        if P[j]>maxi:
            maxi=P[j]
            ans=x[:j+1]
    print(ans)
