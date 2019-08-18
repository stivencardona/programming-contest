#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k;
    cin >> k;
    vector<pair<int, pair<int, int>>> storage;
    for (int i = 1; i <= k; i++)
    {
        int n;
        cin >> n;
        vector<int> data(n);
        int sum = 0;
        for (int &j : data)
        {
            cin >> j;
            sum += j;
        }
        for (int j = 0; j < data.size(); j++)
        {
            storage.push_back(pair<int, pair<int, int>>(sum - data[j], pair<int, int>(i, j)));
        }
    }
    sort(storage.begin(), storage.end());
    for (int i = 0; i < storage.size() - 1; i++)
    {
        if (storage[i].first == storage[i + 1].first && (storage[i].second.first != storage[i + 1].second.first))
        {
            cout << "YES\n";
            cout << storage[i].second.first << " " << storage[i].second.second + 1 << "\n";
            cout << storage[i + 1].second.first << " " << storage[i + 1].second.second + 1 << "\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
