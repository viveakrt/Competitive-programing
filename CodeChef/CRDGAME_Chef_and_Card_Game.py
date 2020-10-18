# Problem :: https://www.codechef.com/JULY20B/problems/CRDGAME

# Python


from sys import stdin,stdout

def sumdigits(n):
    return 0 if n==0 else (n%10) + sumdigits(n//10)


for _ in range(int(stdin.readline())):
	C_W = 0
	M_W = 0
	for _ in range(int(stdin.readline())):
		C , M = map(int,stdin.readline().split())
		C_S = sumdigits(C)
		M_S = sumdigits(M)
		if (C_S == M_S):
			C_W = C_W+1
			M_W = M_W+1
		elif(C_S > M_S):
			C_W = C_W+1
		else:
			M_W = M_W+1
	if (C_W == M_W):
		print("2",C_W)
	elif(C_W > M_W):
		print("0" , C_W)
	else:
		print("1",M_W)
    
    
