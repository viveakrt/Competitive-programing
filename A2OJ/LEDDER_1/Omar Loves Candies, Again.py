for _ in range(int(input())):
    s=sorted(input())
    i=len(s)
    while i>0:
        if s.count(s[i])>c:
            c=s.count(s[i])
            ch=s[i]
            i=i-c
        else:
            n=s.count(s[i])
            i=i-n
    print(c,ch)
        
