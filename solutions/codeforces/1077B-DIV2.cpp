#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    int ans = 0;
    for (int &i : a)
        cin >> i;
    for (int i = 1; i < n - 1; i++)
    {
        if ((a[i - 1] and a[i + 1]) and !a[i])
        {
            a[i + 1] = 0;
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}