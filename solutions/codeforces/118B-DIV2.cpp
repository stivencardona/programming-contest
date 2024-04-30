#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    for (int i = -1 * n; i <= n; i++)
    {
        int v = abs(i + n * ((i > 0) ? -1 : 1));
        // cout << abs(i + n * ((i > 0) ? -1 : 1)) << " ";
        for (int j = 0; j < 2 * n - 2 * v; j++)
            cout << " ";
 
        for (int j = -1 * v; j < v; j++)
            cout << abs(j + v * ((j > 0) ? -1 : 1)) << " ";
        cout << abs(v + v * ((v > 0) ? -1 : 1));
        cout << "\n";
    }
    return 0;
}
