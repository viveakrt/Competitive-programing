# for i in range(int(input())):
#     a,b=map(str,input().split())
#     a=a+b
#     b=2*b
#     f=0
#     for i in b:
#         if b.count(i)!=a.count(i):
#             f=1
#             break
#     print('NO' if f else 'YES')
    
N = int(input())
for i in range(N):
    words = [list(i) for i in input().split()]
    if sorted(words[0]) == sorted(words[1]):
        print("YES")
    else:
        print("NO")