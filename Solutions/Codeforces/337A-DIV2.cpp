#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int ans = 1000000000;
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i <= m - n; i++)
        ans = (ans > a[i + n - 1] - a[i]) ? a[i + n - 1] - a[i] : ans;
    cout << ans << "\n";
    return 0;
}
