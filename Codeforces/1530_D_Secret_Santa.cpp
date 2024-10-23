#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define pb push_back
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define hi "visited\n"
using namespace std;

//problem link - https://codeforces.com/contest/1530/problem/D
void print(int *arr, int *ans, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ans[i])
            k++;
    }
    cout << k << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] + 1 << ' ';
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; arr[i]--;
    }
    int ans[n]; memset(ans, -1, sizeof(ans));
    bool hasrec[n] = {};
    set<int> givremain, recremain;
    int one = -1;
    for (int i = 0; i < n; i++)
    {
        if (hasrec[arr[i]] == 0)
        {
            hasrec[arr[i]] = 1;
            ans[i] = arr[i];
        }
        else
        {
            givremain.insert(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (hasrec[i] == 0)
            recremain.insert(i);
    }
    int two = -1;
    if (recremain.size() == 0)
    {
        print(arr, ans, n);
        return;
    }
    if (recremain.size() == 1)
    {
        if (*recremain.begin() == *givremain.begin())
        {
            int want = arr[*givremain.begin()];
            for (int i = 0; i < n; i++)
            {
                if (ans[i] == want)
                {
                    one = i;
                    break;
                }
            }
            int i = one;
            ans[i] = *recremain.begin();
            ans[*givremain.begin()] = want;
            print(arr, ans, n);
            return;
        }
        else
        {
            ans[*givremain.begin()] = *recremain.begin();
            print(arr, ans, n);
            return;
        }
    }
    while (givremain.size() > 0)
    {
        auto g = givremain.begin();
        auto r = recremain.begin();
        if (*g == *r and givremain.size() == 1)
        {
            int want = arr[*givremain.begin()];
            for (int i = 0; i < n; i++)
            {
                if (ans[i] == want)
                {
                    one = i;
                    break;
                }
            }
            int i = one;
            ans[i] = *recremain.begin();
            ans[*givremain.begin()] = want;
            print(arr, ans, n);
            return;
        }
        while (*g == *r)
        {
            r++;
        }
        ans[*g] = *r;
        two = *g;
        givremain.erase(g);
        recremain.erase(r);
    }
    print(arr, ans, n);
    return;
}

signed main()
{
    int T; T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    //cout << "\n\n"<<"Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds.\n";
    return 0;
}