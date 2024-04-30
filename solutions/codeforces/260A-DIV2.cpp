#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, n;
    cin >> a >> b >> n;
    bool state = false;
    for (int i = 0; i < 10; i++)
    {
        int _a = a;
        _a = _a * 10 + i;
        if (_a % b == 0)
        {
            a = _a;
            state = true;
            break;
        }
    }
    if (state)
    {
        cout << a;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
    return 0;
}