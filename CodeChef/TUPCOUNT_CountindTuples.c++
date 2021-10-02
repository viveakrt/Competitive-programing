// https://www.codechef.com/problems/TUPCOUNT

#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 10000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vll vector<long long>

typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;

using namespace std;

const int N = 1e6 + 1;
vector<ll> Euler(N);

void EulersTotient() {
    Euler[1] = 1;
    for (int i = 2; i <= N; i++) {
        Euler[i] = i - 1;
    }
    for (int i = 2; i <= N; i++) {
        //Based on the divisor sum property of Euler
        for (int j = 2 * i; j <= N; j += i)
            Euler[j] -= Euler[i];
    }
}

void solve() {
    int t;
    cin >> t;
    EulersTotient();
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 1; i <= n; i++) {
            ll num = n / i;
            num *= num;
            ll val = Euler[i] * num;
            ans += val;
        }
        cout << 2LL * ans - n * n << nline;
    }
}

int main() {
    solve();
    return 0;
}
