/* Question URL : https://codeforces.com/problemset/problem/141/A */

#include <bits/stdc++.h>

typedef unsigned long long int ulli;
typedef long long int lli;

const int mod = 1e9 + 7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2, s3, s4;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    s4 = s1 + s2;

    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());

    if (s3 == s4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}