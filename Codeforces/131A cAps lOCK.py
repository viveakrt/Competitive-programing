# https://codeforces.com/problemset/problem/131/A
n = input()
if n==n.upper():
    n=n.swapcase()
elif ord(n[0])>96:
    if n[1:]==n[1:].upper():
        n=n.swapcase()

print(n)