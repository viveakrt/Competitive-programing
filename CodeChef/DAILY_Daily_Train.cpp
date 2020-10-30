// Link: https://www.codechef.com/problems/DAILY

#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int x,n,i,c,j,k;
  float nu,de;
  cin>>x>>n;
  char str[54];
  int count=0;
  for(k=0;k<n;k++)
  {
    cin>>str;
    for(i=0;i<9;i++)
    {
      c=0;
      nu=1;de=1;
      for(j=4*i;j<4*(i+1);j++) // Finding number of empty seats in a compartment
      {
        if(str[j]=='0')
        c++;
      }
      for(j=54-2*(i+1);j<54-2*i;j++)
      {
        if(str[j]=='0')
        c++;
      }
      if(c>=x) // If there are more than or equal empty seats as x in a compartment
      {
        for(j=c;j>(c-x);j--)
        {
          nu=nu*j;
        }
        for(j=1;j<=x;j++)
        {
          de=de*j;
        }
        nu=nu/de; // Calculating the number of combinations
        count=count+nu;
      }
    }
  }
  cout<<count<<"\n";
  return 0;
}
