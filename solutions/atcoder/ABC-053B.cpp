#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int a, z;
    a = z;
    for (int i = s.size() - 1; i >= 0; i--)
        a = (s[i] == 'A') ? i : a;
    for (int i = 0; i < s.size(); i++)
        z = (s[i] == 'Z') ? i : z;
    cout << ((a < z) ? z - a + 1 : 0) << "\n";
    return 0;
}