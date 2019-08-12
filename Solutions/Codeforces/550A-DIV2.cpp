#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    set<string> memo;
    string aux = "";
    for (int i = 2; i < s.size(); i++)
    {
        string c = "", curr = "";
        c += s[i - 2];
        c += s[i - 1];
        if ((s[i] == 'A' and s[i - 1] == 'B'))
        {
            if (memo.find("AB") != memo.end())
            {
                cout << "YES\n";
                return 0;
            }
        }
        if ((s[i] == 'B' and s[i - 1] == 'A'))
        {
            if (memo.find("BA") != memo.end())
            {
                cout << "YES\n";
                return 0;
            }
        }
        memo.insert(c);
    }
    cout << "NO\n";
    return 0;
}
