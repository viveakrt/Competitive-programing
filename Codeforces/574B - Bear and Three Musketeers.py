#https://codeforces.com/problemset/problem/574/B

    n, m = map(int, input().split())
     
    edge = []
     
    conjunto = [set() for i in range(n + 1)]
     
    for i in range(m):
     
        u, v = map(int, input().split())
     
        edge += [(u, v)]
        conjunto[u] |= {v}
        conjunto[v] |= {u}
     
    k = [len(conjunto[i]) for i in range(n+1)]
     
    saida = -1
     
    for u, v in edge:
     
        w = conjunto[u] & conjunto[v]
        for i in w:
     
            res = k[u] + k[v] + k[i] - 6
     
            if saida == -1 or (saida > res >= 0):
     
                saida = res
     
    print(saida)



