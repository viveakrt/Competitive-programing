# https://codeforces.com/problemset/problem/268/A
n  = int(input())
hl = []
al = []
for _ in range(n):
    h,a = map(int,input().split())
    hl.append(h)
    al.append(a)
count = 0
for i in hl:
    for j in al:
        if i==j:
            count+=1
print(count)