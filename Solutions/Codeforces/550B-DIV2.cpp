#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, l, r, x, ans = 0;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    for (int i = 3; i < (1 << n); i++)
    {
        int MN = 10000000, MX = 0, sum = 0, aux = 0;
        for (int j = 0; j < n; j++)
        {
            if ((1 << j) & i)
            {
                aux++;
                MN = (a[j] < MN) ? a[j] : MN;
                MX = (a[j] > MX) ? a[j] : MX;
                sum += a[j];
            }
        }
        if (((sum >= l and sum <= r) and (MX - MN >= x)) and aux > 1)
            ans++;
    }
    cout << ans << "\n";
    return 0;
}