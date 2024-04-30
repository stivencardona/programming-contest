#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    long long MAX, MN;
    std::vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    MN = v[0];
    MAX = v[n - 1];
    long long im = 0, jm = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == MN)
            im++;
        if (v[n - i - 1] == MAX)
            jm++;
    }
    if (MN == MAX)
        cout << 0 << " " << (n * (n - 1)) / 2 << "\n";
    else
        cout << v[n - 1] - v[0] << " " << im * jm << "\n";
    return 0;
}
