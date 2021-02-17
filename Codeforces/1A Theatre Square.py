n, m, a = list(map(int, input().split()))
print(((n + a - 1) // a) * ((m + a - 1) // a))