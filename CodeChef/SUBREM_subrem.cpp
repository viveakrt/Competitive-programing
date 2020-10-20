#include <bits/stdc++.h>
using namespace std;

vector<long long int>graph[100001];
long long int a[100001];
long long int x;


//basic dfs function
long long int dfs(int node, int parent) {
    long long int res = 0;
    for (int i = 0; i < graph[node].size(); i++)
        if (graph[node][i] != parent)
        {
            res += dfs(graph[node][i] , node);//for maximizing the profit
        }

    return max(res + a[node], -x); //return the maximum profit
}

//clear the graph
void clearit(int n) {
    for (int i = 1; i <= n; i++) graph[i].clear();
}


int main() {
    long long int t, n, u, v;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        for (int i = 1; i <= n; i++) cin >> a[i];
        clearit(n);
        for (int i = 1; i <= n - 1; i++) {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cout << dfs(1, 1) << '\n';
    }
    return 0;
}
