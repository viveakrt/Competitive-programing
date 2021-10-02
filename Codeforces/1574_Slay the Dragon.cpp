#include<bits/stdc++.h>
using namespace std;

//Question Link
//https://codeforces.com/contest/1574/problem/C


void solve()
{
    long long int n;
    cin >> n;

    vector<long long int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    long long int x;
    cin >> x;

    sort(a.begin(), a.end());
    long long int s = 0;

    for (int i = 0; i < n; i++) s += a[i];

    while (x--)
    {
        long long int m, n;
        cin >> m >> n;

        auto it = lower_bound(a.begin(), a.end(), m);

        long long int t = 0;

        long long int ans = 0;

        if (it == a.end())
        {
            t = a[a.size() - 1];
            if (t < m)
                ans += m - t;

            long long int sum = s;
            sum -= t;

            if (sum < n)
                ans += n - sum;

            cout << ans << endl;
        }
        else
        {
            long long int in = it - a.begin();

            t = a[in];
            if (t < m)
                ans += m - t;

            long long int sum = s;
            sum -= t;

            if (sum < n)
                ans += n - sum;

            long long int  ans2 = 1e15;

            if (in - 1 >= 0)
            {
                ans2 = 0;
                t = a[in - 1];

                if (t < m)
                    ans2 += m - t;

                long long int sum = s;
                sum -= t;

                if (sum < n)
                    ans2 += n - sum;
            }
            cout << min(ans, ans2) << endl;
        }
    }
}

int main()
{
    long long int tt = 1;
    while (tt--)
    {
        solve();
    }
    return 0;
}
