T = int(input())

for i in range(T):
    s = input()
    l = len(s)
    d = list(s[0:l//2])
    d.sort()
    if l%2==0:
        h2 = list(s[l//2:l])
        h2.sort()
    else:
        h2 = list(s[l//2+1:l])
        h2.sort()
    if d==h2:
        print("YES")
    else:
        print("NO")