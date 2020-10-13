#https://www.codechef.com/problems/CHEFEZQ

for _ in range(int(input())):
    q,k=map(int,input().split())
    l=list(map(int,input().split()))
    rem=0
    c=0
    f=0
    for i in range(q):
        rem+=l[i]
        if(rem-k<0):
            f=1
            break
        c+=1
        rem-=k
    print(c+1) if f else print(int(sum(l)/k)+1)
'''in this problem we have to check weather chef 
free inbetween of queries print till that queries 
if not then sum of all queries + 1 '''