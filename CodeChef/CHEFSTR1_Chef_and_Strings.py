Problem  :: https://www.codechef.com/JULY20B/problems/CHEFSTR1


#Python 

from sys import stdin,stdout     #import module for read/write

for _ in range(int(stdin.readline())):                              # Number of TestCases
	N = int(stdin.readline())                                         # Input
	Intergers = list(map(int,stdin.readline().split()))                # N spaces separated input list 
	print(sum([abs(Intergers[n]-Intergers[n-1])-1 for n in range(1,len(Intergers))]))    # Printing total number of strings to skip
  
  
  
