#include <bits/stdc++.h>

using namespace std;

const int MD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int seq[7];
    int x, y, q;
    cin >> x >> y >> q;
    x = (x >= 0) ? x % MD : x + MD;
    y = (y >= 0) ? y % MD : y + MD;
    seq[0] = (x >= 0) ? x % MD : x + MD;
    seq[1] = (y >= 0) ? y % MD : y + MD;
    seq[2] = (y - x >= 0) ? (y - x) % MD : y - x + MD;
    seq[3] = (-x >= 0) ? -x % MD : -x + MD;
    seq[4] = (-y >= 0) ? -y % MD : -y + MD;
    seq[5] = (-y + x >= 0) ? (-y + x) % MD : -y + x + MD;
    cout << seq[(q - 1) % 6] << "\n";
    return 0;
}