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

int fnd(set<int> &s, int x, int dir){
  if(dir > 0){
    auto it = s.upper_bound(x);
    if(it == s.end()) return int(1e9);
    return *it;
  }
  else{
    auto it = s.lower_bound(x);
    if(it == s.begin()) return -int(1e9);
    return *(--it);
  }
}

void solve(){
  int n, m;
  cin >> n >> m;
  vector<vint> v(n, vint(m));
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> v[i][j];
  vector<vint> c(n, vint(m));
  
  queue<pii> prq;
  vector<set<int>> gs(n), ss(m);
  ll ls = 0, r = 0;
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++){
    prq.emplace(i, j);
    gs[i].insert(j);
    ss[j].insert(i);
    ls += v[i][j];
  }

  for(int i = 1, stp = 0; ; i++){
    vector<pii> rmq;
    stp++;
    while(!prq.empty()){
      pii t = prq.front();
      prq.pop();
      if(c[t.x][t.y] == stp) continue;
      c[t.x][t.y] = stp;

      int ts = 0, tc = 0, z;
      z = fnd(gs[t.x], t.y, 1);
      if(z < m){ tc++; ts += v[t.x][z]; }
      z = fnd(gs[t.x], t.y, -1);
      if(z >= 0){ tc++; ts += v[t.x][z]; }
      z = fnd(ss[t.y], t.x, 1);
      if(z < n){ tc++; ts += v[z][t.y]; }
      z = fnd(ss[t.y], t.x, -1);
      if(z >= 0){ tc++; ts += v[z][t.y]; }
      
      if(v[t.x][t.y] * tc < ts) rmq.push_back(t);
    }
    
    r += ls;
    if(rmq.empty()) break;

    stp++;
    for(pii &t : rmq){
      if(c[t.x][t.y] == stp) continue;
      c[t.x][t.y] = stp;
      
      ls -= v[t.x][t.y];
      gs[t.x].erase(t.y);
      ss[t.y].erase(t.x);
    }

    stp++;
    for(pii &t : rmq){
      if(c[t.x][t.y] == stp) continue;
      c[t.x][t.y] = stp;

      int z = fnd(gs[t.x], t.y, 1);
      if(z < m) prq.emplace(t.x, z);
      z = fnd(gs[t.x], t.y, -1);
      if(z >= 0) prq.emplace(t.x, z);
      z = fnd(ss[t.y], t.x, 1);
      if(z < n) prq.emplace(z, t.y);
      z = fnd(ss[t.y], t.x, -1);
      if(z >= 0) prq.emplace(z, t.y);
    }
  }

  cout << r << '\n';
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
https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd74/00000000002b3034
