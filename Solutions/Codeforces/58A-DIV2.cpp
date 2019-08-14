#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s, aux = "hello";
    cin >> s;
    int i = 0;
    for (char c : s)
    {
        if (i == 5)
        {
            cout << "YES\n";
            return 0;
        }
        if (c == aux[i])
            i++;
    }
    cout << ((i == 5) ? "YES\n" : "NO\n");
    return 0;
}
