#https://codeforces.com/contest/416/problem/C

    import bisect
     
    n = int(input())
    vs = list(enumerate([tuple(map(int, input().split(' '))) for _ in range(n)]))
    k = int(input())
    rs = list(map(int, input().split(' ')))
    rs_i = {r: [i+1 for i, k in enumerate(rs) if k == r] for r in rs}
     
    vs.sort(key=lambda x: x[1][1])
    rs.sort()
    ol_rs = len(rs)
     
    s, ss = 0, list()
     
    while len(vs) > 0:
        i, (c, p) = vs.pop()
        t = bisect.bisect_left(rs, c)
        if t < len(rs):
            s += p
            ss.append((i+1, rs_i[rs[t]].pop()))
            del rs[t]
            
    print("{} {}".format(ol_rs - len(rs), s))
    for tt in ss:
        print("{} {}".format(*tt))
