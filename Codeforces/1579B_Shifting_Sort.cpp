// Problem Link: https://codeforces.com/contest/1579/problem/B

// Solution:

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
		vector<int>v;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		vector<int>a(v);
		sort(a.begin(), a.end());
		vector<vector<int>>ans;
		for (int i = 0; i < n; i++) {
			if (v[i] != a[i]) {
				int idx = -1;
				for (int j = i; j < n; j++) {
					if (a[i] == v[j]) {
						idx = j;
						break;
					}
				}
				ans.push_back({i + 1, idx + 1, (idx - i)});
				for (int k = 0; k < (idx - i); k++) {
					int curr_ele = v[i];
					for (int j = i; j < idx; j++) {
						v[j] = v[j + 1];
					}
					v[idx] = curr_ele;
				}
			}
			else {
				continue;
			}
		}
		cout << ans.size() << endl;
		for (int i = 0; i < ans.size(); i++) {
			for (int j = 0; j < ans[i].size(); j++) {
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}