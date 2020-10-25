/**
* Link to problem: https://codeforces.com/problemset/problem/1362/C
* Problem description:
* given a number n, which represent the range of numbers from 0 to n
* take the representation of each of this numbers in binary,
* for example 2 = 10, 3 = 11 and so on...
* now for every number in the range from 0 to n count the number of distinct
* bits between adjacent binary numbers for example
* given 10101 and 10000 the number of distinct bits is 2
* 10101
* 10000
*   * * = 2
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;

    scanf(" %d",&t);

    /**
    * dp table where I store the value of the difference between numbers
    * from 0 to the decimal number with its binary representation having the
    * highest and only bit at position i
    * for example dp(3) = difference of numbers from 0 to 4 as 100 = 4
    */
    ll dp[65];

    dp[0] = 0;

    for(int i = 1; i < 65;++i){
        /**
        * we know for sure that if we have a number of the form 10000
        * then the previous number was of the form 01111
        * the the difference of bits is the lenght of the first number
        * in this case the length is equal to i
        * that's why dp[i] = i
        */
        dp[i] = i;

        /**
        * we know that in time if we go from 0 to 10000 in binary notation
        * then we should have passed by the numbers like 01000, 00100,00010, 000001
        * and so the real answer for dp[i] is equal is difference of dp[i] summing
        * the difference of all numbers along the way
        * notice that some numbers value are summed more than one time, but its correct
        * as along the way we pass by that bit a lot of times
        */
        for(int j = i-1; j > 0;--j) dp[i] += dp[j];
    }

    while(t--){
        ll n;
        scanf(" %lld",&n);
        ll ans = 0;

        /**
        * having precalculated dp we can apply the same logic
        * and for a number in binary notation  101001
        * the answer will be the sum of dp(i) * (bit at position i is turn on)
        */
        for(int i = 1; n; ++i){
            if(n&1) ans += dp[i];
            n = n >> 1;
        }

        printf("%lld\n",ans);
    }
    return 0;
}
