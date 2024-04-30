#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> dict;
    int MX = 0, idx, j = 0;
    for (int &i : a)
    {
        cin >> i;
        dict[i]++;
        if (dict[i] > MX)
        {
            MX = dict[i];
            idx = j;
        }
        j++;
    }
    cout << n - dict[a[idx]] << "\n";
    for (int i = idx; i > 0; i--)
    {
        if (a[i] != a[i - 1])
            cout << ((a[i] > a[i - 1]) ? "1 " : "2 ") << i << " " << i + 1 << "\n";
        a[i - 1] = a[i];
    }
    for (int i = idx; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
            cout << ((a[i] > a[i + 1]) ? "1 " : "2 ") << i + 2 << " " << i + 1 << "\n";
        a[i + 1] = a[i];
    }
    return 0;
}