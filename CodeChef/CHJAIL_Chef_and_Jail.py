#Link - https://www.codechef.com/WICP2002/problems/CHJAIL
try:
    for i in range(int(input())):
    	m,n,x,y = map(int,input().split())
    	arr = []
    	for i in range(m):
    		arr.append(list(map(int,input().split())))
    	dp = [[0]*n for i in range(m)]
    	dp[0][0]=arr[0][0]
    	for i in range(1,n):
    		dp[0][i] = dp[0][i-1]-arr[0][i]
    	for i in range(1,m):
    		dp[i][0] = dp[i-1][0] - arr[i][0]
    	for i in range(1,m):
    		for j in range(1,n):
    			val = max(dp[i-1][j-1],max(dp[i][j-1],dp[i-1][j]))
    			dp[i][j] = val-arr[i][j]
    	if(dp[x-1][y-1]>=0):
    		print("Escape")
    	else:
    		print("Died")
except:
    pass
