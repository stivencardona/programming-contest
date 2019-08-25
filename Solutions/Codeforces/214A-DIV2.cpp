#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for (int a = 0; a <= max(n, m); a++)
    {
        for (int b = 0; b <= max(n, m); b++)
        {
            if (a * a + b == n and a + b * b == m)
                ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
