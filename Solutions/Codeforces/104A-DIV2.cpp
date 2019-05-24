#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int values[16] = {0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 15, 4, 0, 0, 0, 0};
    if (n <= 10)
        cout << 0 << "\n";
    else
        cout << values[n - 10] << "\n";
    return 0;
}