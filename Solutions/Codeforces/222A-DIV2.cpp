#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, k, idx = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
        if (a[i] != a[a.size() - 1])
            idx = i + 1;
    cout << ((idx >= k) ? -1 : idx) << "\n";
    return 0;
}
