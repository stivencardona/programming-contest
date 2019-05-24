#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x, MX;
    x = MX = 0;
    for (char c : s)
    {
        x += (c == 'I') ? 1 : -1;
        MX = max(MX, x);
    }
    cout << MX << "\n";
    return 0;
