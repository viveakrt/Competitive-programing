#https://codeforces.com/problemset/problem/368/B

n, m = map(int, input().split())
a = list(map(int, input().split()))

set_ = set()
for i in range(len(a) - 1, -1, -1):
  set_.add(a[i])
  a[i] = len(set_)
 
s = ""
for i in range(m):
  l = int(input())
  s += str(a[l-1]) + "\n"

print(s)
