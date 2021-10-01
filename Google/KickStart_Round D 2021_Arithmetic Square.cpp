#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        cout << "Case" << ' ' << "#" << r++ << ": ";
        ll a1, a2, a3, b1, b2, b3, c1, c2, c3;
        cin >> a1 >> a2 >> a3 >> b1 >> b3 >> c1 >> c2 >> c3;
        ll ans = 0;
        if( (a1 - a2) == (a2 - a3) )
        {
            ans++;
        }
        if( (c1 - c2) == (c2 - c3) )
        {
            ans++;
        }

        if( (a1 - b1) == (b1 - c1) )
        {
            ans++;
        }
        if( (a3 - b3) == (b3 - c3) )
        {
            ans++;
        }
        ll PP = ( a1 + c3 ) , SS = (a3 + c1);
        ll m_r = (b1 + b3), m_c = (a2  + c2);
        map < ll, ll > mp;
        if(PP % 2 == 0 )
        {
                PP /= 2;
                mp[PP]++;
        }
        if(SS % 2 == 0 )
        {
            SS /= 2; mp[SS]++;
        }

        if(m_r % 2 == 0 )
        {
               m_r /= 2; mp[m_r]++;
        }
        if(m_c % 2 == 0 )
        {
            m_c /= 2; mp[m_c]++;
        }
        ll mx = 0;
        for(auto i : mp)
        {
            if(i.second > mx)
                mx = i.second;
        }
        cout << ans + mx << endl;
        mp.clear();





    }
}


