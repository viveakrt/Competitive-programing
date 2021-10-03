// https://www.codechef.com/START11B/problems/FILLGRID
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll to_number(string s)
{
    ll ans = 0;
    int n = s.size(), i;
    for (i = 0; i < n; i++)
    {
        ans = ans * 10 + (s[i] - '0');
    }

    return ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, j;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else if (n == 2)
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << -1 << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (i == j)
                        cout << -1 << " ";
                    else
                        cout << 1 << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}