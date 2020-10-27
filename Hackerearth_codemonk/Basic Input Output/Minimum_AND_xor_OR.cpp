#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int get_min(int ar[], int n)
{
	int ans = INT_MAX;
	sort(ar, ar+n);
	for(int i=0;i<n-1;i++)
	{
		ans = min(ans, ar[i]^ar[i+1]);
	}
	return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int ar[n];

		for(int i=0;i<n;i++)
			cin>>ar[i];

		cout<<get_min(ar, n)<<endl;
	}	
}
