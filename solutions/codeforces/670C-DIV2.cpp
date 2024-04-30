#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n;
    map<int, int> data;
    while (n--)
    {
        int a;
        cin >> a;
        data[a]++;
    }
    cin >> m;
    vector<int> l(m);
    vector<int> s(m);
    vector<pair<int, pair<int, int>>> ans(m);
    for (int &i : l)
        cin >> i;
    for (int &i : s)
        cin >> i;
    for (int i = 0; i < m; i++)
        ans[i] = pair<int, pair<int, int>>(data[l[i]], pair<int, int>(data[s[i]], i));
    sort(ans.begin(), ans.end(), greater<pair<int, pair<int, int>>>());
    cout << ans[0].second.second + 1 << "\n";
    return 0;
}