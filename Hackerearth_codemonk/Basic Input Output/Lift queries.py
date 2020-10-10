t = int(input())
a,b=0,7
for i in range(t):
    p = int(input())
    if abs(a-p)<=abs(b-p):
        print('A')
        a=p
    else:
        print('B')
        b=p