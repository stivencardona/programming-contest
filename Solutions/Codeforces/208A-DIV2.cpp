#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    string ans = "";
    int i = 0;
    bool state = false;
    for (int i = 0; i < s.size();)
    {
        if (i < s.size() - 2)
        {
            if (s[i] == 'W' and (s[i + 1] == 'U' and s[i + 2] == 'B'))
            {
                ans += (state) ? " " : "";
                state = false;
                i += 3;
            }
            else
            {
                state = true;
                ans += s[i];
                i++;
            }
        }
        else
        {
            state = true;
            ans += s[i];
            i++;
        }
    }
    cout << ans << "\n";
    return 0;
}
