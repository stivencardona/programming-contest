#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long X;
    cin >> X;
    long long ans = (((long long)(sqrt(8 * X + 1) - 1)) >> 1LL);
    cout << ans + (((ans * ans + ans) >> 1LL) < X) << "\n";
    return 0;
}