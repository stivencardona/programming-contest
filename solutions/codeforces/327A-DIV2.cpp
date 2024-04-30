#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> data(n);
    vector<int> memo(n);
    int cont = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
        cont += (data[i]) ? 1 : 0;
        memo[i] = cont;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i > 0)
                cont = memo[i - 1] + (memo[n - 1] - memo[j]);
            else
                cont = 0;
            for (int t = i; t <= j; t++)
                cont += (data[t]) ? 0 : 1;
            max = (cont > max) ? cont : max;
        }
    }
    cout << max << "\n";
    return 0;
}
