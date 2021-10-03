//Link: https://codeforces.com/contest/1327/problem/C

#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll MOD = 1000000007;

void solve() {
    int n,m,k,u,v;
    cin>>n>>m;
    for(int i=0;i<2*k;i++) {
        cin>>u>>v;
    }
    int op = m+n-3+(m*n);
    cout<<op<<endl;
    for(int i=0;i<m-1;i++) {
        cout<<'R';
    }
    for(int i=0;i<n-1;i++) {
        cout<<'D';
    }
    bool parity = true;
    
    for(int i=n-1;i>=0;i--) {
        
        if(parity) {
            for(int j=0;j<m-1;j++) {
                cout<<'L';
            }
        }else {
            for(int j=0;j<m-1;j++) {
                cout<<'R';
            }
        }
        
        if(i!=0) {
            cout<<'U';
        }
        
        if(parity) parity = false;
        else parity = true;
    }
}

int main() {
    
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int tt = 1;
	//cin>>tt;
	
	while(tt--) {
	    solve();
	}
	
	return 0;
}
