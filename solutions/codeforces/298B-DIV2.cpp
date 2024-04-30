#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
 
int main()
{
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    int S, E, W, N;
    int x, y;
    x = ex - sx;
    y = ey - sy;
    int ans = 0;
    for (char c : s)
    {
        if (x > 0 and c == 'E')
            x--;
        if (x < 0 and c == 'W')
            x++;
        if (y > 0 and c == 'N')
            y--;
        if (y < 0 and c == 'S')
            y++;
        ans++;
        if (x == 0 and y == 0)
        {
            cout << ans << "\n";
            break;
        }
    }
    if (x != 0 or y != 0)
        cout << -1 << "\n";
    return 0;
}
