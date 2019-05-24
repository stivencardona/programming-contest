#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, _x, _y;
    cin >> x >> y >> _x >> _y;
    int dx = _x - x, dy = _y - y;
    for (int i = 0; i < dx; i++)
        cout << 'R';
    for (int i = 0; i < dy; i++)
        cout << 'U';
    for (int i = 0; i < dx; i++)
        cout << 'L';
    for (int i = 0; i <= dy; i++)
        cout << 'D';
    for (int i = 0; i <= dx; i++)
        cout << 'R';
    for (int i = 0; i <= dy; i++)
        cout << 'U';
    cout << 'L';
    cout << 'U';
    for (int i = 0; i <= dx; i++)
        cout << 'L';
    for (int i = 0; i <= dy; i++)
        cout << 'D';
    cout << "R\n";
    return 0;
}