// https://www.codechef.com/problems/DIFFSUM

#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    if(n1>n2) // if first is greater than second, difference printed
    cout<<n1-n2;
    else // else, sum is printed.
    cout<<n1+n2;
	return 0;
}
