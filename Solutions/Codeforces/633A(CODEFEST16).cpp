#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int i = c / a;
    int y = 0;
    int x;
    for (x = 0; x <= i; x++)
    {
        y = (c - a * x) / b;
        if (c - (a * x + b * y) == 0)
        {
            cout << "Yes"
                 << "\n";
            break;
        }
    }
    if (c - (a * x + b * y) != 0)
    {
        cout << "No"
             << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int i = c / a;
    int y = 0;
    int x;
    for (x = 0; x <= i; x++)
    {
        y = (c - a * x) / b;
        if (c - (a * x + b * y) == 0)
        {
            cout << "Yes"
                 << "\n";
            break;
        }
    }
    if (c - (a * x + b * y) != 0)
    {
        cout << "No"
             << "\n";
    }
    return 0;
