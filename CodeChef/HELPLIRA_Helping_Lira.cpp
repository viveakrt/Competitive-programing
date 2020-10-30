// Link: https://www.codechef.com/problems/HELPLIRA

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,x1,x2,x3,y1,y2,y3,i,mi,ma;
  double area,max,min;
  cin>>n;
  max=0;
  min=100000000;
  for(i=1;i<=n;i++)
  {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    area=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2); // Applying formula for calculating area of triangle
    if(area>=max) // Then finding the maximum and minimum areas
    {
      max=area;
      ma=i;
    }
    if(area<=min)
    {
      min=area;
      mi=i;
    }
  }
  cout<<mi<<"\t"<<ma<<"\n";
  return 0;
}
