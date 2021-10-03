# https://codeforces.com/problemset/problem/1399/A
for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    l.sort()
    flag=False
    for i in range(n-1):
        if l[i+1]-l[i]<=1:
            continue
        else:
            flag = True
            break
    print('NO') if flag else print('YES')