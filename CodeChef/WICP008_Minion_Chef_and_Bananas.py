#Problem link:https://www.codechef.com/WICP2002/problems/WICP008

from sys import stdin, stdout
from math import *
n = stdin.readline()
n = int(n)
for i in range(n):
	N,H = stdin.readline().split()
	N = int(N);H = int(H)
	arr = [int(c) for c in input().split()]
	mi = 1;ma = max(arr)
	ans = ma + 1
	while mi<=ma:
		mid = (mi + ma)//2
		c = 0
		for i in arr:
			c += ceil(i/mid)
		if c <= H:
			ans = min(mid,ans)
		if c <= H:
			ma = mid - 1
		else:
			mi = mid + 1
	stdout.write(str(ans)+'\n')
  
