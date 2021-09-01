# https://codeforces.com/problemset/problem/1328/A

n = int(input())

for _ in range(n):
    a,b = map(int,input().split(" "))
    if a%b == 0:
        print(0)
    else:
        print(b-(a%b))