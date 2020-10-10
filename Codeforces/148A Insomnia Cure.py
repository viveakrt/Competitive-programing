
L = []
for i in range(5):
    L.append(int(input()))
k,l,m,n,d = L
unharmed = 0
for j in range(1,d+1):
    if j%k != 0 and j%l != 0 and j%m != 0 and j%n != 0:
        unharmed += 1
print(d-unharmed)

# https://codeforces.com/problemset/problem/148/A
