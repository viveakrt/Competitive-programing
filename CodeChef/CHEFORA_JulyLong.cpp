#include <bits/stdc++.h>
using namespace std;


long long  chefora(string  x)
{
    int i=x.length()-2;
        while(i>=0)
        {
            x=x+x[i];
            i--;
        }
    return stoll(x);
}
int power(long long  x, long long  y, long long p)
{
    long long  res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  a[100001];
    long long sum[100001];
    a[0]=sum[0]=0;
    for(long long  i=1;i<100001;i++)
    {
        a[i]=chefora(to_string(i));
        sum[i]=sum[i-1]+a[i];
    }
    int test;
    cin>>test;
    while(test--)
    {
        long long  l,r;
        cin>>l>>r;
        cout<<power(a[l],sum[r]-sum[l],(long long)(1e9+7))<<endl;
    }

    return 0;
}