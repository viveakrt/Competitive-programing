# https://www.codechef.com/START11C/problems/FACEDIR
n = int(input())

for _ in range(n):
    v = int(input())
    v %= 4
    if v == 0:
        print("North")
    elif v==1:
        print("East")
    elif v==2:
        print("South")
    else:
        print("West")