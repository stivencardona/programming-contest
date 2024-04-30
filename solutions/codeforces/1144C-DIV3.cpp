#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ok = 1;
    cin >> n;
    set<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (a.find(tmp) == a.end())
            a.insert(tmp);
        else if (b.find(tmp) == b.end())
            b.insert(tmp);
        else
            ok = 0;
    }
    if (ok)
    {
        cout << "YES\n";
        cout << a.size() << "\n";
        for (auto i = a.begin(); i != a.end(); i++)
            cout << *i << " ";
        cout << "\n";
        cout << b.size() << "\n";
        for (auto i = b.rbegin()--; i != b.rend(); i++)
            cout << *i << " ";
        cout << "\n";
    }
    else
        cout << "NO\n";

    return 0;
}