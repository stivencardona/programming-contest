#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long z = n, x, y, ok = 0;
    if (n == 1)
        cout << -1 << "\n";
    else
        cout << n + 1 << " " << n * n + n << " " << n << "\n";
    return 0;
}