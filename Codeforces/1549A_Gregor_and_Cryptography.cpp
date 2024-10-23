//Question Link = https://codeforces.com/contest/1549/problem/A

#include"bits/stdc++.h"
using namespace std;
#define int long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
#define mod 1000000007
int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}
bool compare(int a, int b) {
    return a > b;
}

int32_t main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << 2 << " " << n << endl;
        }
        else {
            cout << (n - 1) / 2 << " " << n - 1 << endl;
        }
    }
    return 0;
}