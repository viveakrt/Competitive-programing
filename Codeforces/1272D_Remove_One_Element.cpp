/**
* Link to problem https://codeforces.com/problemset/problem/1272/D
* Problem description:
* You are given an array a consisting of n integers.
* You can remove at most one element from this array. Thus, the final length of the array is n−1 or n.
* Your task is to calculate the maximum possible length of the strictly increasing contiguous 
* subarray of the remaining array.
*
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf(" %d",&n);

    //values
    int ar[n];

    for(int i = 0; i < n;++i) scanf(" %d",&ar[i]);

    //dp state (1,i) means the longest increasing subarray with one deleted from i to the end
    //dp state (0,i) means the longeset increasing subarray with no deletions from i to the end
    int dp[2][n];
    dp[0][n-1] = 1;
    dp[1][n-1] = 0;
    dp[0][n-2] = (ar[n-2] < ar[n-1] ? 2: 1);
    dp[1][n-2] = 0;
    int ans = dp[0][n-2];

    for(int i = n-3; i > -1;--i){
        dp[0][i] = 1;
        dp[1][i] = 1;
        if(ar[i] < ar[i+1]) {
            dp[0][i] = max(dp[0][i],dp[0][i+1]+1);
            dp[1][i] = max(dp[1][i],dp[1][i+1]+1);
        }
        //try to make the one deletion value by deleting the next element but taking the next after it
        if(ar[i] < ar[i+2]) dp[1][i] = max(dp[1][i],dp[0][i+2]+1);
        ans = max(ans,max(dp[0][i],dp[1][i]));
    }

    printf("%d\n",ans);
    return 0;
}
