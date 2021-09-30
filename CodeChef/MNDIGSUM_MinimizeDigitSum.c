#include <bits/stdc++.h>
using namespace std;

class Test
{
    public:
    int solve()
    {
        int q, n, l, r, a, sum, min, sum2;
        cin>>q;
        for (int i = 0; i< q; i++) 
        {
             cin>>n>>l>>r;
             if (n>=l && n<=r) 
            {
                cout<<n<<endl;
                continue;
            }
            if (n < l) 
            {
                cout<<l<<endl;
                continue;
            }
    
            sum2 = INT_MAX;
            min = 0;
       
            while (l<r && n/r<r) 
            {
                int temp1 = n/r, temp2 = n%r;
                if (sum2>temp1 + temp2) 
                {
                    sum2 = temp1 + temp2;
                    min = r;
                }
            
                r = n/(temp1 + 1);
            }
            while (l<=r) 
            {
                a = n;
                sum = 0;
                for (;;) 
                {
                    if (a<l)
                    {
                        sum += a;
                        if (sum<sum2) 
                        {
                            min = l;
                            sum2 = sum;
                        }
                        break;
                     }
                sum += a % l;
                a /= l;
                if (sum >= sum2)
                    break;
            }
            l++;
        }
       cout << min << "\n";
    }
    }
    
};
int main()
{

    Test tt;
    tt.solve();
    return 0;
}
