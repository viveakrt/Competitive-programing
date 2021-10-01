#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        string s; cin >> s;
        ll ans = 0, tt = 0, mm = 0;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == 'T')
            {
                tt++;
            }
            else
                mm++;

        }
        ll op = (n / 3);
        if(op != mm or s[0] == 'M' or s[n - 1] == 'M')
        {
            ans = 1;

        }
        tt = 0, mm = 0;
        for(ll i = 0; i < n and !ans ; i++)
        {
            if(s[i] == 'T')
                tt++;
            else
            {
                mm++;
                if(mm > tt)
                {
                    ans = 1;
                    break;
                }
            }

        }
        tt = 0, mm = 0;
        for(ll i = n - 1; i >= 0 and !ans ; i--)
        {
            if(s[i] == 'T')
                tt++;
            else
            {
                mm++;
                if(mm > tt)
                {
                    ans = 1;
                    break;
                }
            }

        }
        cout << (ans ? "NO" : "YES") << endl;




    }
}

