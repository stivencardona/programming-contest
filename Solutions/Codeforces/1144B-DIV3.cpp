#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % 2)
            a.push_back(tmp);
        else
            b.push_back(tmp);
    }
    int ans = 0;
    if (a.size() > b.size() + 1)
    {
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() - (b.size() + 1); i++)
            ans += a[i];
    }
    if (b.size() > a.size() + 1)
    {
        sort(b.begin(), b.end());
        for (int i = 0; i < b.size() - (a.size() + 1); i++)
            ans += b[i];
    }
    cout << ans << "\n";
    return 0;
}