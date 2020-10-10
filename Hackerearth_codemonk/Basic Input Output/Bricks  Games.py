n=int(input())
f=0
for i in range(n):
    if n-i>0:
        n=n-i
    else:
        f=1
        break
    if n-2*i>0:
        n=n-2*i
    else:
        break
print('Patlu' if f==1 else 'Motu')