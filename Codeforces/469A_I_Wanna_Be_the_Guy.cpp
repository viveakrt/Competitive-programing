//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    set<int> s;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    if (s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}