// Problem link- https://www.codechef.com/START14C/problems/BININVER/
// Codechef Starter-14

/*Sample Input 1 
3
3
2 3 5
2
4 6
3 
4 12 24

Sample Output 1 
0
1 
2
Explanation
Test case 1: The GCD of all integers in the array is already 1, which is odd.
Test case 2: You choose the index i=2 and set A2=⌊62 ⌋=⌊3⌋=3. So the array becomes [4,3] and the GCD of 4 and 3 is 1.*/


#include <bits/stdc++.h>
using namespace std;
int mod =1e9+7;
#define fast ios_base::sync_with_studio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll arr[n];
	    ll even=0,odd=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    
	    if(arr[i]%2==0){
	        even++;
	    }else
	    {
	        odd++;
	    }
	    }
	    if(even==n){
	        ll ans=1e9;
	        for(int i=0;i<n;i++){
	            ll crr=0;
	            while(arr[i]%2!=1){
	                arr[i]=arr[i]/2;
	                crr++;
	            }
	            if(crr<ans){
	                ans=crr;
	            }
	        }
	        cout<<ans<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}