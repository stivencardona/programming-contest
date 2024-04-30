#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int di[4] = {1, -1, -1, 1}, dj[4] = {1, -1, 1, -1};
    vector<string> grid(4);
    for (auto &l : grid)
        cin >> l;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int idx = 0; idx < 4; idx++)
            {
                int ni = i + di[idx], nj = j + dj[idx];
                if (i >= 0 and i < 4 and j >= 0 and j < 4 and ni >= 0 and ni < 4 and nj >= 0 and nj < 4)
                {
                    if ((grid[i][j] == '#' and grid[i][nj] == '#' and grid[ni][j] == '#') || (grid[i][j] == '.' and grid[i][nj] == '.' and grid[ni][j] == '.'))
                    {
                        cout << "YES\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}