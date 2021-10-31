// Problem link : https://codeforces.com/contest/1604/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){

	int t;cin>>t;
	while(t--){

		int n,cnt=0;
		cin>>n;
   long long sum=0;
		vector<int>v(n+1);
		for(int i=1;i<=n;i++){
			cin>>v[i];

			if(v[i]>i+cnt){
			sum+=v[i]-(i+cnt);
		      cnt+=v[i]-(i+cnt);
		  }
		}
		cout<<sum<<endl;
	}
	return 0;
}