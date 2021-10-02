#https://codeforces.com/problemset/problem/217/A

n=int(input())
ans=1
xl=[]
yl=[]

for i in range(n):

    x,y=map(int,input().split())
    xl.append({x})
    yl.append({y})
    
for i in range(n-1):

    for j in range(i+1,n):
        if xl[i]&xl[j] or yl[i]&yl[j]:
        	xl[j]|=xl[i]
        	yl[j]|=yl[i]
        	ans+=1
        	break
        	
print(n-ans)
