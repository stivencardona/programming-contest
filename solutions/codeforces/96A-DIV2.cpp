#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int o, z;
    o = z = 0;
    string s;
    cin >> s;
    bool state = false;
    for (char c : s)
    {
        if (c == '1')
        {
            o++;
            z = 0;
        }
        else
        {
            z++;
            o = 0;
        }
        if (z == 7 or o == 7)
            state = true;
    }
    cout << ((state) ? "YES\n" : "NO\n");
    return 0;
}
