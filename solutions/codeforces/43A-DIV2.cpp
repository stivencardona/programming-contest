#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    map<string, int> data;
    set<string> teams;
    int max = 0;
    string ans;
    while (n--)
    {
        string team;
        cin >> team;
        data[team]++;
        teams.insert(team);
    }
    for (auto i : teams)
    {
        if (data[i] > max)
        {
            ans = i;
            max = data[i];
        }
    }
    cout << ans << "\n";
    return 0;
}
