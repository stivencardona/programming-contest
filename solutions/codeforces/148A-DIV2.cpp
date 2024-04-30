#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<int> memo(d + 1, 0);
    int ans = 0;
    for (int i = k; i <= d; i += k)
        memo[i] = 1;
    for (int i = l; i <= d; i += l)
        memo[i] = 1;
    for (int i = m; i <= d; i += m)
        memo[i] = 1;
    for (int i = n; i <= d; i += n)
        memo[i] = 1;
    for (int i = 1; i <= d; i++)
        ans += memo[i];
    cout << ans << "\n";
    return 0;
}
