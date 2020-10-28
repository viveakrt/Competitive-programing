#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;

using vint = vector<int>;
using vll = vector<ll>;
using vld = vector<ld>;
using vpii = vector<pii>;
using vpil = vector<pil>;
using vpli = vector<pli>;
using vpll = vector<pll>;

#define x first
#define y second

void solve(){
  ll n;
  cin >> n;

  for(int i = 1; ; i++){
    if(n >= (1LL << i)) continue;
    n -= i;
    vector<pii> r;
    int cp = 0;
    for(int j = i; j >= 1; j--){
      if(n >= (1LL << (j - 1)) - 1){
        if(cp){
          for(int k = j; k >= 1; k--) r.emplace_back(j, k);
        }
        else{
          for(int k = 1; k <= j; k++) r.emplace_back(j, k);
        }
        cp = !cp;
        n -= (1LL << (j - 1)) - 1;
      }
      else{
        r.emplace_back(j, cp ? j : 1);
      }
    }
    reverse(r.begin(), r.end());
    while(n--) r.emplace_back(++i, 1);
    cout << '\n';
    for(pii &i : r) cout << i.x << ' ' << i.y << '\n';
    break;
  }
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  for(int i = 1; i <= t; i++){
    cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}
