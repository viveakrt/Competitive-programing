// Problem link: https://www.codechef.com/problems/BOWLERS

/**
 * @author: Rahul Jain
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, k, l;
	    cin >> n >> k >> l;
	    if(k*l < n) cout << -1; // total overs to bowl is too much
	    else if(k == 1 && n > 1) cout << -1; // only one player is there so he will have to bowl consecutive overs
	    else {
	        int b = 0;
	        while(n--) {
	            cout << b+1 << " ";
	            b = (b+1)%k; // round-robin strategy so that no consecutive overs are bowled by same player
	        }
	    }
	    cout << endl;
	}
	return 0;
}
