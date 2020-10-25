/**
*Link for problem : https://codeforces.com/problemset/problem/1324/A
*Description : 
*Clear a tetris field where each column in the specified no. of columns is of a given height
*Output the verdict for multiple test cases
*/


def calc(n):
	a = list( int(j) for j in input().strip().split())  
	odd = even = 0
	for i in a :
		if i % 2 == 1 : odd = odd + 1
		if i % 2 == 0 : even = even + 1

	if odd == 0 or even == 0 : res = "YES"
	else : res = "NO"

	return res

def main():
	t = int(input())
	for _ in range(0, t) :
		n = int(input())
		print(calc(n))

if __name__ == '__main__' :
	main()	
