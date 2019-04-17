#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> st(n);
    vector<int> freq(1010, 0);
    vector<int> rep(1010, 0);
    for (auto &i : st)
    {
        cin >> i.first >> i.second;
        freq[i.first]++;
        rep[i.first] += (i.first == i.second);
    }
    int ans = 0;
    for (auto i : st)
    {
        if (i.first == i.second && freq[i.first])
        {
            ans += freq[i.second] - (rep[i.second] == 1);
            freq[i.second] -= freq[i.second] - (rep[i.second] == 1);
        }
        else
        {
            ans += freq[i.second];
            freq[i.second] = 0;
        }
    }
    cout << n - ans << "\n";
    return 0;
}