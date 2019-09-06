#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int l1, l2, l3;
    l2 = sqrt((a1 * a2) / a3);
    l1 = a1 / l2;
    l3 = (a3 * l2) / a1;
    int ans = l1 * 4 + l2 * 4 + l3 * 4;
    cout << ans << "\n";
    return 0;
}