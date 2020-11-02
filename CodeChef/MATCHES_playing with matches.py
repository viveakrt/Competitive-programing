#https://www.codechef.com/problems/MATCHES

l = [6,2,5,5,4,5,6,3,7,6]
for _ in range(int(input())):
    a,b=map(int,input().split())
    sum = str(a+b)
    ans = 0
    for i in sum:
        ans += l[int(i)]
    print(ans)