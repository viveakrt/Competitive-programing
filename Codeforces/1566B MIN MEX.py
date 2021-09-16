# https://codeforces.com/contest/1566/problem/B
for _ in range(int(input())):
    s = input()
    if set(s)=={'1'}:
        print("0")

    else:
        a=list(s.split("1"))
        a=[i for i in a if i]

        if len(a)==1:
            print("1")
        else:
            print("2")