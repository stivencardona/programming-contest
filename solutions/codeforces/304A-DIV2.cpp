#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;

int root(int i)
{
    int r = sqrt(i);
    int ans = (i / r == r && !(i % r)) ? r : oo;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<bool> a(n + 1, true);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            ans += (root(i * i + j * j) <= n);
    cout << ans << "\n";
    return 0;
}