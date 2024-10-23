/*------------------Honey, you should see me in a crown--------------------*/
#include<bits/stdc++.h>

#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
#define lli(n) long long n; cin>>n;
#define li(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)

using namespace std;
int n;
/*------------Every fairy tale needs a good old-fashioned villain----------------*/
bool valid(int v,int u)
{
    return (v>=0 && v<n && u>=0 && u<n);
}
int main()
{
FAST;
cin>>n;
char a[n][n];
int x=-10,y=-10;
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
        if(a[i][j]=='K')
        {
            x=i;y=j;
        }
    }
//cout<<x<<' '<<y<<" place of king\n";
    long cost=0;
    bool flag=0;

for(int i=0;i<n;i++)//rest
{
    if(flag)
        break;
    for(int j=0;j<n;j++)
    {
        if(a[i][j]=='*')
        {
            if(abs(x-i)<=1 && abs(y-j)<=1)
                {a[i][j]='-';continue;}
            if(valid(i,j+2) && a[i][j+2]=='*' && a[i+1][j+1]=='-')//special case
            {
                cost++;
                //cout<<i<<' '<<j<<" - 2 in 1\n";
                a[i][j]='-'; a[i][j+2]='-';
            }else{
                if(valid(i+1,j-1) && a[i+1][j-1]=='-')
                {
                    cost++;
                  //  cout<<i<<' '<<j<<" clear\n";
                }else if(valid(i+1,j+1) && a[i+1][j+1]=='-')
                {
                    cost++;
                    //cout<<i<<' '<<j<<" clear 2\n";
                }
                else
                    {flag=1;break;}
            }
        }
    }
}


if(flag)
{
    cout<<"-1\n";
}else
cout<<cost<<'\n';
return 0;
}
