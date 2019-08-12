#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    map<int, int> memo;
    for (int &i : A)
        cin >> i;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (memo[A[i] ^ x]) ? memo[A[i] ^ x] : 0LL;
        memo[A[i]]++;
    }
    cout << ans << "\n";
    return 0;
}
