# Problem :: https://www.codechef.com/JUNE20B/problems/EVENM

#Python Code ::


#importing modules for input and output

from sys import stdin,stdout

for _ in range(int(stdin.readline())):
    N = int(stdin.readline())
    def SMatrix(N):
        M = [[0] * N for i in range(N)]
        dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]
        k, l, res = 0, -1, 1
        for i in range(N + N - 1):
            for j in range((N + N - i) // 2):
                k += dx[i % 4]
                l += dy[i % 4]
                M[k][l] = res
                res += 1
        return M
    for i in SMatrix(N): print(*i)
