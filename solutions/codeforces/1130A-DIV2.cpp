#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, nn, np;
    cin >> n;
    nn = np = 0;
    int _n = n;
    while (_n--)
    {
        int tmp;
        cin >> tmp;
        if (tmp > 0)
            np++;
        if (tmp < 0)
            nn++;
    }
    cout << ((nn >= (n + 1) / 2) ? "-1\n" : (np >= (n + 1) / 2) ? "1\n" : "0\n");
    return 0;
}