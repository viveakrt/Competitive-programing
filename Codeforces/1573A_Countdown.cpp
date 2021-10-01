// Problem Link: https://codeforces.com/contest/1573/problem/A

// Solution:

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int  ull;
typedef long long int ll;
typedef long double ld;

const int mod = 1e9 + 7;
const int modulo = 998244353;
const ld pi = 3.14159265358979323846;

#define nn cout<<"\n"
#define ln "\n"
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
cout << vars << " = ";
string delim = "";
(..., (cout << delim << values, delim = ", "));
}

ll power(ll a, ll b)
{
    ll ans = 1;
    while(b != 0)
    {
        if((b % 2) == 0)
        {
            a = ((a % mod) * (a % mod)) % mod;
            b /= 2;
        }
        else
        {
            ans = ((ans % mod) * (a % mod)) % mod;
            b--;
        }
    }
    return (ans % mod);
}

void read_input_from_file()
{
    #ifndef ONLINE_JUDGE
    freopen("input_file.txt","r",stdin);
    freopen("output_file.txt","w",stdout);
    #endif
}

void sushovan()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    ll sum = 0;
    if(s[n-1] != '0') sum--;
    for(auto x : s)
    {
        if(x == '0') cnt++;
        else 
        {
            sum++;
            sum += (x - '0');
        }
    }
    if(cnt == n)
    {
        cout<<"0\n";
        return;
    }
    cout<<sum<<ln;
}

int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read_input_from_file();
    ll t = 1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        //cout<<"Case #"<<i<<": ";
        sushovan();
    }
    auto end = std::chrono::high_resolution_clock::now();
    //cout <<"\nExecution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds "<<"\n";
    return 0;
}