#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, v;
    cin >> n >> v;
    n--;
    if (n <= v)
        cout << n << "\n";
    else
    {
        n -= v - 1;
        cout << v + n * (n + 1) / 2 - 1 << "\n";
    }
    return 0;
}
