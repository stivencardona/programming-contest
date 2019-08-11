#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, values[3] = {0, 0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 25)
            values[0]++;
        else if (a == 50 and values[0])
            values[0]--, values[1]++;
        else if (a == 100 && (values[1] && values[0]))
            values[0]--, values[1]--;
        else if (a == 100 && values[0] >= 3)
            values[0] -= 3;
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}