#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t, a, b, k;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> k;
        cout << (a - b) * (k / 2) + (k % 2) * a << "\n";
    }
    return 0;
}