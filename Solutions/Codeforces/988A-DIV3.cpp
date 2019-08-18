#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> data;
    for (int i = 1; i <= n; i++)
    {
        int j;
        cin >> j;
        data[j] = i;
    }
    if (data.size() >= k)
    {
        cout << "YES\n";
        int j = 1;
        for (auto i : data)
        {
            if (j <= k)
            {
                cout << i.second << " ";
                j++;
            }
            else
                break;
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    }
 
    return 0;
}
