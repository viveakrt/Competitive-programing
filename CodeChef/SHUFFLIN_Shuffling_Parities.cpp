#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int main(){
    ll T; cin>>T;
    while(T--){
        ll N; cin>>N;
        vector<ll> v;
        for(int i = 0; i<N;i++){
            ll t; cin>>t;
            v.push_back(t);
        }                                               //took input array in a vector
        ll even=0,odd=0;                                
        for(int j = 0;j<N;j++){
            if(v[j]%2==0){
                even+=1;                               //counting even numbers in the array
            }
            else{
                odd+=1;                                 //counting odd numbers in the array
            }
        }
        ll ans=0;
        if(N%2==0){
            ans = min(even,N/2)+min(odd,N/2);               //if even number is kept at odd places and odd numbers at even places, sum in B would be optimized
        }                                                   //hence answer will be sum of (minimum of even numbers and odd places) and (minimum of odd numbers and even places)
        else{
            ans = min(even,N/2+1) + min(odd,N/2);           //if N is odd, number of odd places will increase by one
        }
        cout<<ans<<endl;
    }
    return 0;
}