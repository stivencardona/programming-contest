#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int ans = 0, n;
    cin >> n;
    n <<= 1;
    vector<list<int>> v(5010);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v[tmp].push_back(i + 1);
    }
    for (auto l : v)
    {
        if (l.size() & 1)
        {
            cout << -1 << "\n";
            return 0;
        }
    }
    int idx = 0;
    for (auto l : v)
        for (auto i : l)
            cout << i << ((idx++ & 1) ? "\n" : " ");
    return 0;
}