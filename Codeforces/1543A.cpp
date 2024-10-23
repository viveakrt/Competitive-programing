// cpp solution to the problem https://codeforces.com/contest/1543/problem/A 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        long long ex;
        cin>>a>>b;
        if(a==b) cout<<"0 0"<<endl;
        else 
        {
            ex=abs(a-b);
            cout<<ex<<" "<<min(a%ex,ex-a%ex)<<endl;
        }
    }
}