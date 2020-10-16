//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<int> ans;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(char x:s){
        ans.insert(x);
    }
    if(ans.size()==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}