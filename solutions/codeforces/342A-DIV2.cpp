#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, memo[7] = {0, 0, 0, 0, 0, 0, 0};
    cin >> n;
    while (n--)
    {
        int idx;
        cin >> idx;
        memo[--idx]++;
    }
    if (!(memo[6] + memo[4]))
    {
        if ((memo[0] == memo[1] + memo[2] and memo[0] == memo[3] + memo[5]) and memo[1] >= memo[3])
        {
            for (int i = 0; i < memo[3]; i++)
                cout << "1 2 4\n";
            for (int i = memo[3]; i < memo[1]; i++)
                cout << "1 2 6\n";
            for (int i = 0; i < memo[2]; i++)
                cout << "1 3 6\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
