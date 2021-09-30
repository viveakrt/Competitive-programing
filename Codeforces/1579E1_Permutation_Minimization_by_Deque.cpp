//https://codeforces.com/contest/1579/problem/E1
#include<bits/stdc++.h>

using namespace std;


int main() {

    int t ;
    cin >> t;


    while (t--) {
        deque <int> q;
        int n;
        cin >> n;
        std::vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                //if deque is empty ,just add element in it
                q.push_back(v[i]);
            }
            else {
                //we want to make first element as minimum as possible

                //if first element of deque is less than present element (v[i]),add
                //v[i] to back of deque
                if (q.front() < v[i]) {
                    q.push_back(v[i]);
                }
                //if first element of deque is greater than present element (v[i]),add
                //v[i] to back of deque
                else {
                    q.push_front(v[i]);
                }
            }
        }
        //print deque
        while (q.empty() == 0) {
            cout << q.front() << " ";
            q.pop_front();
        }
        cout << endl;

    }


    return 0;

}