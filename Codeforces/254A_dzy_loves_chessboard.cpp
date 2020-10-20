//Codeforces 254(div2)A - DZY Loves Chessboard
//Question link : https://codeforces.com/contest/445/problem/A




#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != '-') {
                if ((i + j) & 1) a[i][j] = 'W';
                else a[i][j] = 'B';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
}