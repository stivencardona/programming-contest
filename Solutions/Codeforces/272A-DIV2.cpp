#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, _n;
    cin >> n;
    _n = n;
    int sum = 0;
    while (_n--)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    int ans = 0;
    for (int i = 1; i < 6; i++)
        ans += ((sum + i) % (n + 1) != 1) ? 1 : 0;
    cout << ans << "\n";
    return 0;
}
