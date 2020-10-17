#include<iostream>
using namespace std;
int main()
{    int t;    
     cin>>t;
     while(t--)    
     {        
          int n,k;        
          cin>>n;        
          int ar[n];
          cin>>k;
          for(int i=0;i<n;i++)
          {
              cin>>ar[i];        
          }        
          k = k%n;
          for(int i=0;i<n;i++)
          {
               cout<<ar[(i+(n-k))%n]<<" ";
          } 
          cout<<endl;
      }
      return 0;
}
