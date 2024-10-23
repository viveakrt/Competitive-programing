// Problem Link: https://codeforces.com/contest/1385/problem/B
#include <bits/stdc++.h>

#define fo(i, n) for (int i = 0; i < (n); ++i)
#define INF 1000000000000000000
#define MOD 1000000009;

using namespace std;
using ll = long long;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> s;
        deque<int> dq;
        int x, count = 0;

        for (int i = 0; i < (2 * n); i++)
        {
            cin >> x;
            bool is_in = s.find(x) != s.end();
            if (!is_in)
            {
                s.insert(x);
                dq.push_back(x);
            }
        }
        for (int i : dq)
        {
            cout << i << " ";
        }

        cout << '\n';
    }
}