// Problem Link: https://codeforces.com/contest/478/problem/A

// Solution:

#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int modulo = 998244353;

#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
cout << vars << " = ";
string delim = "";
(..., (cout << delim << values, delim = ", "));
}

typedef unsigned long long int  ull;
typedef long long int ll;

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
    int c1 , c2 , c3 , c4 , c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    c1 = c1 + c2 + c3 + c4 + c5;
    if(c1 == 0)
    cout<<"-1\n";
    else if(c1 % 5 == 0)
    {   
        cout<<c1/5;
    }
    else
    {
        cout<<"-1\n";
    }
}

int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read_input_from_file();
    ll t = 1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        sushovan();
    }
    auto end = std::chrono::high_resolution_clock::now();
    //cout <<"\nExecution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds "<<"\n";
    return 0;
}