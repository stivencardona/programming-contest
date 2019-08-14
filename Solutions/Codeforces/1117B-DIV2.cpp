#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n, m, k;
    long long ans = 0;
    cin >> n >> m >> k;
    vector<long long> a(n);
    for (long long &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    if (k >= m)
        ans = m * a[a.size() - 1];
    else
    {
        ans += (m / (k + 1)) * (k * a[a.size() - 1] + a[a.size() - 2]);
        ans += (m % (k + 1)) * a[a.size() - 1];
    }
    cout << ans << "\n";
    return 0;
}
