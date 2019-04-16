#include <bits/stdc++.h>

using namespace std;

const double PI = 3.141592654;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n, R, r;
    cin >> n >> R >> r;
    if (r > R)
    {
        cout << "NO\n";
        return 0;
    }
    if (n == 1 && r <= R)
    {
        cout << "YES\n";
        return 0;
    }
    if (n == 2 && R >= 2.0 * r)
    {
        cout << "YES\n";
        return 0;
    }
    if (n > 3)
    {
        double alfa = (2.0 * PI) / n;
        double beta = (PI - alfa) / 2.0;
        double d = (R - r) * (sin(alfa) / sin(beta));
        // cout << alfa << " " << beta << " " << d << "\n";
        cout << ((d / 2.0 >= r) ? "YES" : "NO") << "\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}