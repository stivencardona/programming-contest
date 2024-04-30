#include <bits/stdc++.h>

using namespace std;

int doit(int mid, int d, vector<int> &a)
{
    int ans = 0;
    for (int i : a)
    {
        if (!(abs(i - mid) % d))
            ans += abs(i - mid) / d;
        else
        {
            ans = -1;
            break;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n * m);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int ans = 0;
    if (n * m != 1)
    {
        if ((n * m) % 2)
            ans = doit(a[(n * m + 1) / 2 - 1], d, a);
        else
            ans = min(doit(a[(n * m) / 2], d, a), doit(a[(n * m) / 2 - 1], d, a));
    }
    cout << ans << "\n";
    return 0;
}
