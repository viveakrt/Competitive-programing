#https://codeforces.com/contest/1343/problem/C
for _ in range(int(input())):
    n = int(input())
    l = input().split()
    new = []
    sn=[]
    nn=[]
    ans=0
    for i in l:
        if i[0]!='-':
            sn.append(int(i))
            if(nn!=[]):
                new.append(nn)
                nn=[]
        else:
            nn.append(int(i))
            if(sn!=[]):
                new.append(sn)
                sn=[]
    new.append(nn)
    new.append(sn)
    new = [ele for ele in new if ele != []] 
    for i in new:
        ans+=max(i)
    print(ans)















    # new = []
    # ele=0
    # t,p=0,0
    # if l[0]>0:
    #     t=1
    # for i in range(n):
    #     if l[i]>0 :
    #         p=1
    #     elif l[i]<0:
    #         p=0
    #     if(t!=p):
    #         new.append(ele)
    #         ele=0
    #     if(p==0 and (l[i]<0 or ele>l[i])):
    #         ele=l[i]
    #         t=p
    #     elif(p==1 and (l[i]>0 or ele>l[i])):
    #         ele=l[i]
    #         t=p
    # print(new)