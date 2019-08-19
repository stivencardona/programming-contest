#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int max = 1, cont = 1;
    int h, m, _h, _m;
    n--;
    cin >> h >> m;
    while (n--)
    {
        cin >> _h >> _m;
        if (_h == h and _m == m)
            cont++;
        else
            cont = 1;
        max = (cont > max) ? cont : max;
        h = _h;
        m = _m;
    }
    cout << max << "\n";
    return 0;
}
