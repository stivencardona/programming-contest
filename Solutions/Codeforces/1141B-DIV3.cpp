#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cont = 0, mx = 0, b = 0, e = 0;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            cont++;
        else
        {
            mx = max(mx, cont);
            cont = 0;
        }
    }
    cont = 0;
    for (int i = 0; a[i] != 0; i++)
        b++;
    for (int i = n - 1; a[i] != 0; i--)
        e++;
    int ans = max(mx, b + e);
    cout << ans << "\n";
    return 0;
}