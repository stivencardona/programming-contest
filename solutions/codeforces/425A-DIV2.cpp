#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k, r;
    cin >> n >> k;
    r = n / k;
    if (r % 2 == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}