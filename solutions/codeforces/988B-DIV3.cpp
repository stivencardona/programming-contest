#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> data;
    while (n--)
    {
        string s;
        cin >> s;
        data.push_back(pair<int, string>(s.size(), s));
    }
    bool state = true;
    sort(data.begin(), data.end());
    for (int i = 0; i < data.size() - 1; i++)
    {
        string l = data[i].second;
        string r = data[i + 1].second;
        if (r.find(l) == string::npos)
        {
            state = false;
            break;
        }
    }
    if (state)
    {
        cout << "YES\n";
        for (auto s : data)
            cout << s.second << "\n";
    }
    else
        cout << "NO\n";
 
    return 0;
}
