import math
import numpy as np
import time
import sys
t = int(input())
for i in range(t):
    n = int(input())
    x=2
    while(n%(2**x-1)!=0):
        x=x+1
        
    print(int(n/(2**x-1)))
 

S= range(1000)
print(sys.getsizeof(5)*len(S))
 
D= np.arange(1000)
print(D.size*D.itemsize)
