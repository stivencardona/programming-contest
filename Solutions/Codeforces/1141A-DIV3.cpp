#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n == 0)
    {
        int curr = m / n;
        int cont = 0;
        while (!(curr % 2))
        {
            curr /= 2;
            cont++;
        }
        while (!(curr % 3))
        {
            curr /= 3;
            cont++;
        }
        if (curr == 1)
        {
            cout << cont << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";

    return 0;
}