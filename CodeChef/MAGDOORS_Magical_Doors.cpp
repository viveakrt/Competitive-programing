// https://www.codechef.com/START13B/problems/MAGDOORS/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

class Node
{
public:
    int val;
    Node *left, *right;
    Node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

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

    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cs++;
        string s;
        cin >> s;
        ll i, temp, n = s.size(), count = 0;
        for (i = 0; i < n; i++)
        {
            ll temp = s[i] - '0';

            if (count % 2 == temp)
                count++;
            // cout<<temp<<" "<<count<<" ";
        }
        cout << count << endl;
        // cout<<"Case #"<<cs<<": ";
    }
    return 0;
}