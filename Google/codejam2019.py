n = int(input())
for i in range(n):
    c=input()
    lst=list(c)
    l=len(c)
    c2=[]
    for i2 in range(l):
        if(lst[i2]=='4'):
            lst[i2]='3'
            c2.append('1')
        else:
            c2.append('0')
    print("".join(lst)+" "+"".join(c2))

