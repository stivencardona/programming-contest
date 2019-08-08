#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int W, a, b;
    cin >> W >> a >> b;
    int d1 = b - (a + W);
    int d2 = a - (b + W);
    if (d1 < 0 && d2 < 0)
        cout << 0 << "\n";
    else
        cout << max(d1, d2) << "\n";
    return 0;
}