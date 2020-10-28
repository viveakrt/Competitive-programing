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
  int n;
  cin >> n;
  vector<string> v;
  
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    v.push_back(s);
  }

  string pf, mid, sf;
  for(int i = 0; i < n; i++){
    int l = v[i].length();
    int j, k, c;
    for(j = 0; j < l; j++){
      if(v[i][j] == '*') break;
      if(pf.length() == j) pf.push_back(v[i][j]);
      if(pf[j] != v[i][j]){ cout << "*\n"; return; }
    }
    for(k = l - 1, c = 0; k > 0; k--, c++){
      if(v[i][k] == '*') break;
      if(sf.length() == c) sf.push_back(v[i][k]);
      if(sf[c] != v[i][k]){ cout << "*\n"; return; }
    }
    for(; j < k; j++) if(v[i][j] != '*') mid.push_back(v[i][j]);
  }

  reverse(sf.begin(), sf.end());
  cout << pf << mid << sf << '\n';
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
