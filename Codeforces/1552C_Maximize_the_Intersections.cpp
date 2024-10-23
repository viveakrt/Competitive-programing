// https://codeforces.com/contest/1552/problem/C

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int x[k], y[k];

    set<int> points;
    for (int i = 1; i <= 2 * n; i++)
        points.insert(i);

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        points.erase(a);
        points.erase(b);
        x[i] = a, y[i] = b;
    }

    int ans = 0;

    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if ((x[j] > x[i] && x[j] < y[i] && y[i] > x[j] && y[i] < y[j]) || (x[i] > x[j] && x[i] < y[j] && y[j] > x[i] && y[j] < y[i]))
            {
                ans++;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        int x1 = 0, x2 = 0;

        for (auto itr : points)
        {
            if ((itr > x[i] && itr < y[i]))
                x1++;
            if ((itr > y[i] && itr <= 2 * n) || (itr >= 1 && itr < x[i]))
                x2++;
        }
        ans += min(x1, x2);
    }

    int rem = n - k;

    ans += rem * (rem - 1) / 2;

    cout << ans << '\n';
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}