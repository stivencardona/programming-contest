#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int ok = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            ok &= (s[i + 1] - s[i] == 1);
        }
        cout << ((ok) ? "Yes\n" : "No\n");
    }
    return 0;
}