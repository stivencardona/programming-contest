#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    int ans = (n + s - 1) / s;
    ans *= k;
    cout << (ans + p - 1) / p << "\n";
    return 0;
}