#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> data(n);
    for (int &i : data)
        cin >> i;
    sort(data.begin(), data.end());
    long long ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (data[i] <= 0)
            ans += data[i];
    }
    cout << ans * -1 << "\n";
    return 0;
}
