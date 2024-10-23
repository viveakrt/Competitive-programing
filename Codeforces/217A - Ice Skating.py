#https://codeforces.com/problemset/problem/217/A

    n, xd, yd, val = int(input()), [], [], 0
    for i in range(n):
        x, y = map(int, input().split())
        xd.append({x})
        yd.append({y})
    for i in range(n - 1):
        for j in range(i + 1, n):
            if xd[i] & xd[j] or yd[i] & yd[j]:
                xd[j] |= xd[i]
                yd[j] |= yd[i]
                val += 1
                break
    print(n - val - 1)
