import math
n = int(input())
f = float(2.920050977316)
for i in range(n):
    r=math.floor(f)
    print(r)
    f = r*(f-r+1)
