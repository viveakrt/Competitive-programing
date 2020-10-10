def f(raw_arr):
    arr = []
    for i in range(len(raw_arr)):
        arr.append((raw_arr[i][0], raw_arr[i][1], i))
    arr.sort()
    c_end = 0
    j_end = 0
    res_arr = []
    for start, end, idx in arr:
        if start < c_end and start < j_end:
            return "IMPOSSIBLE"
        if start >= c_end:
            res_arr.append(('C', idx))
            c_end = end
        else:
            res_arr.append(('J', idx))
            j_end = end
    res = ''
    for c, idx in sorted(res_arr, key=lambda x: x[1]):
        res += c
    return res
T = int(input())
for t in range(1, T + 1):
    N = int(input())
    arr = []
    for _ in range(N):
        interval = [int(s) for s in input().split(" ")]
        arr.append(interval)
    res = f(arr)
    print("Case #{}: {}".format(t, res))
