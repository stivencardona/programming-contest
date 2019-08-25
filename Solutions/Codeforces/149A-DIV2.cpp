#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k;
    int ans = 0;
    cin >> k;
    vector<int> months(12);
    for (int &i : months)
        cin >> i;
    sort(months.begin(), months.end());
    for (int i = 11; i >= 0; i--)
    {
        if (k > 0)
        {
            k -= months[i];
            ans++;
        }
    }
    if (k > 0)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
    return 0;
}