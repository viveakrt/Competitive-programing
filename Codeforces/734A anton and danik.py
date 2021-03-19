#https://codeforces.com/problemset/problem/734/A

input()
string = input()
a = string.count('A')
d = string.count('D')
if(a>d):
    print('Anton')
elif d>a:
    print('Danik')
else:
    print('Friendship')