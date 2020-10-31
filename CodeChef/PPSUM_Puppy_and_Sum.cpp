// https://www.codechef.com/problems/PPSUM

#include <iostream>
using namespace std;

int main() {
	int t,a,n,d,i;
	cin>>t;
	while(t--){
	    cin>>d>>n;
	    for(i=0;i<d;i++)
	    {
	        a=0;
	        a=(n*(n+1))/2; // For each iteration, we calculate the sum of numbers 1 to n
	        n=a; // Then, we assigned a to n for the iteration to happen d times.
	    }
	    cout<<n<<"\n";
	}
	return 0;
}
