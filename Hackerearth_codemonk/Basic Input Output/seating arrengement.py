t=int(input())
for i in range(t):
    s=int(input())
    m=s%12
    if m==1:
        print(s+11,'WS')
    elif m==2:
        print(s+9,'MS')
    elif m==3:
        print(s+7,'AS')
    elif m==4:
        print(s+5,'AS')
    elif m==5:
        print(s+3,'MS')
    elif m==6:
        print(s+1,'WS')
    elif m==7:
        print(s-1,'WS')
    elif m==8:
        print(s-3,'MS')
    elif m==9:
        print(s-5,'AS')
    elif m==10:
        print(s-7,'AS')
    elif m==11:
        print(s-9,'MS')
    elif m==0:
        print(s-11,'WS')
# t=int(input())
# for i in range(t):
#     s=int(input())
#     m=s%12
#     l=11
#     if m==0:
#         print(s-11,'WS')
#     for i in range(1,12):
#         if m==i:
#             print(s+l)
#         else:
#             l=l-2

