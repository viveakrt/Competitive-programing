# https://codeforces.com/problemset/problem/158/B

n = input()
l = list(map(int, input().split(" ")))

c4 = l.count(4)
c3 = l.count(3)
c2 = l.count(2)
c1 = l.count(1)

e2 = 0
e1 = 0

if c2 % 2 != 0:
    e2 = 1
c2 = int(c2/2)

if c3 < c1:
    c1 = c1 - c3
    e1 = c1%4
    c1 = int(c1/4)
else:
    c1=0
if e1 <= 2 and e2 == 0 and e1 != 0 or e1 > 2:
    e1=1
else:
    e1= 0
print(int(c4+c3+e1+e2+c1+c2))