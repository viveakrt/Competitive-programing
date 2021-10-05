// https://www.codechef.com/problems/ADAKING
#include <bits/stdc++.h>
using namespace std;

int t,n;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1;i <= 8;i++) 
        {
            for(int j = 1;j <= 8;j++) if(j+(i-1)*8>n) cout << "X"; else if(i==1 and j==1) cout << "O"; else cout << ".";
            cout << '\n';
        }
    }
}
