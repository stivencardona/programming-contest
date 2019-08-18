#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int y, k, n;
    cin >> y >> k >> n;
    int value = (y + k - 1) / k;
    bool state = false;
    for (int i = (value > 0) ? k * value : k; i <= n; i += k)
    {
        if (i - y > 0)
        {
            cout << i - y << " ";
            state = true;
        }
    }
    cout << ((!state) ? "-1\n" : "\n");
    return 0;
}
