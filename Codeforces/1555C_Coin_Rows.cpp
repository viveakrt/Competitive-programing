#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int columns;
    cin >> columns;
    vector<vector<int>> mat(2, vector<int>(columns));
    for(int i =0; i < 2; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cin >> mat[i][j];
        }
    }

    int ans = INT_MAX;

    int sum1 = 0, sum2 = 0;

    for(int i =0; i < columns; i++)
    {
        sum1 += mat[0][i];
    }
    
    for(int i = 0; i < columns; i++)
    {
        sum1 -= mat[0][i];
        ans = min(ans, max(sum1, sum2));
        sum2 += mat[1][i];
    }
    
    cout << ans << endl;
}

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        solve();
    }
    return 0;
}