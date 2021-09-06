# https://codeforces.com/problemset/problem/141/A
a,b,c = list(input()),list(input()),list(input())

a=sorted(a+b)
c=sorted(c)
print("YES") if a==c else print("NO")
