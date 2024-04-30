#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, ans = 0;
    cin >> n;
    ans += (n / 11) * 2;
    ans += (n % 11 > 6) ? 2 : (n % 11) ? 1 : 0;
    cout << ans << "\n";
    return 0;
}