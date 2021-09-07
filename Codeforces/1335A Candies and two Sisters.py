# https://codeforces.com/problemset/problem/1335/A

n = int(input())
for _ in range(n):
    val = int(input())
    if val <= 2:
        print("0")
    else:
        val/=2
        print(int(val)) if val%1 !=0 else print(int(val)-1)