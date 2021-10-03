// https://www.codechef.com/START13B/problems/DIWALI1
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
        ll p, a, b, c, x, y, i;
        ll ans = 0;
        cin >> p >> a >> b >> c >> x >> y;
        ll a1 = (a * x + b), b1 = (a * y + c);

        // cout<<a1<<" "<<b1<<" ";
        if (a1 > b1)
        {
            ans += p / b1;
            p -= (p / b1) * b1;
        }
        else
        {
            ans += p / a1;
            p -= (p / a1) * a1;
        }
        // cout<<p<<" ";
        cout << ans << endl;
        // cout<<"Case #"<<cs<<": ";
    }
    return 0;
}