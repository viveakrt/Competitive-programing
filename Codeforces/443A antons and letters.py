# https://codeforces.com/problemset/problem/443/A
a = input()
if a == "{}":
    print(0)
else:
    l = list(map(str, a[1:-1].split(", ")))
    print(len(set(l)))