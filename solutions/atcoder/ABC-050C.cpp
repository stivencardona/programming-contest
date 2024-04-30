#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, ans = 1;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    bool state = true;
    for (int i = 0, j = 0; i < n - 1 - (n % 2); i += 2, j++)
        state &= (a[i] == a[i + 1] && a[i] == n - (2 * j + 1));
    if (n % 2)
        state &= (a[n - 1] == 0);
    if (state)
    {
        for (int i = 0; i < n / 2; i++)
            ans = (ans << 1) % MD;
        cout << ans << "\n";
    }
    else
        cout << 0 << "\n";
    return 0;
}