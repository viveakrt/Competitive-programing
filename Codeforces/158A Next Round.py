n, k = map(int, input().split(" "))
a = list(map(int, input().split(" ")))

count = 0

for i in range(0, n):
    if a[k - 1] == 0 and a[i] == 0:
        count = count + 0
    elif a[k - 1] <= a[i]:
        count = count + 1
    else:
        count = count + 0

print(count)


# https://codeforces.com/problemset/problem/158/A
