#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> ans;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        int mx = (b[n - 1] != a[i]) ? b[n - 1] : b[n - 2];
        if (sum - a[i] - mx == mx)
            ans.push_back(i + 1);
    }
    cout << ans.size() << "\n";
    for (int i : ans)
        cout << i << " ";
    cout << "\n";
    return 0;
}