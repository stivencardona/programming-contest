#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    long long d, s;
    cin >> n;
    vector<pair<long long, long long>> A(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> A[i].first;
        A[i].second = i;
    }
    sort(A.begin(), A.end());
    d = A[0].second;
    s = A[1].second;
    for (int i = 0; i + 3 < 2 * n; i += 2)
    {
        d += abs(A[i].second - A[i + 2].second);
        s += abs(A[i + 1].second - A[i + 3].second);
    }
    cout << d + s << "\n";
    return 0;
}