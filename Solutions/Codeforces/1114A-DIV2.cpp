#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;
    int a, b, c;
    cin >> a >> b >> c;
    bool state = true;
    if (a >= x)
        a -= x;
    else
        state = false;
    if (a + b >= y)
    {
        if (a > y)
            a -= y;
        else
        {
            y -= a;
            a = 0;
            b -= y;
        }
    }
    else
        state = false;
    if (a + b + c < z)
        state = false;
    cout << ((state) ? "YES\n" : "NO\n");
    return 0;
}
