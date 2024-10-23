/***** Add and Divide ******/
/***** ADDNDIV ******/
/**** CodeChef *****/
/***** Contributed by Raunak Gayen ******/

/** Problem Statement: You are given two positive integers a and b. You also have a number x, which is initially set to 0. 
At first, you can add a to x any number of times. 
After that, you can divide x by b any number of times as long as x is divisible by b.
Print YES if you can make x equal to 1, otherwise print NO.
**/

/** Constraints: 
1 ≤ T ≤ 100000  [T --> Test cases]
1 <= a,b <= 10^9
**/
    

/*** meaning in short ---- if by any way  we can make   n * a == b ^ m  [where n and m can be anything]  ***/



#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<bool> prime(1000010, true); // true means all numbers upto 1000010 are prime initially
vector<ll> primefctrs; // vector for storing the prime numbers only

// Sieve of Eratosthenes
void primesieve()
{
    // true --> prime      false --> not prime
    prime[0] = false; 
    prime[1] = false;
    // 0 and 1 are not prime so we declare them false
    for (ll i = 2; i * i < 1000010; i++) // loops runs upto square root of array size
    {
        if (prime[i] == true)
        {
            for (ll j = i * i; j < 1000010; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    for (ll i = 0; i < 1000010 ; i++)
    {
        if(prime[i] == true)
        {
            primefctrs.push_back(i); // here we push all the prime numbers
        }
    }
    
}


/****function to return vector of prime factors of any number ******/
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    while (n % 2 == 0)
    {
        v.push_back(2); // as long as the number is even we keep pushing 2 
        n = n / 2; 
    }

    // iterating over the prime numbers only
    for (long long i = 0; primefctrs[i] <= sqrt(n) && i < primefctrs.size(); i++)
    {
        while (n % primefctrs[i] == 0)
        {
            v.push_back(primefctrs[i]); //after the number becomes odd we keep dividing it and store the prime factors until the number becomes 1 or any prime number
            n = n / primefctrs[i];
        }
    }
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        v.push_back(n);  // if the remaining number is itself a prime number
    sort(v.begin(),v.end()); // this is done to sort the prime factors in increasing order
    return v;
}


void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a == b) // if the 2 numnbers are same we return YES
    {
        cout<<"YES"<<"\n";
        return;
    }
    else
    {
        vector<long long> v1 = primeFactors(a); // we are calling primeFactors() function to get all the prime factors of a
        vector<long long> v2 = primeFactors(b); // // we are calling primeFactors() function to get all the prime factors of b


        // now we are running a loop to find if there's any such prime factor of a thats not a factor of b
        for (long long i = 0; i < v1.size(); i++)
        {
            if(binary_search(v2.begin(),v2.end(),v1[i]))
            {
                continue; //if we find we just keep running the loop
            }
            else
            {
                cout<<"NO"<<"\n"; // if any prime factor is absent we print no and exit the loop and return the same answer
                return;
            }
        }

        cout<<"YES"<<"\n"; // we have reached here means we found all factors of a in the vector of b 
        // so we print yes and return the same
        return;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); // for fast input and output

    primesieve();
    long long t; // input of test cases
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}