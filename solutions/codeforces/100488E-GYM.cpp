#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<int> DAT(26, 0);
    if (s.size() % 2)
    {
        cout << "NO\n";
        return 0;
    }
    for (char c : s)
        DAT[c - 'a']++;
    for (int i : DAT)
    {
        if (i > s.size() / 2)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}