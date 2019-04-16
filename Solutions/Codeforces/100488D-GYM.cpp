#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans = -1;
    cin >> n;
    map<int, int> dict;
    vector<int> soldiers(n);
    for (int i = 0; i < n; i++)
    {
        int key;
        cin >> key;
        dict[key]++;
        soldiers[i] = key;
        if (dict[key] == n)
            ans = 0;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int k, x;
        cin >> k >> x;
        dict[soldiers[k - 1]]--;
        soldiers[k - 1] = x;
        dict[x]++;
        if (dict[x] == n && ans == -1)
            ans = i + 1;
    }
    cout << ans << "\n";
    return 0;
}