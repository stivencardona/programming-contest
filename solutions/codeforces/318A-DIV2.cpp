#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k, middle;
    cin >> n >> k;
    middle = (n % 2) ? (n + 1) / 2 : n / 2;
    cout << ((k <= middle) ? 2 * k - 1 : 2 * (k - middle)) << "\n";
}
