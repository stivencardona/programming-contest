#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> data(n);
    int l, r;
    r = 0;
    l = data.size();
    for (int &i : data)
        cin >> i;
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] > k)
        {
            l = i;
            break;
        }
    }
    for (int i = data.size() - 1; i >= 0; i--)
    {
        if (data[i] > k)
        {
            r = i;
            break;
        }
    }
    if (r < l)
        cout << n << "\n";
    else
        cout << l + (n - r) - 1 << "\n";
    return 0;
}
