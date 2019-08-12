#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, pos, l, r, dist = 0;
    cin >> n >> pos >> l >> r;
    if (l > 1 && r < n)
    {
        dist += (pos < l) ? r - pos + 2 : 0;
        dist += (pos > r) ? pos - l + 2 : 0;
        dist += (pos >= l && pos <= r) ? min(pos - l, r - pos) + r - l + 2 : 0;
    }
    else
    {
        if (l == 1 && r == n)
        {
            cout << 0 << "\n";
            return 0;
        }
        dist += (l == 1) ? abs(pos - r) + 1 : 0;
        dist += (r == n) ? abs(pos - l) + 1 : 0;
    }
    cout << dist << "\n";
    return 0;
}
