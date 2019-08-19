#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector<int> DAT(26, 0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (auto c : s)
        DAT[c - 'a']++;
    bool state = true;
    for (int i : DAT)
        if (i % n != 0)
            state = false;
    if (state)
    {
        string ans = "";
        for (int i = 0; i < 26; i++)
        {
            int j = DAT[i] / n;
            while (j--)
                ans += char(97 + i);
        }
        while (n--)
            cout << ans;
        cout << "\n";
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}
