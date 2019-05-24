#include <bits/stdc++.h>

using namespace std;

const long long MD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> dat(1001, 0);
    for (int i = 1; i <= n; i++)
    {
        int f = i;
        for (int pf = 2; pf <= f; pf++)
        {
            while (f % pf == 0)
            {
                f /= pf;
                dat[pf]++;
            }
        }
    }
    long long ans = 1;
    for (int i : dat)
        if (i != 0)
            ans = (ans * (i + 1)) % MD;
    cout << ans << "\n";
    return 0;
}