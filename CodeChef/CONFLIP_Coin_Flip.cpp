// Link: https://www.codechef.com/problems/CONFLIP

#include <iostream>
using namespace std;

int main() {
    int t,g,j,q,i;
    long int n,c1,c2;
	cin>>t;
	while(t--){
	    cin>>g;
	    while(g--){
	        cin>>j>>n>>q;
	        if(n%2==0) // If n is even, both q=1 and q=2 will be equal to n/2
	        c1=c2=n/2;
	        else
	        {
	           if(j==1) // If not, for initial state 1, it will be n/2 and n+1/2
	           {
	             c1=n/2;
	             c2=(n+1)/2;
	           }
	           else // And the reverse for initial state 2
	           {
	             c1=(n+1)/2;
	             c2=n/2;
	           }
	        }
	        if(q==1)
	        cout<<c1<<"\n";
	        else
	        cout<<c2<<"\n";
	    }
    }
	return 0;
}
