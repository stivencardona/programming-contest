#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, a, b, c, MX = 0;
    cin >> n >> a >> b >> c;
    for (int i = 0; i <= n / a; i++)
    {
        for (int j = 0; j <= n / b; j++)
        {
            int t = (n - i * a - j * b) / c;
            if (i * a + j * b + t * c == n and i + j + t > MX and i >= 0 and j >= 0 and t >= 0)
            {
                MX = i + j + t;
            }
        }
    }
    cout << MX << "\n";
    return 0;
}