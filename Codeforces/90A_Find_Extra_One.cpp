/*
   Question Link : https://codeforces.com/contest/900/problem/A
*/

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve()
{
	 ll n; // number of points 
    cin>>n;
    vector<ll>cnt(2);//a vector to calculate the number of points on either side of OY axis.you can either use two variables for it for less space 
    while(n--)
    {
      ll x , y;
      cin>>x>>y;// co-ordinates of the points 
      if(x >= 0 and y >= 0)
      {
         cnt[0]++; //on the right side of the OY axis
      }
      if(x < 0 and y >= 0)
      {
         cnt[1]++; //on the left side of the OY axis
      }
      if(x < 0 and y < 0)
      {
         cnt[1]++; //on the left side of the OY axis
      }
      if(x >= 0 and y < 0)
      {
         cnt[0]++; //on the right side of the OY axis
      }
    }
    // If the number of points on the right side or left side is either 0 or 1 then we can rearrange the points and make it one sided.
    if(cnt[0] == 0 or cnt[1]==0 or cnt[0] == 1  or cnt[1] == 1)
    {
       cout<<"Yes\n";//Yes
    }
    else
    {
       cout<<"No\n";//No
    }


}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	solve();
	return 0;
}