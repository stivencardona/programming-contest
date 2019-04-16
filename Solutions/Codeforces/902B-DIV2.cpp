#include <bits/stdc++.h>

using namespace std;

const int MN = 10010;

int Q[MN], b, e, P[MN], ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    vector<int> color(n);
    for (int v = 1; v < n; v++)
    {
        int u;
        cin >> u;
        g[--u].push_back(v);
        g[v].push_back(u);
    }
    for (auto &i : color)
        cin >> i;
    b = e = ans = 0;
    Q[e++] = 0;
    P[0] = -1;
    while (b < e)
    {
        int u = Q[b++];
        for (int v : g[u])
        {
            if (P[u] != v)
            {
                Q[e++] = v;
                P[v] = u;
                if (color[u] != color[v])
                    ans++;
            }
        }
    }
    cout << ans + 1 << "\n";
    return 0;
}