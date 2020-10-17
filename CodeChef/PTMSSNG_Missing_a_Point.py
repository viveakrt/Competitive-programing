Problem  :: https://www.codechef.com/JULY20B/problems/PTMSSNG


#Python (Optimal Solution)

from sys import stdin,stdout                    #Import module for read/write

def xor(l):                                     # Function to find xor a entire list
	xor= 0
	n=len(l)
	for i in range(n):
		xor = xor ^ l[i]
	return xor

for _ in range(int(stdin.readline())):        # Testcases loop
	N = int(stdin.readline())                   # Input lists
	X= []
	Y = []  
	for _ in range((N*4)-1):                    # Loop for xoring the values and finding other index
		X1 , Y1 = map(int,stdin.readline().split())
		X.append(X1)
		Y.append(Y1)
	print(xor(X),xor(Y))
