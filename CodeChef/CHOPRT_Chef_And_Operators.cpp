// https://www.codechef.com/problems/CHOPRT

#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a>b) // if first is greater than second
	    cout<<">\n";
	    else if(a<b) // if first is less than second
	    cout<<"<\n";
	    else // if both are equal
	    cout<<"=\n";
	}
	return 0;
}
