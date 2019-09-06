#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    char MAT[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> MAT[i][j];
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (MAT[i][j] == 'X')
            {
                if ((MAT[i + 1][j + 1] == 'X' && MAT[i - 1][j - 1] == MAT[i + 1][j + 1]) && (MAT[i - 1][j - 1] == MAT[i - 1][j + 1] && MAT[i + 1][j - 1] == MAT[i + 1][j + 1]))
                    ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
