# https://codeforces.com/contest/339/problem/B

n,m = map(int,input().split())
l = list(map(int,input().split()))
u = l[0]-1
c = 1
p = l[0]
for i in range(1,m):
    if (p<l[i]):
        u+=l[i]-p
        p=l[i]
    
    elif (p > l[i]):
        u+=n-p+l[i]
        p=l[i]
    elif p==l[i]:
        u=u


# # while len(l):
# #     if (c+1)==l[0]:
# #         l.remove(l[0])
# #     else:
# #         u+=1
# #         c+=1
# #         c%=n
# for i in l:
#     while c+1 != i:
#         u+=1
#         c+=1
#         c%=n
    

print(u)