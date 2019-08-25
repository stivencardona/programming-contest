#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int data[] = {0, 1, 2, 3, 4};
    long long max = 0;
    int g[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> g[i][j];
    do
    {
        int a, b, c, d, e;
        a = data[0];
        b = data[1];
        c = data[2];
        d = data[3];
        e = data[4];
        long long ans = (g[a][b] + g[b][a] + g[c][d] + g[d][c]) + (g[b][c] + g[c][b] + g[d][e] + g[e][d]) + (g[c][d] + g[d][c]) + (g[d][e] + g[e][d]);
        max = (ans > max) ? ans : max;
    } while (next_permutation(data, data + 5));
    cout << max << "\n";
    return 0;
}
