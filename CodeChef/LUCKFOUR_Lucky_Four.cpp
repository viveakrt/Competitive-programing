// https://www.codechef.com/problems/LUCKFOUR

#include <iostream>
using namespace std;

int main() {
	long long int t,num,r,count;
	cin>>t;
	while(t--){
	    count=0;
	    cin>>num;
	    while(num){ // After extracting each digit of the number, we check if it is 4.
	        r=num%10;
	        if(r==4)
	        count++; // if true, count is incremented by one.
	        num/=10;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
