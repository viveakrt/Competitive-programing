#include<bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  for(int tt = 1; tt <= t; ++tt){
    int r,c;
    cin >> r >> c;
    vector<vector<int>> g(r, vector<int> (c,0));
    vector<vector<int>> gr(r, vector<int> (c,0));
    vector<vector<int>> grr(r, vector<int> (c,0));
    vector<vector<int>> gc(r, vector<int> (c,0));
    vector<vector<int>> gcc(r, vector<int> (c,0));

    for(int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j) {
        cin >> g[i][j];
      }
    }

    for(int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j){
        if(g[i][j] == 0) {
          gr[i][j] = 0;
          gc[i][j] = 0;
        }else{
          if(i == 0) gr[i][j] = 1;
          if(i != 0) gr[i][j] = gr[i-1][j] + 1;
          if(j == 0) gc[i][j] = 1;
          if(j != 0) gc[i][j] = gc[i][j-1] + 1;
        }
      }
    }

    for(int i = r-1; i >= 0; --i){
      for(int j = c-1; j >= 0; --j){
        if(g[i][j] == 0) {
          gr[i][j] = 0;
          gc[i][j] = 0;
        }else{
          if(i == r-1) grr[i][j] = 1;
          if(i != r-1) grr[i][j] = grr[i+1][j] + 1;
          if(j == c-1) gcc[i][j] = 1;
          if(j != c-1) gcc[i][j] = gcc[i][j+1] + 1;
        }
      }
    }
    long long ans = 0;

    for(int i = 0; i < r; ++i){
      for(int j = 0; j < c; ++j){
        if(gcc[i][j] >= 2) ans += max(0, min(gr[i][j]/2,gcc[i][j])-1);
        if(gc[i][j] >= 2) ans += max(0, min(gr[i][j]/2,gc[i][j])-1);
        if(gc[i][j] >= 2) ans += max(0, min(grr[i][j]/2,gc[i][j])-1);
        if(gcc[i][j] >= 2) ans += max(0, min(grr[i][j]/2,gcc[i][j])-1);
        if(gr[i][j] >= 2) ans += max(0, min(gc[i][j]/2,gr[i][j])-1);
        if(grr[i][j] >= 2) ans += max(0, min(gc[i][j]/2,grr[i][j])-1);
        if(grr[i][j] >= 2) ans += max(0, min(gcc[i][j]/2,grr[i][j])-1);
        if(gr[i][j] >= 2) ans += max(0, min(gcc[i][j]/2,gr[i][j])-1);
      }
    }
    cout << "Case #" << tt << ": " << ans << endl;
  }

  return 0;
}
