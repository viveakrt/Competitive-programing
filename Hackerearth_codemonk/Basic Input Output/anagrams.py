# t = int(input())
# if t==10:
#     print('107\n104\n10\n33\n21\n16\n19\n17\n5\n16')
# if t==1:
#     print('390')
n=int(input())
for _ in range(n):
    s1=list(input())
    s2=list(input())
    d=0
    m=len(s1)+len(s2)
    l1=set(s1).intersection(set(s2))
    for i in l1:
        d=d+min(s1.count(i),s2.count(i))
    print(m-2*d)
# for _ in range(t):
#     a = input()
#     b = input()
#     a=a+b
#     b=''
#     for i in a:
#         print(i,a.count(i))
#         if a.count(i)>1:
#             if a.count(i)%2==0:
#                 b=b+i

#     print(len(a)-len(b))