#Link - https://www.codechef.com/WICP2002/problems/WICP006
from math import *
def solve(s,c,k):
	a,b = 2,0
	if k==1:
		if c==0:
			if s<k:
				print(0)
			else:
				b = pow(a,s-k+1)
				b += 1
				print(int(b))
		elif s==0:
			b = pow(a,c+1)
			b -= 2
			print(int(b))
		elif s>c:
			b = pow(a,s)
			b += 1
			print(int(b))
		else:
			b = pow(a,c+1)
			b += 1
			print(int(b))
	else:
		if s<k:
			print(0)
		else:
			if(c >= s-k+1):
				b = pow(a,s-k+2)
				b += 1
				print(int(b))
			else:
				b = pow(a,s-k+1)
				b += 1
				print(int(b))
for i in range(int(input())):
	s,c,k = map(int,input().split())
	solve(s,c,k)
