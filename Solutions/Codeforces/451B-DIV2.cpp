#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    vector<int> b(a);
    sort(a.begin(), a.end());
    int l, r;
    l = r = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        if (b[i + 1] < b[i])
        {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (b[i - 1] > b[i])
        {
            r = i;
            break;
        }
    }
    for (int i = 0; i < ((r - l) + 1) / 2; i++)
        swap(b[l + i], b[r - i]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
    cout << l + 1 << " " << r + 1 << "\n";
    return 0;
}
