// Problem Link: https://codeforces.com/contest/1490/problem/E

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
bool compare(pair<int, int>a, pair<int, int>b) {
	return a.first > b.first;
}

int32_t main() {
	fio;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		vector<pair<int, int>>cumm;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<pair<int, int>>v;
		for (int i = 0; i < n; i++) {
			cumm.push_back({a[i], i + 1});
		}
		sort(cumm.begin(), cumm.end());
		v.push_back({cumm[0].first, cumm[0].second});
		for (int i = 1; i < n; i++) {
			v.push_back({v[i - 1].first + cumm[i].first, cumm[i].second});
		}
		sort(v.begin(), v.end(), compare);
		vector<int>ans;
		ans.push_back(v[0].second);
		for (int i = 1; i < n; i++) {
			if (2 * v[i].first >= v[i - 1].first) {
				ans.push_back(v[i].second);
			}
			else {
				break;
			}
		}
		cout << ans.size() << endl;
		sort(ans.begin(), ans.end());
		for (auto p : ans) {
			cout << p << " ";
		}
		cout << endl;
	}
	return 0;
}