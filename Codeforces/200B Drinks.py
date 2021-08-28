#https://codeforces.com/problemset/problem/200/B

x = input()
l = list(map(int,input().split(" ")))
s =sum(l)
print((s/(int(x)*100))*100)