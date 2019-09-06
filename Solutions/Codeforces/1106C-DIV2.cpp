#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long ans = 0;
    cin >> n;
    vector<int> data(n);
    for (auto &i : data)
        cin >> i;
    sort(data.begin(), data.end());
    for (int i = 0; i < data.size() / 2; i++)
        ans += (data[i] + data[data.size() - 1 - i]) * (data[i] + data[data.size() - 1 - i]);
    cout << ans << "\n";
    return 0;
}
