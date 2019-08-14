#include <bits/stdc++.h>
 
using namespace std;
 
vector<vector<int>> state(60, vector<int>(60, 0));
vector<string> grid;
int dj[4] = {0, 1, 0, -1}, di[5] = {1, 0, -1, 0}, n, m;
bool cycle = false;
 
void dfs(int i, int j, int pi, int pj)
{
	state[i][j] = 1;
	for (int t = 0; t < 4; t++)
	{
		int ni = i + di[t], nj = j + dj[t];
		if (((ni != pi or nj != pj) and (ni >= 0 and ni < n)) and (nj >= 0 and nj < m))
		{
			if (grid[ni][nj] == grid[i][j] and !state[ni][nj])
			{
				// cout << ni << " " << nj << "\n";
				dfs(ni, nj, i, j);
			}
			else if (state[ni][nj] and grid[ni][nj] == grid[i][j])
			{
				// // cout << "YES\n";
				// cout << ni << " " << nj << "\n";
				cycle = true;
			}
		}
	}
}
 
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		grid.push_back(s);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!state[i][j])
			{
				dfs(i, j, i, j);
				if (cycle)
				{
					cout << "Yes\n";
					return 0;
				}
			}
		}
	}
	cout << "No\n";
	return 0;
}
