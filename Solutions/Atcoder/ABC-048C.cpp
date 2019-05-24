#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + a[i + 1] > x)
        {
            ll r = a[i] + a[i + 1] - x;
            a[i + 1] -= (r > a[i + 1]) ? a[i + 1] : r;
        }
        if (a[i] > x)
            a[i] = x;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += b[i] - a[i];
    cout << ans << "\n";
    return 0;
}