#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a, b;
    cin >> a >> b;
    int ok = 1;
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
            ok &= a[i] == b[i];
    }
    else
        ok = 0;
    if (ok)
    {
        cout << a << "\n";
        return 0;
    }
    cout << 1 << "\n";
    return 0;
}