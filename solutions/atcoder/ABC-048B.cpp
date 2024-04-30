#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c;
    cin >> a >> b >> c;
    a = (a % c) ? c * (a / c + 1) : a;
    b = (b % c) ? c * (b / c) : b;
    cout << (b - a) / c + 1 << "\n";
    return 0;
}