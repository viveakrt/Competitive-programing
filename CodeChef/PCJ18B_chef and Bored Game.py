#https://www.codechef.com/problems/PCJ18B
'''
 _ _ _		in a 3 * 3 matrix
|_|_|_|		there are 14 boxes
|_|_|_|		9(1*1) + 4(2*2) + 1(3*3)
|_|_|_| 	so,oddlen boxes = 9 + 1 = 10

 _ _ _ _
|_|_|_|_|	similarly, in a 4 * 4 matrix
|_|_|_|_|	there are 30 boxes
|_|_|_|_|	16(1*1) + 9(2*2) + 4(3*3) + 1(4*4)
|_|_|_|_|	so oddlen boxes = 16 + 4 = 20

 _ _ _ _ _
|_|_|_|_|_|		now, let's take 5 * 5 matrix,
|_|_|_|_|_|		even though the pattern is clearly visible by now
|_|_|_|_|_|		for 5 * 5, there are 
|_|_|_|_|_|		25(1*1) + 16(2*2) + 9(3*3) + 4(4*4) + 1(5*5)
|_|_|_|_|_|		so oddlen boxes = 25 + 9 + 1 = 35

As can be clearly seen, the patter followed is:
 n**2 (1*1) + (n-1)**2 (2*2) + (n-2)**2 (3*3) + ... + 1**2 (n*n)
'''
for _ in range(int(input())):
	n,sum_ = int(input()),0
	for i in range(n,0,-2):
		sum_ += i**2
	print(sum_)