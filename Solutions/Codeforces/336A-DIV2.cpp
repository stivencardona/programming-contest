#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    int x1, x2, y1, y2;
    if (x > 0 && y > 0)
        x1 = 0, x2 = x + y, y1 = x + y, y2 = 0;
    if (x < 0 && y > 0)
        x1 = x - y, x2 = 0, y1 = 0, y2 = y - x;
    if (x < 0 && y < 0)
        x1 = x + y, x2 = 0, y1 = 0, y2 = x + y;
    if (x > 0 && y < 0)
        x1 = 0, x2 = x - y, y1 = y - x, y2 = 0;
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
    return 0;
}