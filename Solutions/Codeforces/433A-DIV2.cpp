#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, no, nt;
    no = nt = 0;
    cin >> n;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 100)
            no++;
        else
            nt++;
    }
    cout << ((no % 2) ? "NO\n" : ((nt % 2) ? ((no > 1) ? "YES\n" : "NO\n") : "YES\n"));
    return 0;
}
