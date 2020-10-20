//PROBLEM URL: https://www.codechef.com/problems/HEADBOB

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,x=0;
	cin>>t;
	while(t--)
	{
	  char s[1000];
	  int n,flag=0;
	  cin>>n;
	  for(int i=0;i<n;i++)
	  cin>>s[i];
	  for(int i=0;i<n;i++)
	  {
	  	if(s[i]=='Y')
	  	{
	  		cout<<"NOT INDIAN"<<endl;
	  		flag=1;
	  		break;
		}
	  	
		else if(s[i]=='I')
		{
			cout<<"INDIAN"<<endl;
			flag=1;
			break;
		}
	  }
	  if(flag==0)
	  cout<<"NOT SURE"<<endl;
	}
	return 0;
}