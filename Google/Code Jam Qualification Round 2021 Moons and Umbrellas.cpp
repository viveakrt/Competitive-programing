/* Question URL : https://codingcompetitions.withgoogle.com/codejam/round/000000000043580a/00000000006d1145 */

#include<bits/stdc++.h>
using namespace std;

#define inf 1e9

int solve(int x,int y,string s)
{
    int n=s.length();
    vector<vector<int> >dp(n,vector<int>(2,0));
    if(s[0]=='C')
    {
        dp[0][0]=0;
        dp[0][1]=inf;
    }
    else if(s[0]=='J')
    {
        dp[0][0]=inf;
        dp[0][1]=0;
    }
    else
    {
        dp[0][0]=dp[0][1]=0;
    }

    for(int i=1;i<n;i++)
    {
        if(s[i]=='?')
        {
            dp[i][0]=min(dp[i-1][0],dp[i-1][1]+y);
            dp[i][1]=min(dp[i-1][1],dp[i-1][0]+x);
        }
        else
        {
            if(s[i]=='C')
            {
                dp[i][1]=inf;
                dp[i][0]=min(dp[i-1][0],dp[i-1][1]+y);
            }
            else if(s[i]=='J')
            {
                dp[i][0]=inf;
                dp[i][1]=min(dp[i-1][1],dp[i-1][0]+x);
            }
        }
    }

    return min(dp[n-1][1],dp[n-1][0]);
}

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int x,y;
        string s;
        cin>>x>>y>>s;
        int ans=solve(x,y,s);
        cout<<"Case #"<<i<<": "<<ans<<'\n';
    }
    return 0;
}