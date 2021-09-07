# https://codeforces.com/contest/339/problem/C
# TODO
# ? HAVE TO DO LATER NOW I AM NOT CAPABLE
w = input()
wl = [i+1 for i in range(len(w)) if w[i]=="1"]
m = int(input())

def greed(pl,pm,wl):
    diff = pm-pl
    if diff<=0  and pl!=0 and pm!=0:
        return -1
    val = wl.index(wl[min(range(len(wl)), key = lambda i: abs(wl[i]-diff))])
    if val+1 < len(wl):
        return wl[val+1]
    return -1

if len(wl)<=1:
    print("NOr")
r,l=min(wl),0
for i in range(m):
    if i%2 == 0:
        val=greed(l,r,wl)
        if val==-1:
            print("NOt")
            break
        else:
            print(val)
            l+=val
    else:
        val=greed(r,l,wl)
        if val==-1:
            print("NOl")
            break
        else:
            print(val)
            r+=val
