//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2<<endl;
    return 0;   
}