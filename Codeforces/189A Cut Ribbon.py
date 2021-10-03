# https://codeforces.com/problemset/problem/189/A
n,a1,a2,a3=map(int,input().split())
 
dp=[[0 for i in range(n+1)] for i in range(4)]
b=[i for i in range(n+1)]
a=[0,a1,a2,a3]
for i in range(1,4):
    for j in range(1,n+1):
        if a[i]==b[j]:
            #print(a[i], b[j], dp[i][j])
            dp[i][j]=max(1,dp[i-1][j])
        elif a[i]<b[j]:
            if dp[i][j-a[i]]>0 or dp[i-1][j]>0 or dp[i-1][j-a[i]]>0:
                dp[i][j]=max(1+dp[i-1][j-a[i]],1+dp[i][j-a[i]],dp[i-1][j])
        else:
            dp[i][j]=dp[i-1][j]
 
print(dp[3][n])