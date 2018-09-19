#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, d = 1;
    int acum = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        acum += t;
        if (m > 0)
        {
            d = i;
            if (acum > 8)
            {
                m -= 8;
                acum -= 8;
            }
            else
            {
                m -= acum;
                acum = 0;
            }
        }
    }
    if (m > 0)
        cout << -1 << "\n";
    else
        cout << d << "\n";
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, d = 1;
    int acum = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        acum += t;
        if (m > 0)
        {
            d = i;
            if (acum > 8)
            {
                m -= 8;
                acum -= 8;
            }
            else
            {
                m -= acum;
                acum = 0;
            }
        }
    }
    if (m > 0)
        cout << -1 << "\n";
    else
        cout << d << "\n";
    return 0;
