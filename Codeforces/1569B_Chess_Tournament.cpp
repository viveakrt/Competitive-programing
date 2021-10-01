/*

Problem link: https://codeforces.com/contest/1569/problem/B

Problem Description: 
A chess tournament will be held soon, where n chess players will take part. Every participant will play one game against every other participant. Each game ends in either a win for one player and a loss for another player, or a draw for both players.

Each of the players has their own expectations about the tournament, they can be one of two types:

a player wants not to lose any game (i. e. finish the tournament with zero losses);
a player wants to win at least one game.
You have to determine if there exists an outcome for all the matches such that all the players meet their expectations. If there are several possible outcomes, print any of them. If there are none, report that it's impossible.

*/

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int players;
    cin >> players;
    string s;
    cin >> s;

    vector<vector<char>> res(players, vector<char>(players, '.'));

    for(int i = 0; i < players; i++) res[i][i] = 'X';

    for(int i = 0; i < players; i++)
    {
        if (s[i] == '2')
        {
            for(int j = 0; j < players; j++)
            {
                if (s[j] == '2' and res[j][i] == '.')
                {
                    if (i == j)
                        continue;
                    res[i][j] = '+';
                    res[j][i] = '-';
                    break;
                }
            }
        }
    }

    bool flag = true;
    int win = 0, loss = 0;
    for(int i = 0; i < players; i++)
    {
        win = 0, loss = 0;
        for(int j = 0; j < players; j++)
        {
            if (i == j)
                continue;

            if (res[i][j] == '+')
            {
                win++;
            }
            else if (res[i][j] == '-')
                loss++;
            else
                res[i][j] = '=';
        }
        if (s[i] == '1' and loss > 0)
        {
            flag = false;
        }
        else if (s[i] == '2' and win == 0)
        {
            flag = false;
        }
    }

    if (!flag)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i = 0; i < players; i++)
    {
        for(int j = 0; j < players; j++)
        {
            cout << res[i][j];
        }
        cout << "\n";
    }
   
}

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        solve();
    }
    return 0;
}