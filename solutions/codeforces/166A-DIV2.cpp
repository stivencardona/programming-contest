#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> A(n);
    for (int i = 0; i < n; i++)
    {
        int p, t;
        cin >> p >> t;
        A[i].first = -p, A[i].second = t;
    }
    sort(A.begin(), A.end());
    cout << upper_bound(A.begin(), A.end(), A[k - 1]) - lower_bound(A.begin(), A.end(), A[k - 1]) << "\n";
}