#include <bits/stdc++.h>
 
using namespace std;
 
vector<string> grid(60);
int n;
vector<vector<bool>> state(60, vector<bool>(60, false));
int di[4] = {0, 1, 0, -1}, dj[4] = {1, 0, -1, 0};
 
void dfs(int i, int j, vector<pair<int, int>> &A)
{
    // cout << i << " " << j << "\n";
    A.push_back(pair<int, int>(i, j));
    state[i][j] = true;
    for (int t = 0; t < 4; t++)
    {
        int ni = i + di[t], nj = j + dj[t];
        if ((ni < n and ni >= 0) and (nj < n and nj >= 0))
        {
            if ((grid[ni][nj] == '0' and !state[ni][nj]))
            {
                // cout << ni << " " << nj << "\n";
                dfs(ni, nj, A);
            }
        }
    }
}
 
int main()
{
    cin >> n;
    vector<pair<int, int>> A;
    vector<pair<int, int>> B;
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    for (int i = 0; i < n; i++)
        cin >> grid[i];
    dfs(r1 - 1, c1 - 1, A);
    if (state[r2 - 1][c2 - 1])
        cout << 0 << "\n";
    else
    {
        dfs(r2 - 1, c2 - 1, B);
        int mn = 1000000000;
        for (auto a : A)
        {
            for (auto b : B)
            {
                int dist = (b.first - a.first) * (b.first - a.first) + (b.second - a.second) * (b.second - a.second);
                mn = (dist < mn) ? dist : mn;
            }
        }
        cout << mn << "\n";
    }
    return 0;
}