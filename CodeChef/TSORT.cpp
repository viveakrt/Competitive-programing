#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	scanf("%d",&t);
    int i=0,a[t];
	while(i<t){
	     scanf("%ld",&a[i]);
	    i++;
	}
	sort(a,a+t);
	for(i=0;i<t;i++)
	{
	    cout<<a[i]<<"\n";
	}
	return 0;
}
