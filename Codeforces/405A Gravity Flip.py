# https://codeforces.com/problemset/problem/405/A

n = int(input())

l = list(map(int, input().split(" ")))

print(" ".join(str(i) for i in sorted(l)))