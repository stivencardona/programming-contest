#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string n;
    cin >> n;
    int cont = 0;
    bool state = true;
    for (auto c : n)
    {
        if (n[0] == '4')
        {
            state = false;
            break;
        }
        if (c == '1')
            cont = 0;
        if (c == '4')
            cont++;
        if (cont > 2 or (c != '1' and c != '4'))
        {
            state = false;
            break;
        }
    }
    cout << ((state) ? "YES\n" : "NO\n");
    return 0;
}
