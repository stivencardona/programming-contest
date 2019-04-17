#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    double r, p1, p2, A, B;
    int MX = 0;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        MX = max(MX, tmp);
        r = MX;
    }
    cin >> n;
    MX = 0;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        MX = max(MX, tmp);
        p1 = MX;
    }
    cin >> n;
    MX = 1000000;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        MX = min(MX, tmp);
        p2 = MX;
    }
    cin >> A >> B;
    double ans = sqrt((r * r) / (((A * p2) / (B * p1)) + 1));
    cout << setprecision(10) << fixed << ans << "\n";
    return 0;
}