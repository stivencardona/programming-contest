#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    int mnacc, mxacc, mnwrg, tmp;
    mnacc = mnwrg = 1000000;
    mxacc = 0;
    while (n--)
    {
        cin >> tmp;
        mnacc = (tmp < mnacc) ? tmp : mnacc;
        mxacc = (tmp > mxacc) ? tmp : mxacc;
    }
    while (m--)
    {
        cin >> tmp;
        mnwrg = (tmp < mnwrg) ? tmp : mnwrg;
    }
    for (int i = mxacc; i < mnwrg; i++)
    {
        if (mnacc <= (i >> 1))
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}