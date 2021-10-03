// https://www.codechef.com/problems/CHEFORA

#include <bits/stdc++.h>
using namespace std;

#define l1 long long
#define mod 1000000007
#define n 100001

l1 exponent(l1 base, l1 power)
{
   l1 result = 1;
   while (power != 0)
   {
      if (power % 2 == 0)
      {
         base = ((base % mod) * (base % mod)) % mod;
         power = floor(power / 2);
      }
      else
      {
         result = ((result % mod) * (base % mod)) % mod;
         power = power - 1;
      }
   }
   return result;
}

l1 chefora(l1 number)
{
   l1 a = number;
   l1 ans = 0;
   if (number < 10)
   {
      ans = a;
   }
   else if (number >= 10)
   {
      number = number / 10;
      while (number != 0)
      {
         a = a * 10 + number % 10;
         number = number / 10;
      }
      ans = a;
   }
   return ans;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   l1 chef[n] = {0};
   l1 arr[n] = {0};
   for (l1 i = 1; i <= n; i++)
   {
      chef[i] = chefora(i);
      arr[i] = arr[i - 1] + chef[i];
   }
   l1 t;
   cin >> t;
   while (t--)
   {
      l1 l, r;
      cin >> l >> r;
      l1 difference = arr[r] - arr[l];
      cout << exponent(chef[l], difference) << "\n";
   }
   return 0;
}