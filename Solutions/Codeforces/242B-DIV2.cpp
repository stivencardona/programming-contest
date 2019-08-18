#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int MX = 0, MN = 2000000000;
    map<int, set<int>> storage;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        storage[l].insert(i);
        storage[r].insert(i);
        MN = (MN > l) ? l : MN;
        MX = (MX < r) ? r : MX;
    }
    int ans = -1;
    for (auto i : storage[MN])
        if (storage[MX].find(i) != storage[MX].end())
            ans = i;
    cout << ans << "\n";
    return 0;
}
