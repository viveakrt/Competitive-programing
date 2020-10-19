// https://www.codechef.com/OCT20B/problems/REPLESX/

#define _USE_MATH_DEFINES
#include <bits/stdc++.h> 
#include <cmath>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef long double ld;
typedef pair<int,int> pi;
typedef uint64_t i64;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vector<ll>> v2ll;
const int MOD = 1e9+7;
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAIN int main(){FAST_IO;ll tc;cin>>tc;while(tc--){solver();}ret0;}
#define MAIN1 int main(){FAST_IO;solver();ret0;}
#define rep(i,b,e) for(__typeof(e)i=(b)-((b)>(e));i!=(e)-((b)>(e));i+=1-2*((b)>(e)))
#define repa(i,x)  for(auto i:x)
#define vin(x) for(auto &i:x){cin>>i;}
#define vin1(x) for(ll i=1;i<x.size();i++){cin>>x[i];}
#define dbg(x) for(auto i:x){cout<<i<<" ";}cout<<ENDL;
#define dbg2(x) for(auto &i:x){for(auto j:i){cout<<j<<" ";}cout<<endl;}
#define dbgp(x) for(auto i:x){cout<<i.ff<<" "<<i.ss<<endl;}
#define ic(a,b) ((a+b-1)/b)
#define ENDL "\n"
#define VALL(a) a.begin(),a.end()
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define MP(a,b) make_pair(a,b)
#define ff first
#define ss second
#define ret0 return 0;
#define ret return;
#define pb(x) push_back(x)
/*----------------------------*/


void solver(){
    ll n,x,p,k;
    cin>>n>>x>>p>>k;
    p--;
    k--;
    vll arr(n,0);
    vin(arr);
    sort(VALL(arr));
    if(arr[p]==x){
        cout<<0<<ENDL;
        ret;
    }
    if(n==1){
        cout<<1<<ENDL;
        ret;
    }
    if(x<arr[0]|| x>arr[n-1]){
        if(x<arr[0] && k>=p){
            cout<<p+1<<ENDL;
            ret;
        }
        if(x>arr[n-1] && k<=p){
            cout<<n-p<<ENDL;
            ret;
        }
        cout<<-1<<ENDL;
        ret;
    }
    ll idx=0;
    if(x<arr[p])
        idx=upper_bound(VALL(arr),x)-arr.begin();
    else
        idx=lower_bound(VALL(arr),x)-arr.begin();

    if(idx<=p){
        if(k>=p){
            cout<<p-idx+1<<ENDL;
            ret;
        }
        else{
            cout<<-1<<ENDL;
            ret;
        }
    }
    else if(idx>p){
        if(k<=p){
            cout<<idx-p<<ENDL;
            ret;
        }
        else{
            cout<<-1<<ENDL;
            ret;
        }
    }
}

MAIN
