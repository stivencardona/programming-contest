#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> DAT(27);
    int n;
    cin >> n;
    string l, r;
    cin >> l >> r;
    for (int i = 0; i < n; i++)
    {
        if (l[i] != '?')
            DAT[l[i] - 'a'].push_back(i + 1);
        else
            DAT[26].push_back(i + 1);
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (DAT[r[i] - 'a'].size() && r[i] != '?')
        {
            int first = i + 1, second = DAT[r[i] - 'a'][DAT[r[i] - 'a'].size() - 1];
            ans.push_back(pair<int, int>(second, first));
            DAT[r[i] - 'a'].pop_back();
        }
        else if (DAT[26].size() && r[i] != '?')
        {
            int first = i + 1;
            int second = DAT[26][DAT[26].size() - 1];
            ans.push_back(pair<int, int>(second, first));
            DAT[26].pop_back();
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] == '?')
        {
            for (auto &vec : DAT)
            {
                if (vec.size())
                {
                    ans.push_back(pair<int, int>(vec.back(), i + 1));
                    vec.pop_back();
                    break;
                }
            }
        }
    }
    cout << ans.size() << "\n";
    for (auto i : ans)
        cout << i.first << " " << i.second << "\n";
    return 0;
}