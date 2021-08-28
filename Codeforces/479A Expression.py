# https://codeforces.com/problemset/problem/479/A

a = int(input())
b = int(input())
c = int(input())

a1=a+b*c
a2=a*(b+c)
a3=a*b*c
a4=(a+b)*c
a5=a+b+c

print(max(a1,a2,a3,a4,a5))
