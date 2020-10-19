//October COOKOFF - DECREM
//Question link : https://www.codechef.com/COOK123B/problems/DECREM


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, f = 0;
        cin >> l >> r;
        //We will check if any two numbers in range l to r are divisible by each other or not
        //If they are divisible then ans is -1
        //else we can always print the answer as the last number of the given range i.e =>r.
        if ((r / 2) >= l) cout << -1 << '\n';
        else cout << r << '\n';
    }
    return 0;
}
