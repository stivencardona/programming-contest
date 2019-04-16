#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cin >> n;
    bool state = true;
    string tmp;
    cin >> tmp;
    for (char c : tmp)
    {
        if (c != '.')
            a[int(c) - 48] += 1;
    }
    cin >> tmp;
    for (char c : tmp)
    {
        if (c != '.')
            a[int(c) - 48] += 1;
    }
    cin >> tmp;
    for (char c : tmp)
    {
        if (c != '.')
            a[int(c) - 48] += 1;
    }
    cin >> tmp;
    for (char c : tmp)
    {
        if (c != '.')
            a[int(c) - 48] += 1;
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 2 * n)
        {
            state = false;
        }
    }
    if (state)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
    return 0;
}