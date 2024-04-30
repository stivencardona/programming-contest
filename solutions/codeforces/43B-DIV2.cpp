#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string h, t;
    getline(cin, h);
    getline(cin, t);
    map<char, int> memo;
    for (char c : h)
    {
        if (c != ' ')
            memo[c]++;
    }
    for (char c : t)
    {
        if (c != ' ' and memo[c])
            memo[c]--;
        else if (c != ' ')
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}