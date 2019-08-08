#include <bits/stdc++.h>

using namespace std;

int dist(int x, int y, int _x, int _y)
{
    return abs(x - _x) + abs(y - _y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> pts(n);
    vector<pair<int, int>> cts(m);
    for (auto &i : pts)
        cin >> i.first >> i.second;
    for (auto &i : cts)
        cin >> i.first >> i.second;
    for (auto i : pts)
    {
        int idx, min = 1000000000;
        for (int j = 0; j < m; j++)
            if (dist(i.first, i.second, cts[j].first, cts[j].second) < min)
            {
                min = dist(i.first, i.second, cts[j].first, cts[j].second);
                idx = j;
            }
        cout << idx + 1 << "\n";
    }
    return 0;
}