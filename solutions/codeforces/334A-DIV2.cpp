#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    n *= n;
    for (int i = 1; i <= n / 2; i++)
        cout << i << " " << n - (i - 1) << "\n";
    return 0;
}