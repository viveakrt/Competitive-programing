//  https://codeforces.com/contest/750/problem/A
#include<bits/stdc++.h>
int n,k,ans;
int main(){
	scanf("%d%d",&n,&k);
	k=240-k;
	for(int i=1;i*5<=k;++i){
		++ans;
		k-=i*5;
	}
	printf("%d\n",std::min(n,ans));
	return 0;
}
