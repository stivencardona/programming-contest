#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m, max = 0;
    cin >> n;
    vector<int> pedal(n);
    for (int &i : pedal)
        cin >> i;
    cin >> m;
    vector<int> rear(m);
    for (int &i : rear)
        cin >> i;
    map<int, int> memo;
    for (int i : pedal)
    {
        for (int j : rear)
        {
            if (j % i == 0)
            {
                if (max < j / i)
                    max = j / i;
                memo[j / i]++;
            }
        }
    }
    cout << memo[max] << "\n";
}
