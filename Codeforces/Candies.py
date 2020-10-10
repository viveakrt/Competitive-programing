import math
t = int(input())
for i in range(t):
    n = int(input())
    x=2
    while(n%(2**x-1)!=0):
        x=x+1
        
    print(int(n/(2**x-1)))