#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int idx = -1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        idx = (s[i] == '0') ? i : idx;
    }
    if (idx != -1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i != idx)
                cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < s.size() - 1; i++)
            cout << s[i];
    }
    cout << "\n";
    return 0;
}
