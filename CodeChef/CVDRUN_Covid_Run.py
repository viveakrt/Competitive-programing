#https://www.codechef.com/problems/CVDRUN
for _ in range(int(input())):
    n,k,x,y=map(int,input().split())
    f=0
    for i in range(n):
        if(y==(x+k)%n):
            f=1
            break
        x+=k
    print('YES') if f else print('NO')
'''
    We Have T as test cases
    N as No. of cities
    K as jump of cities by covid
    X is virus start point or hotspot
    Y is your own city
    If virus reaches your print YES else NO
'''