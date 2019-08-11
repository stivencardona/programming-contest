#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, contl, contr, odd;
    contl = contr = odd = 0;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        contr += (x & 1);
        contl += (y & 1);
        odd += ((x & 1) && (y & 1));
    }
    cout << ((((contl + contr) & 1) || ((odd == contl && odd == contr) && odd & 1)) ? -1 : (contl & 1 && contr & 1) ? 1 : 0) << "\n";
    return 0;
}