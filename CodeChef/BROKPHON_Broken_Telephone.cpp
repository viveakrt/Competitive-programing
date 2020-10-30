// Link: https://www.codechef.com/problems/BROKPHON

#include <iostream>
#include <string.h>
using namespace std;

int main() {
  long int t,i,n,m,count;
  cin>>t;
  while(t--){
    count=0;
    cin>>n;
    long int a[n];
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    m=-1;
    for(i=1;i<n;i++)
    {
      if(a[i]!=a[i-1]) // If one element of the array is different from its previous element, both misheard or whispered wrong. So, both counted.
      {
        count=count+2;
        if(i-1==m) // But, can't count as 2 if its the first element
        count--;
        m=i;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}
