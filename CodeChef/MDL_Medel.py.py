# https://www.codechef.com/COOK111B/problems/MDL/
# cook your dish here
n=int(input())
for i in range(n):
    l=list()
    u=input()
    l=input().split(" ")
    ma=0
    mi=int(l[0])
    f=1
    for i in l:
        if int(i)>int(ma):
            ma=int(i)
            f=1
        if int(i)<mi:
            mi=int(i)
            f=0
    if f == 0:
       print(ma,mi)
    else:
       print(mi,ma)
    l.clear()