#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int maxn = 100010;
    long long A[maxn], B[maxn];
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        A[i] = B[i] = v;
    }
    sort(B + 1, B + n + 1);
    for (int i = 1; i <= n; i++)
        A[i] += A[i - 1], B[i] += B[i - 1];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r, opt;
        cin >> opt >> l >> r;
        if (opt == 1)
            cout << A[r] - A[l - 1] << "\n";
        else
            cout << B[r] - B[l - 1] << "\n";
    }
    return 0;
}
