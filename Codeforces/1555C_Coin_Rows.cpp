/*
Problem link: https://codeforces.com/contest/1555/problem/C
Problem desciption:
 Alice and Bob are playing a game on a matrix, consisting of 2 rows and m columns. The cell in the i-th row in the j-th column contains ai,j coins in it.

Initially, both Alice and Bob are standing in a cell (1,1). They are going to perform a sequence of moves to reach a cell (2,m).

The possible moves are:

Move right — from some cell (x,y) to (x,y+1);
Move down — from some cell (x,y) to (x+1,y).
First, Alice makes all her moves until she reaches (2,m). She collects the coins in all cells she visit (including the starting cell).

When Alice finishes, Bob starts his journey. He also performs the moves to reach (2,m) and collects the coins in all cells that he visited, but Alice didn't.

The score of the game is the total number of coins Bob collects.

Alice wants to minimize the score. Bob wants to maximize the score. What will the score of the game be if both players play optimally
*/



#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int columns;
    cin >> columns;
    vector<vector<int>> mat(2, vector<int>(columns));
    for(int i =0; i < 2; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cin >> mat[i][j];
        }
    }

    int ans = INT_MAX;

    int sum1 = 0, sum2 = 0;

    for(int i =0; i < columns; i++)
    {
        sum1 += mat[0][i];
    }
    
    for(int i = 0; i < columns; i++)
    {
        sum1 -= mat[0][i];
        ans = min(ans, max(sum1, sum2));
        sum2 += mat[1][i];
    }
    
    cout << ans << endl;
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