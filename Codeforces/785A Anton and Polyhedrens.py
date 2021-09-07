# https://codeforces.com/problemset/problem/785/A

n = int(input())
count = 0
for _ in range(n):
    p = input()
    if p[0]=="T":
        count += 4
    elif p[0]=="C":
        count += 6
    elif p[0]=="O":
        count += 8
    elif p[0]=="D":
        count += 12
    elif p[0]=="I":
        count += 20

print(count)