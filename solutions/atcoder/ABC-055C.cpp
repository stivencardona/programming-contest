#include <bits/stdc++.h>

using namespace std;

const int MD = 1e9 + 7;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, ans = 0;
    cin >> n >> m;
    if (n >= (m >> 1))
        ans = (m >> 1);
    if (n < (m >> 1))
        ans += n + ((m - (n << 1)) >> 2);
    cout << ans << "\n";
    return 0;
}