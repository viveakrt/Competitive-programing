// https://www.codechef.com/problems/INTEST

#include <iostream>
using namespace std;

int main() {
  int n,k,i,t,count;
	cin>>n>>k;
	count=0;
	for(i=0;i<n;i++)
	{
	    cin>>t;
	    if(t%k==0) // if t is divisible by k, count is incremented by one.
	    count++;
	}
	cout<<count;
	return 0;
}
