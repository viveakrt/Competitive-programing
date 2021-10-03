// https://www.codechef.com/problems/XXOORR

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k, max = -1, ans;
      cin >> n >> k;
      vector<int> a(n);

      for (int &i : a)
      {
         cin >> i;
         if (i > max)
         {
            max = i;
         }
      }

      vector<int> A(31);

      for (int x = 0; x <= 30; x++)
      {
         int count = 0;
         for (int &i : a)
         {
            if (i % 2 != 0)
            {
               count++;
            }
            i /= 2;
         }
         A[x] = count;
      }

      ans = 0;
      for (int x = 0; x <= 30; x++)
      {
         if (A[x] % k == 0)
         {
            ans += A[x] / k;
         }
         else
         {
            ans += A[x] / k + 1;
         }
      }
      cout << ans << endl;
   }
   return 0;
}