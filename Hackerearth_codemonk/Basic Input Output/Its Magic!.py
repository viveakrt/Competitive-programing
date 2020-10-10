from sys import stdin,stdout
n=int(stdin.readline())
l = list(map(int,stdin.readline().split()))
s=sum(l)
li=[]
s1=0
p=0
for i in range(n):
    s1=s
    s1-=l[i]
    if s1%7==0:
        p+=1
        li.append(l[i])
if p==0:
    stdout.write('-1')
else:
    stdout.write(str(l.index(min(li))))
# if m!=0:
#     while m<n:
#         if m in l:
#             stdout.write(str(l.index(m)))
#             exit()
#         else:
#             m+=7
#     stdout.write('-1\n') 

# else:
#     i=0
#     while i < n//7:
#         if i*7 in l:
#             stdout.write(str(l.index(i*7)))
#             exit()
#         else:
#             i+=1
#     stdout.write('-1\n') 
