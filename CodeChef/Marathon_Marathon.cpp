//https : //www.codechef.com/problems/MARARUN

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
   int T;
   cin >> T;
   while (T--)
   {
      int d, D;
      ll A, B, C, distance;
      cin >> D >> d >> A >> B >> C;
      distance = d * D;
      if (distance >= 10)
      {
         if (distance >= 21)
         {
            if (distance >= 42)
            {
               cout << C << endl;
            }
            else
            {
               cout << B << endl;
            }
         }
         else
         {
            cout << A << endl;
         }
      }
      else
      {
         cout << 0 << endl;
      }
   }

   return 0;
}