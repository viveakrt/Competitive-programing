# Problem - https://www.codechef.com/CENS2020/problems/CENS20D/

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()[:n]))
    ans = []
    if n > 1:
        for i in range(len(arr)):
            for j in range(i+1, len(arr)):
                ai = arr[i]
                aj = arr[j]
                bij = ai & aj
                if i < j and bij == ai:
                    ans.append((i, j))
        print(len(ans))
    else:
        print(0)