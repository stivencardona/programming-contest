#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
 
int main()
{
    int n, _n;
    cin >> n;
    _n = n;
    vector<long long> memo(n + 1, 0);
    vector<long long> A;
    vector<long long> B;
    while (_n--)
    {
        long long tmp;
        cin >> tmp;
        if ((tmp >= 1 && tmp <= n) && !memo[tmp])
            memo[tmp] = 1;
        else
            A.pb(tmp);
    }
    sort(A.begin(), A.end());
    // for (int i : A)
    //     cout << i << " ";
    // cout << "\n";
    for (int i = 1; i <= n; i++)
        if (!memo[i])
            B.pb(i);
    // for (int i : B)
    //     cout << i << " ";
    // cout << "\n";
    long long ans = 0;
    for (int i = 0; i < B.size(); i++)
        ans += abs(A[i] - B[i]);
    cout << ans << "\n";
    return 0;
}
