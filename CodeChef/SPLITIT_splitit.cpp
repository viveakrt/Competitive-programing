//Octomber COOKOFF - SPLITIT
//Question link : https://www.codechef.com/COOK123B/problems/SPLITIT


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		char b = s[n - 1]; //It is the last character of the string
		int f = 0;
		//We will check if the last character is present in the string or not
		for (int i = 0; i < n - 1; i++) {
			if (s[i] == b) {f = 1; break;}
		}
		if (f) cout << "YES" << '\n'; //If it is present then its possible
		else cout << "NO" << '\n'; //else no

	}
	return 0;
}