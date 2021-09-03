# https://codeforces.com/problemset/problem/520/A

n = int(input())
s = sorted(set(list(input().upper())))

flag = 0
if len(s) == 26:
    for i in range(len(s)):
        if chr(65 + i) != s[i]:
            flag = 1
            break

    print("YES") if flag == 0 else print("NO")
else:
    print("NO")