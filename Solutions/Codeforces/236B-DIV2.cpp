#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MD = 1073741824;

vector<long long> DAT(1000001, 1);

void div(int n)
{
    for (int i = 2; i <= n; i++)
        for (int j = i; j <= n; j += i)
            DAT[j]++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    long long ans = 0LL;
    cin >> a >> b >> c;
    int n = a * b * c;
    div(n);
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            for (int k = 1; k <= c; k++)
                ans = ans % MD + DAT[i * j * k] % MD;
    cout << ans << "\n";
    return 0;
}