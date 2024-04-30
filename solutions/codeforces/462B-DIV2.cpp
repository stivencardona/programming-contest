#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> DAT(26, 0);
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
        DAT[s[i] - 'A']++;
    sort(DAT.begin(), DAT.end());
    ll ans = 0;
    for (int i = 25; i >= 0 && k; i--)
    {
        if (DAT[i] > k)
        {
            ans += k * k;
            k = 0;
        }
        else
        {
            ans += DAT[i] * DAT[i];
            k -= DAT[i];
        }
    }
    cout << ans << "\n";
    return 0;
}
