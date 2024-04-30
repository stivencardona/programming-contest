#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int q;
        string s;
        cin >> q >> s;
        if (q > 2)
        {
            if (q % 2 != 0)
                cout << "YES\n2\n"
                     << s.substr(0, q / 2) << " " << s.substr(q / 2, (q + 1) / 2) << "\n";
            else
                cout << "YES\n2\n"
                     << s.substr(0, q / 2 - 1) << " " << s.substr(q / 2 - 1, q / 2 + 1) << "\n";
        }
        else if (s[0] < s[1])
            cout << "YES\n2\n"
                 << s[0] << " " << s[1] << "\n";
        else
            cout << "NO\n";
    }
    return 0;
}
