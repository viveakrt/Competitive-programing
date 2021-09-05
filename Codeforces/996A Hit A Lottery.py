# https://codeforces.com/problemset/problem/996/A

n = input()
bills = 0

if len(n)>=3:
    bills += int(n[:-2])
if len(n)>=2:
    if int(n[-2])%2 == 0:
        bills += int(n[-2])/2
    else:
        bills += int(n[-2])//2 + 1
if len(n)>=1:
    if int(n[-1])%5 == 0:
        bills += int(n[-1])/5
    else:
        bills += int(n[-1])//5 + int(n[-1])%5
print(int(bills))

