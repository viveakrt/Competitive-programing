# Problem - https://www.codechef.com/AUG20B/problems/CHEFWARS/

def attack(h, p):
    h -= p
    p //= 2
    if h > 0 and p > 0:
        attack(h, p)
    else:
        if p == 0 and h != 0:
            print(0)
        else:
            print(1)


t = int(input())
for _ in range(t):
    arr = list(map(int, input().split()[:2]))
    a = arr[0]
    b = arr[1]
    attack(a, b)