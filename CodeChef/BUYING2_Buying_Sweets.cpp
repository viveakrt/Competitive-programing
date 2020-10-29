// Link: https://www.codechef.com/problems/BUYING2

#include <iostream>
using namespace std;

int main() {
    int t,i,n,x,num,m,sum;
	cin>>t;
	while(t--){
	    num=0;
	    cin>>n>>x;
	    int A[n];
	    sum=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>A[i];
	        sum=sum+A[i];
	    }
	    if(sum%x!=0) //If customer gave more amount, first calculate the extra amount.
	    {
	        m=sum%x;
	        for(i=0;i<n;i++)
	        {
	            if(m>=A[i]) // Then, if that extra amount is more than value of any notes, inadequate
	            num=-1;

	        }
	    }
	    if(num==0) // If not, print maximum sweets
	     num=sum/x;
	    cout<<num<<"\n";
	}
	return 0;
}
