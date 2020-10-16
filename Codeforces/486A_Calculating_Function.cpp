//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

long long fun(long long n)
{
    long long ans = 0;

    if (n % 2 == 0)
    {
        n /= 2;
        ans += (n * (n + 1));
        ans -= n*n;
    }
    else
    {
        n /= 2;
        ans += (n * (n + 1));
        n++;
        ans -= n*n;
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
//-(n+1)/2
//n/2