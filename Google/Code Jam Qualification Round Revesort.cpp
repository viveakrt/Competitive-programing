/* Question URL : https://codingcompetitions.withgoogle.com/codejam/round/000000000043580a/00000000006d0a5c */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        ll n; cin >> n; ll a[n + 5] = {0};
        ll ans = 0, indx = -1 , mn = 1e18;
        for(ll i = 1; i <= n; i++)
        {
            cin >> a[i];


        }
        ll i , j;
        for(i = 1; i <= (n - 1); i++)
        {
            mn = 1e18;
            for(j = i; j <= n; j++)
            {
                if(mn > a[j])
                {
                    mn = a[j];
                    indx = j;
                }
            }

          ans += abs(indx - i + 1);

           ll st = i, en = indx;
           while(st < en)
           {
               ll op = a[st];
               a[st] = a[en];
               a[en] = op;
               st++;
               en--;
           }

        }



     cout << "Case" << ' ' << "#" << r++ << ": " << ans << '\n';

    }
}

