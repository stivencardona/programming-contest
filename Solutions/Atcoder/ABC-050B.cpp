#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll ans = 0LL;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
        ans += i;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i, v;
        cin >> i >> v;
        cout << ans - (a[i - 1] - v) << "\n";
    }
}