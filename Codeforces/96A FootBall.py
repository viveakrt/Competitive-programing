#https://codeforces.com/problemset/problem/96/A
s = input()
o= list(map(str,s.split('0')))
z= list(map(str,s.split('1')))
if len(max(o))>=7 or len(max(z))>=7:
    print('YES')
else:
    print('NO')
