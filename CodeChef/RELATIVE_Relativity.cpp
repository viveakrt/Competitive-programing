// https://www.codechef.com/problems/RELATIVE

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll T;
   cin >> T;
   while (T--)
   {
      ll c, g;
      cin >> g >> c;
      c = c * c;
      g *= 2;
      cout << c / g << endl;
   }
}